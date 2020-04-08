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
uuid: 343272514
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, -1, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );


char* board570112960 = gamma_board(board);
assert( board570112960 != NULL );
assert( strcmp(board570112960, 
"3...9.\n"
"2.....\n"
"...7..\n"
".6.4.7\n"
"..28..\n"
"8..4..\n") == 0);
free(board570112960);
board570112960 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
