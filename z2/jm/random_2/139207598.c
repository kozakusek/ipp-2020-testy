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
uuid: 139207598
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 12, 14, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 155 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );


char* board939430667 = gamma_board(board);
assert( board939430667 != NULL );
assert( strcmp(board939430667, 
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".....2.......\n"
".............\n"
".............\n"
".............\n"
".............\n"
".....12...3..\n"
".............\n") == 0);
free(board939430667);
board939430667 = NULL;
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 9, 10) == 1 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_move(board, 9, 11, 10) == 1 );
assert( gamma_move(board, 10, 8, 8) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_move(board, 11, 8, 2) == 1 );
assert( gamma_move(board, 12, 6, 2) == 1 );
assert( gamma_move(board, 13, 7, 9) == 1 );
assert( gamma_move(board, 13, 9, 5) == 1 );
assert( gamma_move(board, 14, 7, 4) == 1 );
assert( gamma_move(board, 14, 6, 7) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_free_fields(board, 4) == 131 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_free_fields(board, 6) == 129 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 8, 10, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 11, 2) == 1 );
assert( gamma_move(board, 10, 2, 8) == 1 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 13, 1, 2) == 1 );
assert( gamma_move(board, 14, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 8, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_free_fields(board, 10) == 112 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 6) == 1 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_move(board, 13, 12, 8) == 1 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_free_fields(board, 4) == 107 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_golden_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_move(board, 12, 7, 0) == 1 );
assert( gamma_move(board, 13, 10, 8) == 0 );
assert( gamma_move(board, 14, 7, 9) == 0 );
assert( gamma_move(board, 14, 10, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 11, 6) == 0 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_move(board, 12, 0, 9) == 1 );
assert( gamma_move(board, 13, 8, 4) == 0 );
assert( gamma_move(board, 14, 11, 8) == 1 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 87 );
assert( gamma_move(board, 8, 12, 4) == 1 );
assert( gamma_free_fields(board, 8) == 86 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 10, 11, 4) == 1 );
assert( gamma_move(board, 10, 2, 10) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 12, 1, 3) == 1 );
assert( gamma_free_fields(board, 12) == 83 );
assert( gamma_move(board, 13, 6, 8) == 0 );
assert( gamma_move(board, 14, 3, 0) == 1 );
assert( gamma_move(board, 14, 7, 8) == 0 );
assert( gamma_golden_move(board, 14, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 11, 7) == 1 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 12, 3) == 0 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 14, 4, 5) == 0 );


char* board809038964 = gamma_board(board);
assert( board809038964 != NULL );
assert( strcmp(board809038964, 
".5.3....3.8..\n"
".51057....8.9.\n"
"12...44.13.12.2.\n"
"71110...7410.61413\n"
".117..7149..89.\n"
".9.813263.6118.\n"
"212.18...713.4.\n"
"..412...1458.108\n"
".12.4....54..4\n"
"5138..7121011914108\n"
"10..7.12910.3..\n"
"14..1421212....1\n") == 0);
free(board809038964);
board809038964 = NULL;
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 9, 12, 7) == 1 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 6) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 11, 6) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 9, 12, 11) == 1 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 12, 12, 4) == 0 );
assert( gamma_move(board, 13, 10, 8) == 0 );
assert( gamma_move(board, 13, 11, 10) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_move(board, 14, 5, 10) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_move(board, 10, 10, 8) == 0 );
assert( gamma_move(board, 11, 5, 5) == 1 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 7, 11) == 1 );
assert( gamma_move(board, 13, 9, 6) == 0 );
assert( gamma_move(board, 14, 2, 4) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );


char* board830107386 = gamma_board(board);
assert( board830107386 != NULL );
assert( strcmp(board830107386, 
".5.3...123.839\n"
".5105714...8.9.\n"
"1234.44.13.12.2.\n"
"71110...7410.61413\n"
".117..7149..899\n"
".9.81326376118.\n"
"26.1811..713.4.\n"
"6.4121..1458.108\n"
".12948..454..4\n"
"5138..7121011914108\n"
"10..751291043..\n"
"14..1421212...31\n") == 0);
free(board830107386);
board830107386 = NULL;
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_golden_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 13, 12, 5) == 1 );
assert( gamma_free_fields(board, 13) == 50 );
assert( gamma_move(board, 14, 4, 8) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_free_fields(board, 10) == 48 );
assert( gamma_move(board, 11, 11, 10) == 0 );
assert( gamma_move(board, 11, 10, 10) == 1 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 14, 9, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_golden_move(board, 14, 5, 3) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_golden_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_free_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_free_fields(board, 12) == 41 );
assert( gamma_move(board, 13, 9, 10) == 0 );
assert( gamma_move(board, 13, 3, 5) == 0 );
assert( gamma_move(board, 14, 9, 3) == 0 );
assert( gamma_move(board, 14, 12, 2) == 0 );


