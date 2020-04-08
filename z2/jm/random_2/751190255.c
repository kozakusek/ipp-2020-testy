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
uuid: 751190255
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 15, 6, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );


char* board873018762 = gamma_board(board);
assert( board873018762 != NULL );
assert( strcmp(board873018762, 
"..............\n"
"..52..........\n"
"...6..........\n"
"..............\n"
".2..1.....1...\n"
"....3.........\n"
"1.............\n"
"....1.........\n"
"......4....5..\n"
"..............\n"
"...1.24.......\n"
".......3......\n"
".....62.......\n"
".3.......4....\n"
"..............\n") == 0);
free(board873018762);
board873018762 = NULL;
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );


char* board723752432 = gamma_board(board);
assert( board723752432 != NULL );
assert( strcmp(board723752432, 
"..............\n"
"..52....6.....\n"
"...6..........\n"
"...6...4......\n"
".2..1.....1...\n"
"5...3..6......\n"
"1..1..........\n"
"....1.........\n"
"......4....5..\n"
".......5......\n"
"...1.24.......\n"
".......3......\n"
"..4..62.......\n"
".3.......4....\n"
"..............\n") == 0);
free(board723752432);
board723752432 = NULL;
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_free_fields(board, 1) == 182 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );


char* board279339791 = gamma_board(board);
assert( board279339791 != NULL );
assert( strcmp(board279339791, 
"..............\n"
"..52....6....4\n"
"...6..........\n"
"..26...4......\n"
".2..1.....1...\n"
"5...3..6......\n"
"1..1..........\n"
"....1.........\n"
"......4....52.\n"
".......5......\n"
"...1.24.......\n"
".......3......\n"
"..4..62.......\n"
".3.......4....\n"
".1.........3..\n") == 0);
free(board279339791);
board279339791 = NULL;
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 2, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 3) == 173 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 172 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );


char* board931419914 = gamma_board(board);
assert( board931419914 != NULL );
assert( strcmp(board931419914, 
"..6.....4.....\n"
"..521...6.1..4\n"
"...6.......3..\n"
"..26...4......\n"
".2..1.....1...\n"
"5...3..6......\n"
"1..1.......1..\n"
"....1.2.......\n"
"......4.5..52.\n"
".......5..2...\n"
"...1.24...2...\n"
"......43..6...\n"
"..4..62.....2.\n"
"63..1....4....\n"
".1..5.2....3..\n") == 0);
free(board931419914);
board931419914 = NULL;
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 14) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_free_fields(board, 1) == 155 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 12) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_free_fields(board, 2) == 149 );


char* board756582454 = gamma_board(board);
assert( board756582454 != NULL );
assert( strcmp(board756582454, 
"..6.....4...4.\n"
"..521...6.1..4\n"
"...6....6.63..\n"
"..26...4......\n"
".2..1.....1.3.\n"
"5.2.3..6..2...\n"
"1..1...1...1..\n"
"4...1.2.......\n"
"......4.5..52.\n"
".......5..2.4.\n"
"...1124...2...\n"
"......43.16...\n"
"..4..62.....2.\n"
"63..1....4.3..\n"
".1..5.2....3..\n") == 0);
free(board756582454);
board756582454 = NULL;
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_free_fields(board, 3) == 148 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_golden_move(board, 5, 8, 11) == 0 );


char* board374475416 = gamma_board(board);
assert( board374475416 != NULL );
assert( strcmp(board374475416, 
"..6.....4...4.\n"
".2521...6.1..4\n"
"...6....6.63..\n"
"..26...4..5...\n"
".26.1.....1.3.\n"
"5.2.3.46..2...\n"
"1..1...1...1..\n"
"4.3.1.2.......\n"
"......4.5..52.\n"
"..4....5..2.4.\n"
"..31124...2...\n"
"......43.16..3\n"
"..4..62.....2.\n"
"63..1...44.3..\n"
".1..5.2....35.\n") == 0);
free(board374475416);
board374475416 = NULL;
assert( gamma_free_fields(board, 6) == 139 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 13, 5) == 1 );


