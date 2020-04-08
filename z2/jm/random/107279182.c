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
uuid: 107279182
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 1, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}