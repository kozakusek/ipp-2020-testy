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
uuid: 349882134
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );


char* board356346705 = gamma_board(board);
assert( board356346705 != NULL );
assert( strcmp(board356346705, 
"......3\n"
".1.....\n"
".....1.\n"
"4.2....\n"
".......\n"
".......\n"
"......1\n"
".......\n"
".......\n") == 0);
free(board356346705);
board356346705 = NULL;
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );


char* board397768613 = gamma_board(board);
assert( board397768613 != NULL );
assert( strcmp(board397768613, 
".4....3\n"
".12....\n"
"43...1.\n"
"4.2....\n"
".......\n"
".....5.\n"
"......1\n"
".......\n"
".....2.\n") == 0);
free(board397768613);
board397768613 = NULL;
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );


char* board785250767 = gamma_board(board);
assert( board785250767 != NULL );
assert( strcmp(board785250767, 
".4....3\n"
".12.5..\n"
"434..1.\n"
"4.22...\n"
"5..5...\n"
".....5.\n"
"3.....1\n"
"3..3...\n"
".....2.\n") == 0);
free(board785250767);
board785250767 = NULL;
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );


char* board800902772 = gamma_board(board);
assert( board800902772 != NULL );
assert( strcmp(board800902772, 
".4....3\n"
".12.5..\n"
"434..1.\n"
"4.22...\n"
"5..5...\n"
".....5.\n"
"3.....1\n"
"3..3...\n"
".....2.\n") == 0);
free(board800902772);
board800902772 = NULL;


gamma_delete(board);

    return 0;
}
