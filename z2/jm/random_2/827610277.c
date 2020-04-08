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
uuid: 827610277
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 15, 10, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 14, 0) == 0 );
assert( gamma_move(board, 8, 2, 14) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_golden_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 10, 4, 11) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );


char* board365197490 = gamma_board(board);
assert( board365197490 != NULL );
assert( strcmp(board365197490, 
"..8....\n"
"4.8....\n"
"..1....\n"
"7..610..\n"
".....94\n"
"...3...\n"
"....3..\n"
".397.1.\n"
"4....8.\n"
"...2.1.\n"
"..2.293\n"
"....102.\n"
"..1.9.3\n"
".613.2.\n"
".6..37.\n") == 0);
free(board365197490);
board365197490 = NULL;
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_free_fields(board, 9) == 67 );


char* board544329367 = gamma_board(board);
assert( board544329367 != NULL );
assert( strcmp(board544329367, 
"..8....\n"
"4.8....\n"
"..1....\n"
"7..610..\n"
".....94\n"
"...3...\n"
"....3..\n"
".397.1.\n"
"4...78.\n"
"...2.19\n"
"..2.293\n"
"....102.\n"
"..1.9.3\n"
".613.2.\n"
"66..37.\n") == 0);
free(board544329367);
board544329367 = NULL;
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 10, 6, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 14, 1) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 5, 14) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 2, 9) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 4, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board633070923 = gamma_board(board);
assert( board633070923 != NULL );
assert( strcmp(board633070923, 
"..8.17.\n"
"4.8....\n"
"5.1....\n"
"77.610410\n"
"....994\n"
".6103...\n"
"..1.3..\n"
".397.16\n"
"4.4478.\n"
"..72.19\n"
"..2.293\n"
"...10102.\n"
"2.179.3\n"
".613.25\n"
"66..37.\n") == 0);
free(board633070923);
board633070923 = NULL;
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 10, 13, 6) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );


char* board805624172 = gamma_board(board);
assert( board805624172 != NULL );
assert( strcmp(board805624172, 
".48.17.\n"
"4.8....\n"
"5.1....\n"
"77.610410\n"
"....994\n"
".6103.9.\n"
"..1.33.\n"
".397.16\n"
"4.4478.\n"
"..72.19\n"
"..2.293\n"
"...10102.\n"
"2.179.3\n"
".613.25\n"
"66..37.\n") == 0);
free(board805624172);
board805624172 = NULL;
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );


char* board614783783 = gamma_board(board);
assert( board614783783 != NULL );
assert( strcmp(board614783783, 
".48717.\n"
"4.8....\n"
"5.1....\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"7.1.33.\n"
".397.16\n"
"4.4478.\n"
"..72.19\n"
"..2.293\n"
"...10102.\n"
"2.179.3\n"
".613.25\n"
"66..37.\n") == 0);
free(board614783783);
board614783783 = NULL;
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board956764790 = gamma_board(board);
assert( board956764790 != NULL );
assert( strcmp(board956764790, 
".48717.\n"
"4.8....\n"
"5.1....\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"7.1.33.\n"
".397.16\n"
"424478.\n"
"..72.19\n"
"..2.293\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66..37.\n") == 0);
free(board956764790);
board956764790 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );


char* board335684960 = gamma_board(board);
assert( board335684960 != NULL );
assert( strcmp(board335684960, 
"548717.\n"
"4.8....\n"
"5.1....\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"7.1.33.\n"
".397.16\n"
"424478.\n"
"..72.19\n"
"..2.293\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66..37.\n") == 0);
free(board335684960);
board335684960 = NULL;
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 5, 12) == 1 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );


char* board409520800 = gamma_board(board);
assert( board409520800 != NULL );
assert( strcmp(board409520800, 
"548717.\n"
"4.8....\n"
"5.1..9.\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"424478.\n"
".472.19\n"
"3.2.293\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66..37.\n") == 0);
free(board409520800);
board409520800 = NULL;
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );


char* board706074774 = gamma_board(board);
assert( board706074774 != NULL );
assert( strcmp(board706074774, 
"548717.\n"
"4.8....\n"
"5.1..9.\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.293\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66..374\n") == 0);
free(board706074774);
board706074774 = NULL;
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );


char* board270256540 = gamma_board(board);
assert( board270256540 != NULL );
assert( strcmp(board270256540, 
"548717.\n"
"4.8....\n"
"5.1..9.\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.293\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board270256540);
board270256540 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board136429569 = gamma_board(board);
assert( board136429569 != NULL );
assert( strcmp(board136429569, 
"548717.\n"
"4.8....\n"
"5.1..9.\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.293\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board136429569);
board136429569 = NULL;
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 8, 6, 13) == 1 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board777942445 = gamma_board(board);
assert( board777942445 != NULL );
assert( strcmp(board777942445, 
"548717.\n"
"4.8...8\n"
"5.1..97\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.294\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board777942445);
board777942445 = NULL;
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );


char* board708713126 = gamma_board(board);
assert( board708713126 != NULL );
assert( strcmp(board708713126, 
"548717.\n"
"4.8...8\n"
"5.1..97\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.294\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board708713126);
board708713126 = NULL;
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );


char* board155415455 = gamma_board(board);
assert( board155415455 != NULL );
assert( strcmp(board155415455, 
"548717.\n"
"4.8...8\n"
"5.1..97\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.294\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board155415455);
board155415455 = NULL;
assert( gamma_move(board, 9, 3, 3) == 0 );


char* board215320940 = gamma_board(board);
assert( board215320940 != NULL );
assert( strcmp(board215320940, 
"548717.\n"
"4.8...8\n"
"5.1..97\n"
"77.610410\n"
"6...994\n"
".6103.9.\n"
"711.33.\n"
"2397.16\n"
"4244783\n"
".472.19\n"
"322.294\n"
"1..10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board215320940);
board215320940 = NULL;
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );


char* board645618910 = gamma_board(board);
assert( board645618910 != NULL );
assert( strcmp(board645618910, 
"548717.\n"
"4.81..8\n"
"5.1..97\n"
"77.610410\n"
"62..994\n"
".610389.\n"
"711.338\n"
"2397.16\n"
"4244783\n"
".472219\n"
"322.294\n"
"18.10102.\n"
"2.179.3\n"
".613.25\n"
"66.10374\n") == 0);
free(board645618910);
board645618910 = NULL;
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 2, 11) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 10, 13, 5) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );


char* board782518449 = gamma_board(board);
assert( board782518449 != NULL );
assert( strcmp(board782518449, 
"548717.\n"
"4.81..8\n"
"5.1..97\n"
"778610410\n"
"62..994\n"
".610389.\n"
"711.338\n"
"2397.16\n"
"4244783\n"
".472219\n"
"322.294\n"
"18.10102.\n"
"2.179.3\n"
".613125\n"
"66.10374\n") == 0);
free(board782518449);
board782518449 = NULL;
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );


gamma_delete(board);

    return 0;
}
