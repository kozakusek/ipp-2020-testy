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
uuid: 202654260
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );


char* board999352121 = gamma_board(board);
assert( board999352121 != NULL );
assert( strcmp(board999352121, 
".....1...\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board999352121);
board999352121 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );


gamma_delete(board);

    return 0;
}
