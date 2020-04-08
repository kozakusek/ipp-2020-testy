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
uuid: 682771692
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 9, 8) == 0 );


char* board933996108 = gamma_board(board);
assert( board933996108 != NULL );
assert( strcmp(board933996108, 
".6.7.6..1.\n"
"...4.3.3.5\n"
"7.76.1...4\n"
"....2.3.54\n"
"..2..25...\n"
"...3...7.6\n"
"762.1..3..\n"
".2....5...\n") == 0);
free(board933996108);
board933996108 = NULL;
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );


gamma_delete(board);

    return 0;
}
