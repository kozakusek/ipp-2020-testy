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
uuid: 543240951
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );


char* board226916281 = gamma_board(board);
assert( board226916281 != NULL );
assert( strcmp(board226916281, 
"...2.3.\n"
".......\n"
"....2..\n"
".......\n"
".3.....\n"
".......\n") == 0);
free(board226916281);
board226916281 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board737424977 = gamma_board(board);
assert( board737424977 != NULL );
assert( strcmp(board737424977, 
"...2.3.\n"
".......\n"
"....2..\n"
".......\n"
".3.....\n"
".......\n") == 0);
free(board737424977);
board737424977 = NULL;
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );


char* board268932519 = gamma_board(board);
assert( board268932519 != NULL );
assert( strcmp(board268932519, 
"...2.34\n"
".......\n"
"....2..\n"
".......\n"
".2.....\n"
"...4..2\n") == 0);
free(board268932519);
board268932519 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 32 );


char* board477010185 = gamma_board(board);
assert( board477010185 != NULL );
assert( strcmp(board477010185, 
"...2.34\n"
".2.....\n"
"....2.4\n"
".......\n"
".2.....\n"
"3..4..2\n") == 0);
free(board477010185);
board477010185 = NULL;
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );


char* board666763208 = gamma_board(board);
assert( board666763208 != NULL );
assert( strcmp(board666763208, 
"...2.34\n"
".2.....\n"
"....2.4\n"
".......\n"
".2.....\n"
"3..4..2\n") == 0);
free(board666763208);
board666763208 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
