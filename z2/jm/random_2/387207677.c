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
uuid: 387207677
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 12, 15, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_free_fields(board, 1) == 154 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 145 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 6, 10) == 1 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 13, 1, 8) == 1 );
assert( gamma_move(board, 13, 2, 9) == 1 );
assert( gamma_move(board, 14, 4, 6) == 1 );
assert( gamma_move(board, 14, 0, 2) == 1 );
assert( gamma_move(board, 15, 0, 7) == 1 );
assert( gamma_free_fields(board, 15) == 135 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_free_fields(board, 4) == 130 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_move(board, 14, 11, 4) == 1 );
assert( gamma_busy_fields(board, 14) == 3 );
assert( gamma_move(board, 15, 5, 7) == 1 );
assert( gamma_move(board, 15, 9, 10) == 1 );
assert( gamma_busy_fields(board, 15) == 3 );
assert( gamma_free_fields(board, 15) == 120 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_free_fields(board, 9) == 114 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 11, 11, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_move(board, 12, 3, 8) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 9, 4) == 1 );
assert( gamma_move(board, 13, 10, 0) == 1 );
assert( gamma_move(board, 14, 11, 8) == 1 );
assert( gamma_move(board, 14, 0, 10) == 1 );
assert( gamma_move(board, 15, 8, 11) == 1 );
assert( gamma_free_fields(board, 15) == 106 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_free_fields(board, 1) == 106 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 9, 11) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_free_fields(board, 10) == 100 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 12, 8, 6) == 1 );
assert( gamma_move(board, 13, 3, 12) == 0 );
assert( gamma_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_move(board, 15, 8, 12) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );


char* board151581336 = gamma_board(board);
assert( board151581336 != NULL );
assert( strcmp(board151581336, 
"..3.....157...\n"
"14..5..10..15...\n"
"6.13...6431..2\n"
".13.1211...1..14.\n"
"15....15..86...\n"
"2..8143.1126.1110\n"
"....212..41...\n"
"...2.9.11.13.14.\n"
"...14.4.....1.\n"
"143117.511.13....\n"
".......3.108..\n"
".4.9.1010..1013.6\n") == 0);
free(board151581336);
board151581336 = NULL;
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );


char* board603965096 = gamma_board(board);
assert( board603965096 != NULL );
assert( strcmp(board603965096, 
"..3....7157...\n"
"14..5..10..15...\n"
"6.13...6431..2\n"
".13.1211...1..14.\n"
"15....15.686...\n"
"2..8143.1126.1110\n"
"...4212..41...\n"
"...2.9.11.13.14.\n"
"...14.4.....1.\n"
"143117.511.13....\n"
".......3.108..\n"
".4.9.1010..1013.6\n") == 0);
free(board603965096);
board603965096 = NULL;
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_move(board, 13, 4, 7) == 1 );
assert( gamma_free_fields(board, 13) == 90 );
assert( gamma_move(board, 14, 7, 3) == 1 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_move(board, 15, 11, 6) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_free_fields(board, 1) == 88 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );


char* board448104360 = gamma_board(board);
assert( board448104360 != NULL );
assert( strcmp(board448104360, 
"..3....7157...\n"
"14..5..10..15...\n"
"6.13.1.6431..2\n"
".13.1211...1..14.\n"
"15...1315.686...\n"
"2..8143.1126.1110\n"
"...4212..41...\n"
"...2.9.11.13.14.\n"
"...14.4.14...1.\n"
"143117.511.13....\n"
".......3.108..\n"
".4.9.10109.1013.6\n") == 0);
free(board448104360);
board448104360 = NULL;
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_golden_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 10, 11) == 1 );
assert( gamma_move(board, 12, 1, 12) == 0 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_move(board, 14, 11, 4) == 0 );
assert( gamma_move(board, 14, 1, 7) == 1 );
assert( gamma_free_fields(board, 14) == 85 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_golden_move(board, 5, 4, 11) == 0 );


