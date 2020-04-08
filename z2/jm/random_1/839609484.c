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
uuid: 839609484
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board333110448 = gamma_board(board);
assert( board333110448 != NULL );
assert( strcmp(board333110448, 
"..24..1.2\n"
".4...42..\n"
"........5\n"
"..31...24\n"
".........\n"
"34.....55\n") == 0);
free(board333110448);
board333110448 = NULL;
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );


gamma_delete(board);

    return 0;
}
