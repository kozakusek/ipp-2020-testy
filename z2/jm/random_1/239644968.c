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
uuid: 239644968
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 4, 0, 1) == 1 );


char* board274084972 = gamma_board(board);
assert( board274084972 != NULL );
assert( strcmp(board274084972, 
"...4...\n"
".3.8.4.\n"
".......\n"
".......\n"
"4..1.1.\n"
".......\n") == 0);
free(board274084972);
board274084972 = NULL;
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );


char* board209015406 = gamma_board(board);
assert( board209015406 != NULL );
assert( strcmp(board209015406, 
"...4...\n"
".3.8.4.\n"
".....4.\n"
"36.....\n"
"47.1.1.\n"
".6.....\n") == 0);
free(board209015406);
board209015406 = NULL;
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );


gamma_delete(board);

    return 0;
}
