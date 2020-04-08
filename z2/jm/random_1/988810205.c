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
uuid: 988810205
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_free_fields(board, 3) == 86 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 19 );


gamma_delete(board);

    return 0;
}
