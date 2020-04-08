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
uuid: 895396821
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 12, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );


char* board725302157 = gamma_board(board);
assert( board725302157 != NULL );
assert( strcmp(board725302157, 
"...........\n"
"...........\n"
".3.45......\n"
"8..........\n"
"......8....\n"
"..1........\n"
"....7...56.\n") == 0);
free(board725302157);
board725302157 = NULL;
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_move(board, 10, 10, 6) == 1 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_move(board, 12, 0, 6) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );


char* board646202756 = gamma_board(board);
assert( board646202756 != NULL );
assert( strcmp(board646202756, 
"12..10....4.10\n"
".........3.\n"
".3.45..2...\n"
"8.1.......7\n"
"6...2.8...9\n"
".51........\n"
"..12.7...567\n") == 0);
free(board646202756);
board646202756 = NULL;
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 10, 8, 3) == 1 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_free_fields(board, 12) == 44 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );


char* board769652619 = gamma_board(board);
assert( board769652619 != NULL );
assert( strcmp(board769652619, 
"12..10.5..4.10\n"
".3108....83.\n"
".3.456102...\n"
"8.14....1037\n"
"6...2.810..9\n"
".511......4\n"
"3712.7...567\n") == 0);
free(board769652619);
board769652619 = NULL;
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_move(board, 11, 5, 5) == 1 );
assert( gamma_free_fields(board, 11) == 36 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_move(board, 12, 7, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );


char* board881548670 = gamma_board(board);
assert( board881548670 != NULL );
assert( strcmp(board881548670, 
"12..10.5..4.10\n"
".3108711..83.\n"
".3.456102...\n"
"8.14....1037\n"
"6...2.810.69\n"
".511...12..4\n"
"3712.7...567\n") == 0);
free(board881548670);
board881548670 = NULL;
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_free_fields(board, 10) == 32 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 3, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );


char* board775471880 = gamma_board(board);
assert( board775471880 != NULL );
assert( strcmp(board775471880, 
"1210.10.5.24410\n"
"33108711..83.\n"
".3.456102...\n"
"8914.4..1037\n"
"6..112.810.69\n"
".511...12..4\n"
"4712.7...567\n") == 0);
free(board775471880);
board775471880 = NULL;
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_free_fields(board, 10) == 22 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board674917206 = gamma_board(board);
assert( board674917206 != NULL );
assert( strcmp(board674917206, 
"1210.10105124410\n"
"33108711..83.\n"
".3.456102..9\n"
"8914.4.81037\n"
"6.71129810.69\n"
"7511...12..4\n"
"4712.7...567\n") == 0);
free(board674917206);
board674917206 = NULL;
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_free_fields(board, 11) == 16 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 11, 7, 5) == 1 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_golden_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
