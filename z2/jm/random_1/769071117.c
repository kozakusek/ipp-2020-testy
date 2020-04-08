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
uuid: 769071117
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );


char* board356064579 = gamma_board(board);
assert( board356064579 != NULL );
assert( strcmp(board356064579, 
"......2\n"
"....1..\n"
".3.....\n"
"....2..\n"
"..1...2\n"
"3......\n") == 0);
free(board356064579);
board356064579 = NULL;
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
