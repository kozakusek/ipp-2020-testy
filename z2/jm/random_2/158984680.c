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
uuid: 158984680
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 5, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );


char* board789170222 = gamma_board(board);
assert( board789170222 != NULL );
assert( strcmp(board789170222, 
"...6.....5..\n"
"...3..4...6.\n"
"..........3.\n"
".....8.2...1\n"
"1...5.......\n") == 0);
free(board789170222);
board789170222 = NULL;
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );


char* board973542984 = gamma_board(board);
assert( board973542984 != NULL );
assert( strcmp(board973542984, 
".116..44.5..\n"
"12.3..4...6.\n"
".2.3.589.432\n"
".9.998125..1\n"
"1.3.55......\n") == 0);
free(board973542984);
board973542984 = NULL;
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );


char* board632395768 = gamma_board(board);
assert( board632395768 != NULL );
assert( strcmp(board632395768, 
"91167.4465..\n"
"12.39.4...6.\n"
".2.3.589.432\n"
"69.998125..1\n"
"1.3.55...2..\n") == 0);
free(board632395768);
board632395768 = NULL;
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board140302239 = gamma_board(board);
assert( board140302239 != NULL );
assert( strcmp(board140302239, 
"91167.4465..\n"
"12.39.45..6.\n"
".2.3.589.432\n"
"692998125.11\n"
"1.3.55...2..\n") == 0);
free(board140302239);
board140302239 = NULL;
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );


char* board174468164 = gamma_board(board);
assert( board174468164 != NULL );
assert( strcmp(board174468164, 
"91164.4465..\n"
"12.39.45..6.\n"
".253.589.432\n"
"692998125.11\n"
"1.3.55.6.2..\n") == 0);
free(board174468164);
board174468164 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_golden_move(board, 9, 3, 0) == 0 );


char* board893752315 = gamma_board(board);
assert( board893752315 != NULL );
assert( strcmp(board893752315, 
"91164.4465..\n"
"12939.45..6.\n"
".253.589.432\n"
"692998125.11\n"
"1.3.55.6.2..\n") == 0);
free(board893752315);
board893752315 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_free_fields(board, 6) == 15 );


char* board408320909 = gamma_board(board);
assert( board408320909 != NULL );
assert( strcmp(board408320909, 
"91164.4465..\n"
"12939.45..6.\n"
"12531589.432\n"
"692998125.11\n"
"1.3.55.6.2..\n") == 0);
free(board408320909);
board408320909 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );


char* board312440347 = gamma_board(board);
assert( board312440347 != NULL );
assert( strcmp(board312440347, 
"91164.4465..\n"
"12939.45..6.\n"
"12531589.432\n"
"692998125.11\n"
"1.3.5516.2.8\n") == 0);
free(board312440347);
board312440347 = NULL;
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board978244007 = gamma_board(board);
assert( board978244007 != NULL );
assert( strcmp(board978244007, 
"91164.44652.\n"
"12939.45..6.\n"
"12531589.432\n"
"692998125.11\n"
"1.3.5516.2.8\n") == 0);
free(board978244007);
board978244007 = NULL;
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_free_fields(board, 9) == 12 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_free_fields(board, 9) == 9 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_golden_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_move(board, 3, 4, 7) == 0 );


gamma_delete(board);

    return 0;
}