char* board792138959 = gamma_board(board);
assert( board792138959 != NULL );
assert( strcmp(board792138959, 
"15.3...123.839\n"
"85105714...8119.\n"
"1234.44.13.12.2.\n"
"71110414.7410561413\n"
".117..7149.14899\n"
".9.81326376118.\n"
"26.1811..713.413\n"
"6.4129..1458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"10.107512910439.\n"
"14..142121210..31\n") == 0);
free(board792138959);
board792138959 = NULL;
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );


char* board987354871 = gamma_board(board);
assert( board987354871 != NULL );
assert( strcmp(board987354871, 
"15.3...123.839\n"
"85105714...8119.\n"
"1234.44.13.12.2.\n"
"71110414.7410561413\n"
"6117..7149.14899\n"
".9.81326376118.\n"
"26.1811..713.413\n"
"6.4129..1458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"10.107512910439.\n"
"14..142121210..31\n") == 0);
free(board987354871);
board987354871 = NULL;
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 7, 11) == 0 );
assert( gamma_move(board, 11, 0, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 14, 1, 12) == 0 );
assert( gamma_move(board, 14, 12, 5) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board258905737 = gamma_board(board);
assert( board258905737 != NULL );
assert( strcmp(board258905737, 
"15.3...123.839\n"
"85105714...8119.\n"
"1234.44.13.12.2.\n"
"71110414.7410561413\n"
"6117..7149.14899\n"
".9.81326376118.\n"
"26.1811..7139413\n"
"6.4129..1458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"10.107512910439.\n"
"14..142121210..31\n") == 0);
free(board258905737);
board258905737 = NULL;
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_move(board, 12, 10, 9) == 1 );
assert( gamma_move(board, 13, 3, 3) == 0 );
assert( gamma_free_fields(board, 13) == 38 );
assert( gamma_move(board, 14, 0, 9) == 0 );
assert( gamma_move(board, 14, 10, 11) == 0 );
assert( gamma_golden_move(board, 14, 2, 12) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );


char* board506409255 = gamma_board(board);
assert( board506409255 != NULL );
assert( strcmp(board506409255, 
"15.3...123.839\n"
"85105714...8119.\n"
"1234.44.13.12122.\n"
"71110414.7410561413\n"
"6117..7149.14899\n"
".9.81326376118.\n"
"26.1811..7139413\n"
"6.4129..1458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"10.107512910439.\n"
"14..142121210..31\n") == 0);
free(board506409255);
board506409255 = NULL;
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 5, 1) == 1 );
assert( gamma_move(board, 13, 4, 10) == 0 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 14, 10, 8) == 0 );
assert( gamma_move(board, 14, 1, 10) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );


char* board601431960 = gamma_board(board);
assert( board601431960 != NULL );
assert( strcmp(board601431960, 
"15.3.6.123.839\n"
"85105714..58119.\n"
"1234.44.13.12122.\n"
"7111041477410561413\n"
"6117..71491014899\n"
".9.81326376118.\n"
"26.1811..7139413\n"
"6.4129.131458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"10.1075122910439.\n"
"14..142121210..31\n") == 0);
free(board601431960);
board601431960 = NULL;
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 12, 7, 7) == 0 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_golden_possible(board, 12) == 0 );


char* board156852890 = gamma_board(board);
assert( board156852890 != NULL );
assert( strcmp(board156852890, 
"15.3.6.123.839\n"
"85105714..58119.\n"
"1234.44.13.12122.\n"
"7111041477410561413\n"
"6117..71491014899\n"
".9.81326376118.\n"
"26.1811..7139413\n"
"6.4129.131458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"10.1075122910439.\n"
"14..142121210..31\n") == 0);
free(board156852890);
board156852890 = NULL;
assert( gamma_move(board, 13, 0, 11) == 0 );
assert( gamma_move(board, 14, 11, 9) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_golden_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 12, 7, 0) == 0 );
assert( gamma_move(board, 14, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_golden_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_free_fields(board, 7) == 31 );


char* board766145682 = gamma_board(board);
assert( board766145682 != NULL );
assert( strcmp(board766145682, 
"15.3.6.123.839\n"
"85105714..58119.\n"
"1234.44613.12122.\n"
"7111041477410561413\n"
"6117..71491014899\n"
".9.81326376118.\n"
"56.1811..7139413\n"
"6.4129.131458.108\n"
".1294814.454..4\n"
"51387.7121011914108\n"
"101107512294439.\n"
"14..142121210..31\n") == 0);
free(board766145682);
board766145682 = NULL;
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_free_fields(board, 11) == 31 );
assert( gamma_move(board, 12, 12, 0) == 0 );
assert( gamma_move(board, 12, 8, 11) == 0 );
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 5, 2) == 0 );
assert( gamma_free_fields(board, 14) == 31 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_golden_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 13, 6, 0) == 0 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 4, 11) == 1 );


gamma_delete(board);

    return 0;
}
