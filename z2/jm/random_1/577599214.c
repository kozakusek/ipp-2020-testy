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
uuid: 577599214
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 3, 7, 5) == 0 );


gamma_delete(board);

    return 0;
}
