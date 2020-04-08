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
uuid: 770252446
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 6, 8, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );


char* board801021506 = gamma_board(board);
assert( board801021506 != NULL );
assert( strcmp(board801021506, 
"...\n"
".1.\n"
"...\n"
"...\n"
".2.\n"
"...\n") == 0);
free(board801021506);
board801021506 = NULL;
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board705013713 = gamma_board(board);
assert( board705013713 != NULL );
assert( strcmp(board705013713, 
"...\n"
".1.\n"
"...\n"
"...\n"
".2.\n"
"...\n") == 0);
free(board705013713);
board705013713 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );


char* board778795751 = gamma_board(board);
assert( board778795751 != NULL );
assert( strcmp(board778795751, 
".18\n"
".1.\n"
".25\n"
"...\n"
".2.\n"
"..3\n") == 0);
free(board778795751);
board778795751 = NULL;
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );


gamma_delete(board);

    return 0;
}
