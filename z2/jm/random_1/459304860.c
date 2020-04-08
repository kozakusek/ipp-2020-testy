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
uuid: 459304860
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 2, 7, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );


char* board484501466 = gamma_board(board);
assert( board484501466 != NULL );
assert( strcmp(board484501466, 
"..1..\n"
".....\n") == 0);
free(board484501466);
board484501466 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );


gamma_delete(board);

    return 0;
}
