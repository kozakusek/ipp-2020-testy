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
uuid: 282395999
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 13, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );


char* board148447648 = gamma_board(board);
assert( board148447648 != NULL );
assert( strcmp(board148447648, 
"..........4\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...3......1\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"....5......\n"
"..2........\n") == 0);
free(board148447648);
board148447648 = NULL;
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_move(board, 11, 5, 8) == 1 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 13, 11, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 129 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 11, 9, 10) == 1 );
assert( gamma_move(board, 12, 2, 6) == 1 );
assert( gamma_move(board, 12, 6, 2) == 1 );
assert( gamma_move(board, 13, 5, 6) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 10, 10, 7) == 1 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_free_fields(board, 11) == 112 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 13, 5, 9) == 1 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_free_fields(board, 4) == 103 );
assert( gamma_golden_move(board, 4, 9, 9) == 1 );


char* board703898617 = gamma_board(board);
assert( board703898617 != NULL );
assert( strcmp(board703898617, 
"..2...7...4\n"
"...1.......\n"
".7.......11.\n"
"10....136..4.\n"
"..4..11...103\n"
"..18..3.9710\n"
"7.123.13..6.1\n"
"...1...12...\n"
".....4....3\n"
"...121......\n"
"...3.113....\n"
"....5..5...\n"
"742........\n") == 0);
free(board703898617);
board703898617 = NULL;
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_free_fields(board, 7) == 102 );


char* board337452142 = gamma_board(board);
assert( board337452142 != NULL );
assert( strcmp(board337452142, 
"..2...7...4\n"
"...1.......\n"
".7.......11.\n"
"10....136..4.\n"
"..4..11...103\n"
"..18..3.9710\n"
"7.123513..6.1\n"
"...1...12...\n"
".....4....3\n"
"...121......\n"
"...3.113....\n"
"....5..5...\n"
"742........\n") == 0);
free(board337452142);
board337452142 = NULL;
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 12, 4, 6) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );


char* board139046693 = gamma_board(board);
assert( board139046693 != NULL );
assert( strcmp(board139046693, 
"..2...7...4\n"
"...1.......\n"
".7......811.\n"
"10....136..4.\n"
"..4..11...103\n"
"..18..3.9710\n"
"7.123513..6.1\n"
"...1...12...\n"
".....4....3\n"
"...121......\n"
"...3.113....\n"
"....5..5...\n"
"742........\n") == 0);
free(board139046693);
board139046693 = NULL;
assert( gamma_move(board, 13, 8, 4) == 1 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 0, 10) == 1 );


char* board953493637 = gamma_board(board);
assert( board953493637 != NULL );
assert( strcmp(board953493637, 
"..2...7...4\n"
"...1.......\n"
"37......811.\n"
"10....136..4.\n"
"..4..11...103\n"
"..18..3.9710\n"
"7.123513..6.1\n"
"...1...12...\n"
".....4..13.3\n"
"...121......\n"
"...3.113....\n"
"....5..5...\n"
"742........\n") == 0);
free(board953493637);
board953493637 = NULL;
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_golden_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 9, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 8, 2) == 1 );
assert( gamma_move(board, 11, 9, 0) == 1 );
assert( gamma_move(board, 12, 2, 2) == 1 );
assert( gamma_move(board, 12, 1, 3) == 1 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board760576317 = gamma_board(board);
assert( board760576317 != NULL );
assert( strcmp(board760576317, 
"..2...7..84\n"
"...1.......\n"
"37.9....811.\n"
"10....136..4.\n"
"..4..11...103\n"
"..18..3.9710\n"
"79123513..6.1\n"
"...1...12...\n"
".41..4..13.3\n"
".12.121......\n"
"..123.113.11.7\n"
"....5..5...\n"
"742.4....11.\n") == 0);
free(board760576317);
board760576317 = NULL;
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 1, 9) == 1 );
assert( gamma_free_fields(board, 12) == 81 );
assert( gamma_move(board, 13, 8, 1) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 79 );


char* board292958607 = gamma_board(board);
assert( board292958607 != NULL );
assert( strcmp(board292958607, 
"..2...7..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8.4..11...103\n"
"..18..3.9710\n"
"79123513..6.1\n"
"...1..1012..3\n"
".41..4..1323\n"
".12.121......\n"
"..123.113.1157\n"
".7..5..513..\n"
"74214....11.\n") == 0);
free(board292958607);
board292958607 = NULL;
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 2) == 77 );


