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
uuid: 121143944
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 3, 8, 5);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, -1) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );


char* board858481851 = gamma_board(board);
assert( board858481851 != NULL );
assert( strcmp(board858481851, 
".87..1.......\n"
"...26...6....\n"
".......2.8551\n") == 0);
free(board858481851);
board858481851 = NULL;
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 7, 3) == 0 );


gamma_delete(board);

    return 0;
}
