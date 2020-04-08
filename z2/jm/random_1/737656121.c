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
uuid: 737656121
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );


char* board663514265 = gamma_board(board);
assert( board663514265 != NULL );
assert( strcmp(board663514265, 
"........\n"
"........\n"
"..1.....\n"
"..2.2...\n"
".....1..\n"
"...3....\n") == 0);
free(board663514265);
board663514265 = NULL;
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board451587267 = gamma_board(board);
assert( board451587267 != NULL );
assert( strcmp(board451587267, 
"........\n"
"........\n"
"..1...3.\n"
"..2.2...\n"
".....1..\n"
"...3....\n") == 0);
free(board451587267);
board451587267 = NULL;
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
