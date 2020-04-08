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
uuid: 762861352
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );


char* board654809639 = gamma_board(board);
assert( board654809639 != NULL );
assert( strcmp(board654809639, 
"......4\n"
"6.3.6..\n"
".......\n"
"1251..3\n"
".1..3..\n"
"35....2\n") == 0);
free(board654809639);
board654809639 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );


char* board904426126 = gamma_board(board);
assert( board904426126 != NULL );
assert( strcmp(board904426126, 
"6.....4\n"
"6.3.6..\n"
"..2.5..\n"
"1251..3\n"
".1..3.5\n"
"355...2\n") == 0);
free(board904426126);
board904426126 = NULL;


gamma_delete(board);

    return 0;
}
