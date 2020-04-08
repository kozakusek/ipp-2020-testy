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
uuid: 830776562
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 1, 6, 10);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );


char* board329515410 = gamma_board(board);
assert( board329515410 != NULL );
assert( strcmp(board329515410, 
".....\n") == 0);
free(board329515410);
board329515410 = NULL;
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 5 );


gamma_delete(board);

    return 0;
}
