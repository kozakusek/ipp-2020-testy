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
uuid: 204079183
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 4, 12, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_golden_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_golden_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_free_fields(board, 11) == 12 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 12, 6, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );


char* board570882154 = gamma_board(board);
assert( board570882154 != NULL );
assert( strcmp(board570882154, 
"8..3..2\n"
"4479179\n"
"310142112\n"
"6.1071089\n") == 0);
free(board570882154);
board570882154 = NULL;
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );


char* board510587841 = gamma_board(board);
assert( board510587841 != NULL );
assert( strcmp(board510587841, 
"89.3..2\n"
"4479179\n"
"310142112\n"
"6.1071089\n") == 0);
free(board510587841);
board510587841 = NULL;
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_free_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
