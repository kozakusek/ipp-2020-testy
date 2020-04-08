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
uuid: 788622811
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );


char* board703848161 = gamma_board(board);
assert( board703848161 != NULL );
assert( strcmp(board703848161, 
"........\n"
"........\n"
"........\n"
"...3....\n"
"..1.....\n"
"........\n") == 0);
free(board703848161);
board703848161 = NULL;
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 4) == 38 );


char* board677652735 = gamma_board(board);
assert( board677652735 != NULL );
assert( strcmp(board677652735, 
".53.....\n"
"........\n"
".......4\n"
".5.3....\n"
"5.1...1.\n"
"6..2....\n") == 0);
free(board677652735);
board677652735 = NULL;
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );


gamma_delete(board);

    return 0;
}
