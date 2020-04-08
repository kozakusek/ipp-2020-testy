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
uuid: 773018371
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 4, 12, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );


char* board401546286 = gamma_board(board);
assert( board401546286 != NULL );
assert( strcmp(board401546286, 
"......6\n"
"1.22...\n"
".......\n"
"5......\n") == 0);
free(board401546286);
board401546286 = NULL;
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_golden_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_golden_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_free_fields(board, 11) == 14 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_move(board, 12, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );


gamma_delete(board);

    return 0;
}
