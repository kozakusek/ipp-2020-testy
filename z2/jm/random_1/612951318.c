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
uuid: 612951318
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 8, 7);
assert( board != NULL );




char* board673830451 = gamma_board(board);
assert( board673830451 != NULL );
assert( strcmp(board673830451, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board673830451);
board673830451 = NULL;
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board100821818 = gamma_board(board);
assert( board100821818 != NULL );
assert( strcmp(board100821818, 
"..4.......\n"
".3.....7..\n"
"....8.....\n"
"..........\n"
"...3..1...\n"
".....2....\n") == 0);
free(board100821818);
board100821818 = NULL;
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
