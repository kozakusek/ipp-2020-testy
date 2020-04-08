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
uuid: 947659693
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board374240619 = gamma_board(board);
assert( board374240619 != NULL );
assert( strcmp(board374240619, 
"..3..1\n"
".31...\n"
"22....\n"
"31...2\n"
".1.2..\n"
"..1...\n"
"......\n") == 0);
free(board374240619);
board374240619 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board715906045 = gamma_board(board);
assert( board715906045 != NULL );
assert( strcmp(board715906045, 
"..3..1\n"
".311.3\n"
"221.2.\n"
"31...2\n"
".1.2..\n"
"..1...\n"
"......\n") == 0);
free(board715906045);
board715906045 = NULL;
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 2) == 1 );


gamma_delete(board);

    return 0;
}
