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
uuid: 885176792
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 13, 12, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_free_fields(board, 1) == 193 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_free_fields(board, 3) == 189 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );


char* board697544719 = gamma_board(board);
assert( board697544719 != NULL );
assert( strcmp(board697544719, 
"...............\n"
".1.....3.......\n"
"...............\n"
"...............\n"
"...............\n"
".6.....2.......\n"
"8..............\n"
"5..............\n"
".............3.\n"
"..........4....\n"
"...95..42...2..\n"
"...............\n"
"............7..\n") == 0);
free(board697544719);
board697544719 = NULL;
assert( gamma_move(board, 10, 11, 3) == 1 );
assert( gamma_move(board, 10, 13, 4) == 0 );
assert( gamma_move(board, 12, 7, 14) == 0 );
assert( gamma_move(board, 12, 2, 6) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_free_fields(board, 5) == 174 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 12, 12) == 1 );
assert( gamma_free_fields(board, 7) == 172 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 11, 12) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_free_fields(board, 9) == 170 );
assert( gamma_move(board, 10, 14, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 7, 10) == 1 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_free_fields(board, 11) == 167 );
assert( gamma_move(board, 12, 9, 12) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );


char* board292790744 = gamma_board(board);
assert( board292790744 != NULL );
assert( strcmp(board292790744, 
".........12.87..\n"
"31..4..3.......\n"
"..1..6.11.......\n"
".11....3........\n"
"...............\n"
".6.....2.......\n"
"8.12............\n"
"52..9..........\n"
"....5........3.\n"
".........1410...\n"
"...95..42...2.10\n"
"............1..\n"
"............7..\n") == 0);
free(board292790744);
board292790744 = NULL;
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 162 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_free_fields(board, 7) == 160 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 11, 7, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 0, 2) == 1 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 13, 10) == 1 );
assert( gamma_free_fields(board, 8) == 146 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 12, 1, 1) == 1 );


char* board864773516 = gamma_board(board);
assert( board864773516 != NULL );
assert( strcmp(board864773516, 
"....8...312.87..\n"
"31..4..31......\n"
"..1.16.11.....8.\n"
".11....3.6......\n"
"...............\n"
".6.....2.......\n"
"8.12.4...6..42..\n"
"52..9...12..6...\n"
"....5....9...3.\n"
"....2....14107..\n"
"12..95..42...2.10\n"
".12.....11....1..\n"
".........9..7..\n") == 0);
free(board864773516);
board864773516 = NULL;
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_free_fields(board, 3) == 141 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 11, 0) == 1 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );


char* board800227923 = gamma_board(board);
assert( board800227923 != NULL );
assert( strcmp(board800227923, 
"....8...312.87..\n"
"31..4..313.....\n"
"..1.16.11.....8.\n"
".11....376......\n"
"......4........\n"
".6.....2.......\n"
"8.12.4..66..42..\n"
"52..9...12..6...\n"
"....5....9...3.\n"
"...22..11.14107..\n"
"12..95..42...2.10\n"
".128....11....1..\n"
".........9.107.2\n") == 0);
free(board800227923);
board800227923 = NULL;
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 7, 12, 12) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 10, 10, 11) == 1 );
assert( gamma_move(board, 11, 8, 9) == 0 );
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 125 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_free_fields(board, 10) == 122 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 14, 10) == 1 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 114 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 10, 8, 12) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 12, 12) == 0 );
assert( gamma_move(board, 12, 13, 2) == 1 );
assert( gamma_move(board, 12, 3, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 10, 9, 6) == 1 );
assert( gamma_free_fields(board, 10) == 103 );
assert( gamma_move(board, 11, 7, 13) == 0 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 12, 11, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 14) == 0 );
assert( gamma_move(board, 10, 7, 5) == 1 );
assert( gamma_move(board, 11, 9, 10) == 0 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_move(board, 12, 9, 5) == 1 );
assert( gamma_move(board, 12, 2, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 11 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_golden_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 8, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 9 );


char* board708970499 = gamma_board(board);
assert( board708970499 != NULL );
assert( strcmp(board708970499, 
"....8..4312387..\n"
"317.4..31310....\n"
"4.1.16.11357..81\n"
".11....376..12...\n"
"...9..4.9.6....\n"
".6.12.7.2...6...\n"
"8.12.4.86610842..\n"
"529297.101212.68..\n"
"3...5...599.33.\n"
"7.12221.11.141075.\n"
"129395..4232.21210\n"
"41286.8.114...1..\n"
"118...12...91107.2\n") == 0);
free(board708970499);
board708970499 = NULL;
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 11, 1, 14) == 0 );
assert( gamma_free_fields(board, 11) == 89 );
assert( gamma_golden_move(board, 11, 8, 6) == 1 );
assert( gamma_move(board, 12, 8, 12) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_golden_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_golden_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_free_fields(board, 11) == 83 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 10, 10, 0) == 0 );


