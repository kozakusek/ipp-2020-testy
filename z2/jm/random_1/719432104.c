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
uuid: 719432104
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 1, 15, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );


char* board159840668 = gamma_board(board);
assert( board159840668 != NULL );
assert( strcmp(board159840668, 
".........2......\n") == 0);
free(board159840668);
board159840668 = NULL;
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 13, -1) == 0 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 9, -1, -1) == 0 );
assert( gamma_free_fields(board, 9) == 15 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 13, 12, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 15, 11, 1) == 0 );
assert( gamma_busy_fields(board, 15) == 0 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 14, -1) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 9, 0, -1) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 14, 0) == 1 );
assert( gamma_move(board, 13, -1, -1) == 0 );
assert( gamma_move(board, 14, -1, 1) == 0 );
assert( gamma_move(board, 15, 8, 0) == 1 );
assert( gamma_golden_move(board, 15, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );


gamma_delete(board);

    return 0;
}
