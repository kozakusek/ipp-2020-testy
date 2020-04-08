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
uuid: 774974688
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );


char* board696841489 = gamma_board(board);
assert( board696841489 != NULL );
assert( strcmp(board696841489, 
".8.....16.\n"
"....1.....\n"
"......5..2\n"
"....6.....\n"
".....7..3.\n"
"...443....\n"
".........1\n"
"...6......\n"
".5.....6..\n"
"2..7.4..1.\n") == 0);
free(board696841489);
board696841489 = NULL;
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_golden_move(board, 8, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_golden_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 9) == 1 );


gamma_delete(board);

    return 0;
}
