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
uuid: 555961019
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 7);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board966987257 = gamma_board(board);
assert( board966987257 != NULL );
assert( strcmp(board966987257, 
"..........\n"
"..........\n"
".45.......\n"
"..........\n"
".1........\n"
".......7..\n"
"..........\n") == 0);
free(board966987257);
board966987257 = NULL;
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_free_fields(board, 7) == 60 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_golden_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );


gamma_delete(board);

    return 0;
}
