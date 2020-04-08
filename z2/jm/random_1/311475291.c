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
uuid: 311475291
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board324132646 = gamma_board(board);
assert( board324132646 != NULL );
assert( strcmp(board324132646, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".6.....\n"
"...8...\n") == 0);
free(board324132646);
board324132646 = NULL;
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board890155683 = gamma_board(board);
assert( board890155683 != NULL );
assert( strcmp(board890155683, 
".......\n"
".......\n"
"5.82..3\n"
".......\n"
".......\n"
".7.....\n"
"...8...\n") == 0);
free(board890155683);
board890155683 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );


char* board546836174 = gamma_board(board);
assert( board546836174 != NULL );
assert( strcmp(board546836174, 
".......\n"
".......\n"
"5.82..3\n"
".......\n"
".......\n"
".7.....\n"
"...8...\n") == 0);
free(board546836174);
board546836174 = NULL;
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );


char* board459836959 = gamma_board(board);
assert( board459836959 != NULL );
assert( strcmp(board459836959, 
".......\n"
"...6...\n"
"5.82..3\n"
".......\n"
"......1\n"
".7..8..\n"
"...8...\n") == 0);
free(board459836959);
board459836959 = NULL;
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_move(board, 7, 4, 0) == 0 );


char* board873427140 = gamma_board(board);
assert( board873427140 != NULL );
assert( strcmp(board873427140, 
".......\n"
"...6...\n"
"5.82..3\n"
".......\n"
"......1\n"
".7..8..\n"
"...8...\n") == 0);
free(board873427140);
board873427140 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );


gamma_delete(board);

    return 0;
}
