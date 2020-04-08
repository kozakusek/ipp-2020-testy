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
uuid: 825494816
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 15, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );


char* board662929479 = gamma_board(board);
assert( board662929479 != NULL );
assert( strcmp(board662929479, 
"...56\n"
".2...\n"
"2.5.1\n"
"8..3.\n"
"....1\n"
"....6\n") == 0);
free(board662929479);
board662929479 = NULL;
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 1, 2) == 1 );
assert( gamma_move(board, 11, 1, 0) == 1 );


char* board932364971 = gamma_board(board);
assert( board932364971 != NULL );
assert( strcmp(board932364971, 
"...56\n"
".2...\n"
"2.5.1\n"
"81093.\n"
"....1\n"
".11..6\n") == 0);
free(board932364971);
board932364971 = NULL;
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 14, 3, 1) == 1 );
assert( gamma_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 15, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 13, 3, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_free_fields(board, 12) == 5 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 5) == 1 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_move(board, 15, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_free_fields(board, 10) == 3 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_free_fields(board, 11) == 3 );
assert( gamma_golden_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 13, 3, 0) == 0 );
assert( gamma_golden_move(board, 13, 2, 0) == 1 );
assert( gamma_move(board, 14, 3, 3) == 0 );
assert( gamma_move(board, 14, 1, 1) == 0 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_move(board, 15, 3, 1) == 0 );
assert( gamma_move(board, 15, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
