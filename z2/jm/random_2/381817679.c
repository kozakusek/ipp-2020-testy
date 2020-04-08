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
uuid: 381817679
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 15, 7, 17);
assert( board != NULL );


assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 133 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 125 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 2) == 0 );


char* board225049816 = gamma_board(board);
assert( board225049816 != NULL );
assert( strcmp(board225049816, 
".........\n"
".........\n"
".2....1..\n"
".........\n"
".........\n"
".........\n"
".56......\n"
"4....5.7.\n"
".........\n"
".........\n"
"...1.5...\n"
"........7\n"
"...4.....\n"
"3........\n"
"..3......\n") == 0);
free(board225049816);
board225049816 = NULL;
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 122 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 3, 14) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 118 );


char* board788254907 = gamma_board(board);
assert( board788254907 != NULL );
assert( strcmp(board788254907, 
"...6.....\n"
".........\n"
".2....1..\n"
".........\n"
".........\n"
".........\n"
".56......\n"
"45...5.7.\n"
".........\n"
".........\n"
"...1.5...\n"
".......57\n"
"...42....\n"
"3........\n"
"..3......\n") == 0);
free(board788254907);
board788254907 = NULL;
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_golden_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board135821284 = gamma_board(board);
assert( board135821284 != NULL );
assert( strcmp(board135821284, 
"...6....4\n"
".........\n"
".26...1..\n"
".........\n"
"4...5....\n"
".....3...\n"
".56......\n"
"45...5.7.\n"
"5....3...\n"
"........5\n"
".2.1.5.3.\n"
".......57\n"
"...42....\n"
"3........\n"
"..37.....\n") == 0);
free(board135821284);
board135821284 = NULL;
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board172230780 = gamma_board(board);
assert( board172230780 != NULL );
assert( strcmp(board172230780, 
"..16....4\n"
".....4...\n"
".26...1..\n"
".........\n"
"4.3.5....\n"
".....3...\n"
".56......\n"
"45...5.7.\n"
"5....3..3\n"
"........5\n"
".2.1.5.3.\n"
"....2.757\n"
"...42....\n"
"3........\n"
"..37.....\n") == 0);
free(board172230780);
board172230780 = NULL;
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 1, 7) == 0 );


char* board719080595 = gamma_board(board);
assert( board719080595 != NULL );
assert( strcmp(board719080595, 
"..166...4\n"
".....4...\n"
".26...1..\n"
".........\n"
"4.3.5..6.\n"
".1...3...\n"
".56......\n"
"45...5.7.\n"
"5....36.3\n"
".......25\n"
".2.1.5.3.\n"
"....2.757\n"
"..642.7..\n"
"3........\n"
"..37.....\n") == 0);
free(board719080595);
board719080595 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 57 );


char* board356331996 = gamma_board(board);
assert( board356331996 != NULL );
assert( strcmp(board356331996, 
".11664..4\n"
"..76542..\n"
".26...11.\n"
"7.5...3..\n"
"433.5.66.\n"
"31...37..\n"
"456..4..6\n"
"454..557.\n"
"5645.3633\n"
"..3.3..25\n"
".2.1.5735\n"
"...23.757\n"
".7642.76.\n"
"3472.7.36\n"
"2.37.....\n") == 0);
free(board356331996);
board356331996 = NULL;
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );


char* board629560551 = gamma_board(board);
assert( board629560551 != NULL );
assert( strcmp(board629560551, 
".11664..4\n"
"..76542..\n"
".26...11.\n"
"7.5...3..\n"
"433.5.66.\n"
"31...37..\n"
"456..4..6\n"
"454..557.\n"
"5645.3633\n"
"..3.3..25\n"
".2.1.5735\n"
"...23.757\n"
".7642.76.\n"
"3472.7.36\n"
"2.37.....\n") == 0);
free(board629560551);
board629560551 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_move(board, 5, 11, 6) == 0 );


char* board684836752 = gamma_board(board);
assert( board684836752 != NULL );
assert( strcmp(board684836752, 
".11664..4\n"
"..765427.\n"
".265..11.\n"
"7.5.3.3..\n"
"433.5.661\n"
"31...37..\n"
"456..46.6\n"
"454..557.\n"
"564533633\n"
"..3.3..25\n"
".2.1.5735\n"
"63.232757\n"
".7642.76.\n"
"3472.7.36\n"
"2.3763.4.\n") == 0);
free(board684836752);
board684836752 = NULL;
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 42 );


