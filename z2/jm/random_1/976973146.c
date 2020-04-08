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
uuid: 976973146
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );


char* board322422765 = gamma_board(board);
assert( board322422765 != NULL );
assert( strcmp(board322422765, 
"......\n"
"......\n"
".1....\n"
"......\n"
".....2\n"
"......\n"
"......\n"
"1.....\n") == 0);
free(board322422765);
board322422765 = NULL;
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 30 );


gamma_delete(board);

    return 0;
}
