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
uuid: 991349287
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board140020729 = gamma_board(board);
assert( board140020729 != NULL );
assert( strcmp(board140020729, 
".216.....\n"
"..3..5...\n"
"......6..\n"
".....2...\n"
".........\n"
"...1...3.\n"
"4......4.\n") == 0);
free(board140020729);
board140020729 = NULL;
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_golden_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );


char* board221247438 = gamma_board(board);
assert( board221247438 != NULL );
assert( strcmp(board221247438, 
".216.....\n"
"..3..5..3\n"
"......6..\n"
".....2..5\n"
".........\n"
"..21...3.\n"
"4..1...4.\n") == 0);
free(board221247438);
board221247438 = NULL;
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );


char* board185882300 = gamma_board(board);
assert( board185882300 != NULL );
assert( strcmp(board185882300, 
".216.....\n"
"..3..5..3\n"
"..6...6.5\n"
".....2..5\n"
"....1....\n"
"5.21...3.\n"
"4..1...4.\n") == 0);
free(board185882300);
board185882300 = NULL;
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board121924357 = gamma_board(board);
assert( board121924357 != NULL );
assert( strcmp(board121924357, 
".216.....\n"
"..3..5..3\n"
"..6...625\n"
".....2..5\n"
"....1....\n"
"5.21...3.\n"
"46.1...4.\n") == 0);
free(board121924357);
board121924357 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
