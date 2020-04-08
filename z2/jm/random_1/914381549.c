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
uuid: 914381549
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 27 );


char* board744306725 = gamma_board(board);
assert( board744306725 != NULL );
assert( strcmp(board744306725, 
"...7..\n"
"......\n"
"...2..\n"
"......\n"
"..3..3\n"
"46545.\n") == 0);
free(board744306725);
board744306725 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
