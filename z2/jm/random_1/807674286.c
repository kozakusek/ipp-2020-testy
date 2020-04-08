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
uuid: 807674286
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );


char* board193491152 = gamma_board(board);
assert( board193491152 != NULL );
assert( strcmp(board193491152, 
"6.....2...\n"
".....62...\n"
"3.5.....2.\n"
"..........\n"
"..4....1..\n"
"..4...1..3\n") == 0);
free(board193491152);
board193491152 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );


char* board557977383 = gamma_board(board);
assert( board557977383 != NULL );
assert( strcmp(board557977383, 
"6.6...2..3\n"
".....62.5.\n"
"3.56.5.42.\n"
"..1.......\n"
"..44..31..\n"
"..4..21..3\n") == 0);
free(board557977383);
board557977383 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
