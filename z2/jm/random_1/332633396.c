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
uuid: 332633396
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_free_fields(board, 9) == 76 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board553775384 = gamma_board(board);
assert( board553775384 != NULL );
assert( strcmp(board553775384, 
"......8.\n"
".9......\n"
"........\n"
"...7.2..\n"
".5...6..\n"
"......2.\n"
"9...31..\n"
".1......\n"
"7.......\n"
"........\n") == 0);
free(board553775384);
board553775384 = NULL;
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );


char* board587386500 = gamma_board(board);
assert( board587386500 != NULL );
assert( strcmp(board587386500, 
"......8.\n"
".9..8...\n"
"..9.....\n"
"...7.22.\n"
".5...6..\n"
".144..2.\n"
"9...31..\n"
".1......\n"
"7.....6.\n"
"........\n") == 0);
free(board587386500);
board587386500 = NULL;
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_free_fields(board, 9) == 58 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_golden_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );


char* board664097940 = gamma_board(board);
assert( board664097940 != NULL );
assert( strcmp(board664097940, 
".....582\n"
".98387..\n"
"..9.....\n"
"4.27.22.\n"
".55.266.\n"
".144.72.\n"
"99..31..\n"
".1......\n"
"7.6...6.\n"
"5.......\n") == 0);
free(board664097940);
board664097940 = NULL;
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 42 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


gamma_delete(board);

    return 0;
}
