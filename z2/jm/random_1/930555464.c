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
uuid: 930555464
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_free_fields(board, 7) == 35 );


gamma_delete(board);

    return 0;
}
