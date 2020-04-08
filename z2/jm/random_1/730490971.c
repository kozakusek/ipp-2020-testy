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
uuid: 730490971
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 6, 7);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );


char* board944348949 = gamma_board(board);
assert( board944348949 != NULL );
assert( strcmp(board944348949, 
"......\n"
"......\n"
"......\n"
"...3..\n"
".5....\n"
"......\n"
"......\n") == 0);
free(board944348949);
board944348949 = NULL;
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_golden_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );


gamma_delete(board);

    return 0;
}
