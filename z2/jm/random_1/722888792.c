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
uuid: 722888792
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board589536066 = gamma_board(board);
assert( board589536066 != NULL );
assert( strcmp(board589536066, 
"4..1......\n"
".......1..\n"
"........1.\n"
"..........\n"
"...3.3....\n"
"..........\n") == 0);
free(board589536066);
board589536066 = NULL;
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 5) == 0 );


char* board114122127 = gamma_board(board);
assert( board114122127 != NULL );
assert( strcmp(board114122127, 
"4..1..33.1\n"
"34...2.1.4\n"
"4.3..4..1.\n"
".........1\n"
"2..3.3.1..\n"
".1..3..414\n") == 0);
free(board114122127);
board114122127 = NULL;
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
