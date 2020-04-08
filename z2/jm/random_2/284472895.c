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
uuid: 284472895
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 15, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 9, 12, 5) == 1 );
assert( gamma_move(board, 9, 4, 13) == 1 );
assert( gamma_move(board, 10, 10, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_free_fields(board, 10) == 197 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 14, 0) == 0 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_move(board, 13, 8, 14) == 1 );
assert( gamma_move(board, 13, 3, 12) == 1 );
assert( gamma_golden_move(board, 13, 6, 8) == 0 );
assert( gamma_move(board, 15, 13, 2) == 1 );
assert( gamma_move(board, 15, 4, 12) == 1 );
assert( gamma_free_fields(board, 15) == 192 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 11, 12) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 185 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_free_fields(board, 5) == 183 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 14, 0) == 0 );
assert( gamma_move(board, 10, 10, 2) == 1 );
assert( gamma_free_fields(board, 10) == 178 );
assert( gamma_golden_move(board, 10, 7, 10) == 0 );
assert( gamma_move(board, 11, 10, 11) == 1 );
assert( gamma_move(board, 11, 9, 12) == 1 );
assert( gamma_move(board, 14, 4, 13) == 0 );


char* board249446493 = gamma_board(board);
assert( board249446493 != NULL );
assert( strcmp(board249446493, 
"........13.....\n"
"....9..7.....1\n"
".2.1315....11.4..\n"
"...2......11...\n"
"........1.....\n"
"....3.........\n"
"..............\n"
"..........10...\n"
".....1..3.....\n"
"6.......7..59.\n"
".......712..2..\n"
"6......5......\n"
".8.4......10..15\n"
".5..8....8...3\n"
".......4......\n") == 0);
free(board249446493);
board249446493 = NULL;
assert( gamma_move(board, 15, 10, 3) == 1 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_golden_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_free_fields(board, 6) == 170 );
assert( gamma_move(board, 7, 12, 12) == 1 );
assert( gamma_move(board, 7, 9, 13) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 0, 12) == 1 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 11, 7) == 1 );
assert( gamma_move(board, 10, 13, 7) == 1 );
assert( gamma_free_fields(board, 10) == 164 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 13) == 1 );
assert( gamma_move(board, 12, 10, 3) == 0 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 14, 13) == 0 );
assert( gamma_move(board, 13, 10, 4) == 1 );
assert( gamma_move(board, 14, 2, 11) == 1 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_move(board, 15, 7, 12) == 1 );
assert( gamma_move(board, 15, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 12, 13) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 9, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 10, 12, 10) == 1 );
assert( gamma_free_fields(board, 10) == 145 );
assert( gamma_move(board, 11, 2, 7) == 1 );
assert( gamma_move(board, 11, 13, 9) == 1 );
assert( gamma_move(board, 12, 12, 4) == 1 );
assert( gamma_move(board, 13, 6, 13) == 1 );
assert( gamma_move(board, 14, 8, 2) == 1 );
assert( gamma_move(board, 14, 12, 7) == 1 );
assert( gamma_move(board, 15, 9, 7) == 1 );
assert( gamma_golden_move(board, 15, 7, 10) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 11, 13) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 13) == 1 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );


char* board752387162 = gamma_board(board);
assert( board752387162 != NULL );
assert( strcmp(board752387162, 
".5..2...138....\n"
"11.11.9.13717.571\n"
"92.1315..15.11.47.\n"
"4.142..4...11..3\n"
".1..8...16..10.\n"
".9.73..2..3..11\n"
"4........4....\n"
"..11......1510101410\n"
".....1..31....\n"
"6...8...7..59.\n"
"..2.8.10712.13212.\n"
"6.....75..15...\n"
".8.4....14.10..15\n"
"55..8....8...3\n"
"...12...4.9.1..\n") == 0);
free(board752387162);
board752387162 = NULL;
assert( gamma_move(board, 12, 2, 5) == 1 );
assert( gamma_move(board, 13, 2, 6) == 1 );
assert( gamma_move(board, 13, 7, 13) == 0 );
assert( gamma_move(board, 14, 12, 13) == 0 );
assert( gamma_move(board, 14, 8, 1) == 1 );
assert( gamma_free_fields(board, 14) == 126 );
assert( gamma_move(board, 15, 3, 11) == 0 );
assert( gamma_move(board, 15, 11, 4) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_free_fields(board, 2) == 124 );
assert( gamma_move(board, 3, 13, 12) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_free_fields(board, 5) == 121 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 11, 5, 5) == 1 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );


