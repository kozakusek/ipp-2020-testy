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
uuid: 602679709
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_free_fields(board, 1) == 142 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 11, 9, 10) == 1 );
assert( gamma_move(board, 11, 7, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 8) == 1 );
assert( gamma_move(board, 12, 9, 5) == 1 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 14, 6, 1) == 1 );
assert( gamma_golden_move(board, 14, 10, 4) == 0 );
assert( gamma_move(board, 15, 3, 4) == 1 );
assert( gamma_move(board, 15, 3, 11) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );


char* board813224103 = gamma_board(board);
assert( board813224103 != NULL );
assert( strcmp(board813224103, 
"...........\n"
"...15......5\n"
"...48..2.11.\n"
".6......3..\n"
"....12.....4\n"
".......9...\n"
"2...9......\n"
".........12.\n"
"...15.....1.\n"
".2.......6.\n"
".....13..6..\n"
"1.2...1411...\n"
"...........\n") == 0);
free(board813224103);
board813224103 = NULL;
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 10, 10, 5) == 1 );
assert( gamma_free_fields(board, 10) == 114 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_move(board, 12, 2, 12) == 1 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 3, 0) == 1 );
assert( gamma_move(board, 13, 8, 12) == 1 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 14, 6, 8) == 1 );
assert( gamma_move(board, 14, 9, 3) == 0 );
assert( gamma_free_fields(board, 14) == 108 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 7, 8) == 1 );


char* board534717624 = gamma_board(board);
assert( board534717624 != NULL );
assert( strcmp(board534717624, 
"..12.....13..\n"
"...15......5\n"
"...48..2.11.\n"
".63....73.2\n"
"....12.149..4\n"
"...9...9..6\n"
"2...9......\n"
"11........1210\n"
"7.915.8...1.\n"
".2...8..116.\n"
".....13.76..\n"
"1.2..11411...\n"
"...13.......\n") == 0);
free(board534717624);
board534717624 = NULL;
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 11, 0, 8) == 1 );
assert( gamma_move(board, 11, 8, 4) == 1 );
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 14, 7, 4) == 1 );
assert( gamma_move(board, 15, 5, 4) == 0 );
assert( gamma_move(board, 15, 10, 6) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_free_fields(board, 3) == 93 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_free_fields(board, 7) == 93 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_free_fields(board, 10) == 90 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_free_fields(board, 11) == 89 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );


char* board294109190 = gamma_board(board);
assert( board294109190 != NULL );
assert( strcmp(board294109190, 
"..12.....13..\n"
"...158.....5\n"
"...488.2.11.\n"
".63....73.2\n"
"11...12.149..4\n"
"...9...9..6\n"
"2...9.....15\n"
"11........1210\n"
"7.915.8.14111.\n"
"22...8..116.\n"
"...2.13.76..\n"
"1112.911411...\n"
"...13......10\n") == 0);
free(board294109190);
board294109190 = NULL;
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 14, 8, 1) == 1 );
assert( gamma_move(board, 14, 7, 11) == 1 );
assert( gamma_move(board, 15, 9, 4) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board221712796 = gamma_board(board);
assert( board221712796 != NULL );
assert( strcmp(board221712796, 
"..12.....13..\n"
"...158..14..5\n"
"...488.2.11.\n"
".63....73.2\n"
"11...12.149..4\n"
"...9...9..6\n"
"2...9.....15\n"
"11........1210\n"
"7.915.8.14111.\n"
"22...8..116.\n"
"..132.13.76..\n"
"1112.91141114..\n"
"...13....2.10\n") == 0);
free(board221712796);
board221712796 = NULL;
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 1, 12) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 12, 6, 7) == 1 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_golden_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 9, 10, 10) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 0, 11) == 1 );
assert( gamma_move(board, 14, 12, 7) == 0 );
assert( gamma_move(board, 14, 8, 10) == 1 );
assert( gamma_free_fields(board, 14) == 70 );
assert( gamma_move(board, 15, 7, 2) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 11, 9, 12) == 1 );
assert( gamma_move(board, 12, 5, 9) == 1 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 14, 0, 12) == 1 );
assert( gamma_busy_fields(board, 14) == 8 );
assert( gamma_move(board, 15, 0, 12) == 0 );
assert( gamma_move(board, 15, 1, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 9) == 1 );
assert( gamma_move(board, 11, 7, 12) == 1 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 12, 5, 8) == 1 );
assert( gamma_move(board, 13, 1, 2) == 1 );
assert( gamma_free_fields(board, 13) == 53 );
assert( gamma_move(board, 14, 12, 6) == 0 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_golden_move(board, 15, 11, 8) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 10, 9, 12) == 0 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );


