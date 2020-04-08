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
uuid: 287205909
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 10, 6, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board398482223 = gamma_board(board);
assert( board398482223 != NULL );
assert( strcmp(board398482223, 
".....1.....\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board398482223);
board398482223 = NULL;
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_free_fields(board, 3) == 107 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 89 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 82 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_golden_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board303715169 = gamma_board(board);
assert( board303715169 != NULL );
assert( strcmp(board303715169, 
"33..414..6.\n"
".3.2...21..\n"
"6.453..1432\n"
".1..2.2262.\n"
"...54..2..5\n"
"3.233...3.4\n"
"66....3....\n"
"4143.5..66.\n"
"..42...32..\n"
"1....23....\n") == 0);
free(board303715169);
board303715169 = NULL;
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );


char* board615949094 = gamma_board(board);
assert( board615949094 != NULL );
assert( strcmp(board615949094, 
"33..414.56.\n"
".3.2...21..\n"
"6.453..1432\n"
".1..2.2262.\n"
"...54.22..5\n"
"3.233..43.4\n"
"66....3....\n"
"4143.5..66.\n"
"..42...32..\n"
"1..1.23....\n") == 0);
free(board615949094);
board615949094 = NULL;
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );


char* board318312092 = gamma_board(board);
assert( board318312092 != NULL );
assert( strcmp(board318312092, 
"33.5414.56.\n"
"5342.6.21..\n"
"6.4531.1432\n"
"51..2.2262.\n"
"...54.22..5\n"
"3.233..43.4\n"
"66.1..3.1..\n"
"4143.55.665\n"
"..42633326.\n"
"1..1.232...\n") == 0);
free(board318312092);
board318312092 = NULL;
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board784638512 = gamma_board(board);
assert( board784638512 != NULL );
assert( strcmp(board784638512, 
"33.5414.56.\n"
"534256.21.2\n"
"6.4511.1432\n"
"51..2.2262.\n"
"...54422..5\n"
"3.233..43.4\n"
"661154311..\n"
"41431554665\n"
"3.42633326.\n"
"11.1.232...\n") == 0);
free(board784638512);
board784638512 = NULL;
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );


char* board602044665 = gamma_board(board);
assert( board602044665 != NULL );
assert( strcmp(board602044665, 
"33.5414656.\n"
"534256.21.2\n"
"6.4511.1432\n"
"51..2.2262.\n"
"...54422..5\n"
"3.233..43.4\n"
"661154311..\n"
"41431554665\n"
"3.42633326.\n"
"11.1.232...\n") == 0);
free(board602044665);
board602044665 = NULL;
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );


char* board629791957 = gamma_board(board);
assert( board629791957 != NULL );
assert( strcmp(board629791957, 
"33.5414656.\n"
"534256621.2\n"
"6.451111432\n"
"516.2.2262.\n"
".1.54422..5\n"
"3.233..43.4\n"
"6611543116.\n"
"41431534665\n"
"3.42633326.\n"
"16.16232...\n") == 0);
free(board629791957);
board629791957 = NULL;
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );


char* board785342510 = gamma_board(board);
assert( board785342510 != NULL );
assert( strcmp(board785342510, 
"33.5414656.\n"
"534256621.2\n"
"6.451111432\n"
"51632.2262.\n"
".1.54422..5\n"
"3.233..43.4\n"
"6611543116.\n"
"41431534665\n"
"3.42633326.\n"
"16.16232...\n") == 0);
free(board785342510);
board785342510 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );


char* board813159128 = gamma_board(board);
assert( board813159128 != NULL );
assert( strcmp(board813159128, 
"33.5414656.\n"
"534256621.2\n"
"6.451111432\n"
"51632.2262.\n"
".1.54422..5\n"
"3.233..43.4\n"
"6611543116.\n"
"41431534665\n"
"3.42633326.\n"
"16.16232...\n") == 0);
free(board813159128);
board813159128 = NULL;
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
