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
uuid: 193753353
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_golden_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );


char* board671936485 = gamma_board(board);
assert( board671936485 != NULL );
assert( strcmp(board671936485, 
"...5.....\n"
"...3.3..1\n"
"....4.6..\n"
"...6.....\n"
"......2..\n"
"2....5...\n") == 0);
free(board671936485);
board671936485 = NULL;
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );


char* board723776772 = gamma_board(board);
assert( board723776772 != NULL );
assert( strcmp(board723776772, 
".5.5.....\n"
"...3.3..1\n"
"....4.64.\n"
"...6..3..\n"
"......2..\n"
"2....5...\n") == 0);
free(board723776772);
board723776772 = NULL;
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
