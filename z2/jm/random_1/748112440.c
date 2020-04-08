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
uuid: 748112440
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 1, 6, 13);
assert( board != NULL );


assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 9, -1) == 0 );


char* board723105060 = gamma_board(board);
assert( board723105060 != NULL );
assert( strcmp(board723105060, 
".............3\n") == 0);
free(board723105060);
board723105060 = NULL;
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 13, -1) == 0 );
assert( gamma_golden_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, -1) == 0 );


gamma_delete(board);

    return 0;
}
