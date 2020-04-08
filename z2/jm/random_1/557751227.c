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
uuid: 557751227
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 7, 6);
assert( board != NULL );




char* board360289866 = gamma_board(board);
assert( board360289866 != NULL );
assert( strcmp(board360289866, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board360289866);
board360289866 = NULL;
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_free_fields(board, 6) == 68 );


char* board332301945 = gamma_board(board);
assert( board332301945 != NULL );
assert( strcmp(board332301945, 
".......\n"
".......\n"
".......\n"
".......\n"
".5....4\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board332301945);
board332301945 = NULL;
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );


char* board144796413 = gamma_board(board);
assert( board144796413 != NULL );
assert( strcmp(board144796413, 
".......\n"
".......\n"
".......\n"
".......\n"
".5....4\n"
".......\n"
".......\n"
".7.....\n"
".......\n"
".......\n") == 0);
free(board144796413);
board144796413 = NULL;
assert( gamma_move(board, 3, 5, 10) == 0 );


char* board780909347 = gamma_board(board);
assert( board780909347 != NULL );
assert( strcmp(board780909347, 
".......\n"
".......\n"
".......\n"
".......\n"
".5....4\n"
".......\n"
".......\n"
".7.....\n"
".......\n"
".......\n") == 0);
free(board780909347);
board780909347 = NULL;
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_free_fields(board, 7) == 65 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board110296838 = gamma_board(board);
assert( board110296838 != NULL );
assert( strcmp(board110296838, 
".......\n"
".......\n"
".......\n"
".......\n"
"75....4\n"
"...6...\n"
".....1.\n"
".7.....\n"
".......\n"
".......\n") == 0);
free(board110296838);
board110296838 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_golden_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_golden_move(board, 7, 8, 5) == 0 );


gamma_delete(board);

    return 0;
}
