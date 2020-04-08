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
uuid: 350376253
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );


char* board642473402 = gamma_board(board);
assert( board642473402 != NULL );
assert( strcmp(board642473402, 
"........\n"
"1.......\n"
"........\n"
".....3..\n"
"........\n"
"........\n") == 0);
free(board642473402);
board642473402 = NULL;
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 1) == 44 );


char* board332774549 = gamma_board(board);
assert( board332774549 != NULL );
assert( strcmp(board332774549, 
"..3.....\n"
"1.3.....\n"
"........\n"
".....3..\n"
"........\n"
"........\n") == 0);
free(board332774549);
board332774549 = NULL;
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board607459454 = gamma_board(board);
assert( board607459454 != NULL );
assert( strcmp(board607459454, 
"..3.....\n"
"123.....\n"
"...2....\n"
"..1..11.\n"
"........\n"
"...2....\n") == 0);
free(board607459454);
board607459454 = NULL;
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );


char* board758603959 = gamma_board(board);
assert( board758603959 != NULL );
assert( strcmp(board758603959, 
"..3.....\n"
"1232....\n"
"...2....\n"
"..13.11.\n"
".3..2..2\n"
"...2231.\n") == 0);
free(board758603959);
board758603959 = NULL;
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 29 );


gamma_delete(board);

    return 0;
}
