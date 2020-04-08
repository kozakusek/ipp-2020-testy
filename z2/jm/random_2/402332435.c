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
uuid: 402332435
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 10, 12, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_golden_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );


char* board834795983 = gamma_board(board);
assert( board834795983 != NULL );
assert( strcmp(board834795983, 
"..............\n"
"..............\n"
"....1....3....\n"
"..............\n"
"..............\n"
"..............\n"
"........4.....\n"
"..............\n"
".5........1...\n"
"..............\n") == 0);
free(board834795983);
board834795983 = NULL;
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 12, 7) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 9, 10, 8) == 1 );
assert( gamma_free_fields(board, 9) == 127 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_move(board, 10, 2, 6) == 1 );
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_free_fields(board, 3) == 119 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_free_fields(board, 7) == 114 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_free_fields(board, 9) == 113 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 10, 9, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 12, 1, 12) == 0 );
assert( gamma_move(board, 12, 12, 3) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 106 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );


char* board473331447 = gamma_board(board);
assert( board473331447 != NULL );
assert( strcmp(board473331447, 
".........10..2.\n"
"..........9...\n"
"8..71....3..7.\n"
"9.10..511.72....\n"
".....4...9....\n"
".26...11.......\n"
"....5...42..12.\n"
".6.......6....\n"
".51......31..1\n"
"..10.3...10...8.\n") == 0);
free(board473331447);
board473331447 = NULL;
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_free_fields(board, 6) == 104 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_free_fields(board, 8) == 103 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 10, 9, 9) == 0 );
assert( gamma_move(board, 11, 1, 5) == 1 );
assert( gamma_move(board, 12, 11, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 9, 13, 9) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );


char* board636625290 = gamma_board(board);
assert( board636625290 != NULL );
assert( strcmp(board636625290, 
".........10..29\n"
".....9....9...\n"
"85.71....3..7.\n"
"910109.511.72.6..\n"
".11...4...9.12..\n"
"326...11.......\n"
".10..5...42..12.\n"
".6.......6....\n"
".51.....731..1\n"
"4.10.3...10...8.\n") == 0);
free(board636625290);
board636625290 = NULL;
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_free_fields(board, 2) == 93 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );


char* board244519696 = gamma_board(board);
assert( board244519696 != NULL );
assert( strcmp(board244519696, 
".........10..29\n"
".....9....9...\n"
"85.71....3..7.\n"
"910109.511.72.6..\n"
".11...4...9.12..\n"
"326...11.......\n"
".10..5...42..12.\n"
".6.....4.6....\n"
".51.....731..1\n"
"4.10.311..10...8.\n") == 0);
free(board244519696);
board244519696 = NULL;
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board981192704 = gamma_board(board);
assert( board981192704 != NULL );
assert( strcmp(board981192704, 
".........10..29\n"
".....9....9...\n"
"85571....3..7.\n"
"910109.511.72.6..\n"
".11...4...9.12..\n"
"326...11.......\n"
".10..5...42..12.\n"
".6.....4.6....\n"
".51.....731..1\n"
"4.10.311..10...8.\n") == 0);
free(board981192704);
board981192704 = NULL;
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 10, 10, 2) == 1 );
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 11, 12, 2) == 1 );
assert( gamma_move(board, 12, 12, 7) == 0 );
assert( gamma_golden_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 6, 1) == 1 );


char* board964607662 = gamma_board(board);
assert( board964607662 != NULL );
assert( strcmp(board964607662, 
"......1..10..29\n"
"..11..9...79...\n"
"85571....3..7.\n"
"910109.511.72.6..\n"
".11...4..79.12..\n"
"326.8.11.......\n"
".10..5...42..12.\n"
".6...9.4.610.11.\n"
".51...3.731..1\n"
"4.10.311..10...8.\n") == 0);
free(board964607662);
board964607662 = NULL;
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_free_fields(board, 10) == 79 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 7, 8) == 1 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_free_fields(board, 8) == 75 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 11, 10, 4) == 1 );
assert( gamma_move(board, 12, 11, 1) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );


char* board896500054 = gamma_board(board);
assert( board896500054 != NULL );
assert( strcmp(board896500054, 
"......17.10..29\n"
"..11.39.12.79...\n"
"85571.11..3..7.\n"
"910109.511.72.6..\n"
".11.3.4..79.12..\n"
"326108411...11...\n"
".10..5...42..12.\n"
".6...9.4.610.116\n"
".51...3.73112.1\n"
"47105311..10...8.\n") == 0);
free(board896500054);
board896500054 = NULL;
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_golden_move(board, 10, 9, 3) == 1 );
assert( gamma_move(board, 12, 11, 5) == 0 );
assert( gamma_free_fields(board, 12) == 67 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 13, 3) == 0 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 7, 11) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );


