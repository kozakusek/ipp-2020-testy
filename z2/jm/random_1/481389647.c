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
uuid: 481389647
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 0, 5) == 1 );


char* board551265794 = gamma_board(board);
assert( board551265794 != NULL );
assert( strcmp(board551265794, 
"1...2..\n"
".......\n"
"..4....\n"
"...3...\n"
".31....\n"
"...4...\n") == 0);
free(board551265794);
board551265794 = NULL;
assert( gamma_move(board, 2, 6, 0) == 1 );


char* board771622232 = gamma_board(board);
assert( board771622232 != NULL );
assert( strcmp(board771622232, 
"1...2..\n"
".......\n"
"..4....\n"
"...3...\n"
".31....\n"
"...4..2\n") == 0);
free(board771622232);
board771622232 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board554910716 = gamma_board(board);
assert( board554910716 != NULL );
assert( strcmp(board554910716, 
"1...21.\n"
".......\n"
"..4....\n"
"...3...\n"
".31....\n"
"...4..2\n") == 0);
free(board554910716);
board554910716 = NULL;
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );


char* board896352198 = gamma_board(board);
assert( board896352198 != NULL );
assert( strcmp(board896352198, 
"1.2.21.\n"
".2.....\n"
"..4.3..\n"
"...3...\n"
".315..5\n"
"...4..2\n") == 0);
free(board896352198);
board896352198 = NULL;
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );


gamma_delete(board);

    return 0;
}