char* board929346887 = gamma_board(board);
assert( board929346887 != NULL );
assert( strcmp(board929346887, 
".5..2...138....\n"
"11.11.9.13717.571\n"
"92.1315.415.112473\n"
"4.142..4...11..3\n"
"51..8...16..10.\n"
".9.73..2..3..11\n"
"4........4....\n"
"..11......1510101410\n"
"..13..1..31....\n"
"6.12.811..7..59.\n"
"..2.8.10712.132126\n"
"6...2.75..15...\n"
".8.4....14.10..15\n"
"55..8...148...3\n"
"...12...4.9.1..\n") == 0);
free(board929346887);
board929346887 = NULL;
assert( gamma_move(board, 12, 11, 9) == 1 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 14, 10, 13) == 1 );
assert( gamma_move(board, 15, 8, 12) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_golden_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 13, 10) == 1 );
assert( gamma_move(board, 9, 13, 3) == 1 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 10, 8, 12) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 5, 13) == 1 );
assert( gamma_move(board, 13, 10, 11) == 0 );
assert( gamma_move(board, 14, 6, 4) == 0 );
assert( gamma_move(board, 14, 1, 10) == 0 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_move(board, 15, 10, 3) == 0 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );


char* board434070191 = gamma_board(board);
assert( board434070191 != NULL );
assert( strcmp(board434070191, 
".5..2...138....\n"
"11.11.9121371714571\n"
"92.1315.41515112473\n"
"4.142..4...11..3\n"
"511.8...16..108\n"
".9.73..2..312.11\n"
"4........4....\n"
"4.11......1510101410\n"
"..13..1..31...1\n"
"6.12.811..71.59.\n"
"..2.8.10712.132126\n"
"6..102.751.15..9\n"
".854....14.10..15\n"
"55..8...148...3\n"
"12..12...4.9.1..\n") == 0);
free(board434070191);
board434070191 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_free_fields(board, 8) == 103 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_golden_move(board, 11, 12, 10) == 1 );
assert( gamma_move(board, 12, 10, 13) == 0 );
assert( gamma_move(board, 13, 9, 5) == 0 );


char* board520692716 = gamma_board(board);
assert( board520692716 != NULL );
assert( strcmp(board520692716, 
".5..2...138.6..\n"
"11.11.9121371714571\n"
"92.1315.41515112473\n"
"4.142..4...11..3\n"
"511.8...16..118\n"
".9.73..2..312.11\n"
"4........4....\n"
"4.11......1510101410\n"
"..13..1..31...1\n"
"6.12.811..71.59.\n"
"..2.8.10712.132126\n"
"6..102.751.15..9\n"
".854....14.10..15\n"
"55..8...148...3\n"
"12..12.7.4.9.1..\n") == 0);
free(board520692716);
board520692716 = NULL;
assert( gamma_move(board, 14, 11, 7) == 0 );
assert( gamma_move(board, 15, 0, 14) == 1 );
assert( gamma_move(board, 15, 1, 12) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 5, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 11, 13) == 0 );
assert( gamma_move(board, 10, 11, 11) == 1 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 5, 10) == 1 );
assert( gamma_move(board, 12, 11, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 11) == 1 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 14, 3, 1) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 3, 2) == 0 );
assert( gamma_move(board, 15, 13, 0) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_golden_move(board, 1, 7, 13) == 1 );


char* board851128674 = gamma_board(board);
assert( board851128674 != NULL );
assert( strcmp(board851128674, 
"155..2...138.6..\n"
"11.11.9121311714571\n"
"92.1315841515112473\n"
"4.142..4.13.1110.3\n"
"511.812..16..118\n"
"19173..2..312.11\n"
"4........4....\n"
"4.11..6...1510101410\n"
"..135.1..31...1\n"
"6.12.811..71.59.\n"
"..2.8.10712.132126\n"
"6..102.751.1512.9\n"
".854...214.10..15\n"
"55.148..7148...3\n"
"12..12.7.4.9.1.15\n") == 0);
free(board851128674);
board851128674 = NULL;
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_golden_move(board, 2, 0, 13) == 1 );


