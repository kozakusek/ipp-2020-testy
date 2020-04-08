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
uuid: 303545157
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 10, 8, 8);
assert( board != NULL );


assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 138 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_golden_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_golden_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );


char* board637539097 = gamma_board(board);
assert( board637539097 != NULL );
assert( strcmp(board637539097, 
"..1.......8...\n"
"............7.\n"
".........4....\n"
"...1......2.26\n"
"........8...3.\n"
"...........2..\n"
"............5.\n"
"..............\n"
"...5...31.8...\n"
"......7.......\n") == 0);
free(board637539097);
board637539097 = NULL;
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_free_fields(board, 8) == 121 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );


char* board765731375 = gamma_board(board);
assert( board765731375 != NULL );
assert( strcmp(board765731375, 
"..1.......8...\n"
"..8.......1.7.\n"
".........4....\n"
"5..1......2.26\n"
"...3....8...3.\n"
"...........2..\n"
"............5.\n"
"..............\n"
"...5...31.8...\n"
"......7.......\n") == 0);
free(board765731375);
board765731375 = NULL;
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 11, -1) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_free_fields(board, 8) == 116 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_free_fields(board, 3) == 115 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_free_fields(board, 8) == 105 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board717012135 = gamma_board(board);
assert( board717012135 != NULL );
assert( strcmp(board717012135, 
"..1....2..8...\n"
"..3...3...1.7.\n"
".........4....\n"
"55.1....4.2.26\n"
"...3....88..3.\n"
"..2...2.8.42..\n"
"8.2.1...5.425.\n"
".8...7..4.....\n"
".6.5.6.3188...\n"
"......7....6..\n") == 0);
free(board717012135);
board717012135 = NULL;
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board689246646 = gamma_board(board);
assert( board689246646 != NULL );
assert( strcmp(board689246646, 
"..1..2.2..8...\n"
"..3...3...1.7.\n"
".........4....\n"
"55.1....4.2626\n"
"...3....88..3.\n"
"..2...2.8.42..\n"
"8.2.1...5.425.\n"
".8...7..4.....\n"
".6.5.6.3188...\n"
"......7....6..\n") == 0);
free(board689246646);
board689246646 = NULL;
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_free_fields(board, 4) == 94 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );


char* board558268495 = gamma_board(board);
assert( board558268495 != NULL );
assert( strcmp(board558268495, 
"..1..2.2..8...\n"
"..3...3...1.7.\n"
"......6..4....\n"
"55.1....4.2626\n"
"...3....88..3.\n"
"..2.7.2.8.42.4\n"
"8.2.1...5.425.\n"
".8...7..4.....\n"
".6.516.3188...\n"
"...3..7....6..\n") == 0);
free(board558268495);
board558268495 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_free_fields(board, 8) == 87 );
assert( gamma_golden_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_move(board, 4, 1, 13) == 0 );


gamma_delete(board);

    return 0;
}
