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
uuid: 650193848
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );


char* board744456459 = gamma_board(board);
assert( board744456459 != NULL );
assert( strcmp(board744456459, 
"......\n"
"......\n"
"......\n"
"2...2.\n"
"......\n"
"......\n"
"4.....\n"
"2.3...\n") == 0);
free(board744456459);
board744456459 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );


gamma_delete(board);

    return 0;
}
