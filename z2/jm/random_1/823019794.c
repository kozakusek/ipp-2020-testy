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
uuid: 823019794
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 45 );


char* board192728990 = gamma_board(board);
assert( board192728990 != NULL );
assert( strcmp(board192728990, 
"1...4.14.\n"
"..5.2....\n"
"...35..5.\n"
".4....44.\n"
"4........\n"
"5........\n"
".35..2.1.\n") == 0);
free(board192728990);
board192728990 = NULL;
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


gamma_delete(board);

    return 0;
}
