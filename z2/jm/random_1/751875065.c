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
uuid: 751875065
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_golden_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_golden_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_golden_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );


char* board206697801 = gamma_board(board);
assert( board206697801 != NULL );
assert( strcmp(board206697801, 
".1.222...\n"
"........2\n"
"3.1......\n"
"3.......4\n"
".1.33...4\n"
"....2.3.4\n"
"424..2.2.\n") == 0);
free(board206697801);
board206697801 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