char* board681720930 = gamma_board(board);
assert( board681720930 != NULL );
assert( strcmp(board681720930, 
".11664..4\n"
"..765427.\n"
".265..11.\n"
"725.3.3..\n"
"433.5.661\n"
"31...37..\n"
"456..46.6\n"
"4546.557.\n"
"564533633\n"
"..3.3..25\n"
".2.1.5735\n"
"63.232757\n"
".7642.76.\n"
"347247.36\n"
"2.3763.4.\n") == 0);
free(board681720930);
board681720930 = NULL;
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );


char* board821784320 = gamma_board(board);
assert( board821784320 != NULL );
assert( strcmp(board821784320, 
".11664..4\n"
"..765427.\n"
".265..11.\n"
"725.3.3..\n"
"433.5.661\n"
"31...37..\n"
"456..46.6\n"
"4546.557.\n"
"564533633\n"
"..3.3..25\n"
"22.1.5735\n"
"63.232757\n"
".7642.76.\n"
"347247.36\n"
"2.3763.4.\n") == 0);
free(board821784320);
board821784320 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 6, 14) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_golden_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );


char* board852113273 = gamma_board(board);
assert( board852113273 != NULL );
assert( strcmp(board852113273, 
".116645.4\n"
"..765427.\n"
".265..11.\n"
"72543.3..\n"
"433.5.661\n"
"31.3.37..\n"
"456..46.6\n"
"4546.5573\n"
"564533733\n"
"..3.33.25\n"
"22.1.5735\n"
"63.252757\n"
".7642476.\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board852113273);
board852113273 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );


char* board427836347 = gamma_board(board);
assert( board427836347 != NULL );
assert( strcmp(board427836347, 
".116645.4\n"
"..765427.\n"
".265..11.\n"
"72543.3..\n"
"433.5.661\n"
"31.3.37..\n"
"456.246.6\n"
"4546.5573\n"
"564533733\n"
"..3.33.25\n"
"22.1.5735\n"
"63.252757\n"
".7642476.\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board427836347);
board427836347 = NULL;
assert( gamma_move(board, 6, 6, 6) == 0 );


char* board863646524 = gamma_board(board);
assert( board863646524 != NULL );
assert( strcmp(board863646524, 
".116645.4\n"
"..765427.\n"
".265..11.\n"
"72543.3..\n"
"433.5.661\n"
"31.3.37..\n"
"456.246.6\n"
"4546.5573\n"
"564533733\n"
"..3.33.25\n"
"22.1.5735\n"
"63.252757\n"
".7642476.\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board863646524);
board863646524 = NULL;
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 14) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board602787069 = gamma_board(board);
assert( board602787069 != NULL );
assert( strcmp(board602787069, 
"2116645.4\n"
".2765427.\n"
".265..11.\n"
"72543.3..\n"
"433.52661\n"
"31.3.37..\n"
"4567246.6\n"
"4546.5573\n"
"564533733\n"
"..3633.25\n"
"222115735\n"
"63.252757\n"
".7642476.\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board602787069);
board602787069 = NULL;
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );


char* board932286304 = gamma_board(board);
assert( board932286304 != NULL );
assert( strcmp(board932286304, 
"2116645.4\n"
".2765427.\n"
".265..11.\n"
"72543.3..\n"
"433.52661\n"
"31.3.37..\n"
"4567246.6\n"
"4546.5573\n"
"564533733\n"
"..3633.25\n"
"222115735\n"
"63.252757\n"
".7642476.\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board932286304);
board932286304 = NULL;
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );


char* board773757549 = gamma_board(board);
assert( board773757549 != NULL );
assert( strcmp(board773757549, 
"2116645.4\n"
".2765427.\n"
".265..11.\n"
"72543.3..\n"
"433.52661\n"
"31.3.37..\n"
"4567246.6\n"
"4546.5573\n"
"564533733\n"
"..3633125\n"
"222115735\n"
"63.252757\n"
".7642476.\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board773757549);
board773757549 = NULL;
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 0, 14) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );


char* board583959071 = gamma_board(board);
assert( board583959071 != NULL );
assert( strcmp(board583959071, 
"2116645.4\n"
".2765427.\n"
".265..11.\n"
"72543.33.\n"
"433.52661\n"
"31.3.37..\n"
"4567246.6\n"
"4546.5573\n"
"564533733\n"
"..3633125\n"
"222115735\n"
"63.252757\n"
".76424766\n"
"347247336\n"
"2.3763.4.\n") == 0);
free(board583959071);
board583959071 = NULL;
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