char* board297930919 = gamma_board(board);
assert( board297930919 != NULL );
assert( strcmp(board297930919, 
"10..93517.10..29\n"
"6.11.39.12.79...\n"
"85571.11.53..7.\n"
"910109.511.72.6..\n"
".11.3.4..79.12..\n"
"326108411...11...\n"
".10..5...410..12.\n"
".66..9.4.610.116\n"
".511..3973112.1\n"
"47105311..10.2.8.\n") == 0);
free(board297930919);
board297930919 = NULL;
assert( gamma_move(board, 11, 6, 13) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_free_fields(board, 12) == 59 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 11, 10, 3) == 1 );
assert( gamma_golden_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 12, 9, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );


char* board304351834 = gamma_board(board);
assert( board304351834 != NULL );
assert( strcmp(board304351834, 
"10..93517.10..29\n"
"6.11.39.12.79...\n"
"85571.11.53..7.\n"
"910109.511.72.6..\n"
".11.384..79.12..\n"
"326108411..411...\n"
".10..5...41011.12.\n"
".66..9.4.6104116\n"
".511..3973112.1\n"
"4710531112.10.2.8.\n") == 0);
free(board304351834);
board304351834 = NULL;
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 12, 1) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_golden_move(board, 5, 8, 0) == 1 );


char* board650670623 = gamma_board(board);
assert( board650670623 != NULL );
assert( strcmp(board650670623, 
"101.935171102.29\n"
"6.11.39.12.79...\n"
"85571511653..72\n"
"910109.511.7256..\n"
".11.384..79.12..\n"
"326108411..411...\n"
".10..5...41011812.\n"
".66..9.4.6104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board650670623);
board650670623 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );


char* board820906700 = gamma_board(board);
assert( board820906700 != NULL );
assert( strcmp(board820906700, 
"101.935171102.29\n"
"6.11.39.12.79.7.\n"
"85571511653..72\n"
"610109.511.7256..\n"
"711.384..79.12..\n"
"326108411..411...\n"
".10..5...41011812.\n"
".66..9.4.6104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board820906700);
board820906700 = NULL;
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 11, 8, 8) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_free_fields(board, 8) == 40 );


char* board171806542 = gamma_board(board);
assert( board171806542 != NULL );
assert( strcmp(board171806542, 
"101.935171102.29\n"
"6.11439.121179.7.\n"
"85571511653..72\n"
"610109.511.7256..\n"
"711.384..79.12..\n"
"326108411..4116..\n"
".10..5..10410118121\n"
".66..9.4.6104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board171806542);
board171806542 = NULL;
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_free_fields(board, 12) == 39 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 6, 9) == 0 );


char* board794266347 = gamma_board(board);
assert( board794266347 != NULL );
assert( strcmp(board794266347, 
"101.935171102.29\n"
"6.11439.12117937.\n"
"85571511653..72\n"
"610109.511.7256..\n"
"711.384..79.12..\n"
"326108411..4116..\n"
".10..5..10410118121\n"
".664.9.496104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board794266347);
board794266347 = NULL;
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );


char* board808460138 = gamma_board(board);
assert( board808460138 != NULL );
assert( strcmp(board808460138, 
"101.935171102.29\n"
"6.11439.12117937.\n"
"85571511653..72\n"
"610109.511.7256..\n"
"711.384..79.12..\n"
"326108411..4116..\n"
".10..5..10410118121\n"
".664.9.496104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board808460138);
board808460138 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_free_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_free_fields(board, 12) == 35 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_golden_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );


char* board885873454 = gamma_board(board);
assert( board885873454 != NULL );
assert( strcmp(board885873454, 
"101.935171102.29\n"
"6.11439.12117937.\n"
"85571511653..72\n"
"610109.511.7256..\n"
"711.384..79.12..\n"
"3261084117.4116..\n"
".10.115..10410118121\n"
".664.9.496104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board885873454);
board885873454 = NULL;
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 13, 4) == 0 );
assert( gamma_move(board, 10, 8, 13) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_golden_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );


char* board614955661 = gamma_board(board);
assert( board614955661 != NULL );
assert( strcmp(board614955661, 
"101.935171102.29\n"
"6.11439.12117937.\n"
"85571511653..72\n"
"610109.511.7256..\n"
"711.384..79.123.\n"
"3261084117.4116..\n"
".10.115..10410118121\n"
".664.9.496104116\n"
".511..3973112.1\n"
"4710531112.5.2.8.\n") == 0);
free(board614955661);
board614955661 = NULL;
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 6, 12) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 9, 11) == 0 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 12, 5, 13) == 0 );
assert( gamma_move(board, 12, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 12, 0) == 0 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_golden_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 6, 13) == 0 );
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_move(board, 12, 4, 13) == 0 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );


gamma_delete(board);

    return 0;
}