char* board448110230 = gamma_board(board);
assert( board448110230 != NULL );
assert( strcmp(board448110230, 
"4.62....4...4.\n"
".2521...6.1..4\n"
"...6....6.63..\n"
"..261..4.35...\n"
".26.1.....1.3.\n"
"5.2.3.46..2...\n"
"1..1...1...1..\n"
"4.3.1.2.......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124...2...\n"
".....543.16..3\n"
"..4..62.....2.\n"
"63..1...44.3..\n"
".1..5.2....35.\n") == 0);
free(board448110230);
board448110230 = NULL;
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 6, 13, 9) == 1 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_free_fields(board, 6) == 129 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 4, 12) == 1 );


char* board347386748 = gamma_board(board);
assert( board347386748 != NULL );
assert( strcmp(board347386748, 
"4.62....4...4.\n"
".2521...6.1..4\n"
"...65...6.63..\n"
"..261..4.353..\n"
".26.1.4...1.3.\n"
"5.2.3.46..2..6\n"
"1..1...1...1..\n"
"4.3.1.2.......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124...2.3.\n"
"...5.543.16..3\n"
"..4..62.....2.\n"
"63..1...44.3..\n"
".1.35.2....35.\n") == 0);
free(board347386748);
board347386748 = NULL;
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 11) == 0 );


char* board359304685 = gamma_board(board);
assert( board359304685 != NULL );
assert( strcmp(board359304685, 
"4.62....4...4.\n"
".2521...6.1..4\n"
"...65...6.63..\n"
"..261..4.353..\n"
".26.1.44..1.3.\n"
"5.2.3.46..2..6\n"
"1..1...1...1..\n"
"4.3.1.2.......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124...2.3.\n"
"...5.543.16..3\n"
"..4..62.....2.\n"
"63..1...44.3..\n"
"51.35.2....35.\n") == 0);
free(board359304685);
board359304685 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 9, 13) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_golden_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 11, 14) == 1 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board984843463 = gamma_board(board);
assert( board984843463 != NULL );
assert( strcmp(board984843463, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..4.353..\n"
"426.1.44..133.\n"
"5.2.3.463.2..6\n"
"1.31...1..11..\n"
"4.361.2.......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124..2233.\n"
"...5.543.16323\n"
"..45.62.....2.\n"
"63..123.4453..\n"
"51.3522.6..35.\n") == 0);
free(board984843463);
board984843463 = NULL;
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );


char* board281954592 = gamma_board(board);
assert( board281954592 != NULL );
assert( strcmp(board281954592, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..4.353..\n"
"426.1444..133.\n"
"5.213.463.2..6\n"
"1.313..13.11..\n"
"43361.26......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124..2233.\n"
"...5.543.16323\n"
"..45.62.....2.\n"
"63..123.4453..\n"
"51.3522.6..35.\n") == 0);
free(board281954592);
board281954592 = NULL;
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_golden_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );


char* board615930972 = gamma_board(board);
assert( board615930972 != NULL );
assert( strcmp(board615930972, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..4.353..\n"
"426.1444..133.\n"
"5.213.463.2..6\n"
"1.313..13.11..\n"
"43361.26......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124..2233.\n"
"...5.543.16323\n"
"..45.62.....2.\n"
"63..123.4453..\n"
"51.3522.6..35.\n") == 0);
free(board615930972);
board615930972 = NULL;
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );


char* board936547847 = gamma_board(board);
assert( board936547847 != NULL );
assert( strcmp(board936547847, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..4.353..\n"
"426.1444..133.\n"
"5.213.463.2..6\n"
"1.313..13.11..\n"
"43361.26......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124..2233.\n"
"...5.543.16323\n"
"..45.62.....2.\n"
"63..123.44535.\n"
"51.3522.6..35.\n") == 0);
free(board936547847);
board936547847 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );


