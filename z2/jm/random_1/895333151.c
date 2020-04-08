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
uuid: 895333151
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 1, 11, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 16, 0) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 8, 16, 1) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_free_fields(board, 11) == 11 );
assert( gamma_move(board, 1, 11, 1) == 0 );


char* board715247848 = gamma_board(board);
assert( board715247848 != NULL );
assert( strcmp(board715247848, 
"..11...910.42.....3\n") == 0);
free(board715247848);
board715247848 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 15, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );


char* board299891595 = gamma_board(board);
assert( board299891595 != NULL );
assert( strcmp(board299891595, 
"..11...910.42....53\n") == 0);
free(board299891595);
board299891595 = NULL;


gamma_delete(board);

    return 0;
}
