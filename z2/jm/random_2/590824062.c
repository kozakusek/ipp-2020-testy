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
uuid: 590824062
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 14, 13, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_free_fields(board, 6) == 131 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_free_fields(board, 7) == 131 );
assert( gamma_move(board, 8, 3, 12) == 1 );
assert( gamma_golden_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_free_fields(board, 9) == 129 );
assert( gamma_move(board, 10, 7, 10) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 13, 11, 7) == 0 );
assert( gamma_move(board, 13, 2, 6) == 1 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 7) == 118 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_free_fields(board, 8) == 116 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 7, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 8, 12) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 6, 9) == 1 );
assert( gamma_move(board, 13, 1, 7) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );


char* board522538075 = gamma_board(board);
assert( board522538075 != NULL );
assert( strcmp(board522538075, 
"..........\n"
"...81...11.\n"
"...6......\n"
".1...2.10.6\n"
"......1210..\n"
"..2.......\n"
".13..2.....\n"
"3.13....811.\n"
"......4...\n"
"5.12....84.\n"
".9..1.1...\n"
".6........\n"
"..4....5..\n"
"..3.......\n") == 0);
free(board522538075);
board522538075 = NULL;
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board123089585 = gamma_board(board);
assert( board123089585 != NULL );
assert( strcmp(board123089585, 
"..........\n"
"...81..611.\n"
".576......\n"
".1...2.10.6\n"
"......1210..\n"
"..2.......\n"
".13..2.....\n"
"3.13....811.\n"
"3.....4...\n"
"5.12...7843\n"
".9..1.1...\n"
".6........\n"
"..4....5..\n"
"4.3.......\n") == 0);
free(board123089585);
board123089585 = NULL;
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 7, 0) == 1 );


char* board580994045 = gamma_board(board);
assert( board580994045 != NULL );
assert( strcmp(board580994045, 
"..........\n"
"...81..611.\n"
".576......\n"
".1...2.10.6\n"
"......1210..\n"
"..2......8\n"
".13..2.....\n"
"3.13....811.\n"
"3.....4...\n"
"5.12...7843\n"
".9..1.1...\n"
".6........\n"
"..4....5..\n"
"8.3....9..\n") == 0);
free(board580994045);
board580994045 = NULL;
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_move(board, 10, 8, 3) == 1 );
assert( gamma_move(board, 11, 5, 4) == 1 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );


char* board670247093 = gamma_board(board);
assert( board670247093 != NULL );
assert( strcmp(board670247093, 
"..........\n"
"...817.611.\n"
".576..1...\n"
".1...2.10.6\n"
"2.....1210..\n"
"..2......8\n"
"91310.2.....\n"
"3.13....811.\n"
"3.....4...\n"
"5112..117843\n"
"139..1.1.10.\n"
".6...3....\n"
"..4....5..\n"
"8.3....9..\n") == 0);
free(board670247093);
board670247093 = NULL;
assert( gamma_move(board, 10, 3, 13) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 12, 6, 9) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );


char* board247881186 = gamma_board(board);
assert( board247881186 != NULL );
assert( strcmp(board247881186, 
"...10......\n"
"...817.611.\n"
".576..1...\n"
".1...2.10.6\n"
"2.....1210..\n"
"..2......8\n"
"91310.2.....\n"
"3.131...811.\n"
"3.....4...\n"
"5112..117843\n"
"139.111.1.10.\n"
".6...3....\n"
"..4....5..\n"
"8.3....9..\n") == 0);
free(board247881186);
board247881186 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 6, 12) == 1 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 9, 1, 13) == 1 );
assert( gamma_move(board, 10, 13, 7) == 0 );
assert( gamma_move(board, 11, 3, 9) == 1 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );


