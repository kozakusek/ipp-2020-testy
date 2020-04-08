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
uuid: 118900074
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board647396320 = gamma_board(board);
assert( board647396320 != NULL );
assert( strcmp(board647396320, 
"......\n"
"..2...\n"
".....1\n"
"......\n"
"......\n"
"......\n") == 0);
free(board647396320);
board647396320 = NULL;
assert( gamma_move(board, 3, 3, -1) == 0 );


char* board645548357 = gamma_board(board);
assert( board645548357 != NULL );
assert( strcmp(board645548357, 
"......\n"
"..2...\n"
".....1\n"
"......\n"
"......\n"
"......\n") == 0);
free(board645548357);
board645548357 = NULL;
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );


gamma_delete(board);

    return 0;
}
