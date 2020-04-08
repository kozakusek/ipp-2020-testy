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
uuid: 278022536
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );


char* board635802343 = gamma_board(board);
assert( board635802343 != NULL );
assert( strcmp(board635802343, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"......3\n"
".......\n") == 0);
free(board635802343);
board635802343 = NULL;
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board168309686 = gamma_board(board);
assert( board168309686 != NULL );
assert( strcmp(board168309686, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"......3\n"
".1.....\n") == 0);
free(board168309686);
board168309686 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );


char* board415799327 = gamma_board(board);
assert( board415799327 != NULL );
assert( strcmp(board415799327, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"......3\n"
".1....4\n") == 0);
free(board415799327);
board415799327 = NULL;
assert( gamma_move(board, 2, 4, 2) == 1 );


char* board827343993 = gamma_board(board);
assert( board827343993 != NULL );
assert( strcmp(board827343993, 
".......\n"
".......\n"
".......\n"
".......\n"
"....2..\n"
"......3\n"
".1....4\n") == 0);
free(board827343993);
board827343993 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );


char* board761671993 = gamma_board(board);
assert( board761671993 != NULL );
assert( strcmp(board761671993, 
".......\n"
".......\n"
".1....3\n"
"....5..\n"
"....2..\n"
"...3.23\n"
".1....4\n") == 0);
free(board761671993);
board761671993 = NULL;
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
