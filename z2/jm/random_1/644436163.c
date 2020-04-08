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
uuid: 644436163
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );


char* board280160873 = gamma_board(board);
assert( board280160873 != NULL );
assert( strcmp(board280160873, 
".......\n"
".......\n"
".......\n"
".13..3.\n"
".......\n"
".4.....\n"
".2.....\n") == 0);
free(board280160873);
board280160873 = NULL;
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board561130114 = gamma_board(board);
assert( board561130114 != NULL );
assert( strcmp(board561130114, 
"113..3.\n"
"35...5.\n"
"....3..\n"
"213..3.\n"
".3.....\n"
"242...5\n"
".2.4...\n") == 0);
free(board561130114);
board561130114 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );


gamma_delete(board);

    return 0;
}
