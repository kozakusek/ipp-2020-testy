#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 818023910
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 14, 14, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );


char* board874237886 = gamma_board(board);
assert( board874237886 != NULL );
assert( strcmp(board874237886, 
"..........\n"
"..........\n"
"..........\n"
".3........\n"
"..........\n"
"......3...\n"
".........4\n"
"..2.......\n"
"......52..\n"
"..........\n"
"......1...\n"
"5....1....\n"
"..........\n"
"....6.4...\n") == 0);
free(board874237886);
board874237886 = NULL;
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_golden_move(board, 7, 6, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board446561664 = gamma_board(board);
assert( board446561664 != NULL );
assert( strcmp(board446561664, 
"..........\n"
"..........\n"
"..........\n"
".3........\n"
"..........\n"
"......3...\n"
".........4\n"
"..2.......\n"
".....752..\n"
"..........\n"
"......1...\n"
"5....1....\n"
"..........\n"
"....6.4...\n") == 0);
free(board446561664);
board446561664 = NULL;
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_free_fields(board, 10) == 128 );
assert( gamma_move(board, 11, 2, 11) == 1 );
assert( gamma_move(board, 12, 9, 8) == 1 );
assert( gamma_move(board, 13, 7, 6) == 1 );
assert( gamma_golden_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 14, 1, 2) == 1 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_free_fields(board, 14) == 124 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_free_fields(board, 8) == 119 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 9, 8, 13) == 1 );
assert( gamma_golden_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 11, 3, 5) == 1 );
assert( gamma_move(board, 12, 4, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 3, 7) == 1 );
assert( gamma_move(board, 14, 8, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );


char* board555174656 = gamma_board(board);
assert( board555174656 != NULL );
assert( strcmp(board555174656, 
"........9.\n"
"..........\n"
"..11.......\n"
".3........\n"
".....3....\n"
"......3.612\n"
".9813.....4\n"
"..2....13..\n"
"...11775214.\n"
".5.3......\n"
"......1...\n"
"514...1....\n"
"....12.....\n"
"....6.4...\n") == 0);
free(board555174656);
board555174656 = NULL;
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 111 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 110 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_golden_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );


char* board624422138 = gamma_board(board);
assert( board624422138 != NULL );
assert( strcmp(board624422138, 
"........9.\n"
"..........\n"
"..11.......\n"
".3........\n"
".....3....\n"
"......3.612\n"
".9813.....4\n"
"..2....13..\n"
"...11775214.\n"
".5.3......\n"
"....8.1...\n"
"514...1....\n"
"....125....\n"
"...76.4...\n") == 0);
free(board624422138);
board624422138 = NULL;
assert( gamma_move(board, 11, 11, 6) == 0 );
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_move(board, 12, 3, 9) == 1 );
assert( gamma_move(board, 14, 5, 4) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_free_fields(board, 5) == 101 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_free_fields(board, 9) == 97 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 10, 3, 13) == 1 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 12, 2, 9) == 1 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 13, 7, 7) == 1 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board447470832 = gamma_board(board);
assert( board447470832 != NULL );
assert( strcmp(board447470832, 
"...10....9.\n"
"..........\n"
"..11....3..\n"
".3..2.....\n"
"..1212.34...\n"
"......3.612\n"
"79813...1334\n"
"..2..1111137.\n"
"...11775214.\n"
".5.3.14....\n"
"....8.1..8\n"
"514...1....\n"
"...12125....\n"
"6..76.4...\n") == 0);
free(board447470832);
board447470832 = NULL;
assert( gamma_move(board, 14, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_free_fields(board, 9) == 88 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 13, 3, 8) == 1 );
assert( gamma_move(board, 14, 2, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );


char* board739425337 = gamma_board(board);
assert( board739425337 != NULL );
assert( strcmp(board739425337, 
"...10....9.\n"
"..........\n"
"..11....3..\n"
".3.92.....\n"
"..1212.34...\n"
".1.13..37612\n"
"79813..21334\n"
"..2..1111137.\n"
"...11775214.\n"
".5.3.14.5..\n"
".4..8.1..8\n"
"514...1....\n"
"...121251...\n"
"6..7624...\n") == 0);
free(board739425337);
board739425337 = NULL;
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );


char* board186891431 = gamma_board(board);
assert( board186891431 != NULL );
assert( strcmp(board186891431, 
"...10.5..9.\n"
"..........\n"
"..11....3..\n"
".3.92.....\n"
"..1212.34...\n"
".1.13..37612\n"
"79813..21334\n"
"..2..1111137.\n"
"...11775214.\n"
".5.3.14.5..\n"
".4..8.1..8\n"
"514...1....\n"
"...121251...\n"
"6..7624...\n") == 0);
free(board186891431);
board186891431 = NULL;
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_golden_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_free_fields(board, 10) == 83 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_move(board, 11, 3, 12) == 1 );
assert( gamma_move(board, 12, 2, 8) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 3) == 1 );
assert( gamma_move(board, 14, 13, 7) == 0 );
assert( gamma_move(board, 14, 7, 1) == 1 );
assert( gamma_busy_fields(board, 14) == 4 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_free_fields(board, 8) == 73 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 12, 11, 3) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 1) == 0 );


