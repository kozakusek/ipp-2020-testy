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
uuid: 492297508
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_free_fields(board, 7) == 70 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );


char* board364000356 = gamma_board(board);
assert( board364000356 != NULL );
assert( strcmp(board364000356, 
".......\n"
".......\n"
".......\n"
"....5..\n"
".......\n"
".4.1...\n"
".......\n"
"...2...\n"
"......7\n"
".......\n") == 0);
free(board364000356);
board364000356 = NULL;
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board636960950 = gamma_board(board);
assert( board636960950 != NULL );
assert( strcmp(board636960950, 
".......\n"
"....2..\n"
"....1..\n"
"..5.5.5\n"
".......\n"
".4.1...\n"
".7.....\n"
"...22..\n"
"..4...7\n"
"...1...\n") == 0);
free(board636960950);
board636960950 = NULL;
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
