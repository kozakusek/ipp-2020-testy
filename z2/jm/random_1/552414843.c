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
uuid: 552414843
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 1, 12, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_free_fields(board, 8) == 2 );


gamma_delete(board);

    return 0;
}
