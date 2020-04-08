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
uuid: 154167416
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 15, 11, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 11, 3, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_golden_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_move(board, 9, 14, 0) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 11, 4, 13) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 3, 12) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 14, 0) == 0 );


char* board833229411 = gamma_board(board);
assert( board833229411 != NULL );
assert( strcmp(board833229411, 
"..4..\n"
"....11\n"
".8.11.\n"
"..112\n"
"4...6\n"
"...11.\n"
"662.10\n"
"...8.\n"
".1..1\n"
".....\n"
"1.8.5\n"
"1....\n"
"47.51\n"
"629..\n"
"26...\n") == 0);
free(board833229411);
board833229411 = NULL;
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 11, 11, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );


char* board958663125 = gamma_board(board);
assert( board958663125 != NULL );
assert( strcmp(board958663125, 
"..4..\n"
"....11\n"
".8.11.\n"
"..112\n"
"4...6\n"
"...11.\n"
"662.10\n"
".3.8.\n"
".1.81\n"
".17..\n"
"1.8.5\n"
"1..8.\n"
"47.51\n"
"629..\n"
"26...\n") == 0);
free(board958663125);
board958663125 = NULL;
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );


char* board795090134 = gamma_board(board);
assert( board795090134 != NULL );
assert( strcmp(board795090134, 
"..4..\n"
"....11\n"
".8.11.\n"
"..112\n"
"4.1.6\n"
"...11.\n"
"662.10\n"
".3.88\n"
".1.81\n"
".17..\n"
"1.8105\n"
"1..810\n"
"47.51\n"
"629..\n"
"26...\n") == 0);
free(board795090134);
board795090134 = NULL;
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 14, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 11, 3, 10) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );


char* board987692643 = gamma_board(board);
assert( board987692643 != NULL );
assert( strcmp(board987692643, 
"..4..\n"
"...111\n"
".8.11.\n"
"3.112\n"
"4.1116\n"
"..911.\n"
"662.10\n"
".3.88\n"
".1.81\n"
".177.\n"
"118105\n"
"1..810\n"
"47.51\n"
"629..\n"
"26..8\n") == 0);
free(board987692643);
board987692643 = NULL;
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 10, 14, 1) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 0, 13) == 1 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_golden_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 10, 0, 14) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );


char* board737730623 = gamma_board(board);
assert( board737730623 != NULL );
assert( strcmp(board737730623, 
"10.4..\n"
"10..111\n"
".8211.\n"
"3.112\n"
"4.1116\n"
"..911.\n"
"662.10\n"
"23.88\n"
".1.81\n"
"3177.\n"
"11885\n"
"1.7810\n"
"47951\n"
"629103\n"
"26..8\n") == 0);
free(board737730623);
board737730623 = NULL;
assert( gamma_move(board, 10, 12, 0) == 0 );
assert( gamma_move(board, 10, 2, 12) == 0 );
assert( gamma_move(board, 11, 14, 4) == 0 );
assert( gamma_move(board, 11, 4, 9) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board935472280 = gamma_board(board);
assert( board935472280 != NULL );
assert( strcmp(board935472280, 
"10.4..\n"
"10..111\n"
".8211.\n"
"3.112\n"
"4.1116\n"
"..91111\n"
"662.10\n"
"23.88\n"
".1.81\n"
"3177.\n"
"11885\n"
"1.7810\n"
"47951\n"
"629103\n"
"26..8\n") == 0);
free(board935472280);
board935472280 = NULL;
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_golden_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 1, 14) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 11, 0, 9) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );


gamma_delete(board);

    return 0;
}
