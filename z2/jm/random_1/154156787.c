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
uuid: 154156787
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );


char* board962747127 = gamma_board(board);
assert( board962747127 != NULL );
assert( strcmp(board962747127, 
"....1.\n"
"....3.\n"
"......\n"
"..21.4\n"
"......\n"
".1....\n") == 0);
free(board962747127);
board962747127 = NULL;
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );


char* board113076200 = gamma_board(board);
assert( board113076200 != NULL );
assert( strcmp(board113076200, 
"....1.\n"
"...43.\n"
"......\n"
"1.21.4\n"
"....2.\n"
".1....\n") == 0);
free(board113076200);
board113076200 = NULL;
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
