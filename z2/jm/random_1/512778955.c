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
uuid: 512778955
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 13, 5, 18);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 2, -1, 13) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );


gamma_delete(board);

    return 0;
}
