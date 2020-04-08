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
uuid: 235287231
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );


char* board705699884 = gamma_board(board);
assert( board705699884 != NULL );
assert( strcmp(board705699884, 
"....13...\n"
"3......53\n"
"...354...\n"
"..52.4...\n"
"....3.1..\n"
"..3.2.12.\n") == 0);
free(board705699884);
board705699884 = NULL;
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );


gamma_delete(board);

    return 0;
}
