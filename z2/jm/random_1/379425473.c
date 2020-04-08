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
uuid: 379425473
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 9, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );


char* board510844506 = gamma_board(board);
assert( board510844506 != NULL );
assert( strcmp(board510844506, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board510844506);
board510844506 = NULL;
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );


char* board988902284 = gamma_board(board);
assert( board988902284 != NULL );
assert( strcmp(board988902284, 
"...\n"
"...\n"
"...\n"
"...\n"
"4..\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board988902284);
board988902284 = NULL;
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );


char* board595326130 = gamma_board(board);
assert( board595326130 != NULL );
assert( strcmp(board595326130, 
"...\n"
"...\n"
".1.\n"
"...\n"
"4..\n"
".4.\n"
"..4\n"
"33.\n"
"..2\n") == 0);
free(board595326130);
board595326130 = NULL;
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 19 );


gamma_delete(board);

    return 0;
}
