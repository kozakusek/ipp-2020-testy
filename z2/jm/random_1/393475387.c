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
uuid: 393475387
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 1, 2, -1) == 0 );


char* board806145039 = gamma_board(board);
assert( board806145039 != NULL );
assert( strcmp(board806145039, 
"2.....\n"
"......\n"
"2...3.\n"
"...1..\n"
"..1..2\n"
"..2...\n"
"......\n"
"...1..\n") == 0);
free(board806145039);
board806145039 = NULL;
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 39 );


char* board128784775 = gamma_board(board);
assert( board128784775 != NULL );
assert( strcmp(board128784775, 
"2.....\n"
"......\n"
"2...3.\n"
"...1..\n"
"..1..2\n"
"2.2...\n"
"......\n"
"...1..\n") == 0);
free(board128784775);
board128784775 = NULL;
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 32 );


char* board963136573 = gamma_board(board);
assert( board963136573 != NULL );
assert( strcmp(board963136573, 
"2.2.1.\n"
"......\n"
"2...3.\n"
"...123\n"
"3.1.12\n"
"2.2...\n"
"3.....\n"
"...1..\n") == 0);
free(board963136573);
board963136573 = NULL;
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
