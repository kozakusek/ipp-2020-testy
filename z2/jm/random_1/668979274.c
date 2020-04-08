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
uuid: 668979274
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 5, 1, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 20 );


char* board324061319 = gamma_board(board);
assert( board324061319 != NULL );
assert( strcmp(board324061319, 
"1....\n"
"1....\n"
".1...\n"
".....\n"
".1.1.\n") == 0);
free(board324061319);
board324061319 = NULL;
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
