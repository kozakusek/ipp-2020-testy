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
uuid: 435746112
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 5, 9, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );


char* board195578217 = gamma_board(board);
assert( board195578217 != NULL );
assert( strcmp(board195578217, 
"....6.3........\n"
"...4...........\n"
"....2..........\n"
"...............\n"
"..54...........\n") == 0);
free(board195578217);
board195578217 = NULL;
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board299295145 = gamma_board(board);
assert( board299295145 != NULL );
assert( strcmp(board299295145, 
"....6.3.....3..\n"
"...4..1........\n"
"..8.2..........\n"
"...............\n"
"4.54..........8\n") == 0);
free(board299295145);
board299295145 = NULL;
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board687777613 = gamma_board(board);
assert( board687777613 != NULL );
assert( strcmp(board687777613, 
"....6.3.1.6.3..\n"
".8.4..1........\n"
"..8.2.7........\n"
"...............\n"
"4.54..........8\n") == 0);
free(board687777613);
board687777613 = NULL;
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_move(board, 8, 3, 14) == 0 );
assert( gamma_move(board, 9, 14, 0) == 0 );


char* board607964637 = gamma_board(board);
assert( board607964637 != NULL );
assert( strcmp(board607964637, 
"6.756.311.6.31.\n"
"8824..144.3.2.7\n"
"268.2671...7..5\n"
"83.5..........5\n"
"435459..4126..8\n") == 0);
free(board607964637);
board607964637 = NULL;
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 1) == 1 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );


char* board773013301 = gamma_board(board);
assert( board773013301 != NULL );
assert( strcmp(board773013301, 
"6.756.311.6.31.\n"
"8824..144.3.2.7\n"
"268.2671...7..5\n"
"83.5....7....95\n"
"435459..4126..8\n") == 0);
free(board773013301);
board773013301 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 13, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_free_fields(board, 9) == 16 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_free_fields(board, 9) == 15 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_move(board, 6, 0, 10) == 0 );


gamma_delete(board);

    return 0;
}
