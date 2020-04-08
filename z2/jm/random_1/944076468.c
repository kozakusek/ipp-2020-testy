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
uuid: 944076468
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 11, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_free_fields(board, 1) == 42 );


char* board299783618 = gamma_board(board);
assert( board299783618 != NULL );
assert( strcmp(board299783618, 
"....\n"
".1..\n"
"....\n"
"....\n"
".2..\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n") == 0);
free(board299783618);
board299783618 = NULL;
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 6) == 0 );


char* board669326081 = gamma_board(board);
assert( board669326081 != NULL );
assert( strcmp(board669326081, 
"....\n"
".1..\n"
"..1.\n"
"....\n"
".2..\n"
"....\n"
"....\n"
"1.2.\n"
"....\n"
"....\n"
"....\n") == 0);
free(board669326081);
board669326081 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board107428654 = gamma_board(board);
assert( board107428654 != NULL );
assert( strcmp(board107428654, 
"....\n"
".1..\n"
"..1.\n"
"....\n"
".2..\n"
"....\n"
"2...\n"
"1.2.\n"
"....\n"
"1...\n"
"....\n") == 0);
free(board107428654);
board107428654 = NULL;
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );


char* board559325623 = gamma_board(board);
assert( board559325623 != NULL );
assert( strcmp(board559325623, 
"....\n"
".1..\n"
"..1.\n"
"....\n"
".2..\n"
"....\n"
"23..\n"
"1.2.\n"
"....\n"
"1...\n"
"..3.\n") == 0);
free(board559325623);
board559325623 = NULL;
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );


char* board220360697 = gamma_board(board);
assert( board220360697 != NULL );
assert( strcmp(board220360697, 
"....\n"
".1..\n"
"..1.\n"
"....\n"
".2..\n"
"....\n"
"23..\n"
"1.22\n"
"....\n"
"1...\n"
"..3.\n") == 0);
free(board220360697);
board220360697 = NULL;
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