char* board315232142 = gamma_board(board);
assert( board315232142 != NULL );
assert( strcmp(board315232142, 
"155..2...138.6..\n"
"2.11.9121311714571\n"
"92.1315841515112473\n"
"4.142..4.13.1110.3\n"
"511.812..16..118\n"
"19173..2..312.11\n"
"4.......24....\n"
"4.11..6...1510101410\n"
"..135.1..31...1\n"
"6.12.811..71.59.\n"
"..2.8.10712.132126\n"
"6..102.751.1512.9\n"
".854...214.10..15\n"
"55.148..7148...3\n"
"12..12.7.4.9.1.15\n") == 0);
free(board315232142);
board315232142 = NULL;
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 88 );
assert( gamma_golden_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 11, 10) == 1 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_move(board, 13, 11, 1) == 1 );
assert( gamma_move(board, 14, 11, 9) == 0 );
assert( gamma_move(board, 14, 4, 0) == 1 );
assert( gamma_move(board, 15, 3, 2) == 0 );
assert( gamma_golden_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 13, 9, 9) == 1 );
assert( gamma_move(board, 13, 8, 0) == 1 );
assert( gamma_golden_move(board, 13, 12, 0) == 0 );


char* board852792601 = gamma_board(board);
assert( board852792601 != NULL );
assert( strcmp(board852792601, 
"155..2...138.6..\n"
"2.11.9121311714571\n"
"92.1315841515112473\n"
"4.142..4.13.1110.3\n"
"511.812..1638118\n"
"19173..2.13312.11\n"
"4.4.....24.5..\n"
"4.11..6...1510101410\n"
".6135.1..31...1\n"
"6.12.811..71.59.\n"
"..2.8.10712.132126\n"
"6..102.751.1512.9\n"
"5854...214.10..15\n"
"55.148..7148.13.3\n"
"12..12147114134.1.15\n") == 0);
free(board852792601);
board852792601 = NULL;
assert( gamma_move(board, 14, 7, 7) == 1 );
assert( gamma_move(board, 14, 3, 7) == 1 );
assert( gamma_busy_fields(board, 14) == 9 );
assert( gamma_free_fields(board, 14) == 75 );
assert( gamma_move(board, 15, 14, 12) == 0 );
assert( gamma_move(board, 15, 7, 3) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 14, 12) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 11, 13, 12) == 0 );
assert( gamma_move(board, 12, 14, 13) == 0 );
assert( gamma_move(board, 13, 6, 6) == 1 );
assert( gamma_move(board, 13, 8, 7) == 1 );
assert( gamma_free_fields(board, 13) == 69 );
assert( gamma_move(board, 14, 6, 11) == 0 );
assert( gamma_move(board, 14, 2, 7) == 0 );
assert( gamma_move(board, 15, 0, 1) == 0 );
assert( gamma_move(board, 15, 0, 0) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 8, 12, 14) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 11, 9, 12) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );


