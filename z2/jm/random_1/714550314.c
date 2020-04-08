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
uuid: 714550314
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 8, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 1, -1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 3, 0) == 1 );


gamma_delete(board);

    return 0;
}
