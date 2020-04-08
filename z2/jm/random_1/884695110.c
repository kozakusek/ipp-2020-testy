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
uuid: 884695110
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board368160325 = gamma_board(board);
assert( board368160325 != NULL );
assert( strcmp(board368160325, 
".4..4..\n"
"2...12.\n"
".....25\n"
".62..4.\n"
".....36\n"
".......\n") == 0);
free(board368160325);
board368160325 = NULL;
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );


char* board470099177 = gamma_board(board);
assert( board470099177 != NULL );
assert( strcmp(board470099177, 
".4..4..\n"
"2...12.\n"
".....25\n"
".62.14.\n"
"..5..36\n"
".......\n") == 0);
free(board470099177);
board470099177 = NULL;
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );


gamma_delete(board);

    return 0;
}
