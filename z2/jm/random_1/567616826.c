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
uuid: 567616826
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_golden_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_golden_move(board, 5, 1, 6) == 1 );


char* board994160316 = gamma_board(board);
assert( board994160316 != NULL );
assert( strcmp(board994160316, 
"....3..\n"
".......\n"
".....4.\n"
".5...1.\n"
".......\n"
"2....4.\n"
".2.....\n"
".......\n"
"......5\n"
".43....\n") == 0);
free(board994160316);
board994160316 = NULL;
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );


char* board115950595 = gamma_board(board);
assert( board115950595 != NULL );
assert( strcmp(board115950595, 
"..3.3.4\n"
".3...34\n"
".....4.\n"
".5..41.\n"
".1.....\n"
"2....4.\n"
"2225...\n"
".....2.\n"
"......5\n"
".43.5..\n") == 0);
free(board115950595);
board115950595 = NULL;
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, -1, 8) == 0 );


gamma_delete(board);

    return 0;
}
