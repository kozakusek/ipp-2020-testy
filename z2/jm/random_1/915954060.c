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
uuid: 915954060
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 2, 14, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, -1) == 0 );
assert( gamma_free_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 3, 0) == 0 );


char* board168667251 = gamma_board(board);
assert( board168667251 != NULL );
assert( strcmp(board168667251, 
"6..\n"
".5.\n") == 0);
free(board168667251);
board168667251 = NULL;
assert( gamma_move(board, 11, 2, 1) == 1 );


gamma_delete(board);

    return 0;
}
