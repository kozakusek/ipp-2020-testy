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
uuid: 102886873
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_move(board, 3, 4, 2) == 1 );


gamma_delete(board);

    return 0;
}
