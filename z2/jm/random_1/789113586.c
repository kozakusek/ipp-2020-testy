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
uuid: 789113586
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 10, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, 11, 8) == 1 );
assert( gamma_free_fields(board, 7) == 134 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_free_fields(board, 4) == 131 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_free_fields(board, 2) == 126 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 117 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board951824320 = gamma_board(board);
assert( board951824320 != NULL );
assert( strcmp(board951824320, 
".....4........\n"
"...........7..\n"
".2...3.1...8..\n"
".......82.44..\n"
".............6\n"
"......5.8.....\n"
".8....1...6.2.\n"
"..............\n"
"..3...7....2..\n"
"1..6.5.....4..\n") == 0);
free(board951824320);
board951824320 = NULL;
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 7, -1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_golden_move(board, 8, 1, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 6) == 1 );


char* board224045380 = gamma_board(board);
assert( board224045380 != NULL );
assert( strcmp(board224045380, 
".....4........\n"
"..64...4...7.1\n"
".2...3.1...8..\n"
".6.....82.44..\n"
"6...7........6\n"
"......5.8.....\n"
".8..6.1...6.2.\n"
"1..3...8....52\n"
"..3...7....2..\n"
"1..6.5.....4..\n") == 0);
free(board224045380);
board224045380 = NULL;
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_free_fields(board, 8) == 102 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_free_fields(board, 2) == 101 );


char* board871524370 = gamma_board(board);
assert( board871524370 != NULL );
assert( strcmp(board871524370, 
".....4........\n"
"..64...4...7.1\n"
".2...3.1...8..\n"
".6.....82.44..\n"
"6...7........6\n"
"......5.8.....\n"
".88.6.1...6.2.\n"
"1..3...8....52\n"
"..3.1.7....2..\n"
"1..6.5.....4..\n") == 0);
free(board871524370);
board871524370 = NULL;
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_free_fields(board, 5) == 100 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 97 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board766149101 = gamma_board(board);
assert( board766149101 != NULL );
assert( strcmp(board766149101, 
".....4........\n"
"..64.7.4...7.1\n"
".2...3.1..58..\n"
".6.....82.44..\n"
"6...7..4.....6\n"
"......5.8.....\n"
".88.6.1...6.2.\n"
"1..3...8....52\n"
".83.1.7....2..\n"
"1..6.5.....46.\n") == 0);
free(board766149101);
board766149101 = NULL;
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_free_fields(board, 7) == 88 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_free_fields(board, 6) == 83 );


char* board967933435 = gamma_board(board);
assert( board967933435 != NULL );
assert( strcmp(board967933435, 
"..3..4..4....2\n"
"4.64.774...7.1\n"
".2...3.1..58..\n"
".6.....82.44..\n"
"6...75.4.....6\n"
"7...2.5.8..8..\n"
".88.6.1...6.2.\n"
"1..3...8...552\n"
".8341.7...726.\n"
"1..6.5.....46.\n") == 0);
free(board967933435);
board967933435 = NULL;
assert( gamma_golden_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 8, 4) == 0 );


char* board551187004 = gamma_board(board);
assert( board551187004 != NULL );
assert( strcmp(board551187004, 
"..3..4..4....2\n"
"4.64.774...7.1\n"
".2...3.7..58..\n"
".6.....82.44..\n"
"6...75.4.....6\n"
"7...2.5.8..8..\n"
".88.6.1...6.2.\n"
"1..3...8...552\n"
".8341.7...726.\n"
"1..6.5.....46.\n") == 0);
free(board551187004);
board551187004 = NULL;
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );


char* board317107483 = gamma_board(board);
assert( board317107483 != NULL );
assert( strcmp(board317107483, 
"..3..4..4....2\n"
"4.64.774...7.1\n"
".2...3.7..58..\n"
".6..7..82.44..\n"
"6...75.4..5..6\n"
"7...2.5.8..8..\n"
".88.6.1...6.2.\n"
"1..3...8...552\n"
".8341.7...726.\n"
"1..6.5.....46.\n") == 0);
free(board317107483);
board317107483 = NULL;
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 17 );


gamma_delete(board);

    return 0;
}
