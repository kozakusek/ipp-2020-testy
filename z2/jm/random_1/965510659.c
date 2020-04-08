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
uuid: 965510659
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 2, 13, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
