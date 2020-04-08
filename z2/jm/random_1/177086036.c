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
uuid: 177086036
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_golden_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );


char* board164044888 = gamma_board(board);
assert( board164044888 != NULL );
assert( strcmp(board164044888, 
"...5..8...\n"
"..........\n"
"4.....1..8\n"
"...123....\n"
".1........\n"
".6.....4..\n"
".1...2..25\n"
".57....8..\n") == 0);
free(board164044888);
board164044888 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 8, -1, 2) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
