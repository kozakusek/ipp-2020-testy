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
uuid: 291400761
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 12, 12, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_golden_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 10, 7, 9) == 1 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 11, 8, 9) == 1 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_free_fields(board, 12) == 104 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_free_fields(board, 5) == 101 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_free_fields(board, 9) == 97 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_free_fields(board, 10) == 96 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 12, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );


char* board927212329 = gamma_board(board);
assert( board927212329 != NULL );
assert( strcmp(board927212329, 
".........1\n"
"..2..3.7..\n"
".5..26.10112\n"
".5..75....\n"
"...8..1143.\n"
"..2..94...\n"
".10........\n"
"..2..10.6..\n"
".....12...9\n"
"..12......8\n"
"8...86.1..\n"
"..6......3\n") == 0);
free(board927212329);
board927212329 = NULL;
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 11, 0, 6) == 1 );
assert( gamma_move(board, 11, 3, 10) == 1 );
assert( gamma_move(board, 12, 5, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_free_fields(board, 7) == 80 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 8, 10) == 1 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 10, 7, 9) == 0 );


char* board876408126 = gamma_board(board);
assert( board876408126 != NULL );
assert( strcmp(board876408126, 
"...8.....1\n"
"..211.3.711.\n"
".5.526910112\n"
".5..75.4..\n"
"...8..1143.\n"
"1182..94.1.\n"
".10.......6\n"
"..2..10.6..\n"
".....125..9\n"
".312...1..8\n"
"810.186.1..\n"
"..69.....3\n") == 0);
free(board876408126);
board876408126 = NULL;
assert( gamma_move(board, 11, 8, 4) == 1 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_golden_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 12, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 6, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 10, 0, 7) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board326320591 = gamma_board(board);
assert( board326320591 != NULL );
assert( strcmp(board326320591, 
"...87.8..1\n"
"..211.3.711.\n"
".55526910112\n"
".5.375.4.1\n"
"10..8.911431\n"
"1182.59421.\n"
".102......7\n"
".82.1210.611.\n"
".....125..9\n"
".311.3.1..8\n"
"810.186.1..\n"
"..6912....3\n") == 0);
free(board326320591);
board326320591 = NULL;
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 1, 9) == 0 );
assert( gamma_free_fields(board, 11) == 49 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_free_fields(board, 9) == 45 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_free_fields(board, 11) == 44 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_golden_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );


char* board472096939 = gamma_board(board);
assert( board472096939 != NULL );
assert( strcmp(board472096939, 
"...87.8..1\n"
"..211.3.7119\n"
"455526910112\n"
"75.375.4.1\n"
"109108.911431\n"
"1182.594211\n"
"9102......7\n"
".82121210.611.\n"
"5...6125.49\n"
"8311.31119108\n"
"810.186.10.2\n"
"9.69121...3\n") == 0);
free(board472096939);
board472096939 = NULL;
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 5, 11) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 10, 0) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_free_fields(board, 8) == 26 );


char* board342175837 = gamma_board(board);
assert( board342175837 != NULL );
assert( strcmp(board342175837, 
"...87108271\n"
"..211.3.7119\n"
"455526910112\n"
"75.375.4.1\n"
"109108.911431\n"
"118212594211\n"
"9105..12...7\n"
"282121210.611.\n"
"54.96125.49\n"
"8311131119108\n"
"810.186.1032\n"
"9.69121...3\n") == 0);
free(board342175837);
board342175837 = NULL;
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_free_fields(board, 11) == 25 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 7, 11) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_golden_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_free_fields(board, 11) == 21 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 9, 4) == 1 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_free_fields(board, 12) == 20 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 12, 8, 9) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 0, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 16 );


char* board871850958 = gamma_board(board);
assert( board871850958 != NULL );
assert( strcmp(board871850958, 
".2.87108271\n"
"..21163.7119\n"
"455526910112\n"
"75.3751461\n"
"1091084911431\n"
"118212594211\n"
"9105..1259.7\n"
"282121210.61112\n"
"54.961251049\n"
"8311131119108\n"
"810.186.1032\n"
"9.69121..113\n") == 0);
free(board871850958);
board871850958 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_free_fields(board, 10) == 16 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );


gamma_delete(board);

    return 0;
}
