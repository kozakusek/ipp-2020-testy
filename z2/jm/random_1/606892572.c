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
uuid: 606892572
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_golden_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 1, 0) == 1 );


char* board840741838 = gamma_board(board);
assert( board840741838 != NULL );
assert( strcmp(board840741838, 
"..5..6.4..\n"
"....7.8...\n"
"....4..1..\n"
"13....336.\n"
".........6\n"
".5........\n"
"..51..47..\n"
".46.......\n") == 0);
free(board840741838);
board840741838 = NULL;
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_golden_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_golden_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );


gamma_delete(board);

    return 0;
}
