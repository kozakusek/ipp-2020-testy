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
uuid: 449744877
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board786982447 = gamma_board(board);
assert( board786982447 != NULL );
assert( strcmp(board786982447, 
"..3....\n"
".......\n"
"...5..2\n"
".......\n"
".......\n"
".......\n") == 0);
free(board786982447);
board786982447 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_free_fields(board, 8) == 32 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 28 );


gamma_delete(board);

    return 0;
}
