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
uuid: 127647365
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 1, 13, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 5, -1) == 0 );


char* board986419248 = gamma_board(board);
assert( board986419248 != NULL );
assert( strcmp(board986419248, 
".7.1...........\n") == 0);
free(board986419248);
board986419248 = NULL;
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 9, -1) == 0 );
assert( gamma_move(board, 11, 8, -1) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 10, 0) == 1 );
assert( gamma_move(board, 13, 12, -1) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 15, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_free_fields(board, 12) == 12 );


char* board710978340 = gamma_board(board);
assert( board710978340 != NULL );
assert( strcmp(board710978340, 
".7.1......12....\n") == 0);
free(board710978340);
board710978340 = NULL;
assert( gamma_move(board, 13, 4, -1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );


gamma_delete(board);

    return 0;
}
