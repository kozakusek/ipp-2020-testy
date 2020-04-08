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
uuid: 609527367
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );


char* board580293783 = gamma_board(board);
assert( board580293783 != NULL );
assert( strcmp(board580293783, 
"..1....\n"
".2....3\n"
".2.23..\n"
"..11...\n"
"4..2144\n"
"...4411\n") == 0);
free(board580293783);
board580293783 = NULL;
assert( gamma_move(board, 2, 2, 1) == 1 );


gamma_delete(board);

    return 0;
}
