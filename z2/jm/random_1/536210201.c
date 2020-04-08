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
uuid: 536210201
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 86 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_move(board, 1, 7, 1) == 0 );


char* board252249348 = gamma_board(board);
assert( board252249348 != NULL );
assert( strcmp(board252249348, 
".....3....\n"
".3........\n"
"..32....2.\n"
"22........\n"
".....23...\n"
"..........\n"
"....1...11\n"
"3..2...1..\n"
"....1...1.\n") == 0);
free(board252249348);
board252249348 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );


char* board849617761 = gamma_board(board);
assert( board849617761 != NULL );
assert( strcmp(board849617761, 
".....3....\n"
".3........\n"
"..32....2.\n"
"22........\n"
".....23...\n"
"..........\n"
"....1...11\n"
"3..2...1..\n"
"....1...1.\n") == 0);
free(board849617761);
board849617761 = NULL;
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );


char* board871412047 = gamma_board(board);
assert( board871412047 != NULL );
assert( strcmp(board871412047, 
".....3....\n"
".3........\n"
"..32....2.\n"
"22........\n"
".....23...\n"
"..........\n"
"....1..111\n"
"3..2...1..\n"
"....1...1.\n") == 0);
free(board871412047);
board871412047 = NULL;
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );


char* board846782876 = gamma_board(board);
assert( board846782876 != NULL );
assert( strcmp(board846782876, 
".....3....\n"
".3...1....\n"
"..32....2.\n"
"222.......\n"
".....23...\n"
"..........\n"
"....1..111\n"
"3..2...1..\n"
"...11...1.\n") == 0);
free(board846782876);
board846782876 = NULL;
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );


char* board698216698 = gamma_board(board);
assert( board698216698 != NULL );
assert( strcmp(board698216698, 
".....3....\n"
".3...1....\n"
"..32....2.\n"
"222.......\n"
".....23...\n"
"..........\n"
"....1..111\n"
"3..2...1..\n"
"...11...1.\n") == 0);
free(board698216698);
board698216698 = NULL;
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 9, 1) == 0 );


gamma_delete(board);

    return 0;
}
