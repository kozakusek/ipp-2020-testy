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
uuid: 671627594
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );


char* board935670317 = gamma_board(board);
assert( board935670317 != NULL );
assert( strcmp(board935670317, 
".........\n"
"..1..3...\n"
"....3...4\n"
"....32...\n"
".......2.\n"
".........\n"
".........\n") == 0);
free(board935670317);
board935670317 = NULL;
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );


char* board248780573 = gamma_board(board);
assert( board248780573 != NULL );
assert( strcmp(board248780573, 
".........\n"
"..1..3...\n"
"....3...4\n"
"....32...\n"
"2......2.\n"
"4........\n"
"...4..4..\n") == 0);
free(board248780573);
board248780573 = NULL;
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board693983874 = gamma_board(board);
assert( board693983874 != NULL );
assert( strcmp(board693983874, 
".........\n"
"..1..3...\n"
"....3...4\n"
"....32...\n"
"2..1...2.\n"
"4....4...\n"
".2.4.14..\n") == 0);
free(board693983874);
board693983874 = NULL;
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_busy_fields(board, 3) == 6 );


gamma_delete(board);

    return 0;
}
