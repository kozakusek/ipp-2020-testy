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
uuid: 829068155
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 11, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 13) == 1 );


char* board737109078 = gamma_board(board);
assert( board737109078 != NULL );
assert( strcmp(board737109078, 
"........\n"
"......4.\n"
"........\n"
".2......\n"
"........\n"
"........\n"
"........\n"
"........\n"
"......1.\n"
"........\n"
"........\n"
"........\n"
"....34..\n"
"........\n"
"........\n") == 0);
free(board737109078);
board737109078 = NULL;
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 7, 14) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_free_fields(board, 8) == 113 );
assert( gamma_golden_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 10, 6, 8) == 1 );
assert( gamma_move(board, 11, 5, 11) == 1 );
assert( gamma_move(board, 11, 1, 13) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );


char* board771329723 = gamma_board(board);
assert( board771329723 != NULL );
assert( strcmp(board771329723, 
".......6\n"
".11....4.\n"
"......3.\n"
".2...11..\n"
"........\n"
"........\n"
"..7..610.\n"
"......10.\n"
"...9..1.\n"
".....6..\n"
"........\n"
".......4\n"
"...7345.\n"
".8......\n"
"......2.\n") == 0);
free(board771329723);
board771329723 = NULL;
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 7, 12) == 1 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_free_fields(board, 7) == 94 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_free_fields(board, 8) == 92 );
assert( gamma_free_fields(board, 9) == 92 );
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 10, 13, 7) == 0 );
assert( gamma_move(board, 11, 13, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_golden_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 6, 6) == 0 );
assert( gamma_move(board, 11, 0, 9) == 1 );
assert( gamma_move(board, 11, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 9, 2, 11) == 1 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board842860665 = gamma_board(board);
assert( board842860665 != NULL );
assert( strcmp(board842860665, 
"...7...6\n"
".11.1.44.\n"
"...11.311\n"
"929..113.\n"
"11.......\n"
"117....94\n"
".47.4610.\n"
"211876910.\n"
"882911.17\n"
"6..2167.\n"
"10.1.....\n"
"...8...4\n"
".2.7145.\n"
"78......\n"
"...11..2.\n") == 0);
free(board842860665);
board842860665 = NULL;
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 13, 2) == 0 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_free_fields(board, 11) == 59 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_free_fields(board, 10) == 53 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );


char* board666792401 = gamma_board(board);
assert( board666792401 != NULL );
assert( strcmp(board666792401, 
"...7.1.6\n"
".11.1.44.\n"
"...11.311\n"
"929..113.\n"
"11....5..\n"
"117...194\n"
"1047.4610.\n"
"2118759102\n"
"882911.17\n"
"66.21676\n"
"1091.10...\n"
"2398..24\n"
".2371452\n"
"78....6.\n"
"..811..2.\n") == 0);
free(board666792401);
board666792401 = NULL;
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_golden_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 7, 11) == 1 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 6, 13) == 0 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 11, 14, 6) == 0 );
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_golden_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board547512411 = gamma_board(board);
assert( board547512411 != NULL );
assert( strcmp(board547512411, 
"...7.1.6\n"
".1141.44.\n"
"42.117311\n"
"929.711310\n"
"11....5..\n"
"117..3194\n"
"1047.4610.\n"
"2118759102\n"
"8829111117\n"
"66.21676\n"
"1091.10...\n"
"239810.24\n"
".2371452\n"
"78...96.\n"
"..86.32.\n") == 0);
free(board547512411);
board547512411 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_golden_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );


char* board151024010 = gamma_board(board);
assert( board151024010 != NULL );
assert( strcmp(board151024010, 
"...7.1.6\n"
".1141.44.\n"
"423117311\n"
"929.711310\n"
"11....5..\n"
"117..3194\n"
"1047.46106\n"
"2118759102\n"
"8829111117\n"
"66.21676\n"
"1091.10...\n"
"239810.24\n"
".2371452\n"
"786..96.\n"
".98611311.\n") == 0);
free(board151024010);
board151024010 = NULL;
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 4, 14) == 1 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_free_fields(board, 10) == 29 );
assert( gamma_golden_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 11, 14, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 0, 14) == 1 );
assert( gamma_move(board, 11, 14, 2) == 0 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );


char* board619063831 = gamma_board(board);
assert( board619063831 != NULL );
assert( strcmp(board619063831, 
"10..781.6\n"
"61141.44.\n"
"423117311\n"
"929.711310\n"
"11....5..\n"
"117..3194\n"
"1047.46106\n"
"2118759102\n"
"8829111117\n"
"66121676\n"
"1091.104..\n"
"239810.24\n"
".2371452\n"
"786..96.\n"
"298611311.\n") == 0);
free(board619063831);
board619063831 = NULL;
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );


char* board944420097 = gamma_board(board);
assert( board944420097 != NULL );
assert( strcmp(board944420097, 
"10..781.6\n"
"61141.44.\n"
"423117311\n"
"929.711310\n"
"11...15..\n"
"117..3194\n"
"1047.46106\n"
"2118759102\n"
"8829111117\n"
"66121676\n"
"1091.104..\n"
"239810.24\n"
".2371452\n"
"786..96.\n"
"298611311.\n") == 0);
free(board944420097);
board944420097 = NULL;
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 13) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );


char* board998869970 = gamma_board(board);
assert( board998869970 != NULL );
assert( strcmp(board998869970, 
"10..781.6\n"
"61141.446\n"
"423117311\n"
"929.711310\n"
"11...15..\n"
"117..3194\n"
"1047.46106\n"
"2118759102\n"
"8829111117\n"
"66121676\n"
"1091.104.4\n"
"239810.24\n"
".2371452\n"
"786..96.\n"
"298611311.\n") == 0);
free(board998869970);
board998869970 = NULL;
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 10, 14, 6) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );


char* board981853445 = gamma_board(board);
assert( board981853445 != NULL );
assert( strcmp(board981853445, 
"10..781.6\n"
"61141.446\n"
"423117311\n"
"929.711310\n"
"11...15..\n"
"117..3194\n"
"1047.46106\n"
"2118759102\n"
"8829111117\n"
"66121676\n"
"10918104.4\n"
"239810.24\n"
"42371452\n"
"786..96.\n"
"298611311.\n") == 0);
free(board981853445);
board981853445 = NULL;
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );


gamma_delete(board);

    return 0;
}
