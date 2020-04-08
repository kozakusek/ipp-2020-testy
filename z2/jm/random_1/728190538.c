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
uuid: 728190538
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 0, 7) == 1 );


char* board355528185 = gamma_board(board);
assert( board355528185 != NULL );
assert( strcmp(board355528185, 
"2....1.\n"
".......\n"
".....21\n"
".......\n"
".......\n"
".......\n"
"....3..\n"
".......\n") == 0);
free(board355528185);
board355528185 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );


char* board415330445 = gamma_board(board);
assert( board415330445 != NULL );
assert( strcmp(board415330445, 
"2....1.\n"
".2.....\n"
".1..321\n"
"..2....\n"
".......\n"
".......\n"
"....3..\n"
".......\n") == 0);
free(board415330445);
board415330445 = NULL;
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board398065940 = gamma_board(board);
assert( board398065940 != NULL );
assert( strcmp(board398065940, 
"2....13\n"
".2....2\n"
".1..321\n"
"..2....\n"
"..31...\n"
"112....\n"
"....3..\n"
"..3...1\n") == 0);
free(board398065940);
board398065940 = NULL;
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 4, 5) == 0 );


gamma_delete(board);

    return 0;
}
