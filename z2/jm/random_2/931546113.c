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
uuid: 931546113
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 14, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 1, 9) == 1 );
assert( gamma_free_fields(board, 10) == 128 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_free_fields(board, 11) == 128 );
assert( gamma_move(board, 12, 10, 0) == 1 );


char* board116233122 = gamma_board(board);
assert( board116233122 != NULL );
assert( strcmp(board116233122, 
"...........\n"
"...........\n"
".7.......5.\n"
".10.........\n"
"...........\n"
"........6.8\n"
".....92..6.\n"
"...49.5....\n"
"......1....\n"
"...........\n"
".8.....3...\n"
"..........1\n"
"..........12\n") == 0);
free(board116233122);
board116233122 = NULL;
assert( gamma_move(board, 13, 3, 1) == 1 );
assert( gamma_move(board, 13, 0, 9) == 1 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_move(board, 14, 2, 1) == 1 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board460840493 = gamma_board(board);
assert( board460840493 != NULL );
assert( strcmp(board460840493, 
"...........\n"
"...........\n"
".7.......5.\n"
"1310.........\n"
"...........\n"
"........6.8\n"
".....92..6.\n"
"...49.5....\n"
"....2.1....\n"
".1.........\n"
".81....3...\n"
"..1413......1\n"
"..........12\n") == 0);
free(board460840493);
board460840493 = NULL;
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 119 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 10, 0, 7) == 1 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 13, 0, 5) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_move(board, 14, 2, 8) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_golden_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_move(board, 12, 10, 2) == 1 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 13, 12, 9) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_move(board, 14, 4, 2) == 1 );
assert( gamma_move(board, 14, 4, 9) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );


char* board581057597 = gamma_board(board);
assert( board581057597 != NULL );
assert( strcmp(board581057597, 
"......3....\n"
"...........\n"
".7..4.9..5.\n"
"1310..14......\n"
".914..7..11.\n"
"10.12....96.8\n"
".3...9211.6.\n"
"13..49.5....\n"
"....2.1....\n"
".1..2...13.1\n"
".81.14..3..12\n"
"12.1413......1\n"
"..8.....5.12\n") == 0);
free(board581057597);
board581057597 = NULL;
assert( gamma_move(board, 2, 1, 8) == 0 );


char* board919135214 = gamma_board(board);
assert( board919135214 != NULL );
assert( strcmp(board919135214, 
"......3....\n"
"...........\n"
".7..4.9..5.\n"
"1310..14......\n"
".914..7..11.\n"
"10.12....96.8\n"
".3...9211.6.\n"
"13..49.5....\n"
"....2.1....\n"
".1..2...13.1\n"
".81.14..3..12\n"
"12.1413......1\n"
"..8.....5.12\n") == 0);
free(board919135214);
board919135214 = NULL;
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_golden_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_free_fields(board, 12) == 92 );
assert( gamma_move(board, 13, 0, 12) == 1 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_free_fields(board, 11) == 84 );
assert( gamma_move(board, 12, 4, 10) == 0 );
assert( gamma_move(board, 13, 4, 11) == 1 );
assert( gamma_free_fields(board, 13) == 83 );
assert( gamma_move(board, 14, 7, 4) == 1 );
assert( gamma_move(board, 14, 10, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_golden_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 9, 8, 11) == 1 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 10, 11) == 1 );
assert( gamma_move(board, 11, 3, 7) == 1 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 12, 2) == 0 );
assert( gamma_move(board, 13, 9, 5) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 13, 1, 2) == 1 );
assert( gamma_move(board, 14, 9, 11) == 1 );
assert( gamma_move(board, 14, 9, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 10, 12) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_free_fields(board, 11) == 67 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 6) == 1 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 13, 2, 6) == 1 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_move(board, 14, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );


char* board484348851 = gamma_board(board);
assert( board484348851 != NULL );
assert( strcmp(board484348851, 
"131....3...8\n"
".3..13..591410\n"
"37..4.9.756\n"
"1310..14..59.14\n"
".914.57.111.\n"
"10.1211.6.96.8\n"
"2313812921166.\n"
"13.749357.13.\n"
"14...2.114...\n"
"11..2...13.1\n"
"4131.14..3..12\n"
"1211141394.8..1\n"
"13.8..7..5.12\n") == 0);
free(board484348851);
board484348851 = NULL;
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_free_fields(board, 9) == 59 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 9, 0) == 1 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 14, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 1, 8) == 0 );


