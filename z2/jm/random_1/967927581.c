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
uuid: 967927581
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 8, 5);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 100 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_free_fields(board, 2) == 92 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );


char* board767817400 = gamma_board(board);
assert( board767817400 != NULL );
assert( strcmp(board767817400, 
"..........\n"
".........4\n"
"6.........\n"
".3........\n"
".........2\n"
"...4.....2\n"
"..8.......\n"
"..........\n"
"..........\n"
".........6\n") == 0);
free(board767817400);
board767817400 = NULL;
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_free_fields(board, 8) == 89 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 87 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_free_fields(board, 6) == 87 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 8, 2, -1) == 0 );
assert( gamma_golden_move(board, 2, 8, 9) == 0 );


char* board895220650 = gamma_board(board);
assert( board895220650 != NULL );
assert( strcmp(board895220650, 
".1....8...\n"
"..4...6..4\n"
"6.........\n"
".3........\n"
".........2\n"
"..74.....2\n"
"..8.......\n"
"..........\n"
".....5....\n"
".........6\n") == 0);
free(board895220650);
board895220650 = NULL;
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );


char* board295945650 = gamma_board(board);
assert( board295945650 != NULL );
assert( strcmp(board295945650, 
".1....8...\n"
"7.4...6..4\n"
"6.........\n"
".3........\n"
".........2\n"
"..74.....2\n"
"..8.......\n"
"...3......\n"
".....5....\n"
".........6\n") == 0);
free(board295945650);
board295945650 = NULL;
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_golden_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_free_fields(board, 6) == 77 );


char* board170216945 = gamma_board(board);
assert( board170216945 != NULL );
assert( strcmp(board170216945, 
".1....8...\n"
"7.4.4.6..4\n"
"6.........\n"
".32.......\n"
"....1...52\n"
"..746....2\n"
"..8....3..\n"
"...3......\n"
".....58...\n"
".........6\n") == 0);
free(board170216945);
board170216945 = NULL;
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_move(board, 3, 3, 7) == 0 );


char* board370319095 = gamma_board(board);
assert( board370319095 != NULL );
assert( strcmp(board370319095, 
".1.5..8...\n"
"7.4.4.6..4\n"
"6....1....\n"
".32.......\n"
"..1.1...52\n"
"..746..8.2\n"
"..8....3..\n"
"...3.....2\n"
".....58...\n"
".........6\n") == 0);
free(board370319095);
board370319095 = NULL;
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board106803456 = gamma_board(board);
assert( board106803456 != NULL );
assert( strcmp(board106803456, 
".1.5..8...\n"
"7.4.4.6..4\n"
"6....1....\n"
".32.......\n"
"5.1.1...52\n"
"..746..8.2\n"
"..8....3..\n"
"...3.....2\n"
".....58...\n"
".........6\n") == 0);
free(board106803456);
board106803456 = NULL;
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board962000741 = gamma_board(board);
assert( board962000741 != NULL );
assert( strcmp(board962000741, 
".1.5..8...\n"
"7.4.4.6..4\n"
"6....1....\n"
".32.......\n"
"5.1.1...52\n"
"..746..8.2\n"
"..8....3..\n"
"...3..8..2\n"
".....58...\n"
"2........6\n") == 0);
free(board962000741);
board962000741 = NULL;
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_golden_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );


char* board554253642 = gamma_board(board);
assert( board554253642 != NULL );
assert( strcmp(board554253642, 
".1.5..84.5\n"
"7.4.4.6..4\n"
"6....1....\n"
".32.......\n"
"5.1.17..52\n"
"..7461.8.2\n"
"..8...33..\n"
"...3..8..2\n"
".....58...\n"
"2........6\n") == 0);
free(board554253642);
board554253642 = NULL;
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );


gamma_delete(board);

    return 0;
}
