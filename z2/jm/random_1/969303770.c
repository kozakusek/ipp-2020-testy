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
uuid: 969303770
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_golden_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );


char* board196944372 = gamma_board(board);
assert( board196944372 != NULL );
assert( strcmp(board196944372, 
"7.......\n"
"........\n"
"....4...\n"
"......38\n"
".....5..\n"
".......7\n"
"...5.1..\n") == 0);
free(board196944372);
board196944372 = NULL;
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
