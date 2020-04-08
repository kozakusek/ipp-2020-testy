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
uuid: 194550696
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 15, 14, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_free_fields(board, 2) == 161 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 157 );


char* board946173298 = gamma_board(board);
assert( board946173298 != NULL );
assert( strcmp(board946173298, 
"...........\n"
"...........\n"
"...........\n"
"..........2\n"
"........51.\n"
".....1.....\n"
"..3........\n"
"...........\n"
"...........\n"
"...........\n"
"5......4...\n"
"...........\n"
"...........\n"
"...........\n"
".........2.\n") == 0);
free(board946173298);
board946173298 = NULL;
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_golden_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 6, 6) == 1 );
assert( gamma_move(board, 10, 4, 8) == 1 );


char* board987586934 = gamma_board(board);
assert( board987586934 != NULL );
assert( strcmp(board987586934, 
"...........\n"
"...........\n"
"......7....\n"
"..........2\n"
"........51.\n"
".....1.....\n"
"..3.10......\n"
"...9.......\n"
"......10....\n"
"...........\n"
"5......4...\n"
"....8.....8\n"
"...........\n"
"...........\n"
".........2.\n") == 0);
free(board987586934);
board987586934 = NULL;
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 12, 1, 1) == 1 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_move(board, 13, 1, 1) == 0 );
assert( gamma_move(board, 14, 5, 5) == 1 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board446948052 = gamma_board(board);
assert( board446948052 != NULL );
assert( strcmp(board446948052, 
"...........\n"
"...........\n"
"......7....\n"
"..........2\n"
"........51.\n"
".....1.....\n"
"..3.10.....2\n"
"...9.......\n"
"......10....\n"
".....14.....\n"
"5.....114...\n"
"....8.....8\n"
"...........\n"
".12.........\n"
".13.......2.\n") == 0);
free(board446948052);
board446948052 = NULL;
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_free_fields(board, 9) == 138 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_move(board, 12, 10, 4) == 1 );
assert( gamma_move(board, 13, 3, 8) == 1 );
assert( gamma_move(board, 14, 4, 14) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_free_fields(board, 8) == 128 );
assert( gamma_move(board, 9, 8, 14) == 1 );
assert( gamma_free_fields(board, 9) == 127 );


char* board523420302 = gamma_board(board);
assert( board523420302 != NULL );
assert( strcmp(board523420302, 
"....14...9..\n"
"...........\n"
"......7....\n"
"...4......2\n"
"........51.\n"
".....1.....\n"
"7.31310....32\n"
".6.9..9....\n"
".4....10..6.\n"
"2....14.....\n"
"5.....114..12\n"
"...1188....8\n"
"...3....1..\n"
".12.......8.\n"
"713......12.\n") == 0);
free(board523420302);
board523420302 = NULL;
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_golden_move(board, 10, 14, 8) == 0 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 11, 10, 2) == 1 );
assert( gamma_move(board, 12, 6, 3) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_move(board, 8, 6, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 10, 2, 14) == 1 );
assert( gamma_move(board, 11, 9, 1) == 0 );
assert( gamma_move(board, 11, 2, 11) == 1 );
assert( gamma_move(board, 12, 12, 9) == 0 );
assert( gamma_move(board, 12, 8, 1) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, 8) == 0 );
assert( gamma_move(board, 14, 5, 1) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );


char* board779602545 = gamma_board(board);
assert( board779602545 != NULL );
assert( strcmp(board779602545, 
"8110.14.8.9..\n"
"...........\n"
"......7....\n"
"..114......2\n"
"........51.\n"
"..1..1.....\n"
"7.31310....32\n"
".6.9..99...\n"
".4....10..61\n"
"2..12.14....1\n"
"5.....114..12\n"
"10..118812...8\n"
"...3.14..1.11\n"
".12..314..128.\n"
"713.10....12.\n") == 0);
free(board779602545);
board779602545 = NULL;
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 11, 4, 14) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 13, 2, 1) == 1 );
assert( gamma_move(board, 13, 9, 13) == 1 );
assert( gamma_move(board, 14, 1, 9) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_golden_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_free_fields(board, 9) == 96 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 10, 0, 11) == 1 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 11, 10, 1) == 1 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_golden_move(board, 12, 7, 1) == 1 );
assert( gamma_move(board, 13, 0, 7) == 1 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_golden_move(board, 13, 2, 8) == 1 );
assert( gamma_move(board, 14, 13, 10) == 0 );
assert( gamma_move(board, 14, 4, 0) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 3, 12) == 1 );
assert( gamma_move(board, 9, 7, 11) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 10, 1, 10) == 1 );
assert( gamma_move(board, 11, 3, 11) == 0 );
assert( gamma_move(board, 11, 0, 14) == 0 );
assert( gamma_free_fields(board, 11) == 81 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_move(board, 13, 13, 5) == 0 );
assert( gamma_golden_move(board, 13, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 9, 10, 14) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );


