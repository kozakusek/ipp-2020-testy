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
uuid: 514229186
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 12, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_free_fields(board, 10) == 66 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 11, 8, 2) == 1 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_free_fields(board, 11) == 55 );
assert( gamma_move(board, 12, 6, 10) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_free_fields(board, 10) == 48 );


char* board226933379 = gamma_board(board);
assert( board226933379 != NULL );
assert( strcmp(board226933379, 
"...12...6...\n"
".41..39..7.\n"
"7.31214...6.\n"
".108....8.5.\n"
".3......113.\n"
"..6.114....5\n"
".6.562...2.\n") == 0);
free(board226933379);
board226933379 = NULL;
assert( gamma_move(board, 11, 0, 6) == 1 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_free_fields(board, 9) == 40 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_free_fields(board, 11) == 40 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 12, 10, 3) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );


char* board962858444 = gamma_board(board);
assert( board962858444 != NULL );
assert( strcmp(board962858444, 
"11..1234.6..8\n"
".4112.391227.\n"
"7.3121467.6.\n"
".1086.12.8.512\n"
"33..4.112113.\n"
"1116.114.10..5\n"
".63562.7.22\n") == 0);
free(board962858444);
board962858444 = NULL;
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );


char* board560647476 = gamma_board(board);
assert( board560647476 != NULL );
assert( strcmp(board560647476, 
"11..123486..8\n"
".4112.3912274\n"
"7.3121467.6.\n"
".1086.12.8.512\n"
"33..4.112113.\n"
"1116.114.10..5\n"
"1263562.7.22\n") == 0);
free(board560647476);
board560647476 = NULL;
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 12, 2, 10) == 0 );
assert( gamma_free_fields(board, 12) == 23 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_move(board, 10, 10, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 11, 10, 4) == 1 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 9, 6) == 1 );
assert( gamma_move(board, 10, 6, 6) == 0 );
assert( gamma_golden_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );


char* board600749210 = gamma_board(board);
assert( board600749210 != NULL );
assert( strcmp(board600749210, 
"11..123486.98\n"
".4112810912274\n"
"7.312146710611\n"
".1086112.8.512\n"
"33594.112113.\n"
"1116.114410.25\n"
"1263562.7.22\n") == 0);
free(board600749210);
board600749210 = NULL;
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );


char* board134691500 = gamma_board(board);
assert( board134691500 != NULL );
assert( strcmp(board134691500, 
"1110.123486.98\n"
".4112810912274\n"
"7839146710611\n"
".1086112.8.512\n"
"33594.112113.\n"
"1116.114410.25\n"
"1263562.7.22\n") == 0);
free(board134691500);
board134691500 = NULL;
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 10, 2) == 1 );
assert( gamma_free_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 12, 10, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 11 );


char* board393726382 = gamma_board(board);
assert( board393726382 != NULL );
assert( strcmp(board393726382, 
"1110.123486.98\n"
".4112810912274\n"
"7839146710611\n"
".1086112.8.512\n"
"34594.11211311\n"
"1116.114410.25\n"
"1263562.7.22\n") == 0);
free(board393726382);
board393726382 = NULL;
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 1, 8) == 0 );


gamma_delete(board);

    return 0;
}
