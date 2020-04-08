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
uuid: 366971311
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 15, 9, 4);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, -1, 13) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );


char* board342831764 = gamma_board(board);
assert( board342831764 != NULL );
assert( strcmp(board342831764, 
"....\n"
"....\n"
"....\n"
"....\n"
"1...\n"
"....\n"
"....\n"
".7..\n"
"...3\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n") == 0);
free(board342831764);
board342831764 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, -1, 15) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_free_fields(board, 9) == 52 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 12) == 1 );


char* board608190252 = gamma_board(board);
assert( board608190252 != NULL );
assert( strcmp(board608190252, 
"....\n"
"....\n"
"...4\n"
"....\n"
"19..\n"
"....\n"
"....\n"
".7..\n"
"...3\n"
"...7\n"
"....\n"
"..4.\n"
"3...\n"
".28.\n"
"....\n") == 0);
free(board608190252);
board608190252 = NULL;
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_golden_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 14) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 2, 11) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_golden_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, -1, 1) == 0 );
assert( gamma_free_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, -1, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
