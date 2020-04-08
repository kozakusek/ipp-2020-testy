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
uuid: 287252931
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );


gamma_delete(board);

    return 0;
}
