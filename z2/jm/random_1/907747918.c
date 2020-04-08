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
uuid: 907747918
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 6) == 0 );


char* board145319753 = gamma_board(board);
assert( board145319753 != NULL );
assert( strcmp(board145319753, 
".......\n"
".......\n"
".......\n"
".3.....\n"
"..3....\n"
".......\n"
".....31\n") == 0);
free(board145319753);
board145319753 = NULL;
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 1) == 28 );


gamma_delete(board);

    return 0;
}
