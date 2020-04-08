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
uuid: 196492863
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 14, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 3) == 103 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 1, 0) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );


char* board266005167 = gamma_board(board);
assert( board266005167 != NULL );
assert( strcmp(board266005167, 
".........\n"
"...2.....\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"..69.....\n"
"1........\n"
".3.......\n"
"...23..7.\n"
".10..94...\n") == 0);
free(board266005167);
board266005167 = NULL;
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_move(board, 13, 4, 8) == 1 );
assert( gamma_move(board, 13, 0, 5) == 1 );
assert( gamma_free_fields(board, 13) == 93 );
assert( gamma_move(board, 14, 11, 4) == 0 );
assert( gamma_free_fields(board, 14) == 93 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );


char* board323441960 = gamma_board(board);
assert( board323441960 != NULL );
assert( strcmp(board323441960, 
".........\n"
"...2.1...\n"
".........\n"
"....13....\n"
".....11...\n"
".........\n"
"13.......11\n"
"..69.....\n"
"1......1.\n"
".3.......\n"
"...23..7.\n"
".10..94...\n") == 0);
free(board323441960);
board323441960 = NULL;
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 14, 4, 3) == 1 );
assert( gamma_move(board, 14, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 11, 2, 5) == 1 );
assert( gamma_move(board, 12, 9, 8) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 9) == 1 );
assert( gamma_move(board, 13, 7, 0) == 1 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 13, 4, 2) == 1 );
assert( gamma_move(board, 14, 0, 2) == 1 );
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );


char* board692621269 = gamma_board(board);
assert( board692621269 != NULL );
assert( strcmp(board692621269, 
".10624....\n"
"18.2.18..\n"
".2...13.3.\n"
"....13....\n"
"17...11.103\n"
"..6..3..11\n"
"13.112....11\n"
"..69.4134.\n"
"125.14..18\n"
"143..131214..\n"
".7.23327.\n"
"7106.94.1314\n") == 0);
free(board692621269);
board692621269 = NULL;
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_golden_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 14, 5, 8) == 1 );
assert( gamma_move(board, 14, 4, 6) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 11, 6, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 2, 8) == 1 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 1, 10) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_free_fields(board, 14) == 44 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );


char* board235774750 = gamma_board(board);
assert( board235774750 != NULL );
assert( strcmp(board235774750, 
".10624....\n"
"18.2.18..\n"
".2...13.3.\n"
"..12.1314...\n"
"1710..11.103\n"
"..6.143..11\n"
"13.112.12..11\n"
"..69.4134.\n"
"125.1421118\n"
"143..1312144.\n"
".7.233278\n"
"7106.94111314\n") == 0);
free(board235774750);
board235774750 = NULL;
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 8, 9) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_free_fields(board, 11) == 42 );
assert( gamma_move(board, 12, 8, 7) == 0 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 14, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 2) == 1 );


char* board581355481 = gamma_board(board);
assert( board581355481 != NULL );
assert( strcmp(board581355481, 
".10624....\n"
"18.2.18..\n"
".2.3.13.310\n"
"..12.1314...\n"
"1710..11.103\n"
"..6.143.511\n"
"13.112.12..11\n"
"..69.4134.\n"
"125.1421118\n"
"143..131234.\n"
".7.233278\n"
"7106.94111314\n") == 0);
free(board581355481);
board581355481 = NULL;
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 13, 2, 11) == 0 );


char* board697939337 = gamma_board(board);
assert( board697939337 != NULL );
assert( strcmp(board697939337, 
".10624....\n"
"18.2.18..\n"
".2.3.13.310\n"
"..12.1314..11\n"
"1710..11.103\n"
"..6.143.511\n"
"13.112.12..11\n"
"..69.4134.\n"
"125.1421118\n"
"143..1312344\n"
".7.233278\n"
"7106.94111314\n") == 0);
free(board697939337);
board697939337 = NULL;
assert( gamma_move(board, 14, 9, 4) == 0 );
assert( gamma_move(board, 14, 8, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 10, 2, 10) == 1 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 5, 5) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 12, 5, 5) == 0 );
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_move(board, 13, 4, 11) == 0 );
assert( gamma_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_golden_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_golden_move(board, 9, 10, 0) == 0 );


char* board248930388 = gamma_board(board);
assert( board248930388 != NULL );
assert( strcmp(board248930388, 
".10624....\n"
"18102.183.\n"
".2.3.13.310\n"
"..12.1314.811\n"
"1710..11.103\n"
"..6.143.511\n"
"13.112.12..11\n"
"..6974134.\n"
"125141421118\n"
"143..1312344\n"
".7.233278\n"
"7106.94111314\n") == 0);
free(board248930388);
board248930388 = NULL;
assert( gamma_move(board, 11, 8, 10) == 1 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 13, 2, 6) == 0 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 14, 9, 2) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 6, 9) == 1 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );


char* board105753069 = gamma_board(board);
assert( board105753069 != NULL );
assert( strcmp(board105753069, 
".10624....\n"
"18102.18311\n"
".2.3.1311310\n"
"7.12.1314.811\n"
"1710..11.103\n"
"..6.143.511\n"
"13.112.12..11\n"
"..6974134.\n"
"125141421118\n"
"1433.1312344\n"
".7.233278\n"
"7106.94111314\n") == 0);
free(board105753069);
board105753069 = NULL;
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_move(board, 14, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_move(board, 13, 5, 1) == 0 );
assert( gamma_move(board, 14, 8, 5) == 0 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_free_fields(board, 9) == 27 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 13, 2, 9) == 1 );
assert( gamma_move(board, 14, 7, 4) == 0 );
assert( gamma_move(board, 14, 2, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_golden_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 13, 1, 11) == 0 );
assert( gamma_move(board, 14, 2, 3) == 0 );
assert( gamma_move(board, 14, 7, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_golden_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_golden_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_golden_move(board, 12, 6, 7) == 1 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 14, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );


gamma_delete(board);

    return 0;
}