char* board799700379 = gamma_board(board);
assert( board799700379 != NULL );
assert( strcmp(board799700379, 
".9.10......\n"
"..78178611.\n"
".576..1...\n"
".1...2.10.6\n"
"2.211..12104.\n"
"..2......8\n"
"91310.2.....\n"
"3.131.1.811.\n"
"37....47..\n"
"5112.4117843\n"
"1395111.1.10.\n"
".6..33....\n"
".24....5..\n"
"8.3....96.\n") == 0);
free(board799700379);
board799700379 = NULL;
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 11, 7, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 10, 3) == 0 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );


char* board211955378 = gamma_board(board);
assert( board211955378 != NULL );
assert( strcmp(board211955378, 
".9.10......\n"
"..78178611.\n"
".576..1...\n"
".1...2.1026\n"
"2.211..12104.\n"
"..2.6....8\n"
"91310.2.6...\n"
"3.131.1.811.\n"
"37....47..\n"
"5112.4117843\n"
"1395111.1410.\n"
".6..33.11..\n"
".24...1054.\n"
"893..10.96.\n") == 0);
free(board211955378);
board211955378 = NULL;
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 13, 7) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_move(board, 10, 8, 11) == 1 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_move(board, 11, 4, 5) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 13, 6, 6) == 1 );
assert( gamma_move(board, 13, 7, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 8, 11) == 0 );
assert( gamma_move(board, 12, 2, 5) == 1 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 13, 6, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_free_fields(board, 10) == 51 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 11, 3, 4) == 1 );
assert( gamma_move(board, 12, 13, 4) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );


char* board527845812 = gamma_board(board);
assert( board527845812 != NULL );
assert( strcmp(board527845812, 
".9.10......\n"
"..781786115\n"
".576..1.10.\n"
".1...2.1026\n"
"2.211..1210412\n"
"7.216.4.58\n"
"91310.2.6810.\n"
"3.131.1133111\n"
"3712.11147..\n"
"5112114117843\n"
"1395111.1410.\n"
".6..33.11..\n"
"6244..1054.\n"
"893..1013962\n") == 0);
free(board527845812);
board527845812 = NULL;
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 6) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_golden_move(board, 11, 9, 9) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 13, 7, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );


char* board578419066 = gamma_board(board);
assert( board578419066 != NULL );
assert( strcmp(board578419066, 
".9.10......\n"
"..781786115\n"
".576..1.10.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216.4.58\n"
"91310.2.6810.\n"
"3.131.1133111\n"
"37121211147..\n"
"5112114117843\n"
"1395111.1410.\n"
".6..33.11..\n"
"6244..1054.\n"
"893..1013962\n") == 0);
free(board578419066);
board578419066 = NULL;
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_golden_move(board, 7, 1, 1) == 1 );


char* board235605345 = gamma_board(board);
assert( board235605345 != NULL );
assert( strcmp(board235605345, 
".9.10......\n"
"..781786115\n"
".576..1.10.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216.4.58\n"
"91310.2.6810.\n"
"3.131.1133111\n"
"37121211147..\n"
"5112114117843\n"
"1395111.1410.\n"
".6..33.11..\n"
"6744..1054.\n"
"893..1013962\n") == 0);
free(board235605345);
board235605345 = NULL;
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_golden_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 5, 7) == 1 );
assert( gamma_move(board, 12, 3, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_move(board, 11, 0, 4) == 0 );
assert( gamma_move(board, 12, 13, 6) == 0 );
assert( gamma_move(board, 13, 13, 0) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_golden_move(board, 13, 0, 5) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );


char* board589129506 = gamma_board(board);
assert( board589129506 != NULL );
assert( strcmp(board589129506, 
".9310......\n"
"..781786115\n"
"9576..1.10.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.131.1133111\n"
"13712121114732\n"
"5112114117843\n"
"1395111.1410.\n"
".6..33.11.1\n"
"6744..1054.\n"
"893..1013962\n") == 0);
free(board589129506);
board589129506 = NULL;
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );


