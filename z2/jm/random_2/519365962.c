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
uuid: 519365962
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 14, 13, 14);
assert( board != NULL );


assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_golden_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 12, 12) == 0 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 11, 5, 4) == 1 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 3, 2) == 1 );


char* board566680926 = gamma_board(board);
assert( board566680926 != NULL );
assert( strcmp(board566680926, 
".2...........\n"
"............4\n"
"........4....\n"
".............\n"
"....6........\n"
".............\n"
"..3.......3..\n"
"...........5.\n"
"......108.6...\n"
".....11.......\n"
"..........8..\n"
"...12.9.10..2..\n"
".......7.....\n"
"11............\n") == 0);
free(board566680926);
board566680926 = NULL;
assert( gamma_move(board, 13, 11, 5) == 1 );
assert( gamma_golden_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_free_fields(board, 7) == 154 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_free_fields(board, 8) == 153 );
assert( gamma_golden_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );


char* board704037496 = gamma_board(board);
assert( board704037496 != NULL );
assert( strcmp(board704037496, 
".2...........\n"
"............4\n"
"...9....4....\n"
".6.....7.....\n"
"....6........\n"
"..8..........\n"
"2.3.......3..\n"
".....8.....5.\n"
".....3108.6.134\n"
".....11..10....\n"
".........78..\n"
"...12.9.10..2..\n"
".1.....7....5\n"
"11............\n") == 0);
free(board704037496);
board704037496 = NULL;
assert( gamma_move(board, 11, 10, 11) == 1 );
assert( gamma_move(board, 12, 2, 2) == 1 );
assert( gamma_move(board, 13, 1, 11) == 1 );
assert( gamma_move(board, 13, 1, 4) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 141 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_free_fields(board, 6) == 138 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 12, 7) == 1 );
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_free_fields(board, 9) == 134 );
assert( gamma_move(board, 10, 9, 9) == 1 );
assert( gamma_move(board, 10, 9, 13) == 1 );
assert( gamma_free_fields(board, 10) == 132 );
assert( gamma_golden_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 11, 10, 11) == 0 );
assert( gamma_move(board, 12, 13, 12) == 0 );
assert( gamma_move(board, 12, 9, 10) == 1 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );


char* board563969749 = gamma_board(board);
assert( board563969749 != NULL );
assert( strcmp(board563969749, 
"62...9...10..4\n"
"...5........4\n"
".13.9....4.11.1\n"
".6.....7.122..\n"
"....6....10...\n"
"..8..........\n"
"2.3.......3.8\n"
".....85....5.\n"
"..5..310836.134\n"
".13...11..10...3\n"
"....713..378..\n"
"471212.9.10.22..\n"
"21.....7....5\n"
"11.........6..\n") == 0);
free(board563969749);
board563969749 = NULL;
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 8, 12) == 1 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 12, 10, 6) == 1 );
assert( gamma_move(board, 13, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_golden_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 6, 11, 10) == 1 );
assert( gamma_free_fields(board, 7) == 111 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 6) == 1 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 11, 10, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 13, 3) == 0 );
assert( gamma_move(board, 12, 8, 1) == 1 );
assert( gamma_move(board, 13, 0, 4) == 1 );
assert( gamma_move(board, 13, 5, 10) == 0 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );


char* board885949649 = gamma_board(board);
assert( board885949649 != NULL );
assert( strcmp(board885949649, 
"62...9...10..4\n"
"..357...85..4\n"
".13.9....4111.1\n"
".6...1.7.1226.\n"
"6..86....102..\n"
"..8.....5911..\n"
"283.......3.8\n"
".....85.79125.\n"
"..5..310836.134\n"
"1313...11..109..3\n"
"....713..378..\n"
"471212.9.10.22..\n"
"21.....712...5\n"
"11........26..\n") == 0);
free(board885949649);
board885949649 = NULL;
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_free_fields(board, 7) == 98 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_free_fields(board, 9) == 96 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_golden_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_free_fields(board, 11) == 94 );
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_move(board, 12, 5, 7) == 1 );
assert( gamma_move(board, 13, 1, 6) == 1 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_golden_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_free_fields(board, 8) == 89 );


