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
uuid: 114112815
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 10, 13, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_free_fields(board, 5) == 169 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_free_fields(board, 8) == 167 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 6) == 1 );
assert( gamma_move(board, 10, 6, 2) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );


char* board721503636 = gamma_board(board);
assert( board721503636 != NULL );
assert( strcmp(board721503636, 
"...........4.....\n"
".................\n"
"..........1......\n"
"6..........9.....\n"
"........3........\n"
".................\n"
"7................\n"
"......10..........\n"
"..............4..\n"
".................\n") == 0);
free(board721503636);
board721503636 = NULL;
assert( gamma_free_fields(board, 6) == 162 );
assert( gamma_move(board, 7, 16, 3) == 1 );


char* board754446515 = gamma_board(board);
assert( board754446515 != NULL );
assert( strcmp(board754446515, 
"...........4.....\n"
".................\n"
"..........1......\n"
"6..........9.....\n"
"........3........\n"
".................\n"
"7...............7\n"
"......10..........\n"
"..............4..\n"
".................\n") == 0);
free(board754446515);
board754446515 = NULL;
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 13, 16, 4) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 157 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 5, 15, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_golden_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 11, 11, 8) == 1 );


char* board541669073 = gamma_board(board);
assert( board541669073 != NULL );
assert( strcmp(board541669073, 
".11.........4.....\n"
"...........11.....\n"
"..........1....5.\n"
"6..........9.....\n"
"........3........\n"
"..10.............13\n"
"7...............7\n"
"8....1210..........\n"
"..............4..\n"
"...........2.....\n") == 0);
free(board541669073);
board541669073 = NULL;
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_free_fields(board, 2) == 152 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );


char* board130133191 = gamma_board(board);
assert( board130133191 != NULL );
assert( strcmp(board130133191, 
".11.........4.....\n"
"...........11.....\n"
"..........1....5.\n"
"6..........9..3..\n"
"........3........\n"
"..10.............13\n"
"7......5......2.7\n"
"8....1210..........\n"
"..............4..\n"
"...........2.....\n") == 0);
free(board130133191);
board130133191 = NULL;
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 17, -1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 7) == 1 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_golden_move(board, 13, 1, 14) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 4, 14, 2) == 1 );
assert( gamma_move(board, 5, 17, 3) == 0 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_move(board, 9, -1, 1) == 0 );


char* board831799388 = gamma_board(board);
assert( board831799388 != NULL );
assert( strcmp(board831799388, 
".11.........4.....\n"
"........1..11.....\n"
"...12....7.1....5.\n"
"6..........9..3..\n"
"........3........\n"
"..10.............13\n"
"7......5.9....2.7\n"
"8....1210.13.8...4..\n"
".........2....4..\n"
"...........2.....\n") == 0);
free(board831799388);
board831799388 = NULL;
assert( gamma_free_fields(board, 10) == 142 );
assert( gamma_move(board, 11, 14, 4) == 1 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_free_fields(board, 1) == 140 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 11, 7, -1) == 0 );
assert( gamma_move(board, 12, 10, 4) == 1 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_free_fields(board, 3) == 132 );
assert( gamma_golden_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );


char* board841888032 = gamma_board(board);
assert( board841888032 != NULL );
assert( strcmp(board841888032, 
".11.........4..2..\n"
"........1..11.....\n"
"...12....7.1....5.\n"
"6..........9..3..\n"
"........3.2......\n"
"..10..6....12...11.13\n"
"7...3..5.9....2.7\n"
"8.1..1210.13.8...4..\n"
".........27...4..\n"
"13..........2.4...\n") == 0);
free(board841888032);
board841888032 = NULL;
assert( gamma_move(board, 6, 11, 1) == 1 );


