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
uuid: 908092226
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 8, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board219546861 = gamma_board(board);
assert( board219546861 != NULL );
assert( strcmp(board219546861, 
".........2....\n"
"1..........4..\n"
".........3....\n"
".....4..2.....\n"
"..............\n"
"..............\n"
"....113..1..3.\n"
".........4....\n") == 0);
free(board219546861);
board219546861 = NULL;
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );


char* board799102124 = gamma_board(board);
assert( board799102124 != NULL );
assert( strcmp(board799102124, 
".........21...\n"
"1.........144.\n"
".........3....\n"
".....4..2.....\n"
"..............\n"
"...........4..\n"
"....113..1..3.\n"
"......3..4....\n") == 0);
free(board799102124);
board799102124 = NULL;
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 86 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 83 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board320418557 = gamma_board(board);
assert( board320418557 != NULL );
assert( strcmp(board320418557, 
"..3..3...21...\n"
"1.4......3144.\n"
"....4...23....\n"
".....4..2.....\n"
"............11\n"
".........2.41.\n"
"....113..1..32\n"
"......3..4..1.\n") == 0);
free(board320418557);
board320418557 = NULL;
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board629796570 = gamma_board(board);
assert( board629796570 != NULL );
assert( strcmp(board629796570, 
"1.3..3...21...\n"
"1.4......3144.\n"
"....4...23....\n"
".....4..2.....\n"
"............11\n"
"....1....2.41.\n"
".3..113..1..32\n"
"......3..4..1.\n") == 0);
free(board629796570);
board629796570 = NULL;
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 14, -1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