char* board225519544 = gamma_board(board);
assert( board225519544 != NULL );
assert( strcmp(board225519544, 
"62...9...10..4\n"
"..357...85154\n"
".13.9....4111.1\n"
".6...1.7.1226.\n"
"6..86...5102..\n"
"..8.....5911..\n"
"283..12....3.8\n"
"913.3.851179125.\n"
"7.5..310836.134\n"
"13136..118.109..3\n"
"4...713..3787.\n"
"471212.9.10622..\n"
"21.....712...5\n"
"10.10......26..\n") == 0);
free(board225519544);
board225519544 = NULL;
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 12, 13, 3) == 0 );
assert( gamma_move(board, 13, 0, 8) == 1 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_free_fields(board, 5) == 84 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 11, 6, 12) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 10, 11, 2) == 1 );


char* board906665107 = gamma_board(board);
assert( board906665107 != NULL );
assert( strcmp(board906665107, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9....4111.1\n"
".6..51.7.1226.\n"
"66.86.2.51022.\n"
"13.8.....5911..\n"
"283..12....3.8\n"
"913.3.851179125.\n"
"7.5..310836.134\n"
"13136..118.109.23\n"
"4...713..3787.\n"
"471212.991062210.\n"
"21.8..471210..5\n"
"10.10..6...265.\n") == 0);
free(board906665107);
board906665107 = NULL;
assert( gamma_move(board, 11, 12, 3) == 1 );
assert( gamma_move(board, 12, 8, 7) == 1 );
assert( gamma_move(board, 12, 12, 13) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_free_fields(board, 3) == 69 );


char* board930423271 = gamma_board(board);
assert( board930423271 != NULL );
assert( strcmp(board930423271, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9....4111.1\n"
".6..51.7.1226.\n"
"66.86.2.51022.\n"
"13.8.....5911..\n"
"283..12..12.3.8\n"
"913.3.851179125.\n"
"7.5..3108363134\n"
"13136..118.109.23\n"
"4...713..378711\n"
"471212.991062210.\n"
"21.8..471210..5\n"
"10.10..6...265.\n") == 0);
free(board930423271);
board930423271 = NULL;
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 10, 13, 11) == 0 );
assert( gamma_move(board, 10, 11, 8) == 1 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_free_fields(board, 13) == 63 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );


char* board326395658 = gamma_board(board);
assert( board326395658 != NULL );
assert( strcmp(board326395658, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9....411161\n"
".6..51.7.1226.\n"
"66.86.2.51022.\n"
"13.8.116..591110.\n"
"283..12.912.3.8\n"
"913.3.851179125.\n"
"7.57.3108363134\n"
"13136..118.109.23\n"
"4...713..378711\n"
"471212.991062210.\n"
"21.8..471210..5\n"
"10.10..6...265.\n") == 0);
free(board326395658);
board326395658 = NULL;
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 12, 13, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 13, 13, 6) == 0 );
assert( gamma_move(board, 13, 8, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board606218481 = gamma_board(board);
assert( board606218481 != NULL );
assert( strcmp(board606218481, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9....411161\n"
".6..51.7.1226.\n"
"66.86.2651022.\n"
"13.8.116..591110.\n"
"283..12.912.3.8\n"
"913.3.8511791257\n"
"7.57.3108363134\n"
"13136..118.109.23\n"
"4...713..378711\n"
"47512.991062210.\n"
"21.8..471210..5\n"
"10.10..6...265.\n") == 0);
free(board606218481);
board606218481 = NULL;
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board483396990 = gamma_board(board);
assert( board483396990 != NULL );
assert( strcmp(board483396990, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9....411161\n"
".6..51.7.1226.\n"
"66.86.2651022.\n"
"13.8.116..591110.\n"
"283..12.912.3.8\n"
"913.3.8511791257\n"
"7.57.3108363134\n"
"13136..118.109.23\n"
"4...713..378711\n"
"47512.991062210.\n"
"2118..471210..5\n"
"10.10..6...265.\n") == 0);
free(board483396990);
board483396990 = NULL;
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 13, 2, 12) == 0 );
assert( gamma_move(board, 13, 11, 8) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );


