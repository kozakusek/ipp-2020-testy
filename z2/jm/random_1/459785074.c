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
uuid: 459785074
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board500635454 = gamma_board(board);
assert( board500635454 != NULL );
assert( strcmp(board500635454, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"3..2..\n"
"......\n"
"......\n"
"....1.\n"
"4.....\n") == 0);
free(board500635454);
board500635454 = NULL;
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 4, -1) == 0 );


gamma_delete(board);

    return 0;
}
