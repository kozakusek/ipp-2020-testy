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
uuid: 375779003
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board879504391 = gamma_board(board);
assert( board879504391 != NULL );
assert( strcmp(board879504391, 
"........\n"
"........\n"
".2......\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board879504391);
board879504391 = NULL;
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board539644998 = gamma_board(board);
assert( board539644998 != NULL );
assert( strcmp(board539644998, 
"........\n"
"3..1..1.\n"
".2.2....\n"
".....1..\n"
".3......\n"
"........\n"
"........\n") == 0);
free(board539644998);
board539644998 = NULL;
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );


gamma_delete(board);

    return 0;
}
