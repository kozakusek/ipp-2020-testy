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
uuid: 462773796
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 11, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board427857427 = gamma_board(board);
assert( board427857427 != NULL );
assert( strcmp(board427857427, 
"..4\n"
"...\n"
"...\n"
"...\n"
"3.2\n"
"...\n"
"...\n"
"...\n"
"6..\n"
"...\n"
"...\n") == 0);
free(board427857427);
board427857427 = NULL;
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 26 );


gamma_delete(board);

    return 0;
}
