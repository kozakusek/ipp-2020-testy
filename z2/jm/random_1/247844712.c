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
uuid: 247844712
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );


char* board377982097 = gamma_board(board);
assert( board377982097 != NULL );
assert( strcmp(board377982097, 
"......\n"
".....1\n"
"......\n"
"......\n"
"......\n"
"...2..\n") == 0);
free(board377982097);
board377982097 = NULL;
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board161273214 = gamma_board(board);
assert( board161273214 != NULL );
assert( strcmp(board161273214, 
"......\n"
".4...1\n"
"..1..2\n"
"..3...\n"
"2.1...\n"
"...2.2\n") == 0);
free(board161273214);
board161273214 = NULL;
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );


gamma_delete(board);

    return 0;
}
