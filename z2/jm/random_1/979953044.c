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
uuid: 979953044
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );


char* board749200770 = gamma_board(board);
assert( board749200770 != NULL );
assert( strcmp(board749200770, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".3.....\n") == 0);
free(board749200770);
board749200770 = NULL;
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );


char* board363082064 = gamma_board(board);
assert( board363082064 != NULL );
assert( strcmp(board363082064, 
"....5..\n"
"1....42\n"
".....5.\n"
"541....\n"
"..1...3\n"
"34..12.\n"
".3.1...\n") == 0);
free(board363082064);
board363082064 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );


gamma_delete(board);

    return 0;
}
