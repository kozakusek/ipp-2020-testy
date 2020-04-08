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
uuid: 943683225
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 3) == 81 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board506815658 = gamma_board(board);
assert( board506815658 != NULL );
assert( strcmp(board506815658, 
"........\n"
"...3....\n"
"..4.....\n"
"..3.5...\n"
"........\n"
"6.......\n"
"........\n"
"252.....\n"
".1..311.\n"
".2......\n"
"4..5....\n") == 0);
free(board506815658);
board506815658 = NULL;
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 8) == 1 );


char* board733830347 = gamma_board(board);
assert( board733830347 != NULL );
assert( strcmp(board733830347, 
"........\n"
"...3....\n"
".54...24\n"
"..3.5...\n"
"........\n"
"6....6..\n"
"..2.....\n"
"252.....\n"
".1..311.\n"
".2......\n"
"4..5....\n") == 0);
free(board733830347);
board733830347 = NULL;
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_free_fields(board, 6) == 12 );


char* board212316694 = gamma_board(board);
assert( board212316694 != NULL );
assert( strcmp(board212316694, 
"........\n"
"...3..1.\n"
".54...24\n"
"..3.5...\n"
"6.......\n"
"6..1.6..\n"
".42.....\n"
"252....6\n"
".1..311.\n"
"62.....3\n"
"4..5....\n") == 0);
free(board212316694);
board212316694 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );


char* board264191128 = gamma_board(board);
assert( board264191128 != NULL );
assert( strcmp(board264191128, 
"........\n"
"...3..1.\n"
"554...24\n"
"..3.5...\n"
"6.......\n"
"6..1.6..\n"
".42.....\n"
"252....6\n"
".1..311.\n"
"62.....3\n"
"4..5....\n") == 0);
free(board264191128);
board264191128 = NULL;
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 7 );


gamma_delete(board);

    return 0;
}
