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
uuid: 848265045
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_free_fields(board, 6) == 47 );


char* board627556674 = gamma_board(board);
assert( board627556674 != NULL );
assert( strcmp(board627556674, 
".........\n"
".......21\n"
".445.....\n"
".......1.\n"
".....7...\n"
".........\n") == 0);
free(board627556674);
board627556674 = NULL;
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 31 );


gamma_delete(board);

    return 0;
}
