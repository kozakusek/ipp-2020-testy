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
uuid: 188684577
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 5, 15, 8);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 9, -1) == 0 );
assert( gamma_move(board, 11, -1, -1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 0) == 0 );
assert( gamma_move(board, 13, 2, 0) == 1 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_golden_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 13, -1, 4) == 0 );
assert( gamma_move(board, 14, 12, 1) == 1 );
assert( gamma_busy_fields(board, 14) == 1 );


char* board311874724 = gamma_board(board);
assert( board311874724 != NULL );
assert( strcmp(board311874724, 
"...........3.\n"
"....11........\n"
"..112..1..3..7\n"
"..5.6.....4.14\n"
"..13......5...\n") == 0);
free(board311874724);
board311874724 = NULL;
assert( gamma_move(board, 15, 13, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_golden_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 9, 12, -1) == 0 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_golden_move(board, 11, 1, 12) == 0 );
assert( gamma_move(board, 12, 5, 4) == 1 );
assert( gamma_golden_move(board, 12, 4, 11) == 0 );
assert( gamma_free_fields(board, 13) == 49 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, -1, 4) == 0 );
assert( gamma_busy_fields(board, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_free_fields(board, 9) == 48 );
assert( gamma_golden_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 13, 11, 3) == 1 );
assert( gamma_free_fields(board, 13) == 47 );
assert( gamma_move(board, 15, 11, 3) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );


gamma_delete(board);

    return 0;
}
