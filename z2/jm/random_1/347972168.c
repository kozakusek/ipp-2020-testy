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
uuid: 347972168
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board958787913 = gamma_board(board);
assert( board958787913 != NULL );
assert( strcmp(board958787913, 
"..........\n"
"..........\n"
".........4\n"
"..........\n"
"..........\n"
"..........\n"
"......3...\n"
"..........\n") == 0);
free(board958787913);
board958787913 = NULL;
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );


char* board510448989 = gamma_board(board);
assert( board510448989 != NULL );
assert( strcmp(board510448989, 
"..........\n"
"......2...\n"
"....3....4\n"
"..........\n"
"..........\n"
".11..3....\n"
"......3..1\n"
".....4....\n") == 0);
free(board510448989);
board510448989 = NULL;
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );


char* board853433807 = gamma_board(board);
assert( board853433807 != NULL );
assert( strcmp(board853433807, 
"..........\n"
".....22...\n"
"....3....4\n"
"..........\n"
"..........\n"
".11..3....\n"
"....4.3..1\n"
".....4..1.\n") == 0);
free(board853433807);
board853433807 = NULL;
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 2, 7, -1) == 0 );


char* board551268511 = gamma_board(board);
assert( board551268511 != NULL );
assert( strcmp(board551268511, 
"3...22....\n"
"....422...\n"
"....3....4\n"
"....4....1\n"
"..........\n"
".11..3....\n"
"....4.3..1\n"
".....4..1.\n") == 0);
free(board551268511);
board551268511 = NULL;
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board517098138 = gamma_board(board);
assert( board517098138 != NULL );
assert( strcmp(board517098138, 
"3...22....\n"
"....422...\n"
"....3....4\n"
"....4....1\n"
"..........\n"
".11..3....\n"
"....4.3..1\n"
".....4..1.\n") == 0);
free(board517098138);
board517098138 = NULL;
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
