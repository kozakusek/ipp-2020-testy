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
uuid: 767498713
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 3, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 3, 0, 6) == 1 );


char* board780063747 = gamma_board(board);
assert( board780063747 != NULL );
assert( strcmp(board780063747, 
"......2..\n"
"....1....\n"
"3........\n"
"3..1.....\n"
".........\n"
"........3\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board780063747);
board780063747 = NULL;
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );


char* board405703157 = gamma_board(board);
assert( board405703157 != NULL );
assert( strcmp(board405703157, 
"....3.21.\n"
"....1....\n"
"3.1......\n"
"3..1..2..\n"
"....1.2..\n"
"3.22..1.3\n"
"11.......\n"
"32.122..3\n"
"...2.2...\n"
"3...212.3\n") == 0);
free(board405703157);
board405703157 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 3, 7) == 0 );


gamma_delete(board);

    return 0;
}