char* board663967717 = gamma_board(board);
assert( board663967717 != NULL );
assert( strcmp(board663967717, 
"..7.8..4312387..\n"
"317.4.731310....\n"
"4.1.16.11357..81\n"
".11....3769.12.41\n"
"...9..4.7.6..3.\n"
".6.12.7.2...63..\n"
"8.12.4.861110842..\n"
"529297.101212.68..\n"
"3...5...599.33.\n"
"7.12221.11.141075.\n"
"129395..4232.21210\n"
"41286.8.114.2.1..\n"
"11811..12.10.9110742\n") == 0);
free(board663967717);
board663967717 = NULL;
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 7, 14) == 0 );
assert( gamma_move(board, 12, 11, 12) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 12, 14) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 13) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 11) == 0 );
assert( gamma_move(board, 11, 10, 7) == 1 );
assert( gamma_busy_fields(board, 11) == 9 );


char* board425491001 = gamma_board(board);
assert( board425491001 != NULL );
assert( strcmp(board425491001, 
"..7.8..4312387..\n"
"317.4.731310....\n"
"4.1.16.113575.81\n"
".11....3769.12.41\n"
"...911.4.7.6..3.\n"
".6.12.7.2..1163..\n"
"8.12.4.861110842..\n"
"529297.101212.68..\n"
"3...5...599.33.\n"
"7.12221211.141075.\n"
"129395..4232.21210\n"
"41286.8.114.2.1..\n"
"11811..12.10.9110742\n") == 0);
free(board425491001);
board425491001 = NULL;
assert( gamma_move(board, 12, 8, 7) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );


char* board396057379 = gamma_board(board);
assert( board396057379 != NULL );
assert( strcmp(board396057379, 
"..7.8..4312387..\n"
"317.4.731310....\n"
"4.1.16.113575.81\n"
".11..1.3769.12.41\n"
"...911.4.7.6..3.\n"
".6.12.7.212.1163..\n"
"8.12.4.861110842..\n"
"529297.101212.68..\n"
"3...5...599.33.\n"
"7.12221211.141075.\n"
"129395..4232.21210\n"
"41286.8.114.2.1..\n"
"11811..12.10.9110742\n") == 0);
free(board396057379);
board396057379 = NULL;
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_golden_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 13, 4) == 0 );
assert( gamma_move(board, 10, 2, 9) == 1 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 12, 7, 10) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 12, 13) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 5, 14) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 4, 11) == 0 );


char* board840267023 = gamma_board(board);
assert( board840267023 != NULL );
assert( strcmp(board840267023, 
".57.8..4312387.2\n"
"317.4.731310....\n"
"4.1.16.113575.81\n"
".1110.1.3769.12.41\n"
"7..911.4.7.6..3.\n"
".6.12.7.212.1163..\n"
"8.12.4.861110842..\n"
"529297.101212.68..\n"
"3...5...599.33.\n"
"7.12221211.1410757\n"
"129395..4232.21210\n"
"41286.8.114.2.1..\n"
"11811..12.10.9110742\n") == 0);
free(board840267023);
board840267023 = NULL;
assert( gamma_move(board, 11, 12, 3) == 0 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_golden_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 0, 4) == 0 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_free_fields(board, 9) == 60 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 11, 8, 9) == 0 );
assert( gamma_move(board, 12, 7, 13) == 0 );
assert( gamma_move(board, 12, 6, 2) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_free_fields(board, 11) == 57 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 9, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 13, 6) == 1 );
assert( gamma_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 11, 9, 12) == 0 );
assert( gamma_move(board, 12, 6, 14) == 0 );
assert( gamma_move(board, 12, 13, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 14 );
assert( gamma_golden_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 6, 14) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 7, 14) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 11, 13, 3) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 9, 12, 9) == 1 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_free_fields(board, 10) == 43 );
assert( gamma_free_fields(board, 11) == 43 );
assert( gamma_move(board, 12, 14, 6) == 1 );
assert( gamma_move(board, 12, 9, 9) == 0 );
assert( gamma_busy_fields(board, 12) == 15 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 11, 7, 13) == 0 );
assert( gamma_move(board, 12, 12, 3) == 0 );
assert( gamma_free_fields(board, 12) == 38 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 11, 2) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 6) == 0 );
assert( gamma_move(board, 11, 1, 12) == 0 );
assert( gamma_golden_move(board, 11, 12, 12) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_golden_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 12, 5) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );


