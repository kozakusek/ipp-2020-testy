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
uuid: 665079360
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 15, 12, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 10, 9, 5) == 1 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_golden_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 12, 6, 8) == 1 );
assert( gamma_move(board, 12, 1, 12) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_free_fields(board, 5) == 146 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 10, 5, 14) == 1 );


char* board685309759 = gamma_board(board);
assert( board685309759 != NULL );
assert( strcmp(board685309759, 
".....10.....\n"
".5.........\n"
".12.........\n"
"...........\n"
"11.......22.\n"
"..4...6....\n"
".7.7..12....\n"
"....6......\n"
"........4.9\n"
"..5.....310.\n"
"...........\n"
".........53\n"
"........2..\n"
"...........\n"
"..8..111....\n") == 0);
free(board685309759);
board685309759 = NULL;
assert( gamma_move(board, 11, 4, 4) == 1 );
assert( gamma_golden_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 12, 2, 4) == 1 );


char* board950975210 = gamma_board(board);
assert( board950975210 != NULL );
assert( strcmp(board950975210, 
".....10.....\n"
".5.........\n"
".12.........\n"
"...........\n"
"11.......22.\n"
"..4...6....\n"
".7.7..12....\n"
"....6......\n"
"........4.9\n"
"..5.....310.\n"
"..12.11......\n"
".........53\n"
"........2..\n"
"...........\n"
"..8..111....\n") == 0);
free(board950975210);
board950975210 = NULL;
assert( gamma_move(board, 1, 5, 3) == 1 );


char* board851605913 = gamma_board(board);
assert( board851605913 != NULL );
assert( strcmp(board851605913, 
".....10.....\n"
".5.........\n"
".12.........\n"
"...........\n"
"11.......22.\n"
"..4...6....\n"
".7.7..12....\n"
"....6......\n"
"........4.9\n"
"..5.....310.\n"
"..12.11......\n"
".....1...53\n"
"........2..\n"
"...........\n"
"..8..111....\n") == 0);
free(board851605913);
board851605913 = NULL;
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 9, 9, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 10, 6, 6) == 1 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_move(board, 11, 9, 8) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 11) == 1 );
assert( gamma_move(board, 11, 7, 1) == 1 );
assert( gamma_move(board, 11, 4, 10) == 1 );
assert( gamma_move(board, 12, 11, 6) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board506072195 = gamma_board(board);
assert( board506072195 != NULL );
assert( strcmp(board506072195, 
"5....103....\n"
".5.........\n"
".12.4.....2.\n"
"..10....3...\n"
"111..11...22.\n"
".34...64...\n"
".727..12..11.\n"
"...26......\n"
"...6.210.4.9\n"
"..5.....3101\n"
"3712.112..6..\n"
"....11...53\n"
"8.8.....2..\n"
"5....5.11...\n"
".78..111....\n") == 0);
free(board506072195);
board506072195 = NULL;
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_free_fields(board, 9) == 110 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );


char* board402799300 = gamma_board(board);
assert( board402799300 != NULL );
assert( strcmp(board402799300, 
"5....103....\n"
".5.........\n"
".12.4.....2.\n"
"..10.4..3...\n"
"111..11...22.\n"
".34..1164...\n"
".727..12..11.\n"
"2..266.....\n"
"4..6.210.4.9\n"
"..5..8..3101\n"
"3712.112..66.\n"
"....11...53\n"
"8.8....32..\n"
"5....5.11...\n"
".78..111....\n") == 0);
free(board402799300);
board402799300 = NULL;
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_free_fields(board, 7) == 103 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 10, 1, 13) == 0 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );


char* board300707848 = gamma_board(board);
assert( board300707848 != NULL );
assert( strcmp(board300707848, 
"5....103....\n"
".5.........\n"
".12.4.....2.\n"
"..10.48.3...\n"
"111..11...22.\n"
".34..1164...\n"
".727..12..11.\n"
"2..266.....\n"
"4..6.210.4.9\n"
"..5.984.3101\n"
"3712.112..66.\n"
"....11...53\n"
"8.8....32..\n"
"5.11..5.11...\n"
".78..111....\n") == 0);
free(board300707848);
board300707848 = NULL;
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 10, 14, 3) == 0 );
assert( gamma_move(board, 11, 6, 3) == 1 );


