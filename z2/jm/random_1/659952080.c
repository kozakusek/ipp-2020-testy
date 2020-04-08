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
uuid: 659952080
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board481068540 = gamma_board(board);
assert( board481068540 != NULL );
assert( strcmp(board481068540, 
".1.....\n"
"..1....\n"
".......\n"
"...2...\n"
".......\n"
"..2....\n"
"2...3..\n"
".3...3.\n"
".1.....\n") == 0);
free(board481068540);
board481068540 = NULL;
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );


char* board571018585 = gamma_board(board);
assert( board571018585 != NULL );
assert( strcmp(board571018585, 
".1.1...\n"
"331....\n"
"......1\n"
"3..2.2.\n"
".211..3\n"
"..2....\n"
"2...3..\n"
".3.2.3.\n"
".1.....\n") == 0);
free(board571018585);
board571018585 = NULL;
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );


char* board135694452 = gamma_board(board);
assert( board135694452 != NULL );
assert( strcmp(board135694452, 
".1.1...\n"
"331....\n"
"......1\n"
"3..2.2.\n"
".211..3\n"
"..2....\n"
"2...3..\n"
".3.2.3.\n"
".1.....\n") == 0);
free(board135694452);
board135694452 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );


gamma_delete(board);

    return 0;
}
