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
uuid: 143797523
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_move(board, 8, -1, 10) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );


char* board425534777 = gamma_board(board);
assert( board425534777 != NULL );
assert( strcmp(board425534777, 
".......\n"
".....1.\n"
".5.....\n"
".....3.\n"
".......\n"
".......\n"
".......\n"
".......\n"
"...4...\n"
".......\n") == 0);
free(board425534777);
board425534777 = NULL;
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );


char* board318876055 = gamma_board(board);
assert( board318876055 != NULL );
assert( strcmp(board318876055, 
".8.....\n"
"....41.\n"
"25.1..2\n"
".....34\n"
"5...1..\n"
".......\n"
".......\n"
".4...7.\n"
".6.4..1\n"
".3.....\n") == 0);
free(board318876055);
board318876055 = NULL;
assert( gamma_move(board, 4, 5, 8) == 0 );


char* board458703095 = gamma_board(board);
assert( board458703095 != NULL );
assert( strcmp(board458703095, 
".8.....\n"
"....41.\n"
"25.1..2\n"
".....34\n"
"5...1..\n"
".......\n"
".......\n"
".4...7.\n"
".6.4..1\n"
".3.....\n") == 0);
free(board458703095);
board458703095 = NULL;
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_golden_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 6, 7, 5) == 0 );


gamma_delete(board);

    return 0;
}