char* board357754075 = gamma_board(board);
assert( board357754075 != NULL );
assert( strcmp(board357754075, 
"8110.14.8.9.9\n"
"5...1....13.\n"
"...8..7.2..\n"
"10.1147..9.52\n"
".10...4.751.\n"
".141..1.....\n"
"7.1313108.9.32\n"
"13689.1199.6.\n"
".4.6..10.361\n"
"2..12814.12..1\n"
"510....114..12\n"
"10..118812...8\n"
"..1310141.1.11\n"
".2137314.1212811\n"
"713.1014.11.12.\n") == 0);
free(board357754075);
board357754075 = NULL;
assert( gamma_move(board, 13, 13, 10) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_free_fields(board, 14) == 75 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 9, 10, 7) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_golden_move(board, 9, 14, 9) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 6, 10) == 1 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 10, 10) == 1 );
assert( gamma_free_fields(board, 12) == 67 );
assert( gamma_move(board, 13, 9, 7) == 0 );
assert( gamma_move(board, 13, 10, 14) == 0 );
assert( gamma_move(board, 14, 4, 10) == 1 );
assert( gamma_move(board, 14, 8, 12) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 10, 7, 13) == 1 );


char* board308737425 = gamma_board(board);
assert( board308737425 != NULL );
assert( strcmp(board308737425, 
"8110.14.8.9.9\n"
"5...1..10.13.\n"
"...8..7.2..\n"
"10.1147..9752\n"
".10..1441175112\n"
".141..1.....\n"
"761313108.9.32\n"
"13689.1199.69\n"
".4.6..105361\n"
"2..12814812..1\n"
"510....114.612\n"
"10.1118812...8\n"
"5.1310141.1.11\n"
".2137314.1212811\n"
"713.1014.11.12.\n") == 0);
free(board308737425);
board308737425 = NULL;
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 11, 2, 12) == 1 );
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 14, 14, 5) == 0 );
assert( gamma_free_fields(board, 14) == 61 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 12, 12, 4) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_free_fields(board, 12) == 57 );
assert( gamma_move(board, 13, 8, 7) == 1 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 14, 2, 6) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 6) == 0 );


char* board301048411 = gamma_board(board);
assert( board301048411 != NULL );
assert( strcmp(board301048411, 
"8110.14.8.9.9\n"
"5...1..10.13.\n"
"..118..7.2..\n"
"10.1147..9752\n"
".10..1441175112\n"
".141..1.....\n"
"761313108.91132\n"
"13689.11991369\n"
"64146..105361\n"
"22.12814812..1\n"
"510....114.612\n"
"10.1118812...8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014.11.12.\n") == 0);
free(board301048411);
board301048411 = NULL;
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 4, 7) == 1 );
assert( gamma_move(board, 12, 6, 9) == 1 );
assert( gamma_move(board, 13, 8, 6) == 0 );
assert( gamma_move(board, 13, 1, 14) == 0 );


char* board219089464 = gamma_board(board);
assert( board219089464 != NULL );
assert( strcmp(board219089464, 
"8110.14.8.9.9\n"
"5...1..10.13.\n"
"..118..7.2..\n"
"10.1147..9752\n"
".10..1441175112\n"
".141..112....\n"
"761313108.91132\n"
"136891111991369\n"
"64146..105361\n"
"22.12814812..1\n"
"510....114.612\n"
"10.1118812...8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014.11.12.\n") == 0);
free(board219089464);
board219089464 = NULL;
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_free_fields(board, 7) == 50 );


char* board175606076 = gamma_board(board);
assert( board175606076 != NULL );
assert( strcmp(board175606076, 
"8110.14.8.9.9\n"
"5...1..10.13.\n"
"..118..742..\n"
"10.1147..9752\n"
".10..1441175112\n"
".141..112....\n"
"761313108.91132\n"
"136891111991369\n"
"64146..105361\n"
"22.12814812..1\n"
"510..3.114.612\n"
"10.1118812...8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014.11.12.\n") == 0);
free(board175606076);
board175606076 = NULL;
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 13, 3) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 13, 13, 8) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 14, 6, 14) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 14, 1, 11) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );


char* board714834077 = gamma_board(board);
assert( board714834077 != NULL );
assert( strcmp(board714834077, 
"8110.14.8.9.9\n"
"5...1..10.132\n"
".8118..742.3\n"
"10141147..9752\n"
".10..1441175112\n"
".1411.112....\n"
"761313108.91132\n"
"136891111991369\n"
"64146..105361\n"
"22.12814812..1\n"
"510..3.114.612\n"
"10.1118812.11.8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014.11.12.\n") == 0);
free(board714834077);
board714834077 = NULL;
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_free_fields(board, 10) == 42 );