char* board593605546 = gamma_board(board);
assert( board593605546 != NULL );
assert( strcmp(board593605546, 
"155..2...138.68.\n"
"2.11.9121311714571\n"
"92.1315841515112473\n"
"4.142..4.13.1110.3\n"
"511.812..1638118\n"
"19173..2.13312.11\n"
"4.4.....2415..\n"
"4.1114.6.14131510101410\n"
"26135.113631...1\n"
"6.12.811..71.59.\n"
"..2.8.10712.132126\n"
"679102.751.1512.9\n"
"5854...214.10.215\n"
"55.148..7148.13.3\n"
"12..12147114134.1.15\n") == 0);
free(board593605546);
board593605546 = NULL;
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_busy_fields(board, 13) == 11 );
assert( gamma_free_fields(board, 13) == 66 );
assert( gamma_move(board, 14, 3, 0) == 0 );
assert( gamma_move(board, 15, 0, 10) == 0 );
assert( gamma_move(board, 15, 9, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_move(board, 10, 6, 2) == 1 );
assert( gamma_move(board, 11, 12, 9) == 1 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 14, 2) == 0 );
assert( gamma_move(board, 12, 1, 10) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 14, 1, 10) == 0 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 15, 8, 1) == 0 );
assert( gamma_move(board, 15, 13, 8) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_golden_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_free_fields(board, 10) == 59 );
assert( gamma_move(board, 11, 2, 13) == 0 );
assert( gamma_move(board, 11, 8, 7) == 0 );
assert( gamma_move(board, 12, 13, 6) == 0 );
assert( gamma_move(board, 13, 14, 7) == 0 );
assert( gamma_move(board, 13, 11, 14) == 0 );
assert( gamma_move(board, 14, 9, 5) == 0 );
assert( gamma_move(board, 14, 0, 7) == 0 );
assert( gamma_move(board, 15, 1, 12) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 59 );
assert( gamma_golden_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 12, 6, 11) == 0 );
assert( gamma_move(board, 12, 2, 10) == 0 );
assert( gamma_move(board, 13, 14, 10) == 0 );
assert( gamma_move(board, 13, 10, 12) == 0 );
assert( gamma_move(board, 14, 4, 9) == 0 );
assert( gamma_free_fields(board, 14) == 59 );
assert( gamma_move(board, 15, 8, 7) == 0 );
assert( gamma_move(board, 15, 12, 9) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );


char* board750945074 = gamma_board(board);
assert( board750945074 != NULL );
assert( strcmp(board750945074, 
"155..2...138.68.\n"
"2.11.9121311714571\n"
"92.1315841515112473\n"
"4.1424.4.13.1110.3\n"
"511.812.21638118\n"
"19173..2.133121111\n"
"4.4.....2415.15\n"
"4.1114.6.14131510101410\n"
"26135.113631...1\n"
"8.121811..71.59.\n"
"..2.8.1071215132126\n"
"6791026751.1512.9\n"
"5854..10214.10.215\n"
"55.148..7148.13.3\n"
"12..12147114134.1.15\n") == 0);
free(board750945074);
board750945074 = NULL;
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_free_fields(board, 10) == 58 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 14, 10) == 0 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 12, 6, 11) == 0 );
assert( gamma_move(board, 13, 3, 14) == 1 );
assert( gamma_move(board, 14, 10, 9) == 0 );
assert( gamma_move(board, 15, 11, 12) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 4, 14) == 0 );
assert( gamma_move(board, 10, 13, 5) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 13, 7, 7) == 0 );
assert( gamma_move(board, 14, 13, 3) == 0 );
assert( gamma_move(board, 14, 0, 11) == 0 );
assert( gamma_move(board, 15, 8, 5) == 0 );
assert( gamma_move(board, 15, 0, 10) == 0 );
assert( gamma_free_fields(board, 15) == 53 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 11, 13, 3) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_golden_move(board, 11, 14, 11) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 15, 12, 2) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_golden_move(board, 11, 10, 13) == 0 );
assert( gamma_move(board, 12, 14, 13) == 0 );
assert( gamma_move(board, 12, 3, 8) == 1 );
assert( gamma_free_fields(board, 12) == 49 );
assert( gamma_move(board, 13, 14, 5) == 0 );
assert( gamma_move(board, 15, 5, 7) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 10, 5, 14) == 1 );
assert( gamma_move(board, 11, 11, 12) == 0 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_move(board, 12, 9, 11) == 1 );
assert( gamma_busy_fields(board, 12) == 11 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 9, 8) == 0 );
assert( gamma_free_fields(board, 14) == 46 );
assert( gamma_move(board, 15, 6, 11) == 0 );
assert( gamma_move(board, 15, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );


char* board281728452 = gamma_board(board);
assert( board281728452 != NULL );
assert( strcmp(board281728452, 
"155.13210..138.68.\n"
"2.11.9121311714571\n"
"9251315841515112473\n"
"4.1424.4.13121110.3\n"
"5111812321638118\n"
"19173..2.133121111\n"
"4.412..8.2415.15\n"
"411114.6.14131510101410\n"
"26135.113631...1\n"
"8.121811..7155910\n"
"..2.8.1071215132126\n"
"6791026751.1512.9\n"
"5854..10214.10.215\n"
"55.148..7148.1353\n"
"12..12147114134.1.15\n") == 0);
free(board281728452);
board281728452 = NULL;
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );


