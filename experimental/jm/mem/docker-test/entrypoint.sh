#!/usr/bin/env bash

cd part2
cp -r gamma original_gamma
cd gamma || exit 1

mkdir debug && cd debug && cmake -d cmake -D CMAKE_BUILD_TYPE=Debug .. > /dev/null && make > /dev/null && make doc > /dev/null || exit 1

cd /part2

./run_tests.sh
