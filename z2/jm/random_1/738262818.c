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
uuid: 738262818
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );


char* board611569032 = gamma_board(board);
assert( board611569032 != NULL );
assert( strcmp(board611569032, 
"3...46.54.\n"
".....1....\n"
".....2.1..\n"
"2.....2...\n"
"4..6......\n"
"....52....\n") == 0);
free(board611569032);
board611569032 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_golden_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