char* board736201278 = gamma_board(board);
assert( board736201278 != NULL );
assert( strcmp(board736201278, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9....411161\n"
".6..51.7.1226.\n"
"66.86.2651022.\n"
"13.8.116..591110.\n"
"283..12.912.3.8\n"
"913.3.8511791257\n"
"7.57.3108363134\n"
"1313610.118.109.23\n"
"4..12713..378711\n"
"47512.991062210.\n"
"2118..471210..5\n"
"10.10..6...265.\n") == 0);
free(board736201278);
board736201278 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 13, 3) == 0 );
assert( gamma_move(board, 11, 2, 10) == 1 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 13, 1, 11) == 0 );
assert( gamma_move(board, 13, 7, 0) == 1 );


char* board288364456 = gamma_board(board);
assert( board288364456 != NULL );
assert( strcmp(board288364456, 
"62...9...10..4\n"
"31357.11.85154\n"
"913.9.87.411161\n"
".611.51.7.1226.\n"
"66.86.2651022.\n"
"13.8.116..591110.\n"
"283..12.912.3.8\n"
"913.3.8511791257\n"
"7.5793108363134\n"
"1313610.118.109.23\n"
"4..12713..378711\n"
"47512.991062210.\n"
"2118..471210..5\n"
"10.10..6.13.265.\n") == 0);
free(board288364456);
board288364456 = NULL;
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 5, 12) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_move(board, 11, 3, 13) == 1 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 13, 9, 11) == 0 );
assert( gamma_free_fields(board, 13) == 46 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board370379137 = gamma_board(board);
assert( board370379137 != NULL );
assert( strcmp(board370379137, 
"62611.9..210..4\n"
"31357911.85154\n"
"913.9.87.411161\n"
".611.51.7.1226.\n"
"66.86.2651022.\n"
"13.8.116..591110.\n"
"283..12.912.3.8\n"
"913.3.8511791257\n"
"7.5793108363134\n"
"1313610.1183109.23\n"
"4..12713.5378711\n"
"4751211991062210.\n"
"2118..471210..5\n"
"10.10..6.13.265.\n") == 0);
free(board370379137);
board370379137 = NULL;
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 8 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_move(board, 11, 9, 1) == 0 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 13, 0, 12) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_golden_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_free_fields(board, 9) == 40 );
assert( gamma_move(board, 10, 9, 12) == 0 );


char* board176144393 = gamma_board(board);
assert( board176144393 != NULL );
assert( strcmp(board176144393, 
"62611.9..210..4\n"
"31357911.85154\n"
"913.96878411161\n"
".611.51.7.1226.\n"
"66386.2651022.\n"
"13.8.116..591110.\n"
"283..12.912.378\n"
"913.3.8511791257\n"
"7.5793108363134\n"
"1313610.1183109.23\n"
"410.12713.5378711\n"
"4751211991062210.\n"
"2118..471210..5\n"
"10.10..6513.265.\n") == 0);
free(board176144393);
board176144393 = NULL;
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 10, 1) == 1 );
assert( gamma_move(board, 12, 13, 7) == 0 );
assert( gamma_move(board, 12, 5, 1) == 1 );
assert( gamma_move(board, 13, 9, 7) == 1 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_golden_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 13, 11) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 4, 1) == 1 );


