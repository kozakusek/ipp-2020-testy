#!/bin/bash

VALGRIND="valgrind "

function run_test(){
    test_str="$1"
    max_allocs=$2
    max_mem=$3
    should_fail=$4

    cd /part2/
    rm -rf gamma
    cp -r original_gamma gamma
    cd gamma/src

    sed -i 's/main/original_main/g' gamma_main.c

    for f in *.c; do 
        printf "#include \"remalloc.h\"\n\n" > tempfile.c
        cat $f >> tempfile.c
        mv tempfile.c $f
        sed -i 's/free(/myfree(/g' $f
        sed -i 's/malloc(/mymalloc(/g' $f
        sed -i 's/calloc(/mycalloc(/g' $f
        sed -i 's/realloc(/myrealloc(/g' $f
    done

    cp /part2/tests/remalloc.h remalloc.h
    cp /part2/tests/remalloc.c remalloc.c

    cat /part2/tests/test_max_n_allocs.c >> gamma_main.c
    sed -i 's/MAX_ALLOCS/'"$max_allocs"'/g' remalloc.c
    sed -i 's/MAX_MEMORY_ALLOCATED/'"$max_mem"'/g' remalloc.c
    
    cd ..
    sed -i 's/(SOURCE_FILES/(SOURCE_FILES src\/remalloc.h src\/remalloc.c/g' CMakeLists.txt

    mkdir -p debug && cd debug
    cmake -d cmake -D CMAKE_BUILD_TYPE=Debug .. > /dev/null && make >/dev/null 2>/dev/null
    #cmake -d cmake -D CMAKE_BUILD_TYPE=Debug .. > /dev/null && make

    echo "$test_str"
    echo

    if [ "$should_fail" -eq "0" ] 
    then
        printf "$test_str" | $VALGRIND ./gamma > /dev/null && echo "OK" || echo "ERROR"
    else
        printf "$test_str" | $VALGRIND ./gamma > /dev/null  && echo "ERROR" || echo "OK"
    fi
    echo
}

rm -rf test_gamma
cp -r original_gamma test_gamma
cd test_gamma/src

sed -i 's/main/original_main/g' gamma_main.c
cp gamma_main.c original_gamma_main.c

printf "\nTesty wywalajace malloca, jezeli nie ma outputu to znaczy ze wszystko dobrze\n"

printf "\nTesty na max 7 alokacji\n\n"

run_test "B 1 1 1 1\np\n" 7 100000000 0
run_test "B 1 0 1 1\nB 0 1 1 1\nB 1 1 0 1\nB 1 1 1 0\n" 7 100000000 0
run_test "B 1 1 1 1\np\n" 7 100000000 0
run_test "B 5 5 5 1\np\n\np\n\np\n\np\n\np\n\np\n\np\n\np\n\np\np\np\np\np\np\np\np\np\n" 5 100000000 1