char* board930733660 = gamma_board(board);
assert( board930733660 != NULL );
assert( strcmp(board930733660, 
"...10.56.95\n"
"...11......\n"
".111....3..\n"
".33921....\n"
".51212.34...\n"
".11213..37612\n"
"79813..21334\n"
"..2..1111137.\n"
"...11775214.\n"
".57351445..\n"
"3413.8.111.8\n"
"514..121....\n"
".3.12125114.6\n"
"6..7624.5.\n") == 0);
free(board930733660);
board930733660 = NULL;
assert( gamma_move(board, 14, 12, 2) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_free_fields(board, 10) == 61 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 12, 5, 9) == 0 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_free_fields(board, 13) == 61 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 14, 4, 8) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 60 );


char* board353440794 = gamma_board(board);
assert( board353440794 != NULL );
assert( strcmp(board353440794, 
"...10.56.95\n"
"...11......\n"
".111....3..\n"
".33921....\n"
".51212634...\n"
".1121314.37612\n"
"79813.521334\n"
"..2..1111137.\n"
"...11775214.\n"
".57351445.4\n"
"3413.8.111.8\n"
"514..121....\n"
".3.12125114.6\n"
"6..7624.5.\n") == 0);
free(board353440794);
board353440794 = NULL;
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );


char* board645037926 = gamma_board(board);
assert( board645037926 != NULL );
assert( strcmp(board645037926, 
"...10.56.95\n"
"5..11......\n"
".111....3..\n"
".33921....\n"
".51212634...\n"
".1121314.37612\n"
"79813.521334\n"
"..2..1111137.\n"
"..511775214.\n"
".57351445.4\n"
"3413.8.111.8\n"
"514..121....\n"
".3.12125114.6\n"
"6..7624.5.\n") == 0);
free(board645037926);
board645037926 = NULL;
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 9, 11) == 1 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_move(board, 8, 9, 12) == 1 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 10, 8, 13) == 0 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 12, 11, 8) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 10, 0) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );


char* board350108222 = gamma_board(board);
assert( board350108222 != NULL );
assert( strcmp(board350108222, 
"...10.56895\n"
"5..11.....8\n"
".111....3.7\n"
".339211...\n"
".51212634...\n"
".1121314.37612\n"
"79813.521334\n"
"..2..1111137.\n"
"..511775214.\n"
".57351445.4\n"
"3413.8.111.8\n"
"514..121....\n"
".3712125114.6\n"
"6.47624.5.\n") == 0);
free(board350108222);
board350108222 = NULL;
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_move(board, 12, 5, 11) == 1 );
assert( gamma_move(board, 12, 9, 2) == 1 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 14, 11, 8) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 7, 12) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 8, 10) == 1 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_move(board, 11, 2, 12) == 1 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 13, 13, 2) == 0 );
assert( gamma_move(board, 13, 7, 9) == 1 );
assert( gamma_move(board, 14, 8, 8) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );


char* board846188065 = gamma_board(board);
assert( board846188065 != NULL );
assert( strcmp(board846188065, 
"...10.56895\n"
"5.1111...7.8\n"
".111..12.3.7\n"
".339211.10.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521334\n"
"..2..11111371\n"
"..511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"514..12139.12\n"
".3712125114.6\n"
"61147624.5.\n") == 0);
free(board846188065);
board846188065 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );


char* board663843421 = gamma_board(board);
assert( board663843421 != NULL );
assert( strcmp(board663843421, 
"...10.56895\n"
"5.11114..7.8\n"
".111..12.3.7\n"
".339211.10.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521334\n"
"..2..11111371\n"
"..511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"514..12139.12\n"
".3712125114.6\n"
"61147624.5.\n") == 0);
free(board663843421);
board663843421 = NULL;
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 10, 1, 12) == 1 );
assert( gamma_free_fields(board, 10) == 35 );
assert( gamma_move(board, 11, 10, 9) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 12, 11, 6) == 0 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_free_fields(board, 12) == 35 );
assert( gamma_move(board, 14, 4, 0) == 0 );
assert( gamma_move(board, 14, 1, 12) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );


