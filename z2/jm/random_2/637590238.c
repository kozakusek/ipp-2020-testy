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
uuid: 637590238
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 14, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 1, 6) == 1 );
assert( gamma_move(board, 12, 9, 5) == 1 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 13, 6, 3) == 1 );
assert( gamma_move(board, 14, 1, 7) == 0 );
assert( gamma_move(board, 14, 6, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 14, 9, 2) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board555809531 = gamma_board(board);
assert( board555809531 != NULL );
assert( strcmp(board555809531, 
".12...2.6...\n"
".9.......12.\n"
"...81110..7.\n"
"10....1313..9.\n"
"...6.513.314.\n"
"..11.....1..\n"
"..10.8514..77\n") == 0);
free(board555809531);
board555809531 = NULL;
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 10, 6) == 1 );


char* board793928825 = gamma_board(board);
assert( board793928825 != NULL );
assert( strcmp(board793928825, 
".12...266..7\n"
".9.......12.\n"
"...81110..7.\n"
"10....1313..9.\n"
"...6.513.314.\n"
"..11.....1..\n"
"..10.8514..77\n") == 0);
free(board793928825);
board793928825 = NULL;
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_move(board, 13, 6, 0) == 0 );
assert( gamma_move(board, 13, 6, 1) == 1 );
assert( gamma_move(board, 14, 5, 5) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 4) == 41 );


char* board469234887 = gamma_board(board);
assert( board469234887 != NULL );
assert( strcmp(board469234887, 
".12...266..7\n"
".9...14...12.\n"
"...81110.97.\n"
"1011...1313..9.\n"
".8.6.513.314.\n"
".1111.3.13.1..\n"
"..10.8514..77\n") == 0);
free(board469234887);
board469234887 = NULL;
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );


char* board543356838 = gamma_board(board);
assert( board543356838 != NULL );
assert( strcmp(board543356838, 
".12...266..7\n"
".9...14...125\n"
"...81110.97.\n"
"1011...1313..9.\n"
".8.6.513.314.\n"
".1111.3.13.1..\n"
"..10.8514..77\n") == 0);
free(board543356838);
board543356838 = NULL;
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );


char* board998044301 = gamma_board(board);
assert( board998044301 != NULL );
assert( strcmp(board998044301, 
".12...266..7\n"
".9...14...125\n"
"...81110.97.\n"
"1011...1313..9.\n"
".8.6.513.314.\n"
".1111.3.13.1..\n"
"..10.8514..77\n") == 0);
free(board998044301);
board998044301 = NULL;
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_free_fields(board, 10) == 37 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 7, 6) == 0 );
assert( gamma_move(board, 13, 2, 4) == 1 );
assert( gamma_move(board, 14, 10, 2) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 11, 1, 2) == 0 );


char* board929436604 = gamma_board(board);
assert( board929436604 != NULL );
assert( strcmp(board929436604, 
"512...266..7\n"
".9...14...125\n"
"..1381110797.\n"
"1011...13132.9.\n"
".81065513831414\n"
".1111.3.13101..\n"
"9.10.8514.277\n") == 0);
free(board929436604);
board929436604 = NULL;
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_free_fields(board, 12) == 29 );
assert( gamma_move(board, 13, 0, 1) == 1 );
assert( gamma_move(board, 13, 5, 5) == 0 );
assert( gamma_free_fields(board, 13) == 28 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_free_fields(board, 14) == 28 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_golden_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 12, 0, 2) == 1 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 14, 4, 10) == 0 );
assert( gamma_busy_fields(board, 14) == 4 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_move(board, 14, 10, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 9, 6) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 13, 3, 1) == 1 );
assert( gamma_move(board, 14, 5, 4) == 0 );
assert( gamma_move(board, 14, 2, 2) == 0 );
assert( gamma_golden_move(board, 14, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );


char* board994842024 = gamma_board(board);
assert( board994842024 != NULL );
assert( strcmp(board994842024, 
"512...266.97\n"
".9.12.14.1.125\n"
"..1381110797.\n"
"1011.7313132.9.\n"
"1281065513831414\n"
"131111133.13101..\n"
"9610.8514.277\n") == 0);
free(board994842024);
board994842024 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 6, 3) == 0 );


char* board783361314 = gamma_board(board);
assert( board783361314 != NULL );
assert( strcmp(board783361314, 
"512...266.97\n"
".9.12.14.1.125\n"
"2.1381110797.\n"
"1011.7313132.9.\n"
"1281065513831414\n"
"131111133.13101..\n"
"9610.8514.277\n") == 0);
free(board783361314);
board783361314 = NULL;
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 5, 2) == 0 );
assert( gamma_free_fields(board, 13) == 18 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 14, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_move(board, 14, 7, 3) == 0 );


gamma_delete(board);

    return 0;
}