char* board710834343 = gamma_board(board);
assert( board710834343 != NULL );
assert( strcmp(board710834343, 
".11.........4..2..\n"
"........1..11.....\n"
"...12....7.1....5.\n"
"6..........9..3..\n"
"........3.2......\n"
"..10..6....12...11.13\n"
"7...3..5.9....2.7\n"
"8.1..1210.13.8...4..\n"
".........276..4..\n"
"13..........2.4...\n") == 0);
free(board710834343);
board710834343 = NULL;
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 131 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_free_fields(board, 10) == 130 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_move(board, 13, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_free_fields(board, 1) == 129 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 10, 8) == 1 );
assert( gamma_move(board, 12, 11, 8) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_free_fields(board, 12) == 126 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board287919814 = gamma_board(board);
assert( board287919814 != NULL );
assert( strcmp(board287919814, 
".11.........4..2..\n"
".......11.1111.....\n"
"...12....7.1....5.\n"
"6..........9..3..\n"
"..3...2.3.2......\n"
"..10..6....12...11.13\n"
"7...3..5.9....2.7\n"
"8.1.101210.13.8...4..\n"
"..4......276..4..\n"
"13..........2.4...\n") == 0);
free(board287919814);
board287919814 = NULL;
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_move(board, 4, 8, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_golden_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 8, 1) == 1 );
assert( gamma_busy_fields(board, 13) == 3 );


char* board525165364 = gamma_board(board);
assert( board525165364 != NULL );
assert( strcmp(board525165364, 
".11.........4..2..\n"
".......11.1111.....\n"
"..312....7.1....5.\n"
"6..........9..3..\n"
"..37..2.3.2......\n"
"..10..6....12...11.13\n"
"7...3..5.9....2.7\n"
"8.1.101210.13.8...4..\n"
"6.4...8.12276..4..\n"
"134.........2.4...\n") == 0);
free(board525165364);
board525165364 = NULL;
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_free_fields(board, 7) == 116 );
assert( gamma_move(board, 8, 16, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_free_fields(board, 11) == 115 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 13, 8, 1) == 0 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 6, 15, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 12, 9) == 1 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_move(board, 12, 4, -1) == 0 );
assert( gamma_free_fields(board, 13) == 110 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 110 );
assert( gamma_golden_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, 17, 10) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_free_fields(board, 7) == 108 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 12, 2) == 1 );
assert( gamma_free_fields(board, 12) == 106 );
assert( gamma_move(board, 13, 5, -1) == 0 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_move(board, 6, 13, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 10, 13, 8) == 0 );
assert( gamma_move(board, 11, 8, 9) == 0 );
assert( gamma_free_fields(board, 11) == 103 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_move(board, 13, 13, 4) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );


char* board482442377 = gamma_board(board);
assert( board482442377 != NULL );
assert( strcmp(board482442377, 
".11......9..49.2.8\n"
".2.2...11.1111.6...\n"
"..312....7.1....5.\n"
"6..8.......91.3..\n"
"3.37..2.3.2......\n"
".410..6....12.7511.13\n"
"711..3.3579..4.2.7\n"
"8.1.101210.13.8.12.46.\n"
"6.4...8.12276..4..\n"
"1349........2.45..\n") == 0);
free(board482442377);
board482442377 = NULL;
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 16, 10) == 0 );
assert( gamma_move(board, 11, 17, 5) == 0 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_golden_move(board, 12, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 1, 1) == 1 );


char* board941834577 = gamma_board(board);
assert( board941834577 != NULL );
assert( strcmp(board941834577, 
".11......9..49.2.8\n"
".2.2...11.1111.6...\n"
"..312....7.1....5.\n"
"6..8.......91.3..\n"
"3.37..2.3.2......\n"
".410..6..12.12.7511.13\n"
"711..3.3579..4.2.7\n"
"8.1.101210.13.8.12.46.\n"
"624...8.12276..4..\n"
"1349........2.45..\n") == 0);
free(board941834577);
board941834577 = NULL;
assert( gamma_move(board, 3, 17, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 14, -1) == 0 );
assert( gamma_free_fields(board, 6) == 97 );
assert( gamma_golden_move(board, 6, 3, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 10, 4, -1) == 0 );
assert( gamma_golden_move(board, 10, 2, 14) == 0 );
assert( gamma_free_fields(board, 11) == 96 );
assert( gamma_move(board, 12, 2, 9) == 1 );
assert( gamma_move(board, 13, 1, 7) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 93 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_golden_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 12, 7) == 1 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 15, -1) == 0 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_free_fields(board, 8) == 86 );
assert( gamma_move(board, 9, -1, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 11, 1) == 0 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 9, 2) == 1 );
assert( gamma_free_fields(board, 12) == 84 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_free_fields(board, 13) == 84 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );


