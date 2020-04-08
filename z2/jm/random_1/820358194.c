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
uuid: 820358194
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 10) == 0 );


char* board172580321 = gamma_board(board);
assert( board172580321 != NULL );
assert( strcmp(board172580321, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board172580321);
board172580321 = NULL;
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board739979372 = gamma_board(board);
assert( board739979372 != NULL );
assert( strcmp(board739979372, 
"33...3.\n"
".1...1.\n"
"....22.\n"
".....2.\n"
"3....21\n"
"3.33..3\n"
"3......\n"
".2...1.\n"
"..1.2..\n"
"2.....2\n") == 0);
free(board739979372);
board739979372 = NULL;
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_free_fields(board, 1) == 14 );


gamma_delete(board);

    return 0;
}
