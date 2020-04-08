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
uuid: 207145455
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );


char* board321631995 = gamma_board(board);
assert( board321631995 != NULL );
assert( strcmp(board321631995, 
"....3.1.3\n"
"...4.4.31\n"
"..4......\n"
"4........\n"
".12...32.\n"
".2...21..\n"
"..2.....1\n") == 0);
free(board321631995);
board321631995 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );


gamma_delete(board);

    return 0;
}
