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
uuid: 397827477
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );


char* board850654441 = gamma_board(board);
assert( board850654441 != NULL );
assert( strcmp(board850654441, 
"........\n"
"........\n"
".......5\n"
".....3..\n"
"...2...3\n"
".4....4.\n"
"...5....\n"
"........\n"
"..13...2\n"
"........\n") == 0);
free(board850654441);
board850654441 = NULL;
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_golden_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );


char* board857547674 = gamma_board(board);
assert( board857547674 != NULL );
assert( strcmp(board857547674, 
"...14...\n"
"...45...\n"
".......5\n"
"..2..32.\n"
"...2.533\n"
"34....4.\n"
"2..5..4.\n"
"..52..31\n"
"3513.1.2\n"
"......5.\n") == 0);
free(board857547674);
board857547674 = NULL;
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_golden_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


gamma_delete(board);

    return 0;
}