char* board844221459 = gamma_board(board);
assert( board844221459 != NULL );
assert( strcmp(board844221459, 
"155.13210..138.68.\n"
"2.11.9121311714571\n"
"9251315841515112473\n"
"4.1424.4.13121110.3\n"
"5111812321638118\n"
"1917310.2.133121111\n"
"4.412..8.2415.15\n"
"411114.6.14131510101410\n"
"26135.113631...1\n"
"8.121811..7155910\n"
"..2.8.1071215132126\n"
"6791026751.1512.9\n"
"5854.1210214.10.215\n"
"55.148..7148.1353\n"
"12..12147114134.1.15\n") == 0);
free(board844221459);
board844221459 = NULL;
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 13, 6, 5) == 1 );
assert( gamma_busy_fields(board, 13) == 13 );
assert( gamma_move(board, 14, 4, 1) == 0 );
assert( gamma_move(board, 14, 13, 0) == 0 );
assert( gamma_busy_fields(board, 14) == 9 );
assert( gamma_move(board, 15, 4, 5) == 0 );
assert( gamma_move(board, 15, 13, 14) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 13, 13, 6) == 0 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 15, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_free_fields(board, 11) == 39 );
assert( gamma_move(board, 12, 13, 14) == 0 );
assert( gamma_move(board, 12, 4, 7) == 1 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_move(board, 14, 4, 1) == 0 );
assert( gamma_move(board, 14, 8, 0) == 0 );
assert( gamma_free_fields(board, 14) == 38 );
assert( gamma_move(board, 15, 11, 7) == 0 );
assert( gamma_move(board, 15, 11, 14) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board925511674 = gamma_board(board);
assert( board925511674 != NULL );
assert( strcmp(board925511674, 
"155.13210..138.6815\n"
"2.11.9121311714571\n"
"9251315841515112473\n"
"4.1424.4.13121110.3\n"
"5111812321638118\n"
"1917310.2.133121111\n"
"4.412..8.2415.15\n"
"411114126.14131510101410\n"
"26135.113631...1\n"
"8.12181113.7155910\n"
"..2.8.1071215132126\n"
"6791026751.1512.9\n"
"5854.12102145103215\n"
"55.1485.7148.1353\n"
"12..1214711413411.15\n") == 0);
free(board925511674);
board925511674 = NULL;
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_free_fields(board, 10) == 37 );
assert( gamma_golden_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_free_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 8, 1) == 0 );
assert( gamma_move(board, 14, 1, 7) == 0 );
assert( gamma_busy_fields(board, 14) == 9 );
assert( gamma_move(board, 15, 5, 4) == 1 );
assert( gamma_move(board, 15, 12, 8) == 1 );
assert( gamma_golden_move(board, 15, 11, 2) == 1 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 13, 6, 12) == 0 );
assert( gamma_move(board, 13, 0, 13) == 0 );
assert( gamma_move(board, 14, 9, 8) == 0 );
assert( gamma_move(board, 15, 1, 8) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 10, 14, 10) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 11, 7, 5) == 1 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 13, 13, 3) == 0 );
assert( gamma_move(board, 14, 8, 7) == 0 );
assert( gamma_move(board, 14, 7, 13) == 0 );
assert( gamma_move(board, 15, 3, 13) == 0 );
assert( gamma_move(board, 15, 8, 7) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 8) == 0 );
assert( gamma_move(board, 11, 14, 7) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_move(board, 14, 9, 6) == 0 );
assert( gamma_move(board, 14, 0, 6) == 0 );
assert( gamma_free_fields(board, 14) == 33 );
assert( gamma_move(board, 15, 7, 4) == 0 );
assert( gamma_move(board, 15, 10, 2) == 0 );
assert( gamma_free_fields(board, 15) == 3 );


gamma_delete(board);

    return 0;
}
