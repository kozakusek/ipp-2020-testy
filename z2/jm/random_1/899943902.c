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
uuid: 899943902
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 1, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );


char* board175846161 = gamma_board(board);
assert( board175846161 != NULL );
assert( strcmp(board175846161, 
".........\n"
".........\n"
"..1......\n"
"........1\n"
".1.......\n"
"1..11....\n") == 0);
free(board175846161);
board175846161 = NULL;
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );


gamma_delete(board);

    return 0;
}
