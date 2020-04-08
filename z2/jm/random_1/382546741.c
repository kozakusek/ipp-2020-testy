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
uuid: 382546741
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );


char* board492152497 = gamma_board(board);
assert( board492152497 != NULL );
assert( strcmp(board492152497, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board492152497);
board492152497 = NULL;
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_golden_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 92 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_golden_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 83 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );


char* board532154882 = gamma_board(board);
assert( board532154882 != NULL );
assert( strcmp(board532154882, 
"....4.....\n"
"3..4...2..\n"
".22.......\n"
".14.......\n"
"..........\n"
"..1..3....\n"
"..1.......\n"
".1.2.1..3.\n"
"2...3..4.1\n"
".3....4..1\n") == 0);
free(board532154882);
board532154882 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board997785252 = gamma_board(board);
assert( board997785252 != NULL );
assert( strcmp(board997785252, 
"....4.....\n"
"3..4...2..\n"
".22..3....\n"
".14.......\n"
"........3.\n"
"3.1..3....\n"
".21...1...\n"
".1.2.1..3.\n"
"2...3..4.1\n"
".3....4..1\n") == 0);
free(board997785252);
board997785252 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 2, 0) == 1 );


char* board785418260 = gamma_board(board);
assert( board785418260 != NULL );
assert( strcmp(board785418260, 
"...24.....\n"
"3.44...24.\n"
".22..3....\n"
".14..32...\n"
".....3..3.\n"
"311..3..3.\n"
".21...1...\n"
".1.2.1..3.\n"
"2.1.34.4.1\n"
".34...4.21\n") == 0);
free(board785418260);
board785418260 = NULL;
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