char* board356556588 = gamma_board(board);
assert( board356556588 != NULL );
assert( strcmp(board356556588, 
"14712..4.111311.\n"
"13..158..14555\n"
".6.488.21419\n"
"763.512117342\n"
"1110..1212149..4\n"
"...9..129..6\n"
"23..98..4.15\n"
"11......612127\n"
"79915.8.14111.\n"
"22.11.862116.\n"
"1013132.131476..\n"
"1112.9114111410.\n"
"7.1113...42110\n") == 0);
free(board356556588);
board356556588 = NULL;
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );


char* board848247721 = gamma_board(board);
assert( board848247721 != NULL );
assert( strcmp(board848247721, 
"14712..4.111311.\n"
"13..158..14555\n"
".6.488.21419\n"
"763.512117342\n"
"1110..1212149..4\n"
"...91.129..6\n"
"23..98..4.15\n"
"11......612127\n"
"79915.8.14111.\n"
"22.11.862116.\n"
"1013132.131476..\n"
"1112.9114111410.\n"
"7.1113...42110\n") == 0);
free(board848247721);
board848247721 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 8) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 13, 8, 0) == 0 );
assert( gamma_golden_move(board, 13, 0, 10) == 0 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 14, 6, 8) == 0 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_move(board, 15, 4, 12) == 1 );
assert( gamma_busy_fields(board, 15) == 4 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board919907652 = gamma_board(board);
assert( board919907652 != NULL );
assert( strcmp(board919907652, 
"14712.154.111311.\n"
"13..158..14555\n"
".6.488221419\n"
"763.512117342\n"
"1110..121214912.4\n"
"...91.129..6\n"
"23..98..4.15\n"
"11......612127\n"
"79915.8.14111.\n"
"22.11.862116.\n"
"1013132.131476.7\n"
"1112.9114111410.\n"
"7.1113...42110\n") == 0);
free(board919907652);
board919907652 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_golden_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );


char* board475124315 = gamma_board(board);
assert( board475124315 != NULL );
assert( strcmp(board475124315, 
"14712.154.111311.\n"
"13..158..14555\n"
".6.488221419\n"
"763.512117342\n"
"1110..121214912.4\n"
"...91.129..6\n"
"23..98..4.15\n"
"118.....612127\n"
"79915.8.14111.\n"
"22.11.862116.\n"
"1013132.131476.7\n"
"1112.9114111410.\n"
"7.1113...42110\n") == 0);
free(board475124315);
board475124315 = NULL;
assert( gamma_move(board, 10, 2, 12) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_move(board, 13, 3, 4) == 0 );


char* board421773888 = gamma_board(board);
assert( board421773888 != NULL );
assert( strcmp(board421773888, 
"14712.154.111311.\n"
"13..158..14555\n"
".6.488221419\n"
"763.512117342\n"
"1110..121214912.4\n"
"...91.129..6\n"
"23..98..4.15\n"
"118.....612127\n"
"79915.8.14111.\n"
"22.1113862116.\n"
"1013132.131476.7\n"
"1112.9114111410.\n"
"7.1113...42110\n") == 0);
free(board421773888);
board421773888 = NULL;
assert( gamma_move(board, 14, 6, 7) == 0 );
assert( gamma_busy_fields(board, 14) == 8 );
assert( gamma_move(board, 15, 5, 11) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_move(board, 12, 10, 7) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 12, 3) == 0 );
assert( gamma_move(board, 13, 2, 12) == 0 );
assert( gamma_move(board, 14, 1, 5) == 0 );
assert( gamma_move(board, 15, 11, 2) == 0 );
assert( gamma_move(board, 15, 5, 2) == 0 );
assert( gamma_free_fields(board, 15) == 39 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 12, 0, 12) == 0 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 14, 7, 2) == 0 );
assert( gamma_move(board, 14, 7, 3) == 0 );
assert( gamma_golden_move(board, 14, 2, 4) == 1 );
assert( gamma_move(board, 15, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );


char* board716103402 = gamma_board(board);
assert( board716103402 != NULL );
assert( strcmp(board716103402, 
"14712.1544111311.\n"
"13..15815.14555\n"
".6.488221419\n"
"763.512117342\n"
"1110..121214912.4\n"
"...91.129..6\n"
"23..98.114.15\n"
"118.....612127\n"
"79141598214111.\n"
"22.1113862116.\n"
"10131324131476.7\n"
"1112.91141114105\n"
"7.1113...42110\n") == 0);
free(board716103402);
board716103402 = NULL;
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_free_fields(board, 13) == 34 );
assert( gamma_move(board, 14, 5, 3) == 0 );


