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
uuid: 643502499
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board185489223 = gamma_board(board);
assert( board185489223 != NULL );
assert( strcmp(board185489223, 
"...32..\n"
"...3...\n"
"3......\n"
"1...1..\n"
".......\n"
".......\n"
"2...1.2\n") == 0);
free(board185489223);
board185489223 = NULL;


char* board403226643 = gamma_board(board);
assert( board403226643 != NULL );
assert( strcmp(board403226643, 
"...32..\n"
"...3...\n"
"3......\n"
"1...1..\n"
".......\n"
".......\n"
"2...1.2\n") == 0);
free(board403226643);
board403226643 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 1, 5, 2) == 1 );


gamma_delete(board);

    return 0;
}
