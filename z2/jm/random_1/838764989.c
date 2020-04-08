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
uuid: 838764989
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 11, 2, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );


char* board386243944 = gamma_board(board);
assert( board386243944 != NULL );
assert( strcmp(board386243944, 
".......\n"
"..1....\n"
"..1....\n"
"......1\n"
".......\n"
".....1.\n"
".......\n"
".......\n"
".....1.\n"
"....2..\n"
"..2...2\n") == 0);
free(board386243944);
board386243944 = NULL;
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_golden_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