char* board204350239 = gamma_board(board);
assert( board204350239 != NULL );
assert( strcmp(board204350239, 
"8110.14.8.9.9\n"
"5...1..10.132\n"
".8118..742.3\n"
"10141147..9752\n"
".10..1441175112\n"
".1411.112....\n"
"761313108.91132\n"
"136891111991369\n"
"64146.6105361\n"
"22.12814812.91\n"
"510..3.114.612\n"
"10.1118812.11.8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014.11.12.\n") == 0);
free(board204350239);
board204350239 = NULL;
assert( gamma_move(board, 11, 13, 8) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 14, 0, 11) == 0 );
assert( gamma_move(board, 14, 3, 9) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 11, 9, 10) == 0 );
assert( gamma_move(board, 13, 14, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_free_fields(board, 13) == 37 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 14 );


char* board570492755 = gamma_board(board);
assert( board570492755 != NULL );
assert( strcmp(board570492755, 
"8110314.8.9.9\n"
"5...1..10.132\n"
".8118..742.3\n"
"10141147..9752\n"
"1110..1441175112\n"
".1411.112..2.\n"
"761313108.91132\n"
"136891111991369\n"
"64146.6105361\n"
"22.12814812.91\n"
"5109.3.1147612\n"
"1091118812.11.8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014911.12.\n") == 0);
free(board570492755);
board570492755 = NULL;
assert( gamma_move(board, 12, 13, 8) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 4, 5) == 0 );
assert( gamma_move(board, 13, 0, 9) == 1 );
assert( gamma_move(board, 14, 0, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 34 );


char* board894222653 = gamma_board(board);
assert( board894222653 != NULL );
assert( strcmp(board894222653, 
"8110314.8.9.9\n"
"5...1..10.132\n"
".8118..742.3\n"
"10141147..9752\n"
"1110..1441175112\n"
"131411.112..2.\n"
"761313108.91132\n"
"136891111991369\n"
"64146.6105361\n"
"22.12814812.91\n"
"5109.3.1147612\n"
"1091118812.11.8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014911.12.\n") == 0);
free(board894222653);
board894222653 = NULL;
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );


char* board369577747 = gamma_board(board);
assert( board369577747 != NULL );
assert( strcmp(board369577747, 
"8110314.8.9.9\n"
"5...1..10.132\n"
".8118..742.3\n"
"10141147..9752\n"
"1110..1441175112\n"
"131411.112..2.\n"
"761313108.91132\n"
"136891111991369\n"
"64146.6105361\n"
"22.12814812.91\n"
"5109.3.1147612\n"
"1091118812.11.8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014911.12.\n") == 0);
free(board369577747);
board369577747 = NULL;
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 10, 5, 14) == 1 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_busy_fields(board, 11) == 14 );
assert( gamma_move(board, 12, 6, 9) == 0 );
assert( gamma_free_fields(board, 12) == 33 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_free_fields(board, 13) == 33 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_golden_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 14, 9, 8) == 0 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board267503552 = gamma_board(board);
assert( board267503552 != NULL );
assert( strcmp(board267503552, 
"8110314108.9.9\n"
"5...1..10.132\n"
".8118..742.3\n"
"10141147..9752\n"
"1110..1441175112\n"
"131411.112..2.\n"
"761313108.91132\n"
"136891111991369\n"
"64146.6105361\n"
"22.12814812.91\n"
"5109.3.1147612\n"
"1091118812.11.8\n"
"5.1310141.1111\n"
"11213731411212811\n"
"713.1014911.12.\n") == 0);
free(board267503552);
board267503552 = NULL;
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 8, 13) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 10, 4, 14) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_free_fields(board, 11) == 32 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_move(board, 13, 12, 4) == 0 );
assert( gamma_move(board, 13, 5, 5) == 0 );
assert( gamma_move(board, 14, 13, 2) == 0 );
assert( gamma_move(board, 14, 10, 9) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 1, 13) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 12, 4) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 7, 7) == 0 );
assert( gamma_busy_fields(board, 13) == 8 );
assert( gamma_free_fields(board, 13) == 28 );
assert( gamma_free_fields(board, 14) == 28 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 1, 2) == 1 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 0, 8) == 0 );
assert( gamma_free_fields(board, 14) == 26 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_free_fields(board, 11) == 26 );
assert( gamma_golden_move(board, 12, 13, 5) == 0 );
assert( gamma_move(board, 13, 9, 8) == 0 );
assert( gamma_move(board, 13, 9, 11) == 0 );
assert( gamma_golden_move(board, 13, 10, 9) == 0 );
assert( gamma_move(board, 14, 10, 2) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 8, 9, 12) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_busy_fields(board, 13) == 9 );
assert( gamma_move(board, 14, 11, 6) == 0 );
assert( gamma_move(board, 14, 2, 13) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 7, 0) == 1 );


char* board279684451 = gamma_board(board);
assert( board279684451 != NULL );
assert( strcmp(board279684451, 
"8110314108.9.9\n"
"571471.6107132\n"
".8118..74283\n"
"10141147..9752\n"
"1110..1441175112\n"
"131411.112..214\n"
"761313108391132\n"
"136891111991369\n"
"64146136105361\n"
"22.12814812.91\n"
"5109.3.1147612\n"
"1091118812.11.8\n"
"5121310141.1111\n"
"11213731411212811\n"
"713.1014911312.\n") == 0);
free(board279684451);
board279684451 = NULL;
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_free_fields(board, 8) == 20 );


gamma_delete(board);

    return 0;
}
