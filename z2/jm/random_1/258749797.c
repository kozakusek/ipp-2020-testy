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
uuid: 258749797
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 2, 14, 18);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 11, -1, 2) == 0 );
assert( gamma_golden_move(board, 11, 1, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );


gamma_delete(board);

    return 0;
}
