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
uuid: 162437284
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 7, 9, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );


char* board445910761 = gamma_board(board);
assert( board445910761 != NULL );
assert( strcmp(board445910761, 
".2.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board445910761);
board445910761 = NULL;
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 9, -1, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );


char* board879909736 = gamma_board(board);
assert( board879909736 != NULL );
assert( strcmp(board879909736, 
".2.\n"
"...\n"
"...\n"
"..6\n"
"...\n"
"...\n"
"...\n") == 0);
free(board879909736);
board879909736 = NULL;
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_golden_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


gamma_delete(board);

    return 0;
}
