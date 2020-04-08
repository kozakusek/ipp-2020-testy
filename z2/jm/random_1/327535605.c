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
uuid: 327535605
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board438102577 = gamma_board(board);
assert( board438102577 != NULL );
assert( strcmp(board438102577, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".1....\n") == 0);
free(board438102577);
board438102577 = NULL;
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );


char* board492284184 = gamma_board(board);
assert( board492284184 != NULL );
assert( strcmp(board492284184, 
"..2...\n"
"12..2.\n"
"4.2...\n"
"..3..3\n"
"1.....\n"
".1...3\n"
"..2..3\n"
".1...4\n"
".3.1..\n"
".1.2..\n") == 0);
free(board492284184);
board492284184 = NULL;
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
