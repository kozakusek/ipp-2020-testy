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
uuid: 118173468
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );


char* board519331296 = gamma_board(board);
assert( board519331296 != NULL );
assert( strcmp(board519331296, 
"3........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board519331296);
board519331296 = NULL;
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_free_fields(board, 4) == 71 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 7, 8) == 1 );


char* board124239190 = gamma_board(board);
assert( board124239190 != NULL );
assert( strcmp(board124239190, 
"356..2.4.\n"
"..733..6.\n"
"1...5....\n"
"...2.....\n"
".........\n"
".5.......\n"
"1.4.1..71\n"
"6..6.....\n"
"5..21....\n") == 0);
free(board124239190);
board124239190 = NULL;
assert( gamma_free_fields(board, 7) == 58 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );


gamma_delete(board);

    return 0;
}
