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
uuid: 386942998
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 2, 4) == 1 );


char* board671328552 = gamma_board(board);
assert( board671328552 != NULL );
assert( strcmp(board671328552, 
".......\n"
"4.5...3\n"
"...22..\n"
"....1..\n"
"...3...\n"
"....6.2\n") == 0);
free(board671328552);
board671328552 = NULL;
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_free_fields(board, 6) == 32 );


char* board486756518 = gamma_board(board);
assert( board486756518 != NULL );
assert( strcmp(board486756518, 
".....6.\n"
"4.5...3\n"
"...22..\n"
"....1..\n"
"...3...\n"
"....6.2\n") == 0);
free(board486756518);
board486756518 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
