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
uuid: 966318190
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 3, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 3, 7, 2) == 1 );


char* board831845702 = gamma_board(board);
assert( board831845702 != NULL );
assert( strcmp(board831845702, 
".......3...1...\n"
"...............\n"
"...............\n") == 0);
free(board831845702);
board831845702 = NULL;
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );


char* board104441244 = gamma_board(board);
assert( board104441244 != NULL );
assert( strcmp(board104441244, 
"3..3...3...1...\n"
"4.......41....2\n"
"..13..........5\n") == 0);
free(board104441244);
board104441244 = NULL;
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
