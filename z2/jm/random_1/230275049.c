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
uuid: 230275049
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );


char* board708382073 = gamma_board(board);
assert( board708382073 != NULL );
assert( strcmp(board708382073, 
"..1...\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board708382073);
board708382073 = NULL;
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, -1, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_golden_move(board, 4, 8, 5) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_golden_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


gamma_delete(board);

    return 0;
}
