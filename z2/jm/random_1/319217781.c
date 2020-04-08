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
uuid: 319217781
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );


char* board191394611 = gamma_board(board);
assert( board191394611 != NULL );
assert( strcmp(board191394611, 
"1.2.......\n"
"1.....2...\n"
"..........\n"
"3.....122.\n"
".13.3.....\n"
"......1...\n"
"..........\n"
"1.2.....2.\n"
"..3..3....\n") == 0);
free(board191394611);
board191394611 = NULL;
assert( gamma_move(board, 2, 5, 4) == 0 );


char* board945392810 = gamma_board(board);
assert( board945392810 != NULL );
assert( strcmp(board945392810, 
"1.2.......\n"
"1.....2...\n"
"..........\n"
"3.....122.\n"
".13.3.....\n"
"......1...\n"
"..........\n"
"1.2.....2.\n"
"..3..3....\n") == 0);
free(board945392810);
board945392810 = NULL;
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );


char* board574587718 = gamma_board(board);
assert( board574587718 != NULL );
assert( strcmp(board574587718, 
"1.2.......\n"
"1.....2...\n"
"..........\n"
"3.....122.\n"
"313.3.....\n"
"......1...\n"
"..........\n"
"1.2.....2.\n"
"..3..3....\n") == 0);
free(board574587718);
board574587718 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 3, 4, 4) == 0 );


gamma_delete(board);

    return 0;
}