char* board626322593 = gamma_board(board);
assert( board626322593 != NULL );
assert( strcmp(board626322593, 
"5....103....\n"
".5.........\n"
".12.4.....2.\n"
"..10.48.3...\n"
"111..11...22.\n"
".34..1164...\n"
".727..12..11.\n"
"2..266.....\n"
"4..6.210.4.9\n"
"..5.98483101\n"
"3712.112..66.\n"
"....1111..53\n"
"8.8....32..\n"
"5.11..5811...\n"
".78..111....\n") == 0);
free(board626322593);
board626322593 = NULL;
assert( gamma_move(board, 12, 2, 3) == 1 );


char* board780827076 = gamma_board(board);
assert( board780827076 != NULL );
assert( strcmp(board780827076, 
"5....103....\n"
".5.........\n"
".12.4.....2.\n"
"..10.48.3...\n"
"111..11...22.\n"
".34..1164...\n"
".727..12..11.\n"
"2..266.....\n"
"4..6.210.4.9\n"
"..5.98483101\n"
"3712.112..66.\n"
"..12.1111..53\n"
"8.8....32..\n"
"5.11..5811...\n"
".78..111....\n") == 0);
free(board780827076);
board780827076 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_free_fields(board, 3) == 95 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_free_fields(board, 6) == 91 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 9, 10) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 9, 6, 12) == 1 );
assert( gamma_free_fields(board, 9) == 86 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 11, 6, 13) == 0 );


char* board828551661 = gamma_board(board);
assert( board828551661 != NULL );
assert( strcmp(board828551661, 
"5....103....\n"
".58........\n"
".12.4..9..2.\n"
"..10.4853...\n"
"1116.11...22.\n"
".34..1164...\n"
".727..129.11.\n"
"2..266.....\n"
"4..6.210.4.9\n"
"..5.98483101\n"
"3712.112.766.\n"
"..12.1111.453\n"
"8.8....32.2\n"
"5.11..5811...\n"
".78..111...6\n") == 0);
free(board828551661);
board828551661 = NULL;
assert( gamma_move(board, 12, 9, 14) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 12, 8, 10) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_free_fields(board, 9) == 75 );
assert( gamma_golden_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_golden_move(board, 12, 12, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_move(board, 12, 7, 7) == 1 );
assert( gamma_free_fields(board, 12) == 72 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 12, 1, 10) == 0 );
assert( gamma_move(board, 12, 1, 10) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 72 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 4, 12) == 1 );


char* board562209841 = gamma_board(board);
assert( board562209841 != NULL );
assert( strcmp(board562209841, 
"5...61035.12.\n"
".58........\n"
".12.47.9..2.\n"
"..10.4853...\n"
"1116.11...22.\n"
".34..1164.7.\n"
".727..129711.\n"
"2..269.121.5\n"
"4..6.21084.9\n"
"..5.98483101\n"
"3712.112.766.\n"
"6.12.1111.453\n"
"8.8..11132.2\n"
"5.114.5811...\n"
".78..1119..6\n") == 0);
free(board562209841);
board562209841 = NULL;
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_golden_move(board, 10, 10, 9) == 0 );
assert( gamma_move(board, 11, 13, 3) == 0 );
assert( gamma_free_fields(board, 11) == 13 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_free_fields(board, 3) == 71 );


char* board763574678 = gamma_board(board);
assert( board763574678 != NULL );
assert( strcmp(board763574678, 
"5...61035.12.\n"
".58........\n"
".12.47.9..2.\n"
"..10.4853...\n"
"1116.11...22.\n"
".34..1164.7.\n"
".727..129711.\n"
"2..269.121.5\n"
"4..6.21084.9\n"
"..5.98483101\n"
"3712.112.766.\n"
"6.12.1111.453\n"
"8.8..11132.2\n"
"5.114.5811...\n"
".78..1119..6\n") == 0);
free(board763574678);
board763574678 = NULL;
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_free_fields(board, 10) == 70 );
assert( gamma_move(board, 11, 14, 8) == 0 );
assert( gamma_move(board, 11, 10, 1) == 0 );
assert( gamma_free_fields(board, 11) == 13 );
assert( gamma_move(board, 12, 0, 8) == 1 );
assert( gamma_move(board, 12, 9, 1) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board487098402 = gamma_board(board);
assert( board487098402 != NULL );
assert( strcmp(board487098402, 
"5...61035.12.\n"
".58........\n"
".12.47.9..2.\n"
"..10.4853...\n"
"1116.11...22.\n"
".34.11164.7.\n"
"12727..129711.\n"
"2..269.121.5\n"
"4..6.21084.9\n"
"..5.98483101\n"
"3712.1124766.\n"
"6.1261111.453\n"
"8.8..11132.2\n"
"5.114.5811.12.\n"
".78..111910.6\n") == 0);
free(board487098402);
board487098402 = NULL;
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_free_fields(board, 7) == 65 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 12, 0) == 0 );
assert( gamma_golden_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 14) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_free_fields(board, 10) == 61 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 9, 7) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 12, 13, 10) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_free_fields(board, 12) == 57 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_move(board, 11, 4, 14) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_golden_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board104411455 = gamma_board(board);
assert( board104411455 != NULL );
assert( strcmp(board104411455, 
"5...61035.12.\n"
".583.......\n"
".12.47.98.23\n"
"..10.48532..\n"
"1116.11...22.\n"
"734.1116477.\n"
"12727..129711.\n"
"2..269.121.5\n"
"4..6.21084.9\n"
".125.98483101\n"
"3712.1124766.\n"
"6.1261111.453\n"
"8.8..11132.2\n"
"5.114.5811.12.\n"
"1078..111910.6\n") == 0);
free(board104411455);
board104411455 = NULL;
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 12 );


