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
uuid: 130453918
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 7, 6);
assert( board != NULL );


assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_golden_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
