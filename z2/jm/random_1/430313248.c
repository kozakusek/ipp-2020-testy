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
uuid: 430313248
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 5, 4, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );


gamma_delete(board);

    return 0;
}
