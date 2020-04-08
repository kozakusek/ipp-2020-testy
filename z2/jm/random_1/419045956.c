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
uuid: 419045956
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