char* board973388947 = gamma_board(board);
assert( board973388947 != NULL );
assert( strcmp(board973388947, 
"131....3.3.8\n"
".3..13..591410\n"
"37..4.9.756\n"
"1310..14..59.14\n"
".914.57.111.\n"
"10.1211.61096.8\n"
"2313812921166.\n"
"13.749357.13.\n"
"148..2.114..8\n"
"1114.2.1.13.1\n"
"4131914..3..12\n"
"1211141394.82.1\n"
"13.8..7..51212\n") == 0);
free(board973388947);
board973388947 = NULL;
assert( gamma_move(board, 11, 10, 5) == 1 );
assert( gamma_move(board, 11, 2, 11) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_free_fields(board, 13) == 48 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 9, 1) == 1 );
assert( gamma_move(board, 11, 3, 4) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 11, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 14, 10, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 7, 9, 12) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );


char* board891590112 = gamma_board(board);
assert( board891590112 != NULL );
assert( strcmp(board891590112, 
"131..5.34378\n"
".311.13..591410\n"
"37..4.9.756\n"
"13106.14..59.14\n"
".914.57.111.\n"
"10.1211.61096.8\n"
"2313812921166.\n"
"13.749357.1311\n"
"14812115.114..8\n"
"111432.1.13.1\n"
"4131914..3..12\n"
"1211141394.82111\n"
"13.8..7..51212\n") == 0);
free(board891590112);
board891590112 = NULL;
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 13, 4, 11) == 0 );
assert( gamma_move(board, 14, 1, 10) == 0 );
assert( gamma_move(board, 14, 8, 2) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 11, 9, 9) == 0 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_move(board, 14, 7, 10) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 6, 11) == 1 );
assert( gamma_golden_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_free_fields(board, 10) == 31 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 13, 4, 12) == 0 );
assert( gamma_move(board, 13, 8, 0) == 0 );
assert( gamma_move(board, 14, 9, 5) == 0 );
assert( gamma_move(board, 14, 6, 4) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_move(board, 11, 6, 12) == 0 );


char* board315003829 = gamma_board(board);
assert( board315003829 != NULL );
assert( strcmp(board315003829, 
"1314.5.34378\n"
".311.13.9591410\n"
"37..49914756\n"
"13106.14..59914\n"
".914.57.111.\n"
"10.1211.61096.8\n"
"23138129211665\n"
"13.749357121311\n"
"14812115.1143.8\n"
"111432.181341\n"
"4131914..314.12\n"
"1211141394.82111\n"
"13.85.7..51212\n") == 0);
free(board315003829);
board315003829 = NULL;
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 10, 0, 11) == 1 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_move(board, 12, 6, 10) == 0 );
assert( gamma_golden_move(board, 12, 4, 4) == 1 );
assert( gamma_move(board, 13, 11, 5) == 0 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 13, 8, 10) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_busy_fields(board, 14) == 11 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );


char* board510585485 = gamma_board(board);
assert( board510585485 != NULL );
assert( strcmp(board510585485, 
"131425.34378\n"
"10311.13.9591410\n"
"37..49914756\n"
"13106.14..59914\n"
".914.57.111.\n"
"104121166109698\n"
"23138129211665\n"
"1313749357121311\n"
"148121112.114338\n"
"111432.181341\n"
"4131914.3314612\n"
"1211141394.82111\n"
"13.85.7..51212\n") == 0);
free(board510585485);
board510585485 = NULL;
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 13, 11, 5) == 0 );
assert( gamma_move(board, 14, 10, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 11 );
assert( gamma_free_fields(board, 14) == 19 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_free_fields(board, 12) == 19 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 14, 8, 6) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_free_fields(board, 12) == 18 );
assert( gamma_move(board, 13, 12, 5) == 0 );
assert( gamma_move(board, 14, 0, 6) == 0 );
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );


char* board398844333 = gamma_board(board);
assert( board398844333 != NULL );
assert( strcmp(board398844333, 
"131425.34378\n"
"10311.13.9591410\n"
"37..49914756\n"
"13106.14..59914\n"
".914.57.111.\n"
"104121166109698\n"
"23138129211665\n"
"1313749357121311\n"
"148121112.114338\n"
"11143213181341\n"
"4131914.3314612\n"
"1211141394.82111\n"
"13.85127..51212\n") == 0);
free(board398844333);
board398844333 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 13, 7, 0) == 1 );
assert( gamma_move(board, 14, 10, 11) == 0 );
assert( gamma_busy_fields(board, 14) == 11 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_move(board, 6, 7, 6) == 1 );


gamma_delete(board);

    return 0;
}
