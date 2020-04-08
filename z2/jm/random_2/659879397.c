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
uuid: 659879397
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 14, 10, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 2, 13) == 1 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 10, 4, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );


char* board164593119 = gamma_board(board);
assert( board164593119 != NULL );
assert( strcmp(board164593119, 
"2.9..\n"
"3...3\n"
"....10\n"
".....\n"
"72...\n"
".4...\n"
"..1.3\n"
"2.81.\n"
"7.9..\n"
".8..8\n"
"29.101\n"
"....10\n"
"958..\n"
"7....\n") == 0);
free(board164593119);
board164593119 = NULL;
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 1, 11, 1) == 0 );


char* board676477221 = gamma_board(board);
assert( board676477221 != NULL );
assert( strcmp(board676477221, 
"2.9.2\n"
"3...3\n"
"....10\n"
".....\n"
"72...\n"
".4.9.\n"
"..1.3\n"
"2.81.\n"
"7.97.\n"
".8..8\n"
"29.101\n"
"..6.10\n"
"958..\n"
"7....\n") == 0);
free(board676477221);
board676477221 = NULL;
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );


char* board460711063 = gamma_board(board);
assert( board460711063 != NULL );
assert( strcmp(board460711063, 
"2.9.2\n"
"3...3\n"
"....10\n"
"..3..\n"
"72...\n"
".449.\n"
"..1.3\n"
"2.81.\n"
"7.97.\n"
"68..8\n"
"29.101\n"
"..6.10\n"
"958..\n"
"7....\n") == 0);
free(board460711063);
board460711063 = NULL;
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 3, 12) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_golden_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 9, 2) == 0 );


char* board630849992 = gamma_board(board);
assert( board630849992 != NULL );
assert( strcmp(board630849992, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72...\n"
".449.\n"
"3.173\n"
"2.812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"9584.\n"
"107...\n") == 0);
free(board630849992);
board630849992 = NULL;
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );


char* board675870719 = gamma_board(board);
assert( board675870719 != NULL );
assert( strcmp(board675870719, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72...\n"
".449.\n"
"3.173\n"
"2.812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"9584.\n"
"107...\n") == 0);
free(board675870719);
board675870719 = NULL;
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 13, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );


char* board458027023 = gamma_board(board);
assert( board458027023 != NULL );
assert( strcmp(board458027023, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72..1\n"
".4499\n"
"38173\n"
"2.812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"95845\n"
"1074..\n") == 0);
free(board458027023);
board458027023 = NULL;
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_free_fields(board, 10) == 22 );


char* board313687527 = gamma_board(board);
assert( board313687527 != NULL );
assert( strcmp(board313687527, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72..1\n"
".4499\n"
"38173\n"
"2.812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"95845\n"
"1074..\n") == 0);
free(board313687527);
board313687527 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );


char* board827952424 = gamma_board(board);
assert( board827952424 != NULL );
assert( strcmp(board827952424, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72..1\n"
".4499\n"
"38173\n"
"2.812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"95845\n"
"1074..\n") == 0);
free(board827952424);
board827952424 = NULL;
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );


char* board676450886 = gamma_board(board);
assert( board676450886 != NULL );
assert( strcmp(board676450886, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72..1\n"
".4499\n"
"38173\n"
"23812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"95845\n"
"1074..\n") == 0);
free(board676450886);
board676450886 = NULL;
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 9, 3) == 0 );


char* board992717835 = gamma_board(board);
assert( board992717835 != NULL );
assert( strcmp(board992717835, 
"2.9.2\n"
"3..73\n"
".3..10\n"
"..3..\n"
"72..1\n"
".4499\n"
"38173\n"
"23812\n"
"7.97.\n"
"687.8\n"
"29.101\n"
"9.6210\n"
"95845\n"
"1074..\n") == 0);
free(board992717835);
board992717835 = NULL;
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 10, 12, 1) == 0 );
assert( gamma_move(board, 10, 4, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );


gamma_delete(board);

    return 0;
}
