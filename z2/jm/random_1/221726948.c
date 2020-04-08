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
uuid: 221726948
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );


char* board766612191 = gamma_board(board);
assert( board766612191 != NULL );
assert( strcmp(board766612191, 
".........\n"
".....2.32\n"
"3214.....\n"
".2.......\n"
"..1......\n"
".........\n") == 0);
free(board766612191);
board766612191 = NULL;
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}