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
uuid: 213855937
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 4, 12, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 11, 6, 3) == 1 );
assert( gamma_move(board, 12, 6, -1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board240296103 = gamma_board(board);
assert( board240296103 != NULL );
assert( strcmp(board240296103, 
"....7.11\n"
"....9..\n"
".......\n"
"2..4..8\n") == 0);
free(board240296103);
board240296103 = NULL;
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 7, -1) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 4) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );


gamma_delete(board);

    return 0;
}
