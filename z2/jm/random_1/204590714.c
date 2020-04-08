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
uuid: 204590714
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_golden_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );


char* board373690126 = gamma_board(board);
assert( board373690126 != NULL );
assert( strcmp(board373690126, 
"24....\n"
"....26\n"
"...7..\n"
".2.5..\n"
".544..\n"
"......\n"
".7....\n") == 0);
free(board373690126);
board373690126 = NULL;
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );


gamma_delete(board);

    return 0;
}
