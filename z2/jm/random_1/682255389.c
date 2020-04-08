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
uuid: 682255389
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_move(board, 3, 0, 9) == 0 );


char* board457875100 = gamma_board(board);
assert( board457875100 != NULL );
assert( strcmp(board457875100, 
"...1..1.2.\n"
".....2....\n"
"33..3...22\n"
"....3..3..\n"
".......11.\n"
"....3.12.1\n"
"..3......2\n") == 0);
free(board457875100);
board457875100 = NULL;
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );


gamma_delete(board);

    return 0;
}
