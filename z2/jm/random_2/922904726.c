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
uuid: 922904726
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 13, 13, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_free_fields(board, 1) == 154 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 9, 10) == 0 );


char* board245973423 = gamma_board(board);
assert( board245973423 != NULL );
assert( strcmp(board245973423, 
"..........1.\n"
".......5....\n"
".......5....\n"
"........2.4.\n"
"............\n"
"............\n"
"............\n"
"..........1.\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board245973423);
board245973423 = NULL;
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 10, 9, 3) == 1 );
assert( gamma_move(board, 11, 4, 10) == 1 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 13, 1, 8) == 1 );
assert( gamma_move(board, 13, 7, 1) == 1 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 138 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_free_fields(board, 9) == 130 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 8, 6) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 11, 3, 12) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board243169849 = gamma_board(board);
assert( board243169849 != NULL );
assert( strcmp(board243169849, 
"...11.4....1.\n"
"7......58...\n"
"....11..5....\n"
"........2.4.\n"
"1137.........\n"
"........9...\n"
"9......910...\n"
"9...86....1.\n"
"............\n"
".....114..10..\n"
"...6.5.12....\n"
".......13....\n"
"....2.......\n") == 0);
free(board243169849);
board243169849 = NULL;
assert( gamma_move(board, 12, 5, 1) == 1 );
assert( gamma_move(board, 12, 10, 11) == 1 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 0, 12) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 11, 8, 12) == 1 );
assert( gamma_move(board, 12, 8, 10) == 1 );
assert( gamma_move(board, 12, 2, 6) == 1 );
assert( gamma_move(board, 13, 11, 1) == 1 );
assert( gamma_move(board, 13, 9, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 11, 4) == 1 );
assert( gamma_move(board, 12, 5, 8) == 1 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 11, 9, 9) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 13, 7, 10) == 0 );
assert( gamma_move(board, 13, 7, 12) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_golden_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 10, 10) == 0 );
assert( gamma_move(board, 12, 4, 6) == 0 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_move(board, 13, 11, 3) == 1 );
assert( gamma_golden_move(board, 13, 4, 9) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_free_fields(board, 9) == 15 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_golden_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_golden_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_golden_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 15 );


char* board994244463 = gamma_board(board);
assert( board994244463 != NULL );
assert( strcmp(board994244463, 
"8.11174.1311.1.\n"
"7......58.12.\n"
"36.411..512131.\n"
"39.29..821145\n"
"1137.912..6...\n"
"...36..192..\n"
"91012.6.4910..2\n"
"9...86...912\n"
".64........11\n"
".8...114..10.13\n"
".4.6.51312.9.7\n"
"121.10.12.137.213\n"
"11.8.2.8....5\n") == 0);
free(board994244463);
board994244463 = NULL;
assert( gamma_move(board, 5, 11, 5) == 0 );


char* board455947504 = gamma_board(board);
assert( board455947504 != NULL );
assert( strcmp(board455947504, 
"8.11174.1311.1.\n"
"7......58.12.\n"
"36.411..512131.\n"
"39.29..821145\n"
"1137.912..6...\n"
"...36..192..\n"
"91012.6.4910..2\n"
"9...86...912\n"
".64........11\n"
".8...114..10.13\n"
".4.6.51312.9.7\n"
"121.10.12.137.213\n"
"11.8.2.8....5\n") == 0);
free(board455947504);
board455947504 = NULL;
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 12, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 13, 2, 12) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_free_fields(board, 10) == 71 );
assert( gamma_golden_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_free_fields(board, 11) == 9 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_move(board, 13, 7, 5) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 11, 5, 10) == 1 );
assert( gamma_move(board, 12, 11, 5) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 2, 11) == 1 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 11, 9, 9) == 0 );
assert( gamma_move(board, 12, 7, 10) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 10, 11, 11) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 0, 9) == 0 );
assert( gamma_move(board, 13, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 3, 11) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 10, 5, 11) == 0 );
assert( gamma_golden_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 6, 12) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 13, 8, 10) == 0 );


char* board828779730 = gamma_board(board);
assert( board828779730 != NULL );
assert( strcmp(board828779730, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912.36...\n"
"7..36.7192..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
".4466513129927\n"
"121.10.12.1376213\n"
"11583288....5\n") == 0);
free(board828779730);
board828779730 = NULL;
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


char* board107555238 = gamma_board(board);
assert( board107555238 != NULL );
assert( strcmp(board107555238, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912.36...\n"
"7..36.7192..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
".4466513129927\n"
"121.10.12.1376213\n"
"11583288....5\n") == 0);
free(board107555238);
board107555238 = NULL;
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_golden_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 10, 7, 11) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 7, 10) == 0 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 12, 10, 11) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 10, 11, 12) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 11, 7, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 11, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );


char* board686428157 = gamma_board(board);
assert( board686428157 != NULL );
assert( strcmp(board686428157, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912.36...\n"
"7..36.7162..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
".4466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board686428157);
board686428157 = NULL;
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 2, 9) == 0 );
assert( gamma_golden_move(board, 13, 4, 11) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 11, 11) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 13, 2, 10) == 0 );
assert( gamma_free_fields(board, 13) == 8 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 10, 11) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, 7, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_golden_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );


char* board559503991 = gamma_board(board);
assert( board559503991 != NULL );
assert( strcmp(board559503991, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912536...\n"
"7..36.7162..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
"44466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board559503991);
board559503991 = NULL;
assert( gamma_move(board, 8, 12, 9) == 0 );


char* board995964455 = gamma_board(board);
assert( board995964455 != NULL );
assert( strcmp(board995964455, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912536...\n"
"7..36.7162..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
"44466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board995964455);
board995964455 = NULL;
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );


char* board188531196 = gamma_board(board);
assert( board188531196 != NULL );
assert( strcmp(board188531196, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912536...\n"
"7..36.7162..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
"44466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board188531196);
board188531196 = NULL;
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );


char* board371230454 = gamma_board(board);
assert( board371230454 != NULL );
assert( strcmp(board371230454, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912536...\n"
"7..36.7162..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
"44466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board371230454);
board371230454 = NULL;
assert( gamma_move(board, 11, 11, 12) == 0 );
assert( gamma_golden_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );


char* board341605555 = gamma_board(board);
assert( board341605555 != NULL );
assert( strcmp(board341605555, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912536...\n"
"7..36.7162..\n"
"91012.6.4910..2\n"
"9...86.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
"44466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board341605555);
board341605555 = NULL;
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 9, 11, 11) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_free_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 12, 0, 11) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 11, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 13, 3, 12) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );


char* board170772629 = gamma_board(board);
assert( board170772629 != NULL );
assert( strcmp(board170772629, 
"8.11174.1311.15\n"
"7.10....58.12.\n"
"36.41111.512131.\n"
"39.29..821145\n"
"11073912536...\n"
"7..36.7162..\n"
"91012.6.49102.2\n"
"9..886.13.912\n"
".6432....3.11\n"
".8...11410310.13\n"
"44466513129927\n"
"121910.12.1376213\n"
"11583288....5\n") == 0);
free(board170772629);
board170772629 = NULL;
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_move(board, 11, 5, 12) == 0 );
assert( gamma_move(board, 12, 0, 9) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
