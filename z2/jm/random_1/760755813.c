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
uuid: 760755813
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 16 );


char* board880025713 = gamma_board(board);
assert( board880025713 != NULL );
assert( strcmp(board880025713, 
".....1\n"
"......\n"
"..1..1\n"
"..1..3\n"
".121..\n"
"1.3.1.\n"
"1.....\n"
".....2\n"
"....2.\n"
"..2...\n") == 0);
free(board880025713);
board880025713 = NULL;
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );


char* board229545654 = gamma_board(board);
assert( board229545654 != NULL );
assert( strcmp(board229545654, 
".....1\n"
"......\n"
"2.1..1\n"
"..1..3\n"
".121..\n"
"113.1.\n"
"1.....\n"
".....2\n"
"....2.\n"
".32...\n") == 0);
free(board229545654);
board229545654 = NULL;
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board143161910 = gamma_board(board);
assert( board143161910 != NULL );
assert( strcmp(board143161910, 
".....1\n"
"......\n"
"2.1..1\n"
"..1..3\n"
".121..\n"
"113.1.\n"
"1...3.\n"
".....2\n"
"....2.\n"
".32...\n") == 0);
free(board143161910);
board143161910 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );


char* board790700282 = gamma_board(board);
assert( board790700282 != NULL );
assert( strcmp(board790700282, 
".....1\n"
"......\n"
"2.1..1\n"
"2.1..3\n"
".121..\n"
"113.1.\n"
"1...3.\n"
".....2\n"
"....2.\n"
".323..\n") == 0);
free(board790700282);
board790700282 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_free_fields(board, 1) == 39 );


char* board455130909 = gamma_board(board);
assert( board455130909 != NULL );
assert( strcmp(board455130909, 
".....1\n"
"......\n"
"2.1..1\n"
"2.1..3\n"
".121..\n"
"113.1.\n"
"1...3.\n"
".....2\n"
"....2.\n"
".323..\n") == 0);
free(board455130909);
board455130909 = NULL;
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );


char* board460113435 = gamma_board(board);
assert( board460113435 != NULL );
assert( strcmp(board460113435, 
".....1\n"
"..3...\n"
"2.1..1\n"
"2.1..3\n"
".121..\n"
"113.1.\n"
"1...3.\n"
".....2\n"
"....2.\n"
".323..\n") == 0);
free(board460113435);
board460113435 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );


char* board452143632 = gamma_board(board);
assert( board452143632 != NULL );
assert( strcmp(board452143632, 
".....1\n"
"..3...\n"
"211..1\n"
"2.13.3\n"
".121..\n"
"113.1.\n"
"1...3.\n"
".....2\n"
"....2.\n"
".323..\n") == 0);
free(board452143632);
board452143632 = NULL;
assert( gamma_move(board, 3, 6, 9) == 0 );


gamma_delete(board);

    return 0;
}
