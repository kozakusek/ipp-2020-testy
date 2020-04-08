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
uuid: 549593667
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 5, 5);
assert( board != NULL );




char* board699268327 = gamma_board(board);
assert( board699268327 != NULL );
assert( strcmp(board699268327, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board699268327);
board699268327 = NULL;
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 1, 3, 5) == 1 );


char* board876585790 = gamma_board(board);
assert( board876585790 != NULL );
assert( strcmp(board876585790, 
"...1.5.\n"
".......\n"
".2.....\n"
".......\n"
"..5.4.2\n"
"....1.4\n") == 0);
free(board876585790);
board876585790 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );


char* board853808779 = gamma_board(board);
assert( board853808779 != NULL );
assert( strcmp(board853808779, 
"...1.53\n"
".....21\n"
"42.....\n"
".......\n"
"..5.4.2\n"
"....1.4\n") == 0);
free(board853808779);
board853808779 = NULL;
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );


char* board304947924 = gamma_board(board);
assert( board304947924 != NULL );
assert( strcmp(board304947924, 
"...1.53\n"
"....521\n"
"42.....\n"
".......\n"
"..5.4.2\n"
"2...1.4\n") == 0);
free(board304947924);
board304947924 = NULL;
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, -1, 3) == 0 );


char* board443788604 = gamma_board(board);
assert( board443788604 != NULL );
assert( strcmp(board443788604, 
"..41.53\n"
".1..521\n"
"42.....\n"
"....3..\n"
"..5.4.2\n"
"2...1.4\n") == 0);
free(board443788604);
board443788604 = NULL;
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
