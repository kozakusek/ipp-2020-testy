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
uuid: 988913795
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 3, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );


gamma_delete(board);

    return 0;
}