char* board666153976 = gamma_board(board);
assert( board666153976 != NULL );
assert( strcmp(board666153976, 
"..2...7..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8.4..11...103\n"
"..18..3.9710\n"
"79123513..6.1\n"
".2.1..1012..3\n"
".41..4..1323\n"
".12.121......\n"
"..123.113.1157\n"
".7.25..513..\n"
"74214....11.\n") == 0);
free(board666153976);
board666153976 = NULL;
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_free_fields(board, 9) == 74 );
assert( gamma_golden_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 11, 2, 12) == 0 );


char* board291164004 = gamma_board(board);
assert( board291164004 != NULL );
assert( strcmp(board291164004, 
"..2...7..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8.48.11...103\n"
".918..3.9710\n"
"7912359..6.1\n"
".2.1..1012..3\n"
".41..4.111323\n"
".12.121......\n"
"..123.113.1157\n"
".7.25..513..\n"
"74214..5.11.\n") == 0);
free(board291164004);
board291164004 = NULL;
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 13, 6, 0) == 1 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_free_fields(board, 13) == 71 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_free_fields(board, 7) == 70 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 13, 9, 7) == 0 );
assert( gamma_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_free_fields(board, 9) == 65 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_free_fields(board, 10) == 64 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 12, 12, 3) == 0 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 12, 12, 7) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 5, 12) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );


char* board287770643 = gamma_board(board);
assert( board287770643 != NULL );
assert( strcmp(board287770643, 
"..2..137..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8.48.11...103\n"
".91851319710\n"
"7912359.1621\n"
"102.1..10124.3\n"
".41.134.111323\n"
"1112912112.....\n"
"..123.113.1157\n"
".7.25..513..\n"
"74214.135.11.\n") == 0);
free(board287770643);
board287770643 = NULL;
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_free_fields(board, 3) == 60 );


char* board769878019 = gamma_board(board);
assert( board769878019 != NULL );
assert( strcmp(board769878019, 
"..2..137..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8.48.11...103\n"
".91851319710\n"
"7912359.1621\n"
"102.1..10124.3\n"
".41.134.111323\n"
"1112912112.....\n"
"..123.113.1157\n"
".7.25..513..\n"
"74214.135.11.\n") == 0);
free(board769878019);
board769878019 = NULL;
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_golden_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );


char* board377141498 = gamma_board(board);
assert( board377141498 != NULL );
assert( strcmp(board377141498, 
"..2..137..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8648.11...103\n"
".91851319710\n"
"7912359.1621\n"
"102.1..10124.3\n"
".41.134.111323\n"
"115912112..4..\n"
"..123.113.1157\n"
".7.25..513..\n"
"74214.135.11.\n") == 0);
free(board377141498);
board377141498 = NULL;
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );


char* board533093034 = gamma_board(board);
assert( board533093034 != NULL );
assert( strcmp(board533093034, 
"..2..137..84\n"
"...1.......\n"
"37.9....811.\n"
"1012...136..4.\n"
"8648.11...103\n"
".91851319710\n"
"7912359.1621\n"
"102.1..10124.3\n"
".41.134.111323\n"
"115912112..4..\n"
".8123.113.1157\n"
".7825..513..\n"
"74214.135.11.\n") == 0);
free(board533093034);
board533093034 = NULL;
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 7, 12) == 1 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_golden_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 12, 1, 0) == 0 );


char* board509810520 = gamma_board(board);
assert( board509810520 != NULL );
assert( strcmp(board509810520, 
"..2..13710.84\n"
"...16....3.\n"
"37.9....811.\n"
"1012...136..4.\n"
"8648.11...103\n"
".91851319710\n"
"791235981621\n"
"102.1..10124.3\n"
".41.134.111323\n"
"115912112..4..\n"
".11123.113.1157\n"
".7825..513..\n"
"74214.135.11.\n") == 0);
free(board509810520);
board509810520 = NULL;
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_free_fields(board, 9) == 48 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_move(board, 12, 9, 3) == 1 );
assert( gamma_move(board, 12, 0, 11) == 1 );
assert( gamma_move(board, 13, 8, 7) == 0 );
assert( gamma_move(board, 13, 6, 10) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_move(board, 13, 11, 7) == 0 );
assert( gamma_move(board, 13, 6, 1) == 1 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_free_fields(board, 9) == 39 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 11, 10, 3) == 1 );
assert( gamma_move(board, 12, 12, 8) == 0 );
assert( gamma_move(board, 12, 1, 6) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 10, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board763160975 = gamma_board(board);
assert( board763160975 != NULL );
assert( strcmp(board763160975, 
"3.2..13710.84\n"
"12..16....3.\n"
"37.9..131811.\n"
"1012...136.74.\n"
"8648.11...103\n"
".91851319710\n"
"791235981621\n"
"102.1.910124.3\n"
".41.13410111323\n"
"115912112..41211\n"
"111123.11341157\n"
".7825.13513.8\n"
"742145135.11.\n") == 0);
free(board763160975);
board763160975 = NULL;
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_free_fields(board, 7) == 38 );


