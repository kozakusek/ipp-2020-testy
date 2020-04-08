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
uuid: 768598841
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 16, 13, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, 1, 15) == 1 );
assert( gamma_move(board, 13, 1, -1) == 0 );
assert( gamma_golden_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_golden_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 1, 15) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_golden_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 2, 16) == 0 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 9, -1, 2) == 0 );
assert( gamma_move(board, 10, 1, 15) == 0 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, -1, 13) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );


gamma_delete(board);

    return 0;
}
