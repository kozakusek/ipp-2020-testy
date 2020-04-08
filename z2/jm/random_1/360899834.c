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
uuid: 360899834
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 4, 9, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board879814006 = gamma_board(board);
assert( board879814006 != NULL );
assert( strcmp(board879814006, 
"1..\n"
".6.\n"
".7.\n"
"...\n") == 0);
free(board879814006);
board879814006 = NULL;
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );


gamma_delete(board);

    return 0;
}