char* board502365834 = gamma_board(board);
assert( board502365834 != NULL );
assert( strcmp(board502365834, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..4.353..\n"
"426.1444..133.\n"
"5.213.463.2..6\n"
"1.313..13.11..\n"
"43361.26......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124..2233.\n"
"...5.543.16323\n"
"..45.62.....2.\n"
"63..123.44535.\n"
"51.3522.6..35.\n") == 0);
free(board502365834);
board502365834 = NULL;
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board253948429 = gamma_board(board);
assert( board253948429 != NULL );
assert( strcmp(board253948429, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..4.353..\n"
"426.1444..133.\n"
"5.213.463.2..6\n"
"1.313..13.11..\n"
"43361.26......\n"
"......4.5..52.\n"
"..4....5..2.46\n"
"..31124..2233.\n"
"...5.543.16323\n"
"..45.62.....2.\n"
"63..123.44535.\n"
"51.3522.6..35.\n") == 0);
free(board253948429);
board253948429 = NULL;
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_golden_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 2) == 1 );


char* board675346596 = gamma_board(board);
assert( board675346596 != NULL );
assert( strcmp(board675346596, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.313.413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"51.3522.6..35.\n") == 0);
free(board675346596);
board675346596 = NULL;
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_golden_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );


char* board500833258 = gamma_board(board);
assert( board500833258 != NULL );
assert( strcmp(board500833258, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.6..35.\n") == 0);
free(board500833258);
board500833258 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );


char* board795598948 = gamma_board(board);
assert( board795598948 != NULL );
assert( strcmp(board795598948, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.6..35.\n") == 0);
free(board795598948);
board795598948 = NULL;
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 6, 10) == 0 );


char* board943153677 = gamma_board(board);
assert( board943153677 != NULL );
assert( strcmp(board943153677, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.6..35.\n") == 0);
free(board943153677);
board943153677 = NULL;
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board738904807 = gamma_board(board);
assert( board738904807 != NULL );
assert( strcmp(board738904807, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board738904807);
board738904807 = NULL;
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_free_fields(board, 2) == 20 );


char* board879297924 = gamma_board(board);
assert( board879297924 != NULL );
assert( strcmp(board879297924, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board879297924);
board879297924 = NULL;
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );


char* board921710024 = gamma_board(board);
assert( board921710024 != NULL );
assert( strcmp(board921710024, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board921710024);
board921710024 = NULL;
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board584987309 = gamma_board(board);
assert( board584987309 != NULL );
assert( strcmp(board584987309, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board584987309);
board584987309 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );


char* board233369281 = gamma_board(board);
assert( board233369281 != NULL );
assert( strcmp(board233369281, 
"4.62....4..44.\n"
".2521...661..4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134413.11..\n"
"43361.26......\n"
"......465..52.\n"
"..4....5..2546\n"
"..31124..2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board233369281);
board233369281 = NULL;
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_golden_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_golden_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 4, 8) == 0 );


char* board767711391 = gamma_board(board);
assert( board767711391 != NULL );
assert( strcmp(board767711391, 
"4.62....4..44.\n"
".2521...6611.4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134415.11..\n"
"43361226......\n"
"......465..52.\n"
"..4....55.2546\n"
"..311244.2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board767711391);
board767711391 = NULL;
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_golden_move(board, 4, 13, 2) == 0 );


char* board518203893 = gamma_board(board);
assert( board518203893 != NULL );
assert( strcmp(board518203893, 
"4.62....4..44.\n"
".2521...6611.4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134415.11..\n"
"43361226......\n"
"......465..52.\n"
"..4....55.2546\n"
"..311244.2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board518203893);
board518203893 = NULL;
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );


char* board627872833 = gamma_board(board);
assert( board627872833 != NULL );
assert( strcmp(board627872833, 
"4.62....4..44.\n"
".2521...6611.4\n"
"...65...6663..\n"
"..261..44353..\n"
"426.4444..133.\n"
"5.2134463.2..6\n"
"1.3134415.11..\n"
"43361226......\n"
"......465..52.\n"
"..4....55.2546\n"
"..311244.2233.\n"
"..45.543.16323\n"
".345.62.....2.\n"
"63.1123.44535.\n"
"5133522.66.35.\n") == 0);
free(board627872833);
board627872833 = NULL;
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );


gamma_delete(board);

    return 0;
}