char* board547083331 = gamma_board(board);
assert( board547083331 != NULL );
assert( strcmp(board547083331, 
".1112.4..19.749.2.8\n"
".2.2..811.1111.6...\n"
".13312....7.1811..5.\n"
"6..8.......9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.101210.13128.12.46.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board547083331);
board547083331 = NULL;
assert( gamma_move(board, 9, 17, 9) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_free_fields(board, 10) == 82 );
assert( gamma_move(board, 11, 10, -1) == 0 );
assert( gamma_free_fields(board, 11) == 82 );
assert( gamma_move(board, 12, -1, 5) == 0 );
assert( gamma_move(board, 13, 13, 7) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 13, 2) == 0 );


char* board944039960 = gamma_board(board);
assert( board944039960 != NULL );
assert( strcmp(board944039960, 
".1112.4..19.749.2.8\n"
".2.2..811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.......9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.101210.13128.12546.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board944039960);
board944039960 = NULL;
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 16, 3) == 0 );
assert( gamma_golden_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 17, 10) == 0 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 13, 6, 10) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_free_fields(board, 13) == 79 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 79 );


char* board982129508 = gamma_board(board);
assert( board982129508 != NULL );
assert( strcmp(board982129508, 
".1112.4..1912749.2.8\n"
".2.2..811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.......9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.101210.13128.12546.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board982129508);
board982129508 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 12, 9) == 0 );
assert( gamma_free_fields(board, 10) == 79 );
assert( gamma_free_fields(board, 11) == 79 );


char* board567129788 = gamma_board(board);
assert( board567129788 != NULL );
assert( strcmp(board567129788, 
".1112.4..1912749.2.8\n"
".2.2..811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.......9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.101210.13128.12546.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board567129788);
board567129788 = NULL;
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 13, 5, 8) == 1 );


char* board526419601 = gamma_board(board);
assert( board526419601 != NULL );
assert( strcmp(board526419601, 
".1112.4..1912749.2.8\n"
".2.2.13811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.......9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.101210.13128.12546.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board526419601);
board526419601 = NULL;
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 15, 10) == 0 );
assert( gamma_move(board, 9, 17, 2) == 0 );
assert( gamma_golden_move(board, 9, 2, 14) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 9) == 0 );


char* board391500650 = gamma_board(board);
assert( board391500650 != NULL );
assert( strcmp(board391500650, 
".1112.4..1912749.2.8\n"
".2.2.13811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.......9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.10610.13128.12546.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board391500650);
board391500650 = NULL;
assert( gamma_move(board, 12, 5, 6) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 15, 9) == 1 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board978543981 = gamma_board(board);
assert( board978543981 != NULL );
assert( strcmp(board978543981, 
".1112.4..1912749.218\n"
".2.2.13811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.12.....9133..\n"
"3.37..2.3.2......\n"
".410..6.1112.12.7511.13\n"
"711..3.3579..422.7\n"
"8.1.10610.13128.12546.\n"
"624.3.8912276..4..\n"
"1349.......82.45..\n") == 0);
free(board978543981);
board978543981 = NULL;
assert( gamma_move(board, 4, 13, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_free_fields(board, 9) == 74 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 10) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 15, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 13, 12, 10) == 0 );
assert( gamma_move(board, 1, 16, 1) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 17, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 15, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 5) == 1 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_free_fields(board, 13) == 70 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 17, 4) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 14, 9) == 0 );
assert( gamma_move(board, 10, 4, -1) == 0 );
assert( gamma_move(board, 12, 8, 9) == 0 );
assert( gamma_free_fields(board, 12) == 13 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 16, 6) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 7, 2, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );


char* board854347235 = gamma_board(board);
assert( board854347235 != NULL );
assert( strcmp(board854347235, 
".1112.44.1912749.218\n"
".2.2.13811.1111.6...\n"
".13312....7.181113.5.\n"
"6..8.12.....9133.3\n"
"3.37..2.3112......\n"
".410..691112.12.7511.13\n"
"711..3.35795.422.7\n"
"8.1810610.13128.12546.\n"
"624.368912276..4.1\n"
"1349..6....82.457.\n") == 0);
free(board854347235);
board854347235 = NULL;
assert( gamma_move(board, 13, 4, 10) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 15, 0) == 0 );


gamma_delete(board);

    return 0;
}
