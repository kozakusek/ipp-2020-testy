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
uuid: 993806543
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 15, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 1, 5) == 1 );


char* board692167242 = gamma_board(board);
assert( board692167242 != NULL );
assert( strcmp(board692167242, 
".97.2.\n"
"8.7...\n"
".26...\n"
"13...6\n"
"...1..\n"
"...4..\n") == 0);
free(board692167242);
board692167242 = NULL;
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 13, 3, 0) == 0 );
assert( gamma_move(board, 14, 3, 5) == 1 );
assert( gamma_move(board, 15, 2, 3) == 0 );
assert( gamma_free_fields(board, 15) == 20 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 0) == 1 );


char* board873469284 = gamma_board(board);
assert( board873469284 != NULL );
assert( strcmp(board873469284, 
".97142.\n"
"8.7...\n"
".26111.\n"
"13...6\n"
"...1..\n"
"13.1242.\n") == 0);
free(board873469284);
board873469284 = NULL;
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_free_fields(board, 12) == 14 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 4) == 1 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 14, 0, 1) == 1 );
assert( gamma_free_fields(board, 14) == 12 );
assert( gamma_busy_fields(board, 15) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_free_fields(board, 12) == 11 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_golden_move(board, 13, 3, 2) == 0 );
assert( gamma_move(board, 14, 1, 2) == 0 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_golden_move(board, 14, 3, 5) == 0 );
assert( gamma_move(board, 15, 3, 4) == 0 );
assert( gamma_busy_fields(board, 15) == 0 );
assert( gamma_golden_move(board, 15, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 13, 4, 2) == 1 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 1, 5) == 0 );
assert( gamma_move(board, 15, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board932295735 = gamma_board(board);
assert( board932295735 != NULL );
assert( strcmp(board932295735, 
"8971423\n"
"813787.\n"
"62611112\n"
"132.136\n"
"142.18.\n"
"13.12427\n") == 0);
free(board932295735);
board932295735 = NULL;
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
