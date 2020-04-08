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
uuid: 430146303
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 43 );


char* board935775887 = gamma_board(board);
assert( board935775887 != NULL );
assert( strcmp(board935775887, 
"2....2...\n"
"...1.....\n"
".....3...\n"
"2.3.1....\n"
"....21...\n"
"...33....\n") == 0);
free(board935775887);
board935775887 = NULL;
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board339703674 = gamma_board(board);
assert( board339703674 != NULL );
assert( strcmp(board339703674, 
"2....2...\n"
"...1.....\n"
".....3...\n"
"2.3.1....\n"
"....21...\n"
"...33....\n") == 0);
free(board339703674);
board339703674 = NULL;
assert( gamma_move(board, 2, 9, 1) == 0 );


char* board125272990 = gamma_board(board);
assert( board125272990 != NULL );
assert( strcmp(board125272990, 
"2....2...\n"
"...1.....\n"
".....3...\n"
"2.3.1....\n"
"....21...\n"
"...33....\n") == 0);
free(board125272990);
board125272990 = NULL;
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );


gamma_delete(board);

    return 0;
}
