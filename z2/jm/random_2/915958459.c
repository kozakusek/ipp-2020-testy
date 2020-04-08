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
uuid: 915958459
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 14, 8, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_free_fields(board, 1) == 125 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_free_fields(board, 5) == 121 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board121780837 = gamma_board(board);
assert( board121780837 != NULL );
assert( strcmp(board121780837, 
".........\n"
"..3......\n"
".....1...\n"
"..2......\n"
".........\n"
".....6...\n"
".........\n"
".....1...\n"
".81.5....\n"
".......2.\n"
"5.8......\n"
"53.......\n"
".......2.\n"
"......3..\n") == 0);
free(board121780837);
board121780837 = NULL;
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_free_fields(board, 3) == 106 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_golden_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 7, 10) == 1 );


char* board978195213 = gamma_board(board);
assert( board978195213 != NULL );
assert( strcmp(board978195213, 
"......3..\n"
".63...7..\n"
".....1...\n"
"7.2....6.\n"
"..41.....\n"
"4.7..6...\n"
".....3...\n"
".....1...\n"
".81.5....\n"
".......2.\n"
"5.8.2..5.\n"
"53..2.7.4\n"
"....8..2.\n"
"......3..\n") == 0);
free(board978195213);
board978195213 = NULL;
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_free_fields(board, 8) == 93 );


char* board807040684 = gamma_board(board);
assert( board807040684 != NULL );
assert( strcmp(board807040684, 
"......3..\n"
".63...7..\n"
".....1...\n"
"7.2....6.\n"
"..41.....\n"
"4.7..6...\n"
".7...3...\n"
".....1...\n"
".81.5....\n"
".......2.\n"
"5.8.2..5.\n"
"53..2.7.4\n"
".8..8..2.\n"
"......3..\n") == 0);
free(board807040684);
board807040684 = NULL;
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );


char* board733401718 = gamma_board(board);
assert( board733401718 != NULL );
assert( strcmp(board733401718, 
"......33.\n"
".63...7..\n"
".....1...\n"
"7.2....6.\n"
"..41.....\n"
"4.73.6.56\n"
".7...3...\n"
".5...1.57\n"
".81.564.6\n"
".1..23.2.\n"
"5.882.55.\n"
"536.2.774\n"
".8..8.228\n"
"8...213..\n") == 0);
free(board733401718);
board733401718 = NULL;
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );


char* board997418137 = gamma_board(board);
assert( board997418137 != NULL );
assert( strcmp(board997418137, 
"...6..33.\n"
".63...7..\n"
"...2.1..5\n"
"7.2..8.6.\n"
"..41.....\n"
"4.73.6.56\n"
".7...3.1.\n"
".5..81.57\n"
".81.564.6\n"
".1..23.2.\n"
"5.882.55.\n"
"536.2.774\n"
".8..8.228\n"
"8...213..\n") == 0);
free(board997418137);
board997418137 = NULL;
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_golden_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board220033595 = gamma_board(board);
assert( board220033595 != NULL );
assert( strcmp(board220033595, 
"...6..33.\n"
".63..671.\n"
".1.2.1..5\n"
"7.2.78.6.\n"
"4.41..5..\n"
"4.73.6.56\n"
"478..3.1.\n"
".58781.57\n"
"681.56446\n"
"21..23121\n"
"5.882455.\n"
"536.2.774\n"
".8.78.228\n"
"8...213..\n") == 0);
free(board220033595);
board220033595 = NULL;
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );


char* board825082565 = gamma_board(board);
assert( board825082565 != NULL );
assert( strcmp(board825082565, 
"...6..336\n"
".63..671.\n"
".1.2.15.5\n"
"7.2778.6.\n"
"4.41..5..\n"
"4.7386.56\n"
"478..3.1.\n"
".58781.57\n"
"681256446\n"
"21.623121\n"
"5.8824557\n"
"536.2.774\n"
"18.78.228\n"
"82.4213..\n") == 0);
free(board825082565);
board825082565 = NULL;
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_free_fields(board, 4) == 36 );


char* board969776165 = gamma_board(board);
assert( board969776165 != NULL );
assert( strcmp(board969776165, 
"...6..336\n"
".63..671.\n"
".1.2.1535\n"
"7.2778.6.\n"
"4.41..5..\n"
"4.7386.56\n"
"478..3.1.\n"
".58781.57\n"
"681256446\n"
"21.623121\n"
"5.8824557\n"
"536.2.774\n"
"18278.228\n"
"82.4213..\n") == 0);
free(board969776165);
board969776165 = NULL;
assert( gamma_move(board, 5, 0, 13) == 1 );


char* board418821809 = gamma_board(board);
assert( board418821809 != NULL );
assert( strcmp(board418821809, 
"5..6..336\n"
".63..671.\n"
".1.2.1535\n"
"7.2778.6.\n"
"4.41..5..\n"
"4.7386.56\n"
"478..3.1.\n"
".58781.57\n"
"681256446\n"
"21.623121\n"
"5.8824557\n"
"536.2.774\n"
"18278.228\n"
"82.4213..\n") == 0);
free(board418821809);
board418821809 = NULL;
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_golden_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_golden_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );


char* board903071766 = gamma_board(board);
assert( board903071766 != NULL );
assert( strcmp(board903071766, 
"523626336\n"
"163.6671.\n"
".11281535\n"
"7.2778.6.\n"
"4.41..5.5\n"
"4.7386.56\n"
"478..381.\n"
".58781757\n"
"481256446\n"
"21.623121\n"
"5.8824557\n"
"536.2.374\n"
"18278.228\n"
"82.4213.2\n") == 0);
free(board903071766);
board903071766 = NULL;
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


gamma_delete(board);

    return 0;
}
