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
uuid: 165428670
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board664789499 = gamma_board(board);
assert( board664789499 != NULL );
assert( strcmp(board664789499, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".6...1..\n"
"......5.\n"
"........\n"
"7.......\n"
".....1..\n") == 0);
free(board664789499);
board664789499 = NULL;
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_free_fields(board, 3) == 63 );


char* board155752094 = gamma_board(board);
assert( board155752094 != NULL );
assert( strcmp(board155752094, 
"4.......\n"
"..3..7.2\n"
"........\n"
"..5..7.6\n"
"....6...\n"
".6...16.\n"
"......5.\n"
"........\n"
"7......4\n"
".....155\n") == 0);
free(board155752094);
board155752094 = NULL;
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board867902116 = gamma_board(board);
assert( board867902116 != NULL );
assert( strcmp(board867902116, 
"4.......\n"
"6.3..7.2\n"
"........\n"
"..5..7.6\n"
"....6...\n"
".65..16.\n"
"......5.\n"
"........\n"
"77.....4\n"
".....155\n") == 0);
free(board867902116);
board867902116 = NULL;
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );


gamma_delete(board);

    return 0;
}