char* board505414724 = gamma_board(board);
assert( board505414724 != NULL );
assert( strcmp(board505414724, 
"...10.56895\n"
"51011114..7.8\n"
".111..12.3.7\n"
".339211.10.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521334\n"
"..2..11111371\n"
"..511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"514..12139.12\n"
"103712125114.6\n"
"61147624.5.\n") == 0);
free(board505414724);
board505414724 = NULL;
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 7, 7) == 0 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 13, 10, 9) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_free_fields(board, 13) == 33 );
assert( gamma_move(board, 14, 13, 1) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_golden_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board898209734 = gamma_board(board);
assert( board898209734 != NULL );
assert( strcmp(board898209734, 
"...10.56895\n"
"51011114..7.8\n"
".111.412.3.7\n"
".339211.10.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521334\n"
"..26.11111371\n"
".6511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"514..12139.12\n"
"1037121251246\n"
"61147624.55\n") == 0);
free(board898209734);
board898209734 = NULL;
assert( gamma_move(board, 12, 8, 11) == 1 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 13, 7, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 12, 5) == 0 );
assert( gamma_move(board, 14, 7, 3) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 4, 13) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 3, 11) == 1 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 10, 10, 9) == 0 );


char* board203362227 = gamma_board(board);
assert( board203362227 != NULL );
assert( strcmp(board203362227, 
"...10656895\n"
"51011114..7.8\n"
"51117412.3127\n"
".339211.10.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521334\n"
"..26.11111371\n"
".6511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"514..12139.12\n"
"1037121251246\n"
"61147624.55\n") == 0);
free(board203362227);
board203362227 = NULL;
assert( gamma_move(board, 11, 11, 6) == 0 );
assert( gamma_golden_move(board, 11, 11, 4) == 0 );
assert( gamma_move(board, 12, 2, 2) == 1 );


char* board813396803 = gamma_board(board);
assert( board813396803 != NULL );
assert( strcmp(board813396803, 
"...10656895\n"
"51011114..7.8\n"
"51117412.3127\n"
".339211.10.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521334\n"
"..26.11111371\n"
".6511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"51412.12139.12\n"
"1037121251246\n"
"61147624.55\n") == 0);
free(board813396803);
board813396803 = NULL;
assert( gamma_move(board, 13, 2, 6) == 0 );
assert( gamma_move(board, 14, 5, 12) == 1 );
assert( gamma_move(board, 14, 7, 10) == 1 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_free_fields(board, 14) == 23 );
assert( gamma_golden_move(board, 14, 7, 7) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_free_fields(board, 12) == 23 );
assert( gamma_move(board, 13, 8, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 14, 6, 0) == 0 );
assert( gamma_move(board, 14, 0, 6) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board858795393 = gamma_board(board);
assert( board858795393 != NULL );
assert( strcmp(board858795393, 
"...10656895\n"
"5101111414.7.8\n"
"51117412.3127\n"
".3392111410.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521434\n"
"14.26.11111371\n"
".6511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"51412.12139.12\n"
"1037121251246\n"
"61147624.55\n") == 0);
free(board858795393);
board858795393 = NULL;
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );


char* board550698592 = gamma_board(board);
assert( board550698592 != NULL );
assert( strcmp(board550698592, 
"...10656895\n"
"5101111414.7.8\n"
"51117412.3127\n"
".3392111410.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521434\n"
"14.26.11111371\n"
".6511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"51412.12139.12\n"
"1037121251246\n"
"61147624.55\n") == 0);
free(board550698592);
board550698592 = NULL;
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_free_fields(board, 10) == 22 );
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 8) == 0 );
assert( gamma_move(board, 13, 7, 13) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_golden_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 13, 2) == 0 );


char* board581005676 = gamma_board(board);
assert( board581005676 != NULL );
assert( strcmp(board581005676, 
"...10656895\n"
"5101111414.7.8\n"
"51117412.3127\n"
".3392111410.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521434\n"
"14.26.11111371\n"
".6511775214.\n"
"957351445.4\n"
"341378.111.8\n"
"51412.12139.12\n"
"103712951246\n"
"61147624.55\n") == 0);
free(board581005676);
board581005676 = NULL;
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_busy_fields(board, 12) == 11 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_golden_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 14, 2, 5) == 0 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_golden_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 9, 7) == 0 );


char* board712041628 = gamma_board(board);
assert( board712041628 != NULL );
assert( strcmp(board712041628, 
"...10656895\n"
"5101111414.7.8\n"
"51117412.3127\n"
".3392111410.\n"
".5121263413812\n"
".1121314.37612\n"
"79810.521434\n"
"14.26.11111371\n"
".6511775214.\n"
"9573131445.4\n"
"341378.111.8\n"
"51412.12139.12\n"
"103712951246\n"
"61147624.55\n") == 0);
free(board712041628);
board712041628 = NULL;
assert( gamma_move(board, 12, 10, 9) == 0 );
assert( gamma_busy_fields(board, 12) == 11 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 13, 9, 13) == 0 );


gamma_delete(board);

    return 0;
}
