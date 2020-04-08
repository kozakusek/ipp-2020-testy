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
uuid: 560316724
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );


char* board843945569 = gamma_board(board);
assert( board843945569 != NULL );
assert( strcmp(board843945569, 
".........6\n"
"..........\n"
"..4.......\n"
"..........\n"
"......3...\n"
"3.....2...\n"
"..........\n") == 0);
free(board843945569);
board843945569 = NULL;
assert( gamma_move(board, 4, 3, 2) == 1 );


char* board394376653 = gamma_board(board);
assert( board394376653 != NULL );
assert( strcmp(board394376653, 
".........6\n"
"..........\n"
"..4.......\n"
"..........\n"
"...4..3...\n"
"3.....2...\n"
"..........\n") == 0);
free(board394376653);
board394376653 = NULL;
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board864117173 = gamma_board(board);
assert( board864117173 != NULL );
assert( strcmp(board864117173, 
"...325...6\n"
".....4....\n"
"..4.......\n"
"....3....6\n"
"..645.3...\n"
"3....62...\n"
".42.......\n") == 0);
free(board864117173);
board864117173 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );


char* board600037699 = gamma_board(board);
assert( board600037699 != NULL );
assert( strcmp(board600037699, 
"...325...6\n"
".....41...\n"
"..4.......\n"
"....3.5..6\n"
"..645.3...\n"
"3...262.5.\n"
".42.......\n") == 0);
free(board600037699);
board600037699 = NULL;
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