char* board297118441 = gamma_board(board);
assert( board297118441 != NULL );
assert( strcmp(board297118441, 
"5...61035.12.\n"
".583.......\n"
".12.47.98.23\n"
"..10.48532..\n"
"1116.11...22.\n"
"734.1116477.\n"
"12727..129711.\n"
"2..269.121.5\n"
"4..6.2108449\n"
".125.98483101\n"
"3712.1124766.\n"
"6.1261111.453\n"
"8.8..11132.2\n"
"5.114.5811.12.\n"
"1078..111910.6\n") == 0);
free(board297118441);
board297118441 = NULL;
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 7, 13) == 1 );
assert( gamma_move(board, 10, 2, 12) == 1 );
assert( gamma_move(board, 11, 9, 9) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_move(board, 10, 13, 8) == 0 );
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_move(board, 12, 10, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_golden_move(board, 12, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 14, 8) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 9, 9) == 0 );
assert( gamma_busy_fields(board, 12) == 10 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 6, 13) == 1 );
assert( gamma_move(board, 10, 10, 10) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_busy_fields(board, 12) == 10 );
assert( gamma_free_fields(board, 12) == 51 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 14, 8) == 0 );


char* board226143869 = gamma_board(board);
assert( board226143869 != NULL );
assert( strcmp(board226143869, 
"5...61035.12.\n"
".583..99...\n"
".121047.98.23\n"
"..10.48532..\n"
"1116.11...222\n"
"734.1116477.\n"
"12727..129711.\n"
"2..269.121.5\n"
"4..6.2108449\n"
".125.98483101\n"
"3712.1124766.\n"
"6.1261111.453\n"
"8.12..11132.2\n"
"58114.5811.12.\n"
"1078..111910.6\n") == 0);
free(board226143869);
board226143869 = NULL;
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_free_fields(board, 11) == 9 );
assert( gamma_move(board, 12, 2, 12) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_free_fields(board, 10) == 50 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_free_fields(board, 2) == 12 );


char* board668905001 = gamma_board(board);
assert( board668905001 != NULL );
assert( strcmp(board668905001, 
"5...61035.12.\n"
".583..99...\n"
".121047.98.23\n"
"..10.48532..\n"
"1116.11...222\n"
"734.1116477.\n"
"12727..129711.\n"
"2..269.121.5\n"
"4..6.2108449\n"
".125.98483101\n"
"3712.1124766.\n"
"6.1261111.453\n"
"8.12.1011132.2\n"
"58114.5811.12.\n"
"1078..111910.6\n") == 0);
free(board668905001);
board668905001 = NULL;
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board754374649 = gamma_board(board);
assert( board754374649 != NULL );
assert( strcmp(board754374649, 
"5...61035.12.\n"
".583..99...\n"
".121047.98.23\n"
"..10.48532..\n"
"1116.11...222\n"
"734.1116477.\n"
"12727..129711.\n"
"2..269.121.5\n"
"4..6.2108449\n"
".125.98483101\n"
"3712.1124766.\n"
"6.1261111.453\n"
"8.12.1011132.2\n"
"58114.5811.12.\n"
"1078..111910.6\n") == 0);
free(board754374649);
board754374649 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
