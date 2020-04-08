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
uuid: 490992112
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 40 );


char* board767969042 = gamma_board(board);
assert( board767969042 != NULL );
assert( strcmp(board767969042, 
"......2\n"
"......3\n"
"....3..\n"
"..1.1..\n"
"42..2..\n"
".......\n"
"....3..\n") == 0);
free(board767969042);
board767969042 = NULL;
assert( gamma_move(board, 3, -1, 7) == 0 );


char* board848366710 = gamma_board(board);
assert( board848366710 != NULL );
assert( strcmp(board848366710, 
"......2\n"
"......3\n"
"....3..\n"
"..1.1..\n"
"42..2..\n"
".......\n"
"....3..\n") == 0);
free(board848366710);
board848366710 = NULL;
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );


char* board340192373 = gamma_board(board);
assert( board340192373 != NULL );
assert( strcmp(board340192373, 
"......2\n"
"...2..3\n"
"....3..\n"
"..1.1..\n"
"42..2..\n"
".1.....\n"
"....3..\n") == 0);
free(board340192373);
board340192373 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board190213385 = gamma_board(board);
assert( board190213385 != NULL );
assert( strcmp(board190213385, 
"......2\n"
"...2..3\n"
"....3..\n"
".21.1..\n"
"42..2..\n"
".1.....\n"
"....3..\n") == 0);
free(board190213385);
board190213385 = NULL;
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
