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
uuid: 926188685
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );


char* board444728664 = gamma_board(board);
assert( board444728664 != NULL );
assert( strcmp(board444728664, 
".....1....\n"
"..........\n"
"..1.......\n"
"..........\n"
"..........\n"
".......7..\n"
"..........\n") == 0);
free(board444728664);
board444728664 = NULL;
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board509580285 = gamma_board(board);
assert( board509580285 != NULL );
assert( strcmp(board509580285, 
".....1....\n"
"..........\n"
"..1.......\n"
".1........\n"
"..........\n"
".......7..\n"
"..........\n") == 0);
free(board509580285);
board509580285 = NULL;
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 3) == 1 );


char* board138193904 = gamma_board(board);
assert( board138193904 != NULL );
assert( strcmp(board138193904, 
".3...1....\n"
"......25..\n"
"..1.....5.\n"
".1.6......\n"
".....2.45.\n"
"76677..7..\n"
"3........4\n") == 0);
free(board138193904);
board138193904 = NULL;
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 5) == 48 );


char* board799106048 = gamma_board(board);
assert( board799106048 != NULL );
assert( strcmp(board799106048, 
"43...1..3.\n"
"......25..\n"
"..1.....5.\n"
".1.6......\n"
"...3.2.45.\n"
"76677..7..\n"
"3........4\n") == 0);
free(board799106048);
board799106048 = NULL;
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );


gamma_delete(board);

    return 0;
}
