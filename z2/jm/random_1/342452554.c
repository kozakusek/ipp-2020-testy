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
uuid: 342452554
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );


char* board575891521 = gamma_board(board);
assert( board575891521 != NULL );
assert( strcmp(board575891521, 
".......\n"
".......\n"
".......\n"
"14....7\n"
"...6...\n"
".2.....\n") == 0);
free(board575891521);
board575891521 = NULL;
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );


gamma_delete(board);

    return 0;
}
