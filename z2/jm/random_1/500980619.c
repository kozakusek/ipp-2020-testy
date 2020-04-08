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
uuid: 500980619
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 9, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_free_fields(board, 3) == 133 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_free_fields(board, 1) == 130 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 128 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_free_fields(board, 2) == 115 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 114 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );


char* board398420872 = gamma_board(board);
assert( board398420872 != NULL );
assert( strcmp(board398420872, 
"........2.....2\n"
"...............\n"
".31......12..2.\n"
"........3.1....\n"
"....1.....13...\n"
"2...1.......2..\n"
"..3.2...1......\n"
"....3......2.3.\n"
"..............3\n") == 0);
free(board398420872);
board398420872 = NULL;
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_free_fields(board, 1) == 112 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 25 );


char* board616439347 = gamma_board(board);
assert( board616439347 != NULL );
assert( strcmp(board616439347, 
"........2..1..2\n"
"...3...........\n"
"331.....112..2.\n"
"........3.1....\n"
"..1.1.....13...\n"
"2...1.......2..\n"
"..3.2.1.1......\n"
"....3......2.3.\n"
"..............3\n") == 0);
free(board616439347);
board616439347 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );


char* board973854901 = gamma_board(board);
assert( board973854901 != NULL );
assert( strcmp(board973854901, 
"........2..1..2\n"
"...3...........\n"
"331.....112..2.\n"
"........3.1....\n"
"..1.1.....13...\n"
"2...1.......22.\n"
".33.2.1.1......\n"
"....3......2.3.\n"
"..............3\n") == 0);
free(board973854901);
board973854901 = NULL;
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_free_fields(board, 3) == 27 );


char* board332932087 = gamma_board(board);
assert( board332932087 != NULL );
assert( strcmp(board332932087, 
"........2..1..2\n"
"...3...........\n"
"331.....112..2.\n"
"........3.1....\n"
"..1.1.....13...\n"
"2...1.......22.\n"
".33.2.1.1..2...\n"
"....3......2.3.\n"
"..............3\n") == 0);
free(board332932087);
board332932087 = NULL;
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board308705265 = gamma_board(board);
assert( board308705265 != NULL );
assert( strcmp(board308705265, 
"........2..1..2\n"
"...3...........\n"
"331.....112..2.\n"
"........3.1....\n"
"..1.1.....13...\n"
"2...1.......22.\n"
".33.2.1.1..2...\n"
"....3......2.3.\n"
"..............3\n") == 0);
free(board308705265);
board308705265 = NULL;
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 1, 1, 5) == 0 );


char* board895336774 = gamma_board(board);
assert( board895336774 != NULL );
assert( strcmp(board895336774, 
"........2..1..2\n"
"...3...........\n"
"331.....112..2.\n"
"........3.1....\n"
"..1.1.....13...\n"
"2...1.......22.\n"
".33.2.1.1..2...\n"
"....3......2.3.\n"
"..............3\n") == 0);
free(board895336774);
board895336774 = NULL;
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );


gamma_delete(board);

    return 0;
}
