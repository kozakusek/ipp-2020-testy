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
uuid: 335339452
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 4, 8);
assert( board != NULL );


assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );


char* board658338333 = gamma_board(board);
assert( board658338333 != NULL );
assert( strcmp(board658338333, 
".......3\n"
".1....1.\n"
".1.3...4\n"
".......2\n"
".......3\n"
"322.2.3.\n") == 0);
free(board658338333);
board658338333 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );


gamma_delete(board);

    return 0;
}
