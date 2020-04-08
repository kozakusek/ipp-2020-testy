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
uuid: 887989448
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 8, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_free_fields(board, 2) == 151 );
assert( gamma_move(board, 3, 15, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 18, 4) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 2) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 2, 15, 2) == 1 );
assert( gamma_free_fields(board, 2) == 142 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 16, 8) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board326027360 = gamma_board(board);
assert( board326027360 != NULL );
assert( strcmp(board326027360, 
"...................\n"
"..4.5...4......3...\n"
"...................\n"
"..................2\n"
".3.........31......\n"
"..............42...\n"
"...................\n"
"...........1.......\n") == 0);
free(board326027360);
board326027360 = NULL;
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 140 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 138 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_free_fields(board, 5) == 137 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 5, 17, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 133 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_free_fields(board, 1) == 129 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 1 );


char* board248659483 = gamma_board(board);
assert( board248659483 != NULL );
assert( strcmp(board248659483, 
"..............3....\n"
"..4.5...4......3...\n"
"3..........4..4....\n"
"........552......52\n"
".3...3.....31......\n"
"..............42...\n"
"...........5.......\n"
".2.13......1.......\n") == 0);
free(board248659483);
board248659483 = NULL;
assert( gamma_golden_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );


char* board346418814 = gamma_board(board);
assert( board346418814 != NULL );
assert( strcmp(board346418814, 
"..............3....\n"
"..4.5...4......3...\n"
"3..........4..4....\n"
"........552......52\n"
".3...3.....31......\n"
"..............42...\n"
"...........5.......\n"
".2.13......1.......\n") == 0);
free(board346418814);
board346418814 = NULL;
assert( gamma_move(board, 5, 15, 7) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 15, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );


char* board977871604 = gamma_board(board);
assert( board977871604 != NULL );
assert( strcmp(board977871604, 
".5............35...\n"
"..4.55..4...5..3...\n"
"3......2...4..4....\n"
".......4552......52\n"
".3...3.....31......\n"
"...........1..42...\n"
"...........5.......\n"
".2213......1.......\n") == 0);
free(board977871604);
board977871604 = NULL;
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 17, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 18, 3) == 1 );
assert( gamma_golden_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 13, -1) == 0 );
assert( gamma_free_fields(board, 1) == 115 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 16, 5) == 1 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 19, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 17, 0) == 0 );
assert( gamma_move(board, 3, 17, -1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 18, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board120614385 = gamma_board(board);
assert( board120614385 != NULL );
assert( strcmp(board120614385, 
".5............35...\n"
".24.55..4...5..3...\n"
"3......25..4..4.2..\n"
"....1.44552......52\n"
".3..33.....311....2\n"
".1....4....1..42...\n"
"...........5.......\n"
".22131....11.......\n") == 0);
free(board120614385);
board120614385 = NULL;
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 16, 1) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_free_fields(board, 2) == 20 );


gamma_delete(board);

    return 0;
}
