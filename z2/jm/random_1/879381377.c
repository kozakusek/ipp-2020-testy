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
uuid: 879381377
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );


char* board515419407 = gamma_board(board);
assert( board515419407 != NULL );
assert( strcmp(board515419407, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board515419407);
board515419407 = NULL;
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board252970244 = gamma_board(board);
assert( board252970244 != NULL );
assert( strcmp(board252970244, 
"..3.1..\n"
".......\n"
"...5...\n"
"..4.1..\n"
"2....51\n"
".5....1\n") == 0);
free(board252970244);
board252970244 = NULL;
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
