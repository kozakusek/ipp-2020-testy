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
uuid: 558211195
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );


char* board212235425 = gamma_board(board);
assert( board212235425 != NULL );
assert( strcmp(board212235425, 
"..1.......\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
".....2....\n") == 0);
free(board212235425);
board212235425 = NULL;
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board874923047 = gamma_board(board);
assert( board874923047 != NULL );
assert( strcmp(board874923047, 
"..1.8..6..\n"
"..........\n"
"..........\n"
"..........\n"
".1........\n"
"..........\n"
"..........\n"
"..........\n"
".....2....\n") == 0);
free(board874923047);
board874923047 = NULL;
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_golden_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_free_fields(board, 8) == 76 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_golden_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );


char* board543753882 = gamma_board(board);
assert( board543753882 != NULL );
assert( strcmp(board543753882, 
".31.8..673\n"
".6.......4\n"
".....2..72\n"
"........25\n"
".1........\n"
"....36....\n"
"4.........\n"
"...7....3.\n"
"2....2....\n") == 0);
free(board543753882);
board543753882 = NULL;
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_golden_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
