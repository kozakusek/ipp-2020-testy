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
uuid: 656777486
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_golden_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );


char* board830563978 = gamma_board(board);
assert( board830563978 != NULL );
assert( strcmp(board830563978, 
"..2.22\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"....3.\n"
"......\n"
"....3.\n") == 0);
free(board830563978);
board830563978 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 10) == 0 );


char* board279418558 = gamma_board(board);
assert( board279418558 != NULL );
assert( strcmp(board279418558, 
"..2.22\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"....3.\n"
"......\n"
"....3.\n") == 0);
free(board279418558);
board279418558 = NULL;
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );


char* board944743322 = gamma_board(board);
assert( board944743322 != NULL );
assert( strcmp(board944743322, 
".32.22\n"
"2.....\n"
"......\n"
"....1.\n"
"......\n"
"....33\n"
"..2...\n"
".1..33\n"
"......\n"
"....31\n") == 0);
free(board944743322);
board944743322 = NULL;
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );


char* board214005924 = gamma_board(board);
assert( board214005924 != NULL );
assert( strcmp(board214005924, 
".32.22\n"
"23....\n"
"......\n"
"....1.\n"
"....1.\n"
"..2.33\n"
"..2.1.\n"
".1..33\n"
"......\n"
"....31\n") == 0);
free(board214005924);
board214005924 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );


gamma_delete(board);

    return 0;
}
