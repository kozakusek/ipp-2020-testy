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
uuid: 293804859
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );


char* board702798203 = gamma_board(board);
assert( board702798203 != NULL );
assert( strcmp(board702798203, 
".....8....\n"
"2.....3...\n"
"..........\n"
"..1.......\n"
"..........\n"
"5.7.......\n") == 0);
free(board702798203);
board702798203 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_golden_move(board, 7, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_golden_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );


gamma_delete(board);

    return 0;
}
