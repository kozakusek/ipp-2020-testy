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
uuid: 596703248
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_golden_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );


gamma_delete(board);

    return 0;
}