char* board512751986 = gamma_board(board);
assert( board512751986 != NULL );
assert( strcmp(board512751986, 
"3.2..13710.84\n"
"12..16....3.\n"
"37.9..131811.\n"
"1012...136.74.\n"
"8648.11...103\n"
".91851319710\n"
"791235981621\n"
"102.1.910124.3\n"
".41.13410111323\n"
"115912112..41211\n"
"111123.11341157\n"
".7825.13513.8\n"
"742145135.11.\n") == 0);
free(board512751986);
board512751986 = NULL;
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 10, 11, 1) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_golden_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 12, 11, 6) == 0 );
assert( gamma_move(board, 12, 0, 2) == 0 );
assert( gamma_move(board, 13, 11, 8) == 0 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );


char* board439684984 = gamma_board(board);
assert( board439684984 != NULL );
assert( strcmp(board439684984, 
"3.2..13710.84\n"
"12..16....3.\n"
"37.9..131811.\n"
"1012...136.74.\n"
"8648.11...103\n"
".91851319710\n"
"791235981621\n"
"102.1.910124.3\n"
".41.13410111323\n"
"115912112..41211\n"
"111123.11341157\n"
".7825.13513.8\n"
"742145135.11.\n") == 0);
free(board439684984);
board439684984 = NULL;
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 10, 10) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );


char* board259961365 = gamma_board(board);
assert( board259961365 != NULL );
assert( strcmp(board259961365, 
"3.2..13710384\n"
"12..16....3.\n"
"37.9..1318119\n"
"1012...136.74.\n"
"8648.11...103\n"
".91851319710\n"
"791235981621\n"
"102.1.910124.3\n"
".41.13410111323\n"
"115912112..41211\n"
"111123.11341157\n"
".7825.13513.8\n"
"742145135.11.\n") == 0);
free(board259961365);
board259961365 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_golden_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_golden_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_free_fields(board, 8) == 35 );
assert( gamma_golden_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_free_fields(board, 9) == 35 );
assert( gamma_move(board, 10, 8, 8) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 5, 11) == 1 );
assert( gamma_busy_fields(board, 11) == 10 );


char* board225807367 = gamma_board(board);
assert( board225807367 != NULL );
assert( strcmp(board225807367, 
"3.2..13710384\n"
"12..1611...3.\n"
"37.9..1318119\n"
"1012...136.74.\n"
"8648.11..10103\n"
".91851819710\n"
"791235981621\n"
"102.1.910124.3\n"
".41.13410111323\n"
"115912112..41211\n"
"111123811341157\n"
".7825.13513.8\n"
"742145135.11.\n") == 0);
free(board225807367);
board225807367 = NULL;
assert( gamma_move(board, 12, 10, 10) == 0 );
assert( gamma_move(board, 12, 8, 12) == 0 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 12, 8, 9) == 0 );
assert( gamma_golden_move(board, 12, 8, 8) == 1 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 12, 8, 7) == 0 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 13, 6, 12) == 0 );
assert( gamma_busy_fields(board, 13) == 8 );


char* board304634382 = gamma_board(board);
assert( board304634382 != NULL );
assert( strcmp(board304634382, 
"3.25.13710384\n"
"12.31611...3.\n"
"37.9..1318119\n"
"1012...136.74.\n"
"8648.11..12103\n"
".91851819710\n"
"791235981621\n"
"10241.910124.3\n"
".41.13410111323\n"
"115912112..41211\n"
"111123811341157\n"
".7825.13513.8\n"
"742145135.11.\n") == 0);
free(board304634382);
board304634382 = NULL;
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_free_fields(board, 12) == 28 );
assert( gamma_move(board, 13, 9, 1) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );


char* board283213078 = gamma_board(board);
assert( board283213078 != NULL );
assert( strcmp(board283213078, 
"3.25.13710384\n"
"12.31611..83.\n"
"37.9..1318119\n"
"1012...136.74.\n"
"8648.11..12103\n"
".91851819710\n"
"791235981621\n"
"10241.910124.3\n"
".41513410111323\n"
"115912112..41211\n"
"111123811341157\n"
".7825.13513138\n"
"742145135.11.\n") == 0);
free(board283213078);
board283213078 = NULL;
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 5, 7) == 1 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_golden_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 12, 5, 11) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 11, 10) == 0 );


gamma_delete(board);

    return 0;
}
