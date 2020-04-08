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
uuid: 949808738
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 10, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board931108469 = gamma_board(board);
assert( board931108469 != NULL );
assert( strcmp(board931108469, 
".2...\n"
".....\n"
".....\n"
".....\n"
".....\n"
"...1.\n"
"4....\n"
".....\n"
".....\n"
".3...\n") == 0);
free(board931108469);
board931108469 = NULL;
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );


char* board249037155 = gamma_board(board);
assert( board249037155 != NULL );
assert( strcmp(board249037155, 
".2...\n"
"2..4.\n"
"....2\n"
"....3\n"
".....\n"
"...1.\n"
"4...3\n"
".....\n"
".....\n"
".3...\n") == 0);
free(board249037155);
board249037155 = NULL;
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );


char* board738529675 = gamma_board(board);
assert( board738529675 != NULL );
assert( strcmp(board738529675, 
".2...\n"
"2..4.\n"
"....2\n"
"....3\n"
".....\n"
"...1.\n"
"4...3\n"
".....\n"
"...4.\n"
".3.3.\n") == 0);
free(board738529675);
board738529675 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );


gamma_delete(board);

    return 0;
}
