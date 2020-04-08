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
uuid: 856580840
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );


char* board745997152 = gamma_board(board);
assert( board745997152 != NULL );
assert( strcmp(board745997152, 
"......\n"
".7...1\n"
"..6...\n"
"......\n"
"2.....\n"
"......\n"
"..1..4\n") == 0);
free(board745997152);
board745997152 = NULL;
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );


char* board585168703 = gamma_board(board);
assert( board585168703 != NULL );
assert( strcmp(board585168703, 
"......\n"
".7...1\n"
"..62..\n"
"....5.\n"
"2...3.\n"
"...1..\n"
"..1..4\n") == 0);
free(board585168703);
board585168703 = NULL;
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_golden_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 26 );


char* board658437093 = gamma_board(board);
assert( board658437093 != NULL );
assert( strcmp(board658437093, 
"....3.\n"
"17..21\n"
"..62..\n"
"....5.\n"
"2...3.\n"
".1614.\n"
"..1..4\n") == 0);
free(board658437093);
board658437093 = NULL;
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, -1, 7) == 0 );


gamma_delete(board);

    return 0;
}
