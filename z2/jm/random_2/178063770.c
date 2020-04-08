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
uuid: 178063770
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 12, 10, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_free_fields(board, 8) == 159 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 2) == 1 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 1, 2) == 1 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_free_fields(board, 8) == 134 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 10, 9, 11) == 1 );
assert( gamma_move(board, 10, 3, 11) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_free_fields(board, 1) == 131 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_free_fields(board, 2) == 129 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_free_fields(board, 4) == 120 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_free_fields(board, 5) == 119 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_free_fields(board, 7) == 117 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_golden_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 10, 7, 8) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );


char* board367926582 = gamma_board(board);
assert( board367926582 != NULL );
assert( strcmp(board367926582, 
"..210..5..10....\n"
"...647........\n"
"....810..62....\n"
".8453..10..5.1.\n"
"..31...9...62.\n"
"3.2..241......\n"
".6.19..8.5.1.2\n"
".7.....4...8..\n"
"2.9.10.........\n"
".10....2...7..10\n"
"29....74.194..\n"
"9....3.7......\n") == 0);
free(board367926582);
board367926582 = NULL;
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_golden_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_free_fields(board, 8) == 110 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 10, 12, 9) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 109 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_free_fields(board, 7) == 109 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_move(board, 10, 8, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 7, 9, 13) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 2, 8) == 0 );


char* board350482136 = gamma_board(board);
assert( board350482136 != NULL );
assert( strcmp(board350482136, 
"..210.95..10....\n"
"...647..6.....\n"
"...786..62..10.\n"
".8453..1010.5.1.\n"
"..31..39..262.\n"
"3.2..241......\n"
".6419..8.5.1.2\n"
".7.....4...8..\n"
"2.9.10.5.......\n"
".10....2...7..10\n"
"29.3..74.194..\n"
"9....3.7.88...\n") == 0);
free(board350482136);
board350482136 = NULL;
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, 10, 10) == 1 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_golden_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_golden_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );


char* board362209751 = gamma_board(board);
assert( board362209751 != NULL );
assert( strcmp(board362209751, 
"..210.95..10....\n"
"...647..6.10...\n"
".2.786..62.710.\n"
".8453..1010.551.\n"
"..31.139.1262.\n"
"3.2..241....10.\n"
".6419..8.5.1.2\n"
".7.....4...8..\n"
"2.991075....5..\n"
".10....2...7..10\n"
"29.3..74.194..\n"
"9...43.7.88...\n") == 0);
free(board362209751);
board362209751 = NULL;
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );


char* board828602971 = gamma_board(board);
assert( board828602971 != NULL );
assert( strcmp(board828602971, 
"..210.95..10....\n"
"...647..6.10...\n"
".2.786..62.710.\n"
".8453..1010.551.\n"
"..31.139.1262.\n"
"3.2..241....10.\n"
".6419..8.5.1.2\n"
".7.....4...8..\n"
"2.991075....5..\n"
".10....2...7..10\n"
"29.3..74.194..\n"
"9...43.7.88...\n") == 0);
free(board828602971);
board828602971 = NULL;
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_free_fields(board, 7) == 88 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 12, 10) == 1 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 83 );


char* board539245314 = gamma_board(board);
assert( board539245314 != NULL );
assert( strcmp(board539245314, 
"..210895..10....\n"
"...647..6.10.9.\n"
".2.786..622710.\n"
".84534.1010.551.\n"
"..31.139.1262.\n"
"3.2..241....10.\n"
".6419..8.551.2\n"
".7.....4.3.8..\n"
"2.991075....5..\n"
".10....2...7..10\n"
"29.3..74.194..\n"
"9.6.43.7.88...\n") == 0);
free(board539245314);
board539245314 = NULL;
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


char* board182772405 = gamma_board(board);
assert( board182772405 != NULL );
assert( strcmp(board182772405, 
"..210895..10....\n"
"...647..6.10.9.\n"
".2.786..622710.\n"
".84534.1010.551.\n"
"..311139.1262.\n"
"3.2..241....10.\n"
".6419..8.551.2\n"
".7.....4.3.8..\n"
"2.991075....5..\n"
".10....2...7..10\n"
"29.3..74.194.2\n"
"9.6.43.7.88...\n") == 0);
free(board182772405);
board182772405 = NULL;
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_free_fields(board, 7) == 78 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 78 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 10, 10, 9) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_free_fields(board, 10) == 73 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 10, 11, 10) == 1 );
assert( gamma_move(board, 10, 13, 9) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );


char* board464075824 = gamma_board(board);
assert( board464075824 != NULL );
assert( strcmp(board464075824, 
"..210895..106...\n"
"...6479.6.10109.\n"
".21786..62271010\n"
"108453461010.551.\n"
"..311139.1262.\n"
"3.24.241.4.110.\n"
".6419..8.55162\n"
".7...1.4.378..\n"
"2.991075.1..5..\n"
".10.7..2...7..10\n"
"29.3..74.19452\n"
"9.6.43.7588...\n") == 0);
free(board464075824);
board464075824 = NULL;
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_golden_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_golden_move(board, 7, 11, 9) == 0 );
assert( gamma_free_fields(board, 8) == 60 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 9, 11) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_free_fields(board, 10) == 59 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_golden_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 11, 11) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );


