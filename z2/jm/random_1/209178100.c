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
uuid: 209178100
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 13, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 4, 5) == 1 );
assert( gamma_move(board, 13, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 10, -1, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_free_fields(board, 11) == 47 );
assert( gamma_move(board, 12, 2, 1) == 1 );
assert( gamma_free_fields(board, 12) == 46 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 3, -1) == 0 );
assert( gamma_move(board, 12, 1, 7) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board959482952 = gamma_board(board);
assert( board959482952 != NULL );
assert( strcmp(board959482952, 
"...42.\n"
".9..4.\n"
".12.28.\n"
"....6.\n"
"81..12.\n"
".2....\n"
"....39\n"
"...134.\n"
"5.12...\n"
"7..6.1\n") == 0);
free(board959482952);
board959482952 = NULL;
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, -1) == 0 );
assert( gamma_golden_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 2, -1) == 0 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 13, 4, -1) == 0 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 8, 6, 2) == 0 );


gamma_delete(board);

    return 0;
}
