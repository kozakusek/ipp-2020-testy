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
uuid: 223527182
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 9, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_golden_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board443914232 = gamma_board(board);
assert( board443914232 != NULL );
assert( strcmp(board443914232, 
".48.3.\n"
"2.32..\n"
"6.9...\n"
".8.765\n"
"...9.5\n"
"4..1.9\n"
".12.65\n"
"46336.\n"
".53.98\n") == 0);
free(board443914232);
board443914232 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_golden_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_golden_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_golden_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );


char* board342538704 = gamma_board(board);
assert( board342538704 != NULL );
assert( strcmp(board342538704, 
".48.3.\n"
"2.321.\n"
"639...\n"
".8.765\n"
"51.945\n"
"4.6179\n"
"712.65\n"
"463364\n"
"153.98\n") == 0);
free(board342538704);
board342538704 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );


char* board972700737 = gamma_board(board);
assert( board972700737 != NULL );
assert( strcmp(board972700737, 
".48.3.\n"
"24321.\n"
"639...\n"
".8.765\n"
"51.945\n"
"4.6179\n"
"712.65\n"
"463364\n"
"153.98\n") == 0);
free(board972700737);
board972700737 = NULL;
assert( gamma_move(board, 1, 5, 0) == 0 );


char* board169000928 = gamma_board(board);
assert( board169000928 != NULL );
assert( strcmp(board169000928, 
".48.3.\n"
"24321.\n"
"639...\n"
".8.765\n"
"51.945\n"
"4.6179\n"
"712.65\n"
"463364\n"
"153.98\n") == 0);
free(board169000928);
board169000928 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
