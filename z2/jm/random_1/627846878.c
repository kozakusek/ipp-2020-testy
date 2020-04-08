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
uuid: 627846878
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 15, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 15) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board610257291 = gamma_board(board);
assert( board610257291 != NULL );
assert( strcmp(board610257291, 
"....\n"
"....\n"
"....\n"
"...3\n"
"...2\n"
"....\n"
"...4\n"
"...4\n"
"..3.\n"
"....\n"
"4.3.\n"
"....\n"
"....\n"
"..3.\n"
"..12\n") == 0);
free(board610257291);
board610257291 = NULL;
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );


gamma_delete(board);

    return 0;
}
