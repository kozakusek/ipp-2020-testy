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
uuid: 446211166
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 10, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );


char* board402854845 = gamma_board(board);
assert( board402854845 != NULL );
assert( strcmp(board402854845, 
"......\n"
".1..2.\n"
"......\n"
"....2.\n"
"......\n"
"......\n"
"......\n"
".7....\n"
".5....\n"
"..41.3\n"
"......\n"
"......\n") == 0);
free(board402854845);
board402854845 = NULL;
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );


char* board788805715 = gamma_board(board);
assert( board788805715 != NULL );
assert( strcmp(board788805715, 
".....8\n"
".1..2.\n"
"......\n"
"8...2.\n"
"5.....\n"
"......\n"
"4.79..\n"
".77.3.\n"
".5....\n"
".941.3\n"
"......\n"
"9.10...\n") == 0);
free(board788805715);
board788805715 = NULL;
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_free_fields(board, 10) == 46 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_free_fields(board, 8) == 32 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );


char* board206976124 = gamma_board(board);
assert( board206976124 != NULL );
assert( strcmp(board206976124, 
"...618\n"
".1142.\n"
"....7.\n"
"8..42.\n"
"51...5\n"
"......\n"
"4279..\n"
"5777310\n"
".5210.3\n"
".94143\n"
"36.7..\n"
"99101..\n") == 0);
free(board206976124);
board206976124 = NULL;
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );


char* board770904342 = gamma_board(board);
assert( board770904342 != NULL );
assert( strcmp(board770904342, 
"...618\n"
".1142.\n"
"....7.\n"
"8..42.\n"
"51...5\n"
"......\n"
"4279..\n"
"5777310\n"
".5210.3\n"
".94143\n"
"36.7..\n"
"99101..\n") == 0);
free(board770904342);
board770904342 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );


char* board454455574 = gamma_board(board);
assert( board454455574 != NULL );
assert( strcmp(board454455574, 
"...618\n"
".1142.\n"
"....7.\n"
"8..42.\n"
"51...5\n"
"......\n"
"4279..\n"
"5777310\n"
".5210.3\n"
".94143\n"
"36.7..\n"
"99101..\n") == 0);
free(board454455574);
board454455574 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );


char* board158907044 = gamma_board(board);
assert( board158907044 != NULL );
assert( strcmp(board158907044, 
"...618\n"
".11425\n"
"....7.\n"
"8..42.\n"
"51...5\n"
"......\n"
"4279..\n"
"5777310\n"
".5210.3\n"
".94143\n"
"36.7.4\n"
"99101..\n") == 0);
free(board158907044);
board158907044 = NULL;
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );


char* board910544882 = gamma_board(board);
assert( board910544882 != NULL );
assert( strcmp(board910544882, 
"...618\n"
".11425\n"
"....7.\n"
"8.942.\n"
"51...5\n"
".9....\n"
"4279..\n"
"5777310\n"
".5210.3\n"
".94143\n"
"36.7.4\n"
"99101..\n") == 0);
free(board910544882);
board910544882 = NULL;
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_free_fields(board, 9) == 19 );


char* board676804820 = gamma_board(board);
assert( board676804820 != NULL );
assert( strcmp(board676804820, 
"..4618\n"
"811425\n"
".6.17.\n"
"8.942.\n"
"5163.5\n"
".9....\n"
"4279.9\n"
"5777310\n"
".521.3\n"
"994143\n"
"36.7.4\n"
"991012.\n") == 0);
free(board676804820);
board676804820 = NULL;
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_golden_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_golden_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_golden_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_free_fields(board, 9) == 14 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );


char* board387247699 = gamma_board(board);
assert( board387247699 != NULL );
assert( strcmp(board387247699, 
"..4618\n"
"811425\n"
".6117.\n"
"8.942.\n"
"5163.5\n"
"109..59\n"
"4279.9\n"
"5777310\n"
".521.3\n"
"994143\n"
"36.7.4\n"
"991011010\n") == 0);
free(board387247699);
board387247699 = NULL;
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );


gamma_delete(board);

    return 0;
}
