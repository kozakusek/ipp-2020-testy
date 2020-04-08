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
uuid: 507857335
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 15, 10, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_free_fields(board, 4) == 159 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_free_fields(board, 7) == 154 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_golden_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 7, 13) == 0 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_free_fields(board, 9) == 131 );
assert( gamma_move(board, 10, 12, 9) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );


char* board598639902 = gamma_board(board);
assert( board598639902 != NULL );
assert( strcmp(board598639902, 
"...........\n"
".......7...\n"
"...1.......\n"
"861..2..7..\n"
"..9..4.3.2.\n"
"...55...8..\n"
".....5.....\n"
".1.........\n"
"6.5.8.1....\n"
"6..72..9..7\n"
"7.......4.6\n"
"........3..\n"
".4.8...7.31\n"
"...9.9..6410\n"
"..10....10...\n") == 0);
free(board598639902);
board598639902 = NULL;
assert( gamma_move(board, 10, 5, 7) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );


char* board594613041 = gamma_board(board);
assert( board594613041 != NULL );
assert( strcmp(board594613041, 
"...........\n"
".......7...\n"
"...1.......\n"
"861..2..7..\n"
"..9..4.3.2.\n"
"...55...8..\n"
".....5.....\n"
".1...10.....\n"
"6.5.8.1....\n"
"6..72..9..7\n"
"7......34.6\n"
"........3..\n"
".4.8...7.31\n"
"...9.9..6410\n"
"..10....10...\n") == 0);
free(board594613041);
board594613041 = NULL;
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 5, 14) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 10, 6, 8) == 1 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 114 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_golden_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_free_fields(board, 2) == 105 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 10, 13) == 1 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_free_fields(board, 1) == 99 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_free_fields(board, 5) == 96 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 11, 8) == 0 );


char* board455317618 = gamma_board(board);
assert( board455317618 != NULL );
assert( strcmp(board455317618, 
".....8.....\n"
".57.15.7..9\n"
"...1....2..\n"
"861..2..7.2\n"
"..9.44.3.21\n"
"2..55...8..\n"
".5...510....\n"
".189610...1.\n"
"6.588.1....\n"
"6..72..9.97\n"
"7..4...34.6\n"
"2.......3..\n"
".418.9.71031\n"
"4..9.9..6410\n"
"..10....104..\n") == 0);
free(board455317618);
board455317618 = NULL;
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_free_fields(board, 8) == 88 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 2, 9) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 9, 13) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 9, 6, 12) == 1 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 10, 8, 10) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_golden_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_free_fields(board, 8) == 76 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 9, 10, 13) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 7, 13) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );


char* board101293616 = gamma_board(board);
assert( board101293616 != NULL );
assert( strcmp(board101293616, 
".....85....\n"
".57.15.7.69\n"
"2..1..9221.\n"
"8616.2..752\n"
"3.9644431021\n"
"2.1055...8..\n"
"105...510..1.\n"
".189610..11.\n"
"6.588.1..2.\n"
"6..72.109.97\n"
"76541..3446\n"
"2....5..3.7\n"
".118.9.71031\n"
"4.49.9..6410\n"
"6.10..10.104..\n") == 0);
free(board101293616);
board101293616 = NULL;
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 10, 8, 14) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_free_fields(board, 10) == 64 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 2, 14) == 1 );
assert( gamma_golden_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 14, 9) == 0 );


char* board357429846 = gamma_board(board);
assert( board357429846 != NULL );
assert( strcmp(board357429846, 
"..7..85.10..\n"
".57.15.7.69\n"
"2..1..9221.\n"
"8616.2..752\n"
"3.9644431021\n"
"27755...8..\n"
"105..9510.716\n"
".189610.611.\n"
"6.588.1..2.\n"
"6..72.109.97\n"
"76541..3446\n"
"2....5..3.7\n"
".11899.71031\n"
"4.49.910.6410\n"
"6.10..10.104..\n") == 0);
free(board357429846);
board357429846 = NULL;
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 9, 9) == 1 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_busy_fields(board, 10) == 13 );
assert( gamma_free_fields(board, 10) == 58 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_golden_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_golden_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_golden_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 14 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_golden_move(board, 8, 10, 3) == 1 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 14, 4) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 8, 1, 14) == 1 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 10, 9) == 1 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 1, 10) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );


char* board427838894 = gamma_board(board);
assert( board427838894 != NULL );
assert( strcmp(board427838894, 
".87..85.10..\n"
"757.15.7.69\n"
"2..1..9221.\n"
"8616.2..752\n"
"3109644431021\n"
"27755.4.8109\n"
"105..9510.716\n"
"2189610.6118\n"
"6.588.11.2.\n"
"66.728109.97\n"
"76541..3446\n"
"2.10..5883.8\n"
".11899.71031\n"
"4949.910.6410\n"
"6.10.61031048.\n") == 0);
free(board427838894);
board427838894 = NULL;
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 3) == 0 );
assert( gamma_move(board, 10, 1, 14) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_golden_move(board, 10, 14, 9) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 10, 5, 12) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_free_fields(board, 9) == 33 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_free_fields(board, 10) == 11 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_move(board, 10, 8, 14) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );


char* board668433318 = gamma_board(board);
assert( board668433318 != NULL );
assert( strcmp(board668433318, 
".87..85.10..\n"
"757.15.7.69\n"
"2..1.1092212\n"
"861632..752\n"
"3109644431021\n"
"2775574.8109\n"
"105..9510.716\n"
"2189610.6118\n"
"6.588811.2.\n"
"66.728109.97\n"
"76541.13446\n"
"25101.5883.8\n"
"211899.71031\n"
"4949.910.6410\n"
"6.10.61031048.\n") == 0);
free(board668433318);
board668433318 = NULL;
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board853979816 = gamma_board(board);
assert( board853979816 != NULL );
assert( strcmp(board853979816, 
".87..85.10..\n"
"757.15.7.69\n"
"2..1.1092212\n"
"861632..752\n"
"3109644431021\n"
"2775574.8109\n"
"105..9510.716\n"
"2189610.6118\n"
"6.588811.2.\n"
"66.728109.97\n"
"76541.13446\n"
"25101.588398\n"
"211899.71031\n"
"4949.910.6410\n"
"6.10.61031048.\n") == 0);
free(board853979816);
board853979816 = NULL;
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 14, 10) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 14, 9) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_free_fields(board, 10) == 11 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_golden_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 14, 7) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 2, 0, 14) == 1 );


char* board125667086 = gamma_board(board);
assert( board125667086 != NULL );
assert( strcmp(board125667086, 
"287..85.104.\n"
"757.1517.69\n"
"26.1.1092212\n"
"861632..752\n"
"3109644431021\n"
"2775574.8109\n"
"105..9510.716\n"
"2189610.6118\n"
"6.588811.2.\n"
"66.728109697\n"
"76541.13446\n"
"25101.588398\n"
"211899.71031\n"
"4949.910.6410\n"
"6.10.61031048.\n") == 0);
free(board125667086);
board125667086 = NULL;
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_free_fields(board, 8) == 26 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );


gamma_delete(board);

    return 0;
}
