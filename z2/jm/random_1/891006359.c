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
uuid: 891006359
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board391729150 = gamma_board(board);
assert( board391729150 != NULL );
assert( strcmp(board391729150, 
"....3...\n"
"........\n"
".....2..\n"
"...1....\n"
"........\n"
"........\n") == 0);
free(board391729150);
board391729150 = NULL;
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );


char* board138121505 = gamma_board(board);
assert( board138121505 != NULL );
assert( strcmp(board138121505, 
"....32..\n"
"3.3...2.\n"
"....32.2\n"
"...1....\n"
"........\n"
"1.1..12.\n") == 0);
free(board138121505);
board138121505 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );


gamma_delete(board);

    return 0;
}
