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
uuid: 345693683
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 1, 5) == 1 );


char* board761814607 = gamma_board(board);
assert( board761814607 != NULL );
assert( strcmp(board761814607, 
"......\n"
"3..3..\n"
"......\n"
".4....\n"
"..4...\n"
"....51\n"
"......\n"
"4.....\n"
"......\n") == 0);
free(board761814607);
board761814607 = NULL;
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
