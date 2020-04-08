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
uuid: 249382261
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 15, 11, 8);
assert( board != NULL );




char* board959529756 = gamma_board(board);
assert( board959529756 != NULL );
assert( strcmp(board959529756, 
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n") == 0);
free(board959529756);
board959529756 = NULL;
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, -1, 13) == 0 );


char* board491144832 = gamma_board(board);
assert( board491144832 != NULL );
assert( strcmp(board491144832, 
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n"
".\n") == 0);
free(board491144832);
board491144832 = NULL;
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 11, -1, 8) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, -1, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


gamma_delete(board);

    return 0;
}
