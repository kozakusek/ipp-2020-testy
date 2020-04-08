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
uuid: 565264749
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );


char* board383952310 = gamma_board(board);
assert( board383952310 != NULL );
assert( strcmp(board383952310, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"....2..\n"
"...5..2\n"
".......\n"
".......\n") == 0);
free(board383952310);
board383952310 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_golden_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );


char* board351923514 = gamma_board(board);
assert( board351923514 != NULL );
assert( strcmp(board351923514, 
".......\n"
"631....\n"
"...41.4\n"
"......6\n"
".2.5.56\n"
"...42.2\n"
"...5..3\n"
".......\n"
"...5...\n") == 0);
free(board351923514);
board351923514 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


gamma_delete(board);

    return 0;
}
