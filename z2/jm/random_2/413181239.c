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
uuid: 413181239
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 10, 11, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_free_fields(board, 8) == 142 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 10, 9, 14) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, 3, 14) == 0 );
assert( gamma_move(board, 11, 12, 8) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_free_fields(board, 1) == 139 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_golden_move(board, 8, 8, 12) == 0 );


char* board350725963 = gamma_board(board);
assert( board350725963 != NULL );
assert( strcmp(board350725963, 
".63.5..........\n"
"............11..\n"
".....16........\n"
"...............\n"
"..82.........1.\n"
"..5.6.....1.42.\n"
"...............\n"
".....84.9......\n"
"...............\n"
".3.............\n") == 0);
free(board350725963);
board350725963 = NULL;
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 11, 5, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_free_fields(board, 1) == 130 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 129 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_golden_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_move(board, 10, 14, 5) == 1 );
assert( gamma_move(board, 11, 9, 6) == 1 );
assert( gamma_move(board, 11, 14, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );


char* board822597891 = gamma_board(board);
assert( board822597891 != NULL );
assert( strcmp(board822597891, 
".63.5..........\n"
".....10.1..3.11..\n"
"...2.16........\n"
"....9....11.....\n"
"..82.9....9..110\n"
"..5.6..4..1.4211\n"
"8.91111..........\n"
".....84.9......\n"
"......10........\n"
".3.7...6..16...\n") == 0);
free(board822597891);
board822597891 = NULL;
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 111 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_free_fields(board, 9) == 106 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 10, 14, 2) == 1 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_move(board, 11, 14, 6) == 1 );
assert( gamma_move(board, 11, 12, 3) == 1 );
assert( gamma_golden_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );


char* board588752083 = gamma_board(board);
assert( board588752083 != NULL );
assert( strcmp(board588752083, 
".63.5....58....\n"
".....10111..3.11..\n"
"...2.1610.......\n"
"....9....11....11\n"
"1.82.9....9..110\n"
"..5.6..4..1.4211\n"
"1.91111.......11..\n"
".74..8499.....10\n"
"2...4.102.......\n"
".3.7..16910163..\n") == 0);
free(board588752083);
board588752083 = NULL;
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 14, 7) == 1 );


char* board394774541 = gamma_board(board);
assert( board394774541 != NULL );
assert( strcmp(board394774541, 
".63.5....58....\n"
".....10111..3.11..\n"
"...2.1610......5\n"
"....9....11....11\n"
"1.82.9....9..110\n"
"..5.6..4..1.4211\n"
"1.91111.......11..\n"
".74..8499.....10\n"
"23..4.102.......\n"
".327..16910163..\n") == 0);
free(board394774541);
board394774541 = NULL;
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_move(board, 11, 6, 9) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );


char* board950844272 = gamma_board(board);
assert( board950844272 != NULL );
assert( strcmp(board950844272, 
".63.54116.58....\n"
"....710111..3.11..\n"
"...2.1610....2.5\n"
"....943..11....11\n"
"1.82.9....9..110\n"
"..5.6..4..1.4211\n"
"1.91111.......11..\n"
".74..8499.....10\n"
"23..4.102.......\n"
".327..16910163..\n") == 0);
free(board950844272);
board950844272 = NULL;
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );


char* board267300997 = gamma_board(board);
assert( board267300997 != NULL );
assert( strcmp(board267300997, 
".63.54116.58....\n"
"....710111..3.11..\n"
"...2.1610....2.5\n"
"....943..11....11\n"
"1.82.9....9..110\n"
"..5.5..4..1.4211\n"
"1.91111.......11..\n"
".74..8499.....10\n"
"23..4.102.......\n"
".327..16910163..\n") == 0);
free(board267300997);
board267300997 = NULL;
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );


char* board251724131 = gamma_board(board);
assert( board251724131 != NULL );
assert( strcmp(board251724131, 
".63.54116.58....\n"
"....710111..3.11..\n"
"...2.1610....2.5\n"
"....943..11....11\n"
"1.82.9....9..110\n"
"..5.56.4.61.4211\n"
"1.91111.......11..\n"
".74..8499.....10\n"
"23..4.102.......\n"
".327..16910163..\n") == 0);
free(board251724131);
board251724131 = NULL;
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );


