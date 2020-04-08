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
uuid: 986429100
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 5, 7);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );


char* board158827999 = gamma_board(board);
assert( board158827999 != NULL );
assert( strcmp(board158827999, 
"..2...\n"
"......\n"
"..3...\n"
"......\n"
"......\n"
".2....\n"
"......\n"
".4....\n") == 0);
free(board158827999);
board158827999 = NULL;
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );


char* board796192221 = gamma_board(board);
assert( board796192221 != NULL );
assert( strcmp(board796192221, 
".12...\n"
"......\n"
"..3...\n"
".....3\n"
"3.....\n"
".2..3.\n"
".45...\n"
".4....\n") == 0);
free(board796192221);
board796192221 = NULL;
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );


gamma_delete(board);

    return 0;
}
