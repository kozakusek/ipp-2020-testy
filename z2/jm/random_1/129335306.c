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
uuid: 129335306
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 7, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );


char* board283711120 = gamma_board(board);
assert( board283711120 != NULL );
assert( strcmp(board283711120, 
"3...\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n") == 0);
free(board283711120);
board283711120 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );


char* board310428048 = gamma_board(board);
assert( board310428048 != NULL );
assert( strcmp(board310428048, 
"3...\n"
"1..4\n"
"....\n"
"1.3.\n"
"....\n"
"....\n"
"....\n") == 0);
free(board310428048);
board310428048 = NULL;
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 4) == 18 );


gamma_delete(board);

    return 0;
}
