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
uuid: 396808149
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );


char* board216318095 = gamma_board(board);
assert( board216318095 != NULL );
assert( strcmp(board216318095, 
"....4....\n"
".....5...\n"
".........\n"
".........\n"
".........\n"
"1........\n"
".......3.\n") == 0);
free(board216318095);
board216318095 = NULL;
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_golden_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_move(board, 5, 0, 7) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


gamma_delete(board);

    return 0;
}
