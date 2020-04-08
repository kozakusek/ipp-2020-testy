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
uuid: 613569290
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );


char* board376143115 = gamma_board(board);
assert( board376143115 != NULL );
assert( strcmp(board376143115, 
".........\n"
".........\n"
".........\n"
"3........\n"
".........\n"
"......8..\n"
".....1...\n"
".........\n"
"......6..\n") == 0);
free(board376143115);
board376143115 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
