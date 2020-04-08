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
uuid: 268643429
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 64 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );


char* board760921204 = gamma_board(board);
assert( board760921204 != NULL );
assert( strcmp(board760921204, 
".....4.\n"
".......\n"
"....3..\n"
"4..6..2\n"
".....3.\n"
"6......\n"
".......\n"
".......\n"
"......1\n"
"....45.\n") == 0);
free(board760921204);
board760921204 = NULL;
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );


char* board872879283 = gamma_board(board);
assert( board872879283 != NULL );
assert( strcmp(board872879283, 
".....4.\n"
".......\n"
"....3..\n"
"4..6..2\n"
".....3.\n"
"6.....4\n"
".......\n"
".......\n"
"......1\n"
"....45.\n") == 0);
free(board872879283);
board872879283 = NULL;
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );


char* board466223101 = gamma_board(board);
assert( board466223101 != NULL );
assert( strcmp(board466223101, 
".....4.\n"
"8...1..\n"
"7...32.\n"
"4676..2\n"
".....3.\n"
"6.....4\n"
".......\n"
"....4.5\n"
".2....1\n"
"....45.\n") == 0);
free(board466223101);
board466223101 = NULL;
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 5, 4) == 1 );


char* board552027123 = gamma_board(board);
assert( board552027123 != NULL );
assert( strcmp(board552027123, 
".....4.\n"
"8...1..\n"
"7...32.\n"
"4676..2\n"
".....3.\n"
"6....54\n"
".......\n"
"....4.5\n"
".2....1\n"
"....45.\n") == 0);
free(board552027123);
board552027123 = NULL;
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );


gamma_delete(board);

    return 0;
}
