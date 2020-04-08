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
uuid: 332246208
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 13, 8, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 5, -1, 13) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board700721605 = gamma_board(board);
assert( board700721605 != NULL );
assert( strcmp(board700721605, 
".......\n"
".......\n"
".......\n"
".......\n"
"..6....\n"
".4.....\n"
"..36...\n"
".......\n"
"......7\n"
"...82..\n"
".......\n"
".......\n"
".......\n") == 0);
free(board700721605);
board700721605 = NULL;
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );


char* board888340468 = gamma_board(board);
assert( board888340468 != NULL );
assert( strcmp(board888340468, 
".......\n"
".......\n"
".......\n"
".......\n"
"..6....\n"
".4.....\n"
"..36...\n"
".......\n"
"......7\n"
"...82..\n"
".......\n"
".......\n"
"...1...\n") == 0);
free(board888340468);
board888340468 = NULL;
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, -1, 11) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_golden_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );


gamma_delete(board);

    return 0;
}
