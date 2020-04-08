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
uuid: 175505874
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 8, 1, 6);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board129240596 = gamma_board(board);
assert( board129240596 != NULL );
assert( strcmp(board129240596, 
".......1.....\n"
".............\n"
".....1.......\n"
".1....1......\n"
".............\n"
"1......1.....\n"
"1............\n"
".............\n") == 0);
free(board129240596);
board129240596 = NULL;
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board385544459 = gamma_board(board);
assert( board385544459 != NULL );
assert( strcmp(board385544459, 
"......11.....\n"
".............\n"
"....11.......\n"
".1...11......\n"
".............\n"
"111....1.....\n"
"1..........1.\n"
".............\n") == 0);
free(board385544459);
board385544459 = NULL;
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_golden_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_golden_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );


char* board605238997 = gamma_board(board);
assert( board605238997 != NULL );
assert( strcmp(board605238997, 
"......111....\n"
"..1..11......\n"
".11.11.......\n"
".1...111.....\n"
".............\n"
"111....1.....\n"
"11.......111.\n"
"......1..1...\n") == 0);
free(board605238997);
board605238997 = NULL;
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );


gamma_delete(board);

    return 0;
}
