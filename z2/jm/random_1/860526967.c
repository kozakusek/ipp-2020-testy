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
uuid: 860526967
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 1, 13, 16);
assert( board != NULL );


assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_free_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 4, -1) == 0 );
assert( gamma_free_fields(board, 10) == 10 );
assert( gamma_golden_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );


char* board130801278 = gamma_board(board);
assert( board130801278 != NULL );
assert( strcmp(board130801278, 
".....8....3.\n") == 0);
free(board130801278);
board130801278 = NULL;
assert( gamma_move(board, 12, 12, -1) == 0 );
assert( gamma_move(board, 13, 4, -1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 10, 1, -1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