char* board789699327 = gamma_board(board);
assert( board789699327 != NULL );
assert( strcmp(board789699327, 
"14712.1544111311.\n"
"13..15815.14555\n"
".6.488221419\n"
"763.512117342\n"
"1110..121214912.4\n"
"..991.129..6\n"
"23..98.114.15\n"
"118.....612127\n"
"79141598214111.\n"
"22.1113862116.\n"
"10131324131476.7\n"
"1112.91141114105\n"
"7.1113...42110\n") == 0);
free(board789699327);
board789699327 = NULL;
assert( gamma_move(board, 15, 1, 3) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_free_fields(board, 11) == 33 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_move(board, 14, 4, 7) == 0 );
assert( gamma_move(board, 15, 12, 10) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_golden_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );


char* board982088754 = gamma_board(board);
assert( board982088754 != NULL );
assert( strcmp(board982088754, 
"14712.1544111311.\n"
"13..15815.14555\n"
"46.488221419\n"
"763.512117342\n"
"1110..12121491264\n"
"..991.129..6\n"
"23..98.114.15\n"
"118..9..612127\n"
"79141598214111.\n"
"22.1113862116.\n"
"10131324131476.7\n"
"1112.91141114105\n"
"771113...42110\n") == 0);
free(board982088754);
board982088754 = NULL;
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 11, 11, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 12 );
assert( gamma_move(board, 12, 12, 10) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 10, 11) == 0 );


char* board188402679 = gamma_board(board);
assert( board188402679 != NULL );
assert( strcmp(board188402679, 
"14712.1544111311.\n"
"13..15815.14555\n"
"46.488221419\n"
"763.512117342\n"
"1110..12121491264\n"
"..991.129..6\n"
"23..98.114.15\n"
"118..9..612127\n"
"79141598214111.\n"
"22.1113862116.\n"
"10131324131476.7\n"
"1112.91141114105\n"
"771113...42110\n") == 0);
free(board188402679);
board188402679 = NULL;
assert( gamma_move(board, 14, 8, 2) == 0 );
assert( gamma_move(board, 15, 9, 11) == 0 );
assert( gamma_free_fields(board, 15) == 30 );
assert( gamma_golden_move(board, 15, 1, 0) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 30 );


char* board681926090 = gamma_board(board);
assert( board681926090 != NULL );
assert( strcmp(board681926090, 
"14712.1544111311.\n"
"13..15815.14555\n"
"46.488221419\n"
"763.512117342\n"
"1110..12121491264\n"
"..991.129..6\n"
"23..98.114.15\n"
"118..9..612127\n"
"79141598214111.\n"
"22.1113862116.\n"
"10131324131476.7\n"
"1112.91141114105\n"
"2151113...42110\n") == 0);
free(board681926090);
board681926090 = NULL;
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 3, 6) == 1 );
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_move(board, 14, 7, 8) == 0 );
assert( gamma_move(board, 14, 9, 12) == 0 );
assert( gamma_busy_fields(board, 14) == 9 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 15, 7, 5) == 0 );
assert( gamma_free_fields(board, 15) == 28 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 12, 6, 12) == 0 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 13, 10, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 14, 7, 5) == 0 );
assert( gamma_move(board, 14, 6, 8) == 0 );
assert( gamma_move(board, 15, 6, 9) == 0 );
assert( gamma_move(board, 15, 5, 5) == 1 );
assert( gamma_free_fields(board, 15) == 26 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 10, 9) == 0 );
assert( gamma_move(board, 14, 12, 3) == 0 );
assert( gamma_move(board, 15, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


gamma_delete(board);

    return 0;
}
