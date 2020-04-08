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
uuid: 613314169
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 2, 10, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );


gamma_delete(board);

    return 0;
}
