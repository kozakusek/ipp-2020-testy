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
uuid: 514465162
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 9, 4) == 0 );


gamma_delete(board);

    return 0;
}