char* board245466325 = gamma_board(board);
assert( board245466325 != NULL );
assert( strcmp(board245466325, 
"..210895..10610..\n"
"8..6479.6.10109.\n"
".21786..62271010\n"
"108453461010.551.\n"
"..31113941262.\n"
"3.243241.4.110.\n"
".6419..8.55162\n"
".7...1.4.778.5\n"
"2.991075.1..5..\n"
"510876.2...73.10\n"
"29.33.74.19452\n"
"9.61043.7588...\n") == 0);
free(board245466325);
board245466325 = NULL;
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_move(board, 3, 2, 3) == 1 );


char* board964771733 = gamma_board(board);
assert( board964771733 != NULL );
assert( strcmp(board964771733, 
"..210895..10610..\n"
"8..6479.6.10109.\n"
".21786..62271010\n"
"108453461010.551.\n"
"..31113941262.\n"
"3.243241.4.110.\n"
".6419..8.55162\n"
".7...1.4.778.5\n"
"2.391075.1..5..\n"
"510876.2...73.10\n"
"29.33.74.19452\n"
"9.61043.7588...\n") == 0);
free(board964771733);
board964771733 = NULL;
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );


char* board462972370 = gamma_board(board);
assert( board462972370 != NULL );
assert( strcmp(board462972370, 
"..210895..10610..\n"
"8..6479.6.10109.\n"
".21786..62271010\n"
"108453461010.551.\n"
"..31113941262.\n"
"3.243241.4.110.\n"
".6419..8.55162\n"
".7...1.4.778.5\n"
"2.391075.1..5..\n"
"510876.2...73.10\n"
"29.33.74.19452\n"
"9.61043.75888..\n") == 0);
free(board462972370);
board462972370 = NULL;
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_golden_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_move(board, 10, 7, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 17 );
assert( gamma_free_fields(board, 10) == 15 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );


char* board371574633 = gamma_board(board);
assert( board371574633 != NULL );
assert( strcmp(board371574633, 
"..2108953.10610..\n"
"8..6479.6.10109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..31113941262.\n"
"3.243241.4.110.\n"
".6419..8.55162\n"
"107...1.43778.5\n"
"2.39107541..5..\n"
"510876.2..973.10\n"
"29.33.74.19452\n"
"9.61043.75888..\n") == 0);
free(board371574633);
board371574633 = NULL;
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 9, 10) == 1 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 13, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_golden_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 11, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );


char* board336036523 = gamma_board(board);
assert( board336036523 != NULL );
assert( strcmp(board336036523, 
"..2108953.10610..\n"
"8..6479.6810109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..311139412623\n"
"3.243241.4.110.\n"
".64196.8.55162\n"
"107..71.43778.5\n"
"21039107541..5.9\n"
"510876.2..973.10\n"
"29.33.74.19452\n"
"9.61043.75888..\n") == 0);
free(board336036523);
board336036523 = NULL;
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 11, 12) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_golden_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_golden_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 11, 13) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );


char* board642254161 = gamma_board(board);
assert( board642254161 != NULL );
assert( strcmp(board642254161, 
".72108953.10610..\n"
"8..647986810109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..311139412623\n"
"3.243241.4.110.\n"
".64196.8.55162\n"
"107..71.43778.5\n"
"21039107541..5.9\n"
"510876.2..973.10\n"
"29.33.74.19452\n"
"9.61043.75888..\n") == 0);
free(board642254161);
board642254161 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board803626047 = gamma_board(board);
assert( board803626047 != NULL );
assert( strcmp(board803626047, 
".72108953.10610..\n"
"8..647986810109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..311139412623\n"
"3.243241.4.110.\n"
".64196.8.55162\n"
"107..71.43778.5\n"
"21039107541..5.9\n"
"510876.2..973.10\n"
"29.33.74.19452\n"
"9.61043.75888..\n") == 0);
free(board803626047);
board803626047 = NULL;
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );


char* board377293882 = gamma_board(board);
assert( board377293882 != NULL );
assert( strcmp(board377293882, 
".72108953.10610..\n"
"8..647986810109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..311139412623\n"
"3.243241.4.110.\n"
".64196.8.55162\n"
"107..71.43778.5\n"
"21039107541..5.9\n"
"510876.2..973.10\n"
"29.33.74.19452\n"
"9961043.75888..\n") == 0);
free(board377293882);
board377293882 = NULL;
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_golden_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 18 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );


char* board654436287 = gamma_board(board);
assert( board654436287 != NULL );
assert( strcmp(board654436287, 
".72108953.10610..\n"
"87.647986810109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..311139412623\n"
"3.243241.4.110.\n"
".64196.8.55162\n"
"107..71.43778.5\n"
"21039107541..5.9\n"
"510876.2..973.10\n"
"29.33.74.19452\n"
"9961043.75888..\n") == 0);
free(board654436287);
board654436287 = NULL;
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );


char* board874366242 = gamma_board(board);
assert( board874366242 != NULL );
assert( strcmp(board874366242, 
".72108953.10610..\n"
"87.647986810109.\n"
".21786.1062271010\n"
"1084534610106551.\n"
"..311139412623\n"
"3.243241.4.110.\n"
".64196.8.55162\n"
"107..71.43778.5\n"
"21039107541..5.9\n"
"510876.2..973.10\n"
"29633.74.19452\n"
"9961043.75888..\n") == 0);
free(board874366242);
board874366242 = NULL;
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );


gamma_delete(board);

    return 0;
}