char* board415133382 = gamma_board(board);
assert( board415133382 != NULL );
assert( strcmp(board415133382, 
"..3..4.715711..\n"
"14..5..10..15...\n"
"6.13.1.6431..2\n"
"513.1211...1..14.\n"
"1514..1315.686...\n"
"2..8143.1126.1110\n"
"...4212..41...\n"
"...2.9.11.13.14.\n"
"...14.4.14...1.\n"
"143117.511.13....\n"
".......3.108..\n"
".4.9810109.1013.6\n") == 0);
free(board415133382);
board415133382 = NULL;
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );


char* board437827434 = gamma_board(board);
assert( board437827434 != NULL );
assert( strcmp(board437827434, 
".63..4.715711..\n"
"14..5..10..15...\n"
"6.13.1.6431..2\n"
"513.1211...1..14.\n"
"1514..1315.686...\n"
"2..8143.1126.1110\n"
"...4212..41...\n"
"...2.9.11.13.14.\n"
"...14.4.14...1.\n"
"143117.511.13....\n"
".......3.108..\n"
".4.9810109.1013.6\n") == 0);
free(board437827434);
board437827434 = NULL;
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 10, 8) == 1 );
assert( gamma_move(board, 10, 11, 0) == 1 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_free_fields(board, 10) == 78 );


char* board310106685 = gamma_board(board);
assert( board310106685 != NULL );
assert( strcmp(board310106685, 
".63..4.715711..\n"
"14..58.10..15...\n"
"6.13.1.6431..2\n"
"513.1211...1.914.\n"
"1514..1315.686...\n"
"2..8143.1126.1110\n"
"...4212..41...\n"
"...2.9.11.13.14.\n"
"...14.4.14...1.\n"
"143117.511.13....\n"
"7......3.108..\n"
".4.9810109.1013106\n") == 0);
free(board310106685);
board310106685 = NULL;
assert( gamma_move(board, 12, 7, 12) == 0 );
assert( gamma_move(board, 13, 11, 4) == 0 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 15, 11, 4) == 0 );
assert( gamma_free_fields(board, 15) == 78 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_free_fields(board, 8) == 69 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 11, 11, 12) == 0 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_free_fields(board, 12) == 69 );
assert( gamma_move(board, 13, 1, 1) == 1 );
assert( gamma_move(board, 13, 9, 2) == 1 );
assert( gamma_free_fields(board, 13) == 67 );
assert( gamma_move(board, 14, 5, 2) == 0 );
assert( gamma_move(board, 14, 6, 8) == 0 );
assert( gamma_move(board, 15, 11, 4) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_golden_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 5, 10) == 1 );
assert( gamma_move(board, 10, 7, 8) == 1 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_golden_move(board, 12, 9, 9) == 1 );
assert( gamma_free_fields(board, 13) == 58 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 15, 12, 11) == 1 );
assert( gamma_golden_move(board, 15, 9, 7) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 10) == 0 );
assert( gamma_move(board, 14, 7, 10) == 0 );
assert( gamma_move(board, 15, 2, 5) == 1 );
assert( gamma_move(board, 15, 2, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 12, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 11, 11, 6) == 0 );


