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
uuid: 809189645
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board263311429 = gamma_board(board);
assert( board263311429 != NULL );
assert( strcmp(board263311429, 
"......\n"
"....13\n"
"..6...\n"
"......\n"
"......\n"
"....4.\n") == 0);
free(board263311429);
board263311429 = NULL;
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_golden_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 25 );


char* board381037992 = gamma_board(board);
assert( board381037992 != NULL );
assert( strcmp(board381037992, 
"......\n"
"..6513\n"
"6.6...\n"
".....5\n"
"32....\n"
"....45\n") == 0);
free(board381037992);
board381037992 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board599687654 = gamma_board(board);
assert( board599687654 != NULL );
assert( strcmp(board599687654, 
"......\n"
"..6513\n"
"6.62..\n"
".....5\n"
"32....\n"
"....45\n") == 0);
free(board599687654);
board599687654 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );


char* board768043749 = gamma_board(board);
assert( board768043749 != NULL );
assert( strcmp(board768043749, 
"......\n"
"..6513\n"
"6.62..\n"
".....5\n"
"32....\n"
"....45\n") == 0);
free(board768043749);
board768043749 = NULL;
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );


gamma_delete(board);

    return 0;
}
