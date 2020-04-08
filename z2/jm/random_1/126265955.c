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
uuid: 126265955
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board927590872 = gamma_board(board);
assert( board927590872 != NULL );
assert( strcmp(board927590872, 
".3....2\n"
".1.2.34\n"
"...1...\n"
"....5..\n"
".......\n"
".1.4...\n") == 0);
free(board927590872);
board927590872 = NULL;
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );


gamma_delete(board);

    return 0;
}