char* board643038719 = gamma_board(board);
assert( board643038719 != NULL );
assert( strcmp(board643038719, 
".9310......\n"
"..781786115\n"
"9576..1.10.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.131.1133111\n"
"13712121114732\n"
"5112114117843\n"
"1395111.1410.\n"
".6..33.11.1\n"
"6744..1054.\n"
"893..1013962\n") == 0);
free(board643038719);
board643038719 = NULL;
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 10, 7, 11) == 1 );
assert( gamma_move(board, 11, 8, 2) == 1 );
assert( gamma_free_fields(board, 11) == 34 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_free_fields(board, 12) == 34 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 9, 13) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_free_fields(board, 7) == 32 );


char* board108260799 = gamma_board(board);
assert( board108260799 != NULL );
assert( strcmp(board108260799, 
".9310.....4\n"
"..781786115\n"
"9576..11010.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.13191133111\n"
"13712121114732\n"
"5112114117843\n"
"1395111.1410.\n"
".6.333.11111\n"
"6744..1054.\n"
"893..1013962\n") == 0);
free(board108260799);
board108260799 = NULL;
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 10, 7, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 13, 12, 1) == 0 );
assert( gamma_move(board, 13, 6, 0) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );


char* board599486061 = gamma_board(board);
assert( board599486061 != NULL );
assert( strcmp(board599486061, 
".9310.....4\n"
"..781786115\n"
"9576..11010.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.13191133111\n"
"13712121114732\n"
"5112114117843\n"
"1395111.1410.\n"
".6.333.11111\n"
"6744..10541\n"
"893..1013962\n") == 0);
free(board599486061);
board599486061 = NULL;
assert( gamma_move(board, 7, 7, 3) == 0 );


char* board419762250 = gamma_board(board);
assert( board419762250 != NULL );
assert( strcmp(board419762250, 
".9310.....4\n"
"..781786115\n"
"9576..11010.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.13191133111\n"
"13712121114732\n"
"5112114117843\n"
"1395111.1410.\n"
".6.333.11111\n"
"6744..10541\n"
"893..1013962\n") == 0);
free(board419762250);
board419762250 = NULL;
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 13, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 12, 9, 7) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 13, 13, 4) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 0) == 0 );


char* board879552265 = gamma_board(board);
assert( board879552265 != NULL );
assert( strcmp(board879552265, 
".9310.....4\n"
"..781786115\n"
"9576..11010.\n"
".1...2.1026\n"
"2.211.71210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.13191133111\n"
"13712121114732\n"
"5112114117843\n"
"1395111.1410.\n"
".6.3312.11111\n"
"6744..10541\n"
"893..1013962\n") == 0);
free(board879552265);
board879552265 = NULL;
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_move(board, 12, 13, 6) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_golden_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 11, 13, 8) == 0 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 1, 12) == 1 );
assert( gamma_move(board, 13, 8, 13) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_free_fields(board, 11) == 25 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 13, 3, 9) == 0 );
assert( gamma_move(board, 13, 4, 9) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );


char* board481125662 = gamma_board(board);
assert( board481125662 != NULL );
assert( strcmp(board481125662, 
".9310.6..134\n"
".13781786115\n"
"9576..11010.\n"
".1...2.1026\n"
"242111371210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.13199133111\n"
"13712121114742\n"
"5112114117843\n"
"1395111.1410.\n"
".663312311111\n"
"67441.10541\n"
"89311.1013962\n") == 0);
free(board481125662);
board481125662 = NULL;
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );


char* board866768938 = gamma_board(board);
assert( board866768938 != NULL );
assert( strcmp(board866768938, 
".9310.6..134\n"
".13781786115\n"
"9576..11010.\n"
".1...2.1026\n"
"242111371210411\n"
"7.216104.58\n"
"91310.21268108\n"
"3.13199133111\n"
"13712121114742\n"
"5112114117843\n"
"1395111.1410.\n"
".663312311111\n"
"67441.10541\n"
"89311.1013962\n") == 0);
free(board866768938);
board866768938 = NULL;
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 13, 6) == 0 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 13, 13, 6) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_free_fields(board, 7) == 17 );


gamma_delete(board);

    return 0;
}
