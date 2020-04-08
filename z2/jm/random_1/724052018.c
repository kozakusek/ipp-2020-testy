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
uuid: 724052018
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 13, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 1, 10) == 1 );


char* board360743656 = gamma_board(board);
assert( board360743656 != NULL );
assert( strcmp(board360743656, 
"....\n"
"....\n"
".7.7\n"
"3...\n"
"...6\n"
"....\n"
"....\n"
"6.4.\n"
".24.\n"
"....\n"
"....\n"
".6..\n"
"....\n") == 0);
free(board360743656);
board360743656 = NULL;
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );


char* board958944165 = gamma_board(board);
assert( board958944165 != NULL );
assert( strcmp(board958944165, 
"....\n"
"....\n"
".7.7\n"
"3...\n"
"...6\n"
"....\n"
"....\n"
"6.4.\n"
".24.\n"
"6.5.\n"
"....\n"
".6..\n"
"....\n") == 0);
free(board958944165);
board958944165 = NULL;
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );


char* board901950594 = gamma_board(board);
assert( board901950594 != NULL );
assert( strcmp(board901950594, 
"5...\n"
"..4.\n"
".7.7\n"
"3...\n"
"...6\n"
"..16\n"
"....\n"
"664.\n"
".242\n"
"6.53\n"
"7...\n"
".6..\n"
"5...\n") == 0);
free(board901950594);
board901950594 = NULL;
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );


char* board480817991 = gamma_board(board);
assert( board480817991 != NULL );
assert( strcmp(board480817991, 
"5...\n"
"..4.\n"
"37.7\n"
"3...\n"
"...6\n"
"..16\n"
"....\n"
"664.\n"
".242\n"
"6.53\n"
"7...\n"
".6..\n"
"5..4\n") == 0);
free(board480817991);
board480817991 = NULL;


gamma_delete(board);

    return 0;
}
