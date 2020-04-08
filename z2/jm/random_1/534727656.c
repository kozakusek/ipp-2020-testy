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
uuid: 534727656
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 10, 13, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );


char* board732641547 = gamma_board(board);
assert( board732641547 != NULL );
assert( strcmp(board732641547, 
"3..\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board732641547);
board732641547 = NULL;
assert( gamma_move(board, 4, 1, 10) == 0 );


char* board980752854 = gamma_board(board);
assert( board980752854 != NULL );
assert( strcmp(board980752854, 
"3..\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board980752854);
board980752854 = NULL;
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );


char* board564220490 = gamma_board(board);
assert( board564220490 != NULL );
assert( strcmp(board564220490, 
"3..\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"9.7\n"
"...\n"
"...\n"
"...\n") == 0);
free(board564220490);
board564220490 = NULL;
assert( gamma_move(board, 12, 1, 10) == 0 );
assert( gamma_golden_move(board, 12, 3, 2) == 0 );
assert( gamma_move(board, 13, -1, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, -1, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_move(board, 11, 0, 6) == 1 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
