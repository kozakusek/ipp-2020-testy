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
uuid: 387860470
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );


char* board230402389 = gamma_board(board);
assert( board230402389 != NULL );
assert( strcmp(board230402389, 
"..........\n"
"..........\n"
"..........\n"
".......2..\n"
"..........\n"
".......6..\n"
"......3...\n"
"..........\n"
"..........\n") == 0);
free(board230402389);
board230402389 = NULL;
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );


char* board817566757 = gamma_board(board);
assert( board817566757 != NULL );
assert( strcmp(board817566757, 
"..........\n"
".........5\n"
"..........\n"
"1.....32..\n"
"..........\n"
".....2.6..\n"
"......34..\n"
"..........\n"
"........4.\n") == 0);
free(board817566757);
board817566757 = NULL;
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_free_fields(board, 6) == 80 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_golden_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 3, -1) == 0 );


gamma_delete(board);

    return 0;
}
