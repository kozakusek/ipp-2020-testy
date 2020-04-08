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
uuid: 143689012
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_golden_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, -1, -1) == 0 );


char* board146956259 = gamma_board(board);
assert( board146956259 != NULL );
assert( strcmp(board146956259, 
"..2.3....\n"
"...4.22..\n"
".13.5...2\n"
"5.35..53.\n"
"1...33...\n"
"...5...2.\n") == 0);
free(board146956259);
board146956259 = NULL;
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );


gamma_delete(board);

    return 0;
}
