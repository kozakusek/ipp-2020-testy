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
uuid: 550263886
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 15, 10, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_free_fields(board, 3) == 132 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 14, 4) == 0 );
assert( gamma_free_fields(board, 10) == 107 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 4, 7) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );


char* board918463341 = gamma_board(board);
assert( board918463341 != NULL );
assert( strcmp(board918463341, 
".........\n"
"..4.2....\n"
"....2....\n"
"..5.....4\n"
".....7.2.\n"
"2........\n"
"....11287\n"
"7...1043..\n"
"....6....\n"
"15.....68\n"
"..64....9\n"
"5.7..6...\n"
"3455...1.\n"
"99.9.....\n"
"1..8....5\n") == 0);
free(board918463341);
board918463341 = NULL;
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_free_fields(board, 9) == 96 );
assert( gamma_move(board, 10, 0, 10) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 3, 14) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 8, 13) == 1 );
assert( gamma_free_fields(board, 9) == 84 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_free_fields(board, 6) == 79 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 14, 7) == 0 );


char* board688445021 = gamma_board(board);
assert( board688445021 != NULL );
assert( strcmp(board688445021, 
"..28.....\n"
"..4.2...9\n"
"....2.7..\n"
".35.....4\n"
"1054..7.2.\n"
"2........\n"
".5..11287\n"
"7...1043..\n"
"..5.64...\n"
"15...5.68\n"
"..64..1.9\n"
"5.7.367..\n"
"3455...1.\n"
"99.92....\n"
"1..88..25\n") == 0);
free(board688445021);
board688445021 = NULL;
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 77 );


char* board112546384 = gamma_board(board);
assert( board112546384 != NULL );
assert( strcmp(board112546384, 
"..28.....\n"
"..4.2...9\n"
"....2.7..\n"
".35.....4\n"
"1054..7.2.\n"
"2........\n"
".5..11287\n"
"7...1043..\n"
"..5.64...\n"
"15...5.68\n"
"..64..1.9\n"
"5.7.367..\n"
"3455...1.\n"
"99.92..10.\n"
"1..88..25\n") == 0);
free(board112546384);
board112546384 = NULL;
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_move(board, 10, 6, 11) == 1 );


char* board115314709 = gamma_board(board);
assert( board115314709 != NULL );
assert( strcmp(board115314709, 
"..28.....\n"
"..4.2...9\n"
"....2.7..\n"
".35...10.4\n"
"1054..7.2.\n"
"2........\n"
"55..11287\n"
"7...1043..\n"
"..5.64...\n"
"15...5.68\n"
"..64..1.9\n"
"5.7.36710.\n"
"3455...1.\n"
"99.92..10.\n"
"1..88..25\n") == 0);
free(board115314709);
board115314709 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_free_fields(board, 8) == 68 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 10, 8, 9) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 9, 7, 12) == 1 );
assert( gamma_free_fields(board, 9) == 60 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 10, 3, 9) == 1 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 6, 14) == 1 );
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_move(board, 7, 4, 1) == 1 );
assert( gamma_golden_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_free_fields(board, 10) == 45 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 4, 14) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 10, 14, 7) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_golden_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 10, 5, 12) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 8, 8) == 0 );


char* board697040803 = gamma_board(board);
assert( board697040803 != NULL );
assert( strcmp(board697040803, 
"..285.9.6\n"
"..4.2...9\n"
".5..21079.\n"
"13512.1084\n"
"1054127423\n"
"2.110....10\n"
"55.411287\n"
"7.431043210\n"
"2456641..\n"
"15...5.68\n"
"..64891.9\n"
"5.77367104\n"
"345896.110\n"
"99297..10.\n"
"193885.25\n") == 0);
free(board697040803);
board697040803 = NULL;
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_free_fields(board, 9) == 35 );
assert( gamma_move(board, 10, 13, 6) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );


char* board568606294 = gamma_board(board);
assert( board568606294 != NULL );
assert( strcmp(board568606294, 
"..285.9.6\n"
"..4.2...9\n"
".5..21079.\n"
"13512.1084\n"
"1054127423\n"
"2.110....10\n"
"55.411287\n"
"7.431043210\n"
"2456641..\n"
"15...5.68\n"
"8.64891.9\n"
"5677367104\n"
"345896.110\n"
"99297..10.\n"
"193885.25\n") == 0);
free(board568606294);
board568606294 = NULL;
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );


char* board127601064 = gamma_board(board);
assert( board127601064 != NULL );
assert( strcmp(board127601064, 
"..285.9.6\n"
"..4.2...9\n"
".5..21079.\n"
"13512.1084\n"
"1054127423\n"
"2.110....10\n"
"55.411287\n"
"7.431043210\n"
"2456641..\n"
"15...5.68\n"
"8.64891.9\n"
"5677367104\n"
"345896.110\n"
"99297..10.\n"
"193885.25\n") == 0);
free(board127601064);
board127601064 = NULL;
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_golden_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_golden_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 10, 0, 13) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );


char* board430391407 = gamma_board(board);
assert( board430391407 != NULL );
assert( strcmp(board430391407, 
"..285.9.6\n"
"10.4.2..49\n"
".5..21079.\n"
"1351261084\n"
"1054127423\n"
"2.110....10\n"
"55.411287\n"
"7.431043210\n"
"2456641..\n"
"15...5.68\n"
"8464891.9\n"
"567736744\n"
"345896.110\n"
"99297..10.\n"
"193885.25\n") == 0);
free(board430391407);
board430391407 = NULL;
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );


char* board577708998 = gamma_board(board);
assert( board577708998 != NULL );
assert( strcmp(board577708998, 
"..285.9.6\n"
"10.4.2..49\n"
".5..21079.\n"
"1351261084\n"
"1054127423\n"
"2.110....10\n"
"55.411287\n"
"710431043210\n"
"24566416.\n"
"15...5.68\n"
"8465891.9\n"
"567736744\n"
"345896.110\n"
"99297..10.\n"
"193885.25\n") == 0);
free(board577708998);
board577708998 = NULL;
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_golden_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 6, 8) == 0 );


char* board190014227 = gamma_board(board);
assert( board190014227 != NULL );
assert( strcmp(board190014227, 
"..285.9.6\n"
"10.4.2..49\n"
".5..21079.\n"
"1351261084\n"
"1054127423\n"
"2.110....10\n"
"55.411287\n"
"710431043210\n"
"24566416.\n"
"15...5.68\n"
"6465891.9\n"
"567736744\n"
"345896.110\n"
"99297..10.\n"
"193885.25\n") == 0);
free(board190014227);
board190014227 = NULL;
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_free_fields(board, 9) == 27 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 12) == 0 );


gamma_delete(board);

    return 0;
}
