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
uuid: 502450212
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 12, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 3, 2) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_free_fields(board, 9) == 33 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 12, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );


char* board135263515 = gamma_board(board);
assert( board135263515 != NULL );
assert( strcmp(board135263515, 
".1141....\n"
"1..85.35\n"
"..7.363.\n"
"11.1210..79\n"
"12.5.6322\n"
"1.211.3.4\n"
".744439.\n"
".10.9.486\n"
".45...9.\n") == 0);
free(board135263515);
board135263515 = NULL;
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );


char* board893104887 = gamma_board(board);
assert( board893104887 != NULL );
assert( strcmp(board893104887, 
".1141....\n"
"1..85.35\n"
".27.363.\n"
"11.1210.979\n"
"12.5.6322\n"
"1.2119384\n"
".7444397\n"
".10.95486\n"
"1045...9.\n") == 0);
free(board893104887);
board893104887 = NULL;
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );


char* board658639617 = gamma_board(board);
assert( board658639617 != NULL );
assert( strcmp(board658639617, 
".1141....\n"
"1..85.35\n"
".27.363.\n"
"1131210.979\n"
"12.5.6322\n"
"1.2119384\n"
"57444397\n"
".10.95486\n"
"1045107.9.\n") == 0);
free(board658639617);
board658639617 = NULL;
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 11, 5, 8) == 1 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );


char* board344580997 = gamma_board(board);
assert( board344580997 != NULL );
assert( strcmp(board344580997, 
".1141411..\n"
"1..85.35\n"
".27.363.\n"
"1131210.979\n"
"12.5126322\n"
"1.2119384\n"
"57444397\n"
".10.95486\n"
"1045107.9.\n") == 0);
free(board344580997);
board344580997 = NULL;
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );


char* board205084370 = gamma_board(board);
assert( board205084370 != NULL );
assert( strcmp(board205084370, 
".11414117.\n"
"18.85.35\n"
"327.363.\n"
"1131210.979\n"
"12.5126322\n"
"1.2119384\n"
"57444397\n"
".10695486\n"
"1045107.9.\n") == 0);
free(board205084370);
board205084370 = NULL;
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_free_fields(board, 11) == 10 );
assert( gamma_golden_move(board, 11, 7, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 1) == 0 );


char* board114712954 = gamma_board(board);
assert( board114712954 != NULL );
assert( strcmp(board114712954, 
".11414117.\n"
"181285735\n"
"327.363.\n"
"1131210.9119\n"
"12.5126322\n"
"1.2119384\n"
"57444397\n"
".10695486\n"
"1045107.9.\n") == 0);
free(board114712954);
board114712954 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_golden_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );


gamma_delete(board);

    return 0;
}
