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
uuid: 287310804
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 12, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );


char* board166673517 = gamma_board(board);
assert( board166673517 != NULL );
assert( strcmp(board166673517, 
"....\n"
"....\n"
"....\n"
"....\n"
".1..\n"
"2...\n"
"...3\n"
"....\n"
"....\n"
"....\n"
"..8.\n"
"....\n") == 0);
free(board166673517);
board166673517 = NULL;
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 2, 3) == 1 );


char* board270263586 = gamma_board(board);
assert( board270263586 != NULL );
assert( strcmp(board270263586, 
"8..2\n"
"..4.\n"
"7.3.\n"
".27.\n"
".1..\n"
"24..\n"
"...3\n"
"....\n"
"..8.\n"
"..6.\n"
".58.\n"
"4...\n") == 0);
free(board270263586);
board270263586 = NULL;
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );


gamma_delete(board);

    return 0;
}
