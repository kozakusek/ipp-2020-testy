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
uuid: 589401554
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );


char* board285599681 = gamma_board(board);
assert( board285599681 != NULL );
assert( strcmp(board285599681, 
"1.2.53\n"
"......\n"
"......\n"
".....7\n"
".1..64\n"
"..4...\n") == 0);
free(board285599681);
board285599681 = NULL;
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
