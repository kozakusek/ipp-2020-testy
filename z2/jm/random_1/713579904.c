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
uuid: 713579904
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );


gamma_delete(board);

    return 0;
}
