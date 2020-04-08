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
uuid: 800577726
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 2, 4) == 1 );


char* board308605054 = gamma_board(board);
assert( board308605054 != NULL );
assert( strcmp(board308605054, 
".....\n"
"..2..\n"
".....\n"
".....\n"
".....\n"
".....\n") == 0);
free(board308605054);
board308605054 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );


char* board761908052 = gamma_board(board);
assert( board761908052 != NULL );
assert( strcmp(board761908052, 
"...3.\n"
".32..\n"
".....\n"
"2.1..\n"
".1..2\n"
"2..31\n") == 0);
free(board761908052);
board761908052 = NULL;


gamma_delete(board);

    return 0;
}
