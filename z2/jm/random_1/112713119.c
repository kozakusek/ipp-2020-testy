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
uuid: 112713119
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
