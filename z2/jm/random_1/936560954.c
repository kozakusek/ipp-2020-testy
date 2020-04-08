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
uuid: 936560954
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );


char* board980951637 = gamma_board(board);
assert( board980951637 != NULL );
assert( strcmp(board980951637, 
".......\n"
".......\n"
".......\n"
"......1\n"
"51.....\n"
".......\n"
"...4...\n") == 0);
free(board980951637);
board980951637 = NULL;
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );


char* board583180083 = gamma_board(board);
assert( board583180083 != NULL );
assert( strcmp(board583180083, 
"1.2..4.\n"
"...6.3.\n"
".......\n"
"....6.1\n"
"51..3..\n"
"..5..4.\n"
"...4...\n") == 0);
free(board583180083);
board583180083 = NULL;
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board802320819 = gamma_board(board);
assert( board802320819 != NULL );
assert( strcmp(board802320819, 
"1.2..4.\n"
"...6.34\n"
".......\n"
"....6.1\n"
"51.53..\n"
"..54.4.\n"
"...4...\n") == 0);
free(board802320819);
board802320819 = NULL;
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
