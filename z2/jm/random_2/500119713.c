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
uuid: 500119713
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 12, 11);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_golden_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 11, 8) == 0 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_free_fields(board, 10) == 96 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );


char* board862245380 = gamma_board(board);
assert( board862245380 != NULL );
assert( strcmp(board862245380, 
".........\n"
".....6...\n"
".........\n"
"7........\n"
"4........\n"
".........\n"
"...6.....\n"
"22.12.5..10\n"
".........\n"
".2...8...\n"
"3......3.\n"
"..11..7...\n") == 0);
free(board862245380);
board862245380 = NULL;
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_free_fields(board, 7) == 85 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 8) == 0 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );


char* board888227478 = gamma_board(board);
assert( board888227478 != NULL );
assert( strcmp(board888227478, 
"7........\n"
"...8.6...\n"
"86.2.....\n"
"7.7.4....\n"
"4.2.5....\n"
".5...3..5\n"
".9.6..7..\n"
"22.12.5..10\n"
"110..4...11\n"
".2...846.\n"
"3.....93.\n"
"..11..712..\n") == 0);
free(board888227478);
board888227478 = NULL;
assert( gamma_move(board, 10, 1, 0) == 1 );


char* board849356193 = gamma_board(board);
assert( board849356193 != NULL );
assert( strcmp(board849356193, 
"7........\n"
"...8.6...\n"
"86.2.....\n"
"7.7.4....\n"
"4.2.5....\n"
".5...3..5\n"
".9.6..7..\n"
"22.12.5..10\n"
"110..4...11\n"
".2...846.\n"
"3.....93.\n"
".1011..712..\n") == 0);
free(board849356193);
board849356193 = NULL;
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_free_fields(board, 11) == 70 );
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );


char* board649002609 = gamma_board(board);
assert( board649002609 != NULL );
assert( strcmp(board649002609, 
"7.....2..\n"
"...8.6...\n"
"86.2.....\n"
"7.7.4.4..\n"
"4.2.5....\n"
".5...3..5\n"
".9.6..7..\n"
"22.12.5..10\n"
"110.34...11\n"
".2...846.\n"
"3.....93.\n"
".1011..712..\n") == 0);
free(board649002609);
board649002609 = NULL;
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 7, 5) == 1 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );


char* board651260566 = gamma_board(board);
assert( board651260566 != NULL );
assert( strcmp(board651260566, 
"7.....2..\n"
"...8.6..8\n"
"86.2.....\n"
"7.7.4104..\n"
"4.2.5...3\n"
".5...34.5\n"
".9.6..711.\n"
"221012.56.10\n"
"110634.2.11\n"
".2...846.\n"
"34....935\n"
".1011.11712..\n") == 0);
free(board651260566);
board651260566 = NULL;
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );


char* board931411231 = gamma_board(board);
assert( board931411231 != NULL );
assert( strcmp(board931411231, 
"7.....2..\n"
"...8.6..8\n"
"86.2.....\n"
"7.7.4104..\n"
"4.2.5...3\n"
".5...34.5\n"
".9.6..711.\n"
"221012.56.10\n"
"110634.2.11\n"
".23..846.\n"
"34...2935\n"
".1011.11712..\n") == 0);
free(board931411231);
board931411231 = NULL;
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_free_fields(board, 9) == 49 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 11, 4) == 0 );
assert( gamma_move(board, 12, 0, 5) == 1 );


char* board562915778 = gamma_board(board);
assert( board562915778 != NULL );
assert( strcmp(board562915778, 
"7.....2..\n"
"...8.6..8\n"
"86.2.....\n"
"7.7.4104..\n"
"4.2.5.5.3\n"
".57..34.5\n"
"129.6..711.\n"
"221012756.10\n"
"110634.2.11\n"
".23..846.\n"
"34...2935\n"
"61011.11712..\n") == 0);
free(board562915778);
board562915778 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );


char* board278851649 = gamma_board(board);
assert( board278851649 != NULL );
assert( strcmp(board278851649, 
"7.....2..\n"
"...8.6..8\n"
"86.2.2...\n"
"7.7.4104..\n"
"4.2.5.5.3\n"
"157..34.5\n"
"129.6.1711.\n"
"221012756.10\n"
"110634.2.11\n"
".23..846.\n"
"34...2935\n"
"61011.11712..\n") == 0);
free(board278851649);
board278851649 = NULL;
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 12, 5, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_free_fields(board, 11) == 33 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 12, 2, 5) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 2) == 1 );


char* board396700244 = gamma_board(board);
assert( board396700244 != NULL );
assert( strcmp(board396700244, 
"7.7.3.21.\n"
".1.886.88\n"
"86.2.2.6.\n"
"7117.4104.5\n"
"4.2152593\n"
"151..34.5\n"
"12912621711.\n"
"221012756.10\n"
"110634.2.11\n"
".2332846.\n"
"343..2935\n"
"61011.11712.6\n") == 0);
free(board396700244);
board396700244 = NULL;
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 12, 11, 8) == 0 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_free_fields(board, 12) == 26 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );


char* board609105896 = gamma_board(board);
assert( board609105896 != NULL );
assert( strcmp(board609105896, 
"7.7.3.21.\n"
".1.886.88\n"
"86.2.2.6.\n"
"7117.4104.5\n"
"4.2152593\n"
"151..34.5\n"
"12912621711.\n"
"221012756.10\n"
"11063482.11\n"
"12332846.\n"
"3433.2935\n"
"61011.11712.6\n") == 0);
free(board609105896);
board609105896 = NULL;
assert( gamma_move(board, 11, 11, 8) == 0 );
assert( gamma_move(board, 11, 8, 9) == 1 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );


char* board477370289 = gamma_board(board);
assert( board477370289 != NULL );
assert( strcmp(board477370289, 
"7.7.3.21.\n"
".1.886.88\n"
"86.2.2.611\n"
"7117.410475\n"
"4.2152593\n"
"151..34.5\n"
"12912621711.\n"
"221012756310\n"
"11063482.11\n"
"12332846.\n"
"3433.2935\n"
"61011.11712.6\n") == 0);
free(board477370289);
board477370289 = NULL;
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 8, 11) == 1 );
assert( gamma_move(board, 12, 3, 11) == 1 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_golden_move(board, 11, 4, 4) == 1 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 12, 0, 11) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 2, 8) == 0 );


gamma_delete(board);

    return 0;
}
