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
uuid: 774769946
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 4, 1, 9);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 14, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 14, -1) == 0 );


char* board933743862 = gamma_board(board);
assert( board933743862 != NULL );
assert( strcmp(board933743862, 
"1....1......1..\n"
"..1............\n"
".........1.....\n"
".1...1.........\n") == 0);
free(board933743862);
board933743862 = NULL;
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );


char* board994631118 = gamma_board(board);
assert( board994631118 != NULL );
assert( strcmp(board994631118, 
"1...11......1..\n"
"..1............\n"
".........1.....\n"
".1.1.1.........\n") == 0);
free(board994631118);
board994631118 = NULL;
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 15, 0) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
