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
uuid: 541328288
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );


char* board597760062 = gamma_board(board);
assert( board597760062 != NULL );
assert( strcmp(board597760062, 
"..6.....\n"
"...3...4\n"
"......3.\n"
"........\n"
"...2....\n"
"........\n"
"......1.\n"
"......26\n"
"........\n"
"........\n") == 0);
free(board597760062);
board597760062 = NULL;
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );


char* board189361853 = gamma_board(board);
assert( board189361853 != NULL );
assert( strcmp(board189361853, 
"..6..5..\n"
"..33.1.4\n"
"....2.3.\n"
"........\n"
"...2....\n"
"..1.....\n"
"......1.\n"
"..4...26\n"
"7.......\n"
"........\n") == 0);
free(board189361853);
board189361853 = NULL;
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );


char* board355797038 = gamma_board(board);
assert( board355797038 != NULL );
assert( strcmp(board355797038, 
"..6..5..\n"
"5.33.1.4\n"
"..4.2.3.\n"
"....1...\n"
"..22..4.\n"
"..1.....\n"
"......1.\n"
"..4.3.26\n"
"7.......\n"
"....7...\n") == 0);
free(board355797038);
board355797038 = NULL;
assert( gamma_golden_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_golden_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 3, -1) == 0 );


char* board829773048 = gamma_board(board);
assert( board829773048 != NULL );
assert( strcmp(board829773048, 
"..6.65..\n"
"5.33.1.4\n"
"..7.2.3.\n"
"....1...\n"
".2223.4.\n"
"..1....5\n"
"......1.\n"
".74.3.26\n"
"7...2...\n"
"...47..6\n") == 0);
free(board829773048);
board829773048 = NULL;
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );


gamma_delete(board);

    return 0;
}
