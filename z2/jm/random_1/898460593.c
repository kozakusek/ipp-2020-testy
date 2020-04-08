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
uuid: 898460593
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 10, 5, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_free_fields(board, 3) == 108 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_free_fields(board, 5) == 101 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );


char* board159905322 = gamma_board(board);
assert( board159905322 != NULL );
assert( strcmp(board159905322, 
"...5.......\n"
"...4.....5.\n"
".....3....1\n"
"...4.3.....\n"
"...........\n"
"..........3\n"
"......3....\n"
".2.........\n"
"...3.......\n"
"....1....2.\n") == 0);
free(board159905322);
board159905322 = NULL;
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 90 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );


char* board507203352 = gamma_board(board);
assert( board507203352 != NULL );
assert( strcmp(board507203352, 
".1.5.......\n"
"..54.....5.\n"
".....3....1\n"
".2.4.3.1.4.\n"
"........3.3\n"
"......2...3\n"
"......3....\n"
".2........3\n"
"...3.......\n"
"1...1....2.\n") == 0);
free(board507203352);
board507203352 = NULL;
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );


char* board509302609 = gamma_board(board);
assert( board509302609 != NULL );
assert( strcmp(board509302609, 
".1.5.......\n"
".354.....5.\n"
".....35...1\n"
".2.4.3.1.4.\n"
".....5..3.3\n"
"......2...3\n"
"......3....\n"
".2........3\n"
"...3......4\n"
"1...1....2.\n") == 0);
free(board509302609);
board509302609 = NULL;
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board839093013 = gamma_board(board);
assert( board839093013 != NULL );
assert( strcmp(board839093013, 
".1.5.......\n"
".354.....5.\n"
".....35...1\n"
".214.3.1345\n"
".....5..3.3\n"
"......2...3\n"
"......3....\n"
".2........3\n"
"...32.3...4\n"
"1...1..4.2.\n") == 0);
free(board839093013);
board839093013 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_golden_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_free_fields(board, 4) == 71 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, -1) == 0 );


gamma_delete(board);

    return 0;
}
