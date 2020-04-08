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
uuid: 432367421
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 6, 1, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


gamma_delete(board);

    return 0;
}