char* board313087256 = gamma_board(board);
assert( board313087256 != NULL );
assert( strcmp(board313087256, 
"62611.9..210..4\n"
"31357911.85154\n"
"913.96878411161\n"
".611.51.7.1226.\n"
"66366.2651022.\n"
"13.81116..591110.\n"
"2833.12.91213378\n"
"913.3.8511791257\n"
"7.5793108363134\n"
"1313610.1183109.23\n"
"410.12713.5378711\n"
"4751211991062210.\n"
"2118111247121011.5\n"
"10.10..6513.265.\n") == 0);
free(board313087256);
board313087256 = NULL;
assert( gamma_move(board, 13, 8, 12) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 13, 1, 11) == 0 );
assert( gamma_move(board, 13, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_free_fields(board, 5) == 29 );


char* board578587891 = gamma_board(board);
assert( board578587891 != NULL );
assert( strcmp(board578587891, 
"62611.9..210..4\n"
"31357911.85154\n"
"913.96878411161\n"
".611.51.7.12264\n"
"66366112651022.\n"
"13.81116..591110.\n"
"2833.12.91213378\n"
"913.3.8511791257\n"
"7.5793108363134\n"
"131361041183109.23\n"
"410.12713.5378711\n"
"4751211991062210.\n"
"2118111247121011.5\n"
"10.10.106513.2659\n") == 0);
free(board578587891);
board578587891 = NULL;
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 12) == 0 );
assert( gamma_move(board, 13, 10, 8) == 0 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_golden_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 13, 8, 8) == 0 );
assert( gamma_free_fields(board, 13) == 25 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 10, 9, 12) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 14 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 11, 1, 0) == 1 );


char* board388536352 = gamma_board(board);
assert( board388536352 != NULL );
assert( strcmp(board388536352, 
"62611.964210..4\n"
"31357911.85154\n"
"913.96878411161\n"
".611.51.7.12264\n"
"66366112651022.\n"
"131081116.2591110.\n"
"2833.12191213378\n"
"913.3.8511791257\n"
"7135793108363134\n"
"11361041183109.23\n"
"410.12713.5378711\n"
"4771211991062210.\n"
"2118111247121011.5\n"
"101110.106513.2659\n") == 0);
free(board388536352);
board388536352 = NULL;
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_move(board, 12, 4, 10) == 0 );
assert( gamma_move(board, 13, 13, 10) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_golden_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 14 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 10, 12, 11) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 12, 2, 3) == 1 );
assert( gamma_move(board, 13, 13, 10) == 0 );
assert( gamma_move(board, 13, 3, 5) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 11, 7, 10) == 0 );
assert( gamma_move(board, 12, 10, 3) == 0 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_free_fields(board, 13) == 18 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 10, 3, 6) == 0 );


char* board380766635 = gamma_board(board);
assert( board380766635 != NULL );
assert( strcmp(board380766635, 
"62611.964210..4\n"
"31357911.85154\n"
"913.96878411161\n"
"9611.51.7.12264\n"
"66366112651022.\n"
"131081116.2591110.\n"
"2833.12191213378\n"
"913.3.8511791257\n"
"7135793108363134\n"
"11361041183109923\n"
"4101212713.5378711\n"
"4771211991062210.\n"
"2118111247121011.5\n"
"10111012106513.2659\n") == 0);
free(board380766635);
board380766635 = NULL;
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 8, 13) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 13, 12, 1) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_golden_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 10, 9) == 0 );
assert( gamma_move(board, 11, 12, 4) == 0 );
assert( gamma_golden_move(board, 11, 0, 8) == 1 );
assert( gamma_move(board, 13, 10, 3) == 0 );
assert( gamma_move(board, 13, 4, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 13, 10) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 2, 10) == 0 );


char* board404518538 = gamma_board(board);
assert( board404518538 != NULL );
assert( strcmp(board404518538, 
"62611.964210..4\n"
"31357911.85154\n"
"913.96878411161\n"
"9611.51.7.12264\n"
"66366112651022.\n"
"111081116.2591110.\n"
"2833.12191213378\n"
"913.3.8511791257\n"
"7135793108363134\n"
"11361041183109923\n"
"4101212713.5378711\n"
"4771211991062410.\n"
"2118111247121011.5\n"
"10111012106513.2659\n") == 0);
free(board404518538);
board404518538 = NULL;
assert( gamma_move(board, 12, 13, 11) == 0 );
assert( gamma_move(board, 12, 6, 12) == 0 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 13, 11) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 13, 10) == 0 );
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_free_fields(board, 12) == 18 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );


gamma_delete(board);

    return 0;
}
