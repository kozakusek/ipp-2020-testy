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
uuid: 453140651
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 4, 6, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );


char* board324321120 = gamma_board(board);
assert( board324321120 != NULL );
assert( strcmp(board324321120, 
"..2......33.\n"
"....6.....1.\n"
"...2........\n"
"............\n") == 0);
free(board324321120);
board324321120 = NULL;
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );


char* board909805740 = gamma_board(board);
assert( board909805740 != NULL );
assert( strcmp(board909805740, 
"..2......33.\n"
"....6.....1.\n"
"...2........\n"
"4.3.........\n") == 0);
free(board909805740);
board909805740 = NULL;
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_golden_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_golden_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );


gamma_delete(board);

    return 0;
}
