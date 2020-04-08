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
uuid: 469627691
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 16 );


gamma_delete(board);

    return 0;
}
