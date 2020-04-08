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
uuid: 287553660
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 4, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 2, 2) == 1 );


char* board780367409 = gamma_board(board);
assert( board780367409 != NULL );
assert( strcmp(board780367409, 
"........2..\n"
"..3.231..22\n"
"...........\n"
"...1.......\n") == 0);
free(board780367409);
board780367409 = NULL;
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );


char* board101588302 = gamma_board(board);
assert( board101588302 != NULL );
assert( strcmp(board101588302, 
"..2.....2..\n"
".33.231..22\n"
"11....1....\n"
".2.1.....3.\n") == 0);
free(board101588302);
board101588302 = NULL;
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
