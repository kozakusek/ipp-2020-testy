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
uuid: 973259610
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 7, 6);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board744582298 = gamma_board(board);
assert( board744582298 != NULL );
assert( strcmp(board744582298, 
".....5..\n"
"........\n"
".4..1..6\n"
"....6...\n"
"2..5....\n"
".....47.\n"
"........\n"
".1....4.\n"
".6.....7\n") == 0);
free(board744582298);
board744582298 = NULL;
assert( gamma_move(board, 6, 3, 1) == 1 );


char* board761923976 = gamma_board(board);
assert( board761923976 != NULL );
assert( strcmp(board761923976, 
".....5..\n"
"........\n"
".4..1..6\n"
"....6...\n"
"2..5....\n"
".....47.\n"
"........\n"
".1.6..4.\n"
".6.....7\n") == 0);
free(board761923976);
board761923976 = NULL;
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
