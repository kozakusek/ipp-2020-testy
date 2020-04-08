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
uuid: 441684087
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 10, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_golden_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_golden_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board613919463 = gamma_board(board);
assert( board613919463 != NULL );
assert( strcmp(board613919463, 
"..710.3....\n"
".9..8...9.\n"
"3....105..3\n"
"910..4..5..\n"
"27113.10107.\n"
"..8.9.9108.\n"
"6......663\n"
".651...2..\n") == 0);
free(board613919463);
board613919463 = NULL;
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );


char* board602443773 = gamma_board(board);
assert( board602443773 != NULL );
assert( strcmp(board602443773, 
"..710.3....\n"
".9..8...9.\n"
"3....105..3\n"
"910..4..5.2\n"
"27113.10107.\n"
"..8.9.9108.\n"
"6...25.663\n"
".651...2..\n") == 0);
free(board602443773);
board602443773 = NULL;
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_move(board, 7, 2, 2) == 1 );


char* board991749847 = gamma_board(board);
assert( board991749847 != NULL );
assert( strcmp(board991749847, 
"..710.3..9.\n"
".9..8.499.\n"
"3....105513\n"
"910..4..5.2\n"
"27113.10107.\n"
"..7.9.9108.\n"
"66..25.663\n"
".651.2.2..\n") == 0);
free(board991749847);
board991749847 = NULL;
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_golden_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 1, 2) == 1 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );


char* board762425375 = gamma_board(board);
assert( board762425375 != NULL );
assert( strcmp(board762425375, 
"2.71033.198\n"
".9..8.499.\n"
"3...7105513\n"
"910..42.552\n"
"27113810107.\n"
".1078989108.\n"
"96..25.663\n"
"9651.2.229\n") == 0);
free(board762425375);
board762425375 = NULL;
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );


char* board121979722 = gamma_board(board);
assert( board121979722 != NULL );
assert( strcmp(board121979722, 
"2.71033.198\n"
".9..8.499.\n"
"3...7105513\n"
"910..42.552\n"
"27113810107.\n"
".1078989108.\n"
"9610525.663\n"
"9651.2.229\n") == 0);
free(board121979722);
board121979722 = NULL;
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 5, 1) == 0 );


char* board881137208 = gamma_board(board);
assert( board881137208 != NULL );
assert( strcmp(board881137208, 
"2.71033.198\n"
".9..8.4996\n"
"3...7105513\n"
"910..42.552\n"
"27113810107.\n"
".10789891088\n"
"9610525.663\n"
"9651726229\n") == 0);
free(board881137208);
board881137208 = NULL;
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 6, 7) == 0 );


char* board462249719 = gamma_board(board);
assert( board462249719 != NULL );
assert( strcmp(board462249719, 
"2.71033.198\n"
".9..8.4996\n"
"3...7105513\n"
"910..421552\n"
"27113810107.\n"
".10789891088\n"
"9610525.663\n"
"9651726229\n") == 0);
free(board462249719);
board462249719 = NULL;
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_free_fields(board, 10) == 14 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_free_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board909264312 = gamma_board(board);
assert( board909264312 != NULL );
assert( strcmp(board909264312, 
"247533.198\n"
".98.834996\n"
"3.2.7105513\n"
"910..421552\n"
"27113810107.\n"
".10789891088\n"
"9610525.663\n"
"9651726229\n") == 0);
free(board909264312);
board909264312 = NULL;
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_free_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_free_fields(board, 10) == 10 );


gamma_delete(board);

    return 0;
}
