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
uuid: 161837875
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 1, 12, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board358141839 = gamma_board(board);
assert( board358141839 != NULL );
assert( strcmp(board358141839, 
"....47....59.......\n") == 0);
free(board358141839);
board358141839 = NULL;
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_golden_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 7, 14, -1) == 0 );


gamma_delete(board);

    return 0;
}
