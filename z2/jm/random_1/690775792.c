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
uuid: 690775792
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );


char* board810577397 = gamma_board(board);
assert( board810577397 != NULL );
assert( strcmp(board810577397, 
"......4\n"
".......\n"
"1......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board810577397);
board810577397 = NULL;
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_golden_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board856106839 = gamma_board(board);
assert( board856106839 != NULL );
assert( strcmp(board856106839, 
"...6.54\n"
".....3.\n"
"1....7.\n"
".1.7...\n"
"6..1.5.\n"
"..7....\n"
"..1.7..\n") == 0);
free(board856106839);
board856106839 = NULL;
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );


gamma_delete(board);

    return 0;
}
