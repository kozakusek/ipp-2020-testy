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
uuid: 801386287
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );


char* board494529171 = gamma_board(board);
assert( board494529171 != NULL );
assert( strcmp(board494529171, 
"..1...\n"
".3..1.\n"
"......\n"
".5....\n"
".....4\n"
"15.3..\n"
"...3..\n") == 0);
free(board494529171);
board494529171 = NULL;
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );


gamma_delete(board);

    return 0;
}
