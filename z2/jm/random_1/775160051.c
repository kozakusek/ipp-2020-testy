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
uuid: 775160051
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );


char* board336879595 = gamma_board(board);
assert( board336879595 != NULL );
assert( strcmp(board336879595, 
".......\n"
".......\n"
"....2..\n"
"......5\n"
"..4....\n"
"....1..\n"
"3......\n"
".......\n") == 0);
free(board336879595);
board336879595 = NULL;
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );


char* board885382683 = gamma_board(board);
assert( board885382683 != NULL );
assert( strcmp(board885382683, 
"58.....\n"
"......6\n"
".5..2..\n"
".1....5\n"
"..4....\n"
"....1..\n"
"3......\n"
".......\n") == 0);
free(board885382683);
board885382683 = NULL;
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 7, -1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_golden_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
