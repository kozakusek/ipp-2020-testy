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
uuid: 593480075
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );


char* board767734712 = gamma_board(board);
assert( board767734712 != NULL );
assert( strcmp(board767734712, 
".....3.\n"
".......\n"
".......\n"
"3......\n"
"......4\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board767734712);
board767734712 = NULL;
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 3, 1, 3) == 0 );


char* board879918687 = gamma_board(board);
assert( board879918687 != NULL );
assert( strcmp(board879918687, 
".....3.\n"
".......\n"
"......2\n"
"3.1....\n"
"1.....4\n"
".3.4...\n"
"....2..\n"
".......\n"
".3.....\n") == 0);
free(board879918687);
board879918687 = NULL;
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );


gamma_delete(board);

    return 0;
}
