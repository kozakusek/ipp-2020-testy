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
uuid: 592974832
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
