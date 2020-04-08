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
uuid: 808840530
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 5, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );


char* board289244442 = gamma_board(board);
assert( board289244442 != NULL );
assert( strcmp(board289244442, 
"4....4....3\n"
"1.32..25..3\n"
"..7..2.....\n"
".1...5....6\n"
"..463....2.\n") == 0);
free(board289244442);
board289244442 = NULL;
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );


gamma_delete(board);

    return 0;
}
