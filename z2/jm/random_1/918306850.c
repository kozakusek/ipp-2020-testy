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
uuid: 918306850
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 5, 1) == 1 );


gamma_delete(board);

    return 0;
}