char* board830431860 = gamma_board(board);
assert( board830431860 != NULL );
assert( strcmp(board830431860, 
".63.54116.58....\n"
"7...710111..3.11..\n"
"...2.1610....2.5\n"
"....943..11....11\n"
"1.82.9....9..110\n"
"..5.56.4.61.4211\n"
"1.91111.......11..\n"
".74..8499.....10\n"
"23..4.102.......\n"
".327..16910163..\n") == 0);
free(board830431860);
board830431860 = NULL;
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_move(board, 10, 6, 13) == 0 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );


char* board607596638 = gamma_board(board);
assert( board607596638 != NULL );
assert( strcmp(board607596638, 
".63.54116.58....\n"
"7.2.710111..3.11..\n"
"...2.1610....2.5\n"
"....943..11..10.11\n"
"1.82.9....9..110\n"
"2.5.56.4.61.4211\n"
"1.91111.......11..\n"
".74..8499...8.10\n"
"23..4.102.......\n"
"6327..16910163..\n") == 0);
free(board607596638);
board607596638 = NULL;
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_free_fields(board, 8) == 75 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 10, 11, 8) == 1 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 11, 11, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );


char* board710612870 = gamma_board(board);
assert( board710612870 != NULL );
assert( strcmp(board710612870, 
".63.54116958....\n"
"7.2.710111..31011..\n"
"...271610....2.5\n"
"....943..11..10.11\n"
"1.82.9....911.110\n"
"2.5.56.4.61.4211\n"
"1.91111.......111.\n"
".74..8499...8.10\n"
"23..4.102.......\n"
"6327..16910163..\n") == 0);
free(board710612870);
board710612870 = NULL;
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_move(board, 10, 11, 9) == 1 );


char* board522444083 = gamma_board(board);
assert( board522444083 != NULL );
assert( strcmp(board522444083, 
".63.5411695810...\n"
"7.2.710111..31011..\n"
"...2716103...2.5\n"
"....943..11..10.11\n"
"11082.96...911.110\n"
"2.5.56.4.61.4211\n"
"1.91111.......1114\n"
".74..8499...8.10\n"
"23..4.1026......\n"
"6327..16910163..\n") == 0);
free(board522444083);
board522444083 = NULL;
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 11, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 11, 7) == 1 );
assert( gamma_move(board, 10, 10, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 11, 11, 4) == 1 );
assert( gamma_free_fields(board, 11) == 51 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 6, 13) == 0 );
assert( gamma_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_golden_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 10, 6, 13) == 0 );
assert( gamma_move(board, 10, 14, 8) == 1 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_free_fields(board, 11) == 46 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_golden_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 14, 7) == 0 );
assert( gamma_move(board, 10, 7, 13) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_golden_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 9, 14) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_free_fields(board, 11) == 42 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 11, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );


char* board292031516 = gamma_board(board);
assert( board292031516 != NULL );
assert( strcmp(board292031516, 
".63851011695810.2.\n"
"71287101116.31011.10\n"
"5.327161035.92.5\n"
"..6109432.11.710.11\n"
"11082.96..3911.110\n"
"2.5.56.4661114211\n"
"1.911114.11....1114\n"
".74..8499..88.10\n"
"23.34610266..65.\n"
"63278.16910163..\n") == 0);
free(board292031516);
board292031516 = NULL;
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 10, 12, 7) == 0 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_golden_move(board, 11, 4, 12) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 14 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 11, 0, 14) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 14, 7) == 0 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 14 );
assert( gamma_move(board, 11, 2, 8) == 0 );


char* board438283107 = gamma_board(board);
assert( board438283107 != NULL );
assert( strcmp(board438283107, 
".63851011695810.2.\n"
"71287101116531011.10\n"
"5.327161035.92.5\n"
"..6109432511.7101011\n"
"11082896..3911.110\n"
"2.5.53.4661114211\n"
"1.911114.116...1114\n"
".74..84995.88.10\n"
"23.34610266.765.\n"
"63278.16910163..\n") == 0);
free(board438283107);
board438283107 = NULL;
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_golden_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_golden_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 10, 9) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 14 );
assert( gamma_free_fields(board, 10) == 31 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 11, 11, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 14, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_move(board, 10, 14, 1) == 1 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );


char* board611467359 = gamma_board(board);
assert( board611467359 != NULL );
assert( strcmp(board611467359, 
".63851011695810.27\n"
"71287101116531011710\n"
"5.327161035.92.5\n"
"..6109432511.7101011\n"
"11082896..3911.110\n"
"2.5.53.4661114211\n"
"1.911114.116...1114\n"
"174..84995.88.10\n"
"23.34610266.76510\n"
"63278.16910163..\n") == 0);
free(board611467359);
board611467359 = NULL;
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 12 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );


gamma_delete(board);

    return 0;
}
