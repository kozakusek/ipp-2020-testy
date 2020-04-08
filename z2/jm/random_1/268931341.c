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
uuid: 268931341
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );


char* board214294852 = gamma_board(board);
assert( board214294852 != NULL );
assert( strcmp(board214294852, 
"...3...\n"
"..32...\n"
".......\n"
"...4...\n"
"42.....\n"
"422...1\n"
"1......\n"
"4..2...\n"
"21..3.1\n") == 0);
free(board214294852);
board214294852 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_move(board, 3, 0, 6) == 0 );


gamma_delete(board);

    return 0;
}