char* board311450745 = gamma_board(board);
assert( board311450745 != NULL );
assert( strcmp(board311450745, 
".63..4.715711.15\n"
"147.5810104.152..\n"
"6.13.1264312..2\n"
"513.1211.2101.9147\n"
"1514..1315106815.2.\n"
"2.15814331126.1110\n"
"..154212..41...\n"
"12..299.11.13.14.\n"
".4214.4.14.7219\n"
"1431178511513136..\n"
"713..64.3.1083.\n"
"54.981010911013106\n") == 0);
free(board311450745);
board311450745 = NULL;
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 13, 3, 4) == 0 );
assert( gamma_move(board, 14, 12, 8) == 0 );
assert( gamma_move(board, 15, 4, 1) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_free_fields(board, 9) == 44 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_golden_move(board, 10, 9, 5) == 1 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_free_fields(board, 11) == 44 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 13, 7, 12) == 0 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 14, 0, 10) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 5, 11) == 0 );
assert( gamma_move(board, 15, 8, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 10, 10, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 12, 6, 10) == 0 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_free_fields(board, 12) == 39 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 14, 8, 5) == 0 );
assert( gamma_move(board, 15, 3, 6) == 0 );
assert( gamma_move(board, 15, 9, 10) == 0 );
assert( gamma_golden_move(board, 15, 2, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 5, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_golden_move(board, 11, 2, 5) == 1 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 12, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 13, 6, 11) == 1 );
assert( gamma_free_fields(board, 13) == 34 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 15, 8, 5) == 0 );
assert( gamma_move(board, 15, 0, 3) == 1 );
assert( gamma_golden_possible(board, 15) == 0 );
assert( gamma_golden_move(board, 15, 2, 2) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 9, 10, 7) == 1 );
assert( gamma_move(board, 11, 1, 12) == 0 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_move(board, 12, 12, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 14, 9, 1) == 0 );
assert( gamma_move(board, 15, 3, 8) == 0 );
assert( gamma_move(board, 15, 12, 6) == 0 );
assert( gamma_busy_fields(board, 15) == 8 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 11, 4) == 0 );
assert( gamma_free_fields(board, 11) == 30 );
assert( gamma_move(board, 12, 10, 4) == 1 );
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_busy_fields(board, 13) == 9 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 3, 6) == 0 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 15, 4, 6) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_golden_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 13, 5, 12) == 0 );
assert( gamma_move(board, 13, 8, 1) == 0 );
assert( gamma_move(board, 14, 4, 4) == 0 );
assert( gamma_move(board, 15, 10, 7) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 13, 5, 10) == 0 );
assert( gamma_free_fields(board, 13) == 27 );
assert( gamma_move(board, 14, 9, 3) == 0 );
assert( gamma_move(board, 14, 2, 6) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 8, 10) == 1 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 11, 4) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_free_fields(board, 12) == 25 );
assert( gamma_move(board, 13, 7, 0) == 0 );
assert( gamma_busy_fields(board, 13) == 9 );
assert( gamma_move(board, 14, 7, 2) == 0 );
assert( gamma_move(board, 15, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_golden_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 7, 9) == 0 );


char* board860925447 = gamma_board(board);
assert( board860925447 != NULL );
assert( strcmp(board860925447, 
".63..413715711115\n"
"14755810104101524.\n"
"6.13.1264312.72\n"
"5131112118231.9147\n"
"1514..131510681592.\n"
"231581433112631110\n"
"..114212412410...\n"
"12..299.11.1312143\n"
"15421484.14.7219\n"
"1431178511513136612\n"
"7134.64.39108312\n"
"546981010911013106\n") == 0);
free(board860925447);
board860925447 = NULL;
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );


char* board565070215 = gamma_board(board);
assert( board565070215 != NULL );
assert( strcmp(board565070215, 
".63..413715711115\n"
"14755810104101524.\n"
"6.13.1264312.72\n"
"5131112118231.9147\n"
"1514..131510681592.\n"
"231581433112631110\n"
"..114212412410...\n"
"12..299.11.1312143\n"
"15421484.14.7219\n"
"1431178511513136612\n"
"7134.64.39108312\n"
"546981010911013106\n") == 0);
free(board565070215);
board565070215 = NULL;
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_golden_move(board, 11, 6, 6) == 0 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 12, 3, 7) == 1 );
assert( gamma_move(board, 13, 5, 10) == 0 );
assert( gamma_move(board, 13, 2, 4) == 1 );
assert( gamma_free_fields(board, 13) == 22 );
assert( gamma_move(board, 14, 9, 8) == 1 );
assert( gamma_move(board, 15, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_golden_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 12, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 12, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 11, 0) == 0 );


gamma_delete(board);

    return 0;
}
