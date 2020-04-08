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
uuid: 315437067
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );


char* board542172316 = gamma_board(board);
assert( board542172316 != NULL );
assert( strcmp(board542172316, 
"......\n"
".1....\n"
"...1..\n"
"..3...\n"
"......\n"
"......\n"
"......\n"
"......\n"
"....2.\n") == 0);
free(board542172316);
board542172316 = NULL;
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );


char* board188797747 = gamma_board(board);
assert( board188797747 != NULL );
assert( strcmp(board188797747, 
"......\n"
".1....\n"
"...1..\n"
"..3...\n"
"......\n"
"......\n"
"......\n"
"....1.\n"
"....2.\n") == 0);
free(board188797747);
board188797747 = NULL;
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 5, 9) == 0 );


char* board755580504 = gamma_board(board);
assert( board755580504 != NULL );
assert( strcmp(board755580504, 
".....3\n"
".1....\n"
"...1..\n"
"..3..1\n"
"......\n"
"......\n"
"......\n"
"....1.\n"
"....2.\n") == 0);
free(board755580504);
board755580504 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );


char* board839640428 = gamma_board(board);
assert( board839640428 != NULL );
assert( strcmp(board839640428, 
".....3\n"
".1....\n"
"...1..\n"
"..3..1\n"
"......\n"
"......\n"
"....3.\n"
"....1.\n"
"....2.\n") == 0);
free(board839640428);
board839640428 = NULL;
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );


char* board167019580 = gamma_board(board);
assert( board167019580 != NULL );
assert( strcmp(board167019580, 
".....3\n"
".1....\n"
"1..1..\n"
"..3..1\n"
"1.....\n"
"......\n"
"....3.\n"
"....1.\n"
"....2.\n") == 0);
free(board167019580);
board167019580 = NULL;
assert( gamma_golden_move(board, 3, 0, 4) == 1 );


gamma_delete(board);

    return 0;
}
