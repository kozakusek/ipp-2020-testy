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
uuid: 444095106
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 4, 13, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );


char* board712342720 = gamma_board(board);
assert( board712342720 != NULL );
assert( strcmp(board712342720, 
"....4\n"
".7...\n"
"..526\n"
"..12.\n") == 0);
free(board712342720);
board712342720 = NULL;
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 12, 1, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_move(board, 13, 0, 0) == 0 );


char* board866088142 = gamma_board(board);
assert( board866088142 != NULL );
assert( strcmp(board866088142, 
"11...4\n"
".7...\n"
".8526\n"
"9812.\n") == 0);
free(board866088142);
board866088142 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_free_fields(board, 8) == 5 );


char* board155628068 = gamma_board(board);
assert( board155628068 != NULL );
assert( strcmp(board155628068, 
"11.824\n"
".7.4.\n"
".8526\n"
"98174\n") == 0);
free(board155628068);
board155628068 = NULL;
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 13, 3, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_free_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 3, 3) == 0 );
assert( gamma_move(board, 13, 2, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
