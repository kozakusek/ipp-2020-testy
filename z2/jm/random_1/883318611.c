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
uuid: 883318611
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );


char* board608436181 = gamma_board(board);
assert( board608436181 != NULL );
assert( strcmp(board608436181, 
"..1...\n"
".4..3.\n"
"2.2646\n"
"1..4..\n"
"......\n"
"..44..\n"
"5..5..\n") == 0);
free(board608436181);
board608436181 = NULL;
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );


gamma_delete(board);

    return 0;
}