char* board229381306 = gamma_board(board);
assert( board229381306 != NULL );
assert( strcmp(board229381306, 
".57.8.64312387.2\n"
"31784.711310173.\n"
"4116167113575.81\n"
".11102183769.12941\n"
"782911.41766.635\n"
"46.12378212.1163..\n"
"8101224.861110842912\n"
"52929711101212.6812.\n"
"3..859..599.336\n"
"7111222121151410757\n"
"12939521242621021210\n"
"4128698.1141291..\n"
"118116.12.10.9110742\n") == 0);
free(board229381306);
board229381306 = NULL;
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 1, 14) == 0 );
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_golden_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );


char* board803269271 = gamma_board(board);
assert( board803269271 != NULL );
assert( strcmp(board803269271, 
".57.8.64312387.2\n"
"31784.711310173.\n"
"4116167113575.81\n"
".11102183769.12941\n"
"782911.41766.635\n"
"461212378212.1163..\n"
"8101224.861110842912\n"
"52929711101212.6812.\n"
"3..859.4599.336\n"
"7111222121151410757\n"
"12939521242621021210\n"
"4128698.11412912.\n"
"118116.12.10.9110742\n") == 0);
free(board803269271);
board803269271 = NULL;
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_move(board, 11, 12, 5) == 0 );
assert( gamma_move(board, 12, 12, 13) == 0 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 12, 13) == 0 );


char* board911466941 = gamma_board(board);
assert( board911466941 != NULL );
assert( strcmp(board911466941, 
".57.8.64312387.2\n"
"31784.711310173.\n"
"4116167113575.81\n"
".11102183769.12941\n"
"782911.417665635\n"
"461212378212.1163..\n"
"8101224.861110842912\n"
"52929711101212.6812.\n"
"3..859.4599.336\n"
"7111222121151410757\n"
"12939521242621021210\n"
"4128698.11412912.\n"
"118116.12.10.9110742\n") == 0);
free(board911466941);
board911466941 = NULL;
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board896239820 = gamma_board(board);
assert( board896239820 != NULL );
assert( strcmp(board896239820, 
".57.8.64312387.2\n"
"31784.711310173.\n"
"4116167113575.81\n"
".11102183769.12941\n"
"782911.417665635\n"
"461212378212.1163..\n"
"8101224.861110842912\n"
"52929711101212.6812.\n"
"3..859.4599.336\n"
"7111222121151410757\n"
"12939521242621021210\n"
"4128698.11412912.\n"
"118116.12.10.9110742\n") == 0);
free(board896239820);
board896239820 = NULL;
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 14 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_move(board, 12, 8, 2) == 0 );


char* board466854151 = gamma_board(board);
assert( board466854151 != NULL );
assert( strcmp(board466854151, 
".57.8.64312387.2\n"
"31784.711310173.\n"
"4116167113575.81\n"
".11102183769.12941\n"
"782911.417665635\n"
"461212378212.1163..\n"
"8101224.861110842912\n"
"52929711101212.6812.\n"
"3..859.4599.336\n"
"7111222121151410757\n"
"12939521242621021210\n"
"4128698.11412912.\n"
"118116.12.10.9110742\n") == 0);
free(board466854151);
board466854151 = NULL;
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );


char* board228923946 = gamma_board(board);
assert( board228923946 != NULL );
assert( strcmp(board228923946, 
".57.8.64312387.2\n"
"31784.711310173.\n"
"4116167113575.81\n"
".11102183769.12941\n"
"782911.417665635\n"
"461212378212.1163..\n"
"8101224.861110842912\n"
"52929711101212.6812.\n"
"39.859.4599.336\n"
"7111222121151410757\n"
"12939521242621021210\n"
"4128698211412912.\n"
"118116.12.10.9110742\n") == 0);
free(board228923946);
board228923946 = NULL;
assert( gamma_move(board, 12, 14, 11) == 1 );
assert( gamma_free_fields(board, 12) == 22 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 10, 12, 13) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_golden_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_golden_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_move(board, 12, 10, 10) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


gamma_delete(board);

    return 0;
}
