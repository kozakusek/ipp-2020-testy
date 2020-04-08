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
uuid: 934258292
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );


char* board762255419 = gamma_board(board);
assert( board762255419 != NULL );
assert( strcmp(board762255419, 
"24....1\n"
".6.....\n"
"....2..\n"
"..32..4\n"
"......5\n"
".....4.\n"
".5..21.\n"
".6.....\n") == 0);
free(board762255419);
board762255419 = NULL;
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_golden_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 9 );


gamma_delete(board);

    return 0;
}
