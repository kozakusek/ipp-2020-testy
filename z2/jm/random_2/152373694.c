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
uuid: 152373694
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 8, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );


char* board353789915 = gamma_board(board);
assert( board353789915 != NULL );
assert( strcmp(board353789915, 
".....1.....\n"
"...........\n"
"...1.......\n"
"......3....\n"
"......5.4..\n"
"...........\n"
"...........\n"
".....7....2\n"
"...2.......\n"
"..........3\n"
"6.6........\n") == 0);
free(board353789915);
board353789915 = NULL;
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_free_fields(board, 7) == 78 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );


char* board248154002 = gamma_board(board);
assert( board248154002 != NULL );
assert( strcmp(board248154002, 
".1...1.1...\n"
".6...3....7\n"
".2.1...3.47\n"
"5.2...38.7.\n"
"2..7.75.4..\n"
".5..15.....\n"
"...12..61..\n"
".....7.8..2\n"
"6..2.4..35.\n"
"4.23...8..3\n"
"646.1....57\n") == 0);
free(board248154002);
board248154002 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );


char* board830287496 = gamma_board(board);
assert( board830287496 != NULL );
assert( strcmp(board830287496, 
".1...1.1..2\n"
".6...3....7\n"
".2.1...3.47\n"
"5.2...38678\n"
"2..7.75.4.1\n"
"35..15.....\n"
"...124.61..\n"
".....7.87.2\n"
"6..284..35.\n"
"4.235..8..3\n"
"646.1....57\n") == 0);
free(board830287496);
board830287496 = NULL;
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_golden_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );


char* board192318800 = gamma_board(board);
assert( board192318800 != NULL );
assert( strcmp(board192318800, 
".1...1.15.2\n"
".6...3...87\n"
"72.1.6.3.47\n"
"5.2...38678\n"
"2..7.75.4.1\n"
"35.115.....\n"
"...124.61.1\n"
".....7.87.2\n"
"6..2842.35.\n"
"4.235..8..3\n"
"64641....57\n") == 0);
free(board192318800);
board192318800 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_free_fields(board, 7) == 49 );


char* board779643725 = gamma_board(board);
assert( board779643725 != NULL );
assert( strcmp(board779643725, 
".1...1.1542\n"
".6...3..287\n"
"72.1.6.3.47\n"
"5.2...38678\n"
"22.7475.4.1\n"
"35.115.5...\n"
"...124.61.1\n"
".....718722\n"
"6..2842.35.\n"
"4.235..8.33\n"
"64641....57\n") == 0);
free(board779643725);
board779643725 = NULL;
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );


char* board620202722 = gamma_board(board);
assert( board620202722 != NULL );
assert( strcmp(board620202722, 
".1...1.1542\n"
".6.413..287\n"
"72.1.663847\n"
"5.286.38678\n"
"22.7475.4.1\n"
"35.115.5.5.\n"
"...124.61.1\n"
"....5718722\n"
"6..2842.358\n"
"4.235..8.33\n"
"64641....57\n") == 0);
free(board620202722);
board620202722 = NULL;
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );


char* board896542574 = gamma_board(board);
assert( board896542574 != NULL );
assert( strcmp(board896542574, 
".1...111542\n"
".6.413.5287\n"
"7271.663847\n"
"5.286.38678\n"
"22.7475.4.1\n"
"35.115.5.53\n"
"..7124.61.1\n"
"....5718722\n"
"6.12842.358\n"
"4.235..8.33\n"
"64641..4.57\n") == 0);
free(board896542574);
board896542574 = NULL;
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );


char* board491558136 = gamma_board(board);
assert( board491558136 != NULL );
assert( strcmp(board491558136, 
".1...111542\n"
".6.413.5287\n"
"7271.663847\n"
"5.286.38678\n"
"22.7475.4.1\n"
"35.115.5.53\n"
"..7124.61.1\n"
"....5718722\n"
"6.12842.358\n"
"4.235..8.33\n"
"64641..4.57\n") == 0);
free(board491558136);
board491558136 = NULL;
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 8 );


char* board120215235 = gamma_board(board);
assert( board120215235 != NULL );
assert( strcmp(board120215235, 
".1...111542\n"
".6.413.5287\n"
"7271.663847\n"
"5.286.38678\n"
"22.7475.4.1\n"
"352115.5.53\n"
"..7124.61.1\n"
"....5718722\n"
"6.12842.358\n"
"4.2352.8.33\n"
"64641..4.57\n") == 0);
free(board120215235);
board120215235 = NULL;
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );


char* board527071249 = gamma_board(board);
assert( board527071249 != NULL );
assert( strcmp(board527071249, 
".1.4.111542\n"
".6.413.5287\n"
"7271.663847\n"
"54286.38678\n"
"22.7475.4.1\n"
"352115.5.53\n"
"..7124.61.1\n"
"....5718722\n"
"6.12842.358\n"
"4.2352.8.33\n"
"64641..4.57\n") == 0);
free(board527071249);
board527071249 = NULL;
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );


char* board741409768 = gamma_board(board);
assert( board741409768 != NULL );
assert( strcmp(board741409768, 
".1.4.111542\n"
".6.413.5287\n"
"7271.663847\n"
"54286.38678\n"
"22.7475.4.1\n"
"352115.5.53\n"
"..7124.61.1\n"
"..7.5718722\n"
"6.12842.358\n"
"4.2352.8.33\n"
"64641.34657\n") == 0);
free(board741409768);
board741409768 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board770972273 = gamma_board(board);
assert( board770972273 != NULL );
assert( strcmp(board770972273, 
".1.4.111542\n"
".6.413.5287\n"
"7271.663847\n"
"54286.38678\n"
"22.7475.4.1\n"
"352115.5.53\n"
"..7124.61.1\n"
"..7.5718722\n"
"6.12842.358\n"
"4.2352.8.33\n"
"64641.34657\n") == 0);
free(board770972273);
board770972273 = NULL;
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );


char* board203075891 = gamma_board(board);
assert( board203075891 != NULL );
assert( strcmp(board203075891, 
".1.4.111542\n"
".6.413.5287\n"
"7271.663847\n"
"54286.38678\n"
"22.7475.441\n"
"352115.5.53\n"
"..7124.61.1\n"
"..7.5718722\n"
"6.128422358\n"
"4.2352.8.33\n"
"64641.34657\n") == 0);
free(board203075891);
board203075891 = NULL;
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );


char* board703317229 = gamma_board(board);
assert( board703317229 != NULL );
assert( strcmp(board703317229, 
".1.4.111542\n"
".6.413.5287\n"
"7271.663847\n"
"54286.38678\n"
"22.7475.441\n"
"352115.5.53\n"
"..7124.61.1\n"
"..7.5718722\n"
"6.128422358\n"
"4.2352.8.33\n"
"64641.34657\n") == 0);
free(board703317229);
board703317229 = NULL;
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_golden_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_free_fields(board, 7) == 23 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 6 );


gamma_delete(board);

    return 0;
}
