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
uuid: 524263773
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 13, 11, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 6) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_golden_move(board, 7, 3, 5) == 1 );


char* board159953453 = gamma_board(board);
assert( board159953453 != NULL );
assert( strcmp(board159953453, 
".........\n"
".21......\n"
"..3.4...5\n"
"8.4......\n"
".1...5.1.\n"
"..3......\n"
"....11....\n"
"...7...7.\n"
".....84.3\n"
".....6...\n"
"10310..6...\n"
".1..92...\n"
".......7.\n") == 0);
free(board159953453);
board159953453 = NULL;
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 10, 12, 7) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 11, 12, 7) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 10, 4, 9) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_move(board, 10, 8, 3) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 3, 10) == 1 );
assert( gamma_golden_move(board, 10, 8, 5) == 0 );
assert( gamma_free_fields(board, 11) == 59 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 8, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board221947184 = gamma_board(board);
assert( board221947184 != NULL );
assert( strcmp(board221947184, 
"7....5...\n"
".21..1..5\n"
"..3104.9.5\n"
"8.42101...\n"
".19..5.19\n"
".436..15.\n"
"3.6.11311.3\n"
"...7.797.\n"
"10....8413\n"
".10.11468710\n"
"103105.626.\n"
"61..9288.\n"
"89.51011.74\n") == 0);
free(board221947184);
board221947184 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_free_fields(board, 9) == 46 );


char* board815236736 = gamma_board(board);
assert( board815236736 != NULL );
assert( strcmp(board815236736, 
"7....5...\n"
".218.1..5\n"
"..3104.9.5\n"
"8.42101...\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311.3\n"
"...7.797.\n"
"10....8413\n"
".10.11468710\n"
"103105.626.\n"
"61.79288.\n"
"89.51011.74\n") == 0);
free(board815236736);
board815236736 = NULL;
assert( gamma_move(board, 10, 3, 12) == 1 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );


char* board693205531 = gamma_board(board);
assert( board693205531 != NULL );
assert( strcmp(board693205531, 
"73.10.5...\n"
".218.1..5\n"
"..3104.9.5\n"
"8642101...\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311.3\n"
"...7.797.\n"
"10...18413\n"
"610.11468710\n"
"103105.626.\n"
"61.79288.\n"
"89.51011.74\n") == 0);
free(board693205531);
board693205531 = NULL;
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_free_fields(board, 10) == 41 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board596826940 = gamma_board(board);
assert( board596826940 != NULL );
assert( strcmp(board596826940, 
"73.10.5...\n"
".218.1..5\n"
"..3104.9.5\n"
"8642101...\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10...18413\n"
"610.11468710\n"
"1031054626.\n"
"61.792883\n"
"89.51011.74\n") == 0);
free(board596826940);
board596826940 = NULL;
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );


char* board612678159 = gamma_board(board);
assert( board612678159 != NULL );
assert( strcmp(board612678159, 
"73.10.5...\n"
".218.1..5\n"
"..310469.5\n"
"8642101...\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10...18413\n"
"610.11468710\n"
"1031054626.\n"
"61.792883\n"
"89.51011.74\n") == 0);
free(board612678159);
board612678159 = NULL;
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );


char* board873261942 = gamma_board(board);
assert( board873261942 != NULL );
assert( strcmp(board873261942, 
"73.10.5...\n"
".218.1..5\n"
"..310469.5\n"
"8642101...\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10..218413\n"
"610.11468710\n"
"1031054626.\n"
"61.792883\n"
"89.51011.74\n") == 0);
free(board873261942);
board873261942 = NULL;
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_free_fields(board, 11) == 34 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );


char* board921246507 = gamma_board(board);
assert( board921246507 != NULL );
assert( strcmp(board921246507, 
"73.10.5...\n"
".218.1..5\n"
"8.310469.5\n"
"8642101..3\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89.51011.74\n") == 0);
free(board921246507);
board921246507 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );


char* board358487606 = gamma_board(board);
assert( board358487606 != NULL );
assert( strcmp(board358487606, 
"73.10.5...\n"
".218.1..5\n"
"8.310469.5\n"
"8642101..3\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89.51011.74\n") == 0);
free(board358487606);
board358487606 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_golden_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 11, 5, 5) == 0 );


char* board308000186 = gamma_board(board);
assert( board308000186 != NULL );
assert( strcmp(board308000186, 
"73.10.5...\n"
".218.1..5\n"
"8.310469.5\n"
"8642101..3\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89.51011.74\n") == 0);
free(board308000186);
board308000186 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 32 );


char* board716321043 = gamma_board(board);
assert( board716321043 != NULL );
assert( strcmp(board716321043, 
"73.10.5...\n"
".218.1..5\n"
"8.310469.5\n"
"8642101..3\n"
".196.5.19\n"
".436..15.\n"
"3.6.11311113\n"
"...7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89.51011.74\n") == 0);
free(board716321043);
board716321043 = NULL;
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_free_fields(board, 9) == 30 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board155086695 = gamma_board(board);
assert( board155086695 != NULL );
assert( strcmp(board155086695, 
"73.10.5...\n"
".218.1..5\n"
"8.310469.5\n"
"86421013.3\n"
"1196.5.19\n"
".436..15.\n"
"346.11311113\n"
"...7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89751011.74\n") == 0);
free(board155086695);
board155086695 = NULL;
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_free_fields(board, 6) == 25 );


char* board480223026 = gamma_board(board);
assert( board480223026 != NULL );
assert( strcmp(board480223026, 
"73.10.5...\n"
".218.1.65\n"
"8.310469.5\n"
"86421013.3\n"
"1196.5519\n"
".436..15.\n"
"346.1134113\n"
".10.7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89751011.74\n") == 0);
free(board480223026);
board480223026 = NULL;
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_move(board, 11, 7, 0) == 0 );


char* board420565051 = gamma_board(board);
assert( board420565051 != NULL );
assert( strcmp(board420565051, 
"73.10.5...\n"
".218.1.65\n"
"8.310469.5\n"
"86421013.3\n"
"1196.5519\n"
".436..15.\n"
"346.1134113\n"
".10.7.797.\n"
"10.4218413\n"
"610.11468710\n"
"1031054626.\n"
"614792883\n"
"89751011.74\n") == 0);
free(board420565051);
board420565051 = NULL;
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_golden_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 11, 6) == 0 );
assert( gamma_free_fields(board, 11) == 22 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 21 );


gamma_delete(board);

    return 0;
}
