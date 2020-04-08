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
uuid: 378402021
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 7, 7);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 39 );


char* board492718065 = gamma_board(board);
assert( board492718065 != NULL );
assert( strcmp(board492718065, 
".......\n"
"......3\n"
".......\n"
".......\n"
"...2...\n"
"4......\n") == 0);
free(board492718065);
board492718065 = NULL;
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_free_fields(board, 7) == 35 );


char* board267898378 = gamma_board(board);
assert( board267898378 != NULL );
assert( strcmp(board267898378, 
"..1...5\n"
"3.....3\n"
"....7..\n"
".......\n"
"...2...\n"
"4......\n") == 0);
free(board267898378);
board267898378 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_golden_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );


gamma_delete(board);

    return 0;
}
