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
uuid: 611939606
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );


char* board671779089 = gamma_board(board);
assert( board671779089 != NULL );
assert( strcmp(board671779089, 
"...3.1.\n"
".21..34\n"
"4.31...\n"
".......\n"
"53.2...\n"
".255...\n"
"..31...\n") == 0);
free(board671779089);
board671779089 = NULL;
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
