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
uuid: 273732458
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );


char* board498731045 = gamma_board(board);
assert( board498731045 != NULL );
assert( strcmp(board498731045, 
"...34.\n"
"4...23\n"
"...2..\n"
"......\n"
"......\n"
"......\n"
"...1..\n"
"......\n"
"......\n") == 0);
free(board498731045);
board498731045 = NULL;
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );


char* board951673766 = gamma_board(board);
assert( board951673766 != NULL );
assert( strcmp(board951673766, 
"..234.\n"
"4...23\n"
"..324.\n"
"2...4.\n"
"......\n"
"......\n"
"...1..\n"
"....1.\n"
"...24.\n") == 0);
free(board951673766);
board951673766 = NULL;
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board672735872 = gamma_board(board);
assert( board672735872 != NULL );
assert( strcmp(board672735872, 
"..234.\n"
"42..23\n"
"..324.\n"
"2...4.\n"
"......\n"
"....3.\n"
"...1..\n"
"....1.\n"
"...24.\n") == 0);
free(board672735872);
board672735872 = NULL;
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );


gamma_delete(board);

    return 0;
}
