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
uuid: 443975278
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );


char* board207410994 = gamma_board(board);
assert( board207410994 != NULL );
assert( strcmp(board207410994, 
"........\n"
"........\n"
"........\n"
"........\n"
"......3.\n"
"........\n") == 0);
free(board207410994);
board207410994 = NULL;
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, -1, 6) == 0 );


char* board769033137 = gamma_board(board);
assert( board769033137 != NULL );
assert( strcmp(board769033137, 
"......1.\n"
"...24...\n"
"....4...\n"
".2......\n"
"......3.\n"
"........\n") == 0);
free(board769033137);
board769033137 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );


char* board198634531 = gamma_board(board);
assert( board198634531 != NULL );
assert( strcmp(board198634531, 
"..3...14\n"
"...24...\n"
"..124...\n"
".2......\n"
"......3.\n"
"3.....1.\n") == 0);
free(board198634531);
board198634531 = NULL;
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );


gamma_delete(board);

    return 0;
}
