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
uuid: 895538691
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );


char* board987991913 = gamma_board(board);
assert( board987991913 != NULL );
assert( strcmp(board987991913, 
"......5.\n"
".2.1..4.\n"
"......6.\n"
".4...15.\n"
"..1.6...\n"
"...2....\n"
"6....2.1\n"
".......1\n") == 0);
free(board987991913);
board987991913 = NULL;
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );


char* board145132129 = gamma_board(board);
assert( board145132129 != NULL );
assert( strcmp(board145132129, 
"......5.\n"
".2.1..4.\n"
"......6.\n"
".4...15.\n"
"..1.6...\n"
"...2....\n"
"6....2.1\n"
".......1\n") == 0);
free(board145132129);
board145132129 = NULL;
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board815512618 = gamma_board(board);
assert( board815512618 != NULL );
assert( strcmp(board815512618, 
"......5.\n"
".221..4.\n"
"......6.\n"
".4...15.\n"
"..1.63..\n"
"...2....\n"
"6...62.1\n"
".......1\n") == 0);
free(board815512618);
board815512618 = NULL;
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );


char* board374217817 = gamma_board(board);
assert( board374217817 != NULL );
assert( strcmp(board374217817, 
"......5.\n"
".221..4.\n"
"......6.\n"
".4...15.\n"
"..1.63..\n"
"...2....\n"
"6...62.1\n"
".......1\n") == 0);
free(board374217817);
board374217817 = NULL;
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
