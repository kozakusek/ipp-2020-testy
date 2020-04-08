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
uuid: 180034276
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );


char* board989252578 = gamma_board(board);
assert( board989252578 != NULL );
assert( strcmp(board989252578, 
"..8......\n"
".........\n"
".4.......\n"
".........\n"
"6...4....\n"
".........\n"
"8.3......\n") == 0);
free(board989252578);
board989252578 = NULL;
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_golden_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );


gamma_delete(board);

    return 0;
}
