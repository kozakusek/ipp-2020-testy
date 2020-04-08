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
uuid: 799276237
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 71 );


char* board107047931 = gamma_board(board);
assert( board107047931 != NULL );
assert( strcmp(board107047931, 
"3.......1.\n"
"..........\n"
"....2..4..\n"
"......4...\n"
"..........\n"
"......3...\n"
"1......1..\n"
"........2.\n") == 0);
free(board107047931);
board107047931 = NULL;
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 11 );


char* board214402305 = gamma_board(board);
assert( board214402305 != NULL );
assert( strcmp(board214402305, 
"3....2..1.\n"
"..........\n"
"....21.4..\n"
".4....4...\n"
".3....2...\n"
"......3...\n"
"1..3...1..\n"
"........2.\n") == 0);
free(board214402305);
board214402305 = NULL;
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board726984702 = gamma_board(board);
assert( board726984702 != NULL );
assert( strcmp(board726984702, 
"3....2..1.\n"
"..........\n"
"....21.4..\n"
".4....4...\n"
".3....2...\n"
"......3...\n"
"1..3...1..\n"
"........2.\n") == 0);
free(board726984702);
board726984702 = NULL;
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
