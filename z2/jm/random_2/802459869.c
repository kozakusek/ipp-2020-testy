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
uuid: 802459869
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 14, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );


char* board328787012 = gamma_board(board);
assert( board328787012 != NULL );
assert( strcmp(board328787012, 
".......\n"
"......6\n"
".61....\n"
".......\n"
"......4\n"
".......\n"
".......\n") == 0);
free(board328787012);
board328787012 = NULL;
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 12, 1, 3) == 1 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 14, 2, 2) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 11, 0, 2) == 1 );
assert( gamma_move(board, 12, 0, 5) == 1 );
assert( gamma_move(board, 12, 1, 2) == 1 );


char* board110802878 = gamma_board(board);
assert( board110802878 != NULL );
assert( strcmp(board110802878, 
"..78..11\n"
"12.107.86\n"
".61.8.13\n"
".12.5...\n"
"111214...4\n"
"1125..9\n"
".7.610..\n") == 0);
free(board110802878);
board110802878 = NULL;
assert( gamma_move(board, 13, 0, 6) == 1 );
assert( gamma_move(board, 13, 6, 1) == 0 );


char* board537543584 = gamma_board(board);
assert( board537543584 != NULL );
assert( strcmp(board537543584, 
"13.78..11\n"
"12.107.86\n"
".61.8.13\n"
".12.5...\n"
"111214...4\n"
"1125..9\n"
".7.610..\n") == 0);
free(board537543584);
board537543584 = NULL;
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 5, 1) == 1 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_free_fields(board, 11) == 13 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_free_fields(board, 12) == 13 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );


char* board886226477 = gamma_board(board);
assert( board886226477 != NULL );
assert( strcmp(board886226477, 
"13.78.711\n"
"1213107586\n"
"661.8.13\n"
".12454..\n"
"11121414274\n"
"1125.139\n"
"57.610..\n") == 0);
free(board886226477);
board886226477 = NULL;
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 14, 5, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 3, 4) == 1 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );


char* board804850632 = gamma_board(board);
assert( board804850632 != NULL );
assert( strcmp(board804850632, 
"13578.711\n"
"1213107586\n"
"661118.13\n"
".124541.\n"
"111214142144\n"
"11251139\n"
"57.610..\n") == 0);
free(board804850632);
board804850632 = NULL;


char* board869935344 = gamma_board(board);
assert( board869935344 != NULL );
assert( strcmp(board869935344, 
"13578.711\n"
"1213107586\n"
"661118.13\n"
".124541.\n"
"111214142144\n"
"11251139\n"
"57.610..\n") == 0);
free(board869935344);
board869935344 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 6, 6) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 4, 6) == 1 );
assert( gamma_move(board, 13, 2, 2) == 0 );
assert( gamma_move(board, 14, 3, 6) == 0 );
assert( gamma_move(board, 14, 1, 3) == 0 );


gamma_delete(board);

    return 0;
}
