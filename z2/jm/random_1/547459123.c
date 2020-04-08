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
uuid: 547459123
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );


char* board169096851 = gamma_board(board);
assert( board169096851 != NULL );
assert( strcmp(board169096851, 
"6.2...\n"
"......\n"
"..2...\n"
"5.....\n"
"......\n"
"....7.\n") == 0);
free(board169096851);
board169096851 = NULL;
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );


gamma_delete(board);

    return 0;
}
