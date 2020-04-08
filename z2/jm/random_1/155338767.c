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
uuid: 155338767
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_golden_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );


char* board756878399 = gamma_board(board);
assert( board756878399 != NULL );
assert( strcmp(board756878399, 
".......\n"
"41.6...\n"
"...1.36\n"
"..4.2.5\n"
"..4.2.4\n"
".2.3...\n") == 0);
free(board756878399);
board756878399 = NULL;
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );


gamma_delete(board);

    return 0;
}
