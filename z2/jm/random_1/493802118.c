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
uuid: 493802118
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 5, 8);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );


char* board415468240 = gamma_board(board);
assert( board415468240 != NULL );
assert( strcmp(board415468240, 
".........\n"
".........\n"
".3.......\n"
".........\n"
".........\n"
"......3..\n") == 0);
free(board415468240);
board415468240 = NULL;
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board443610099 = gamma_board(board);
assert( board443610099 != NULL );
assert( strcmp(board443610099, 
"..3......\n"
"..2......\n"
"43.3.....\n"
"4..531...\n"
"..4.....1\n"
".1....34.\n") == 0);
free(board443610099);
board443610099 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );


char* board302416969 = gamma_board(board);
assert( board302416969 != NULL );
assert( strcmp(board302416969, 
"2.3.5.3..\n"
"1.2......\n"
"43.3.3...\n"
"4.2531..4\n"
"5.4..3..1\n"
".12...34.\n") == 0);
free(board302416969);
board302416969 = NULL;
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
