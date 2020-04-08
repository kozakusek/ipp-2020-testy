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
uuid: 673914067
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 8, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_free_fields(board, 2) == 109 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 1) == 96 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );


char* board965697466 = gamma_board(board);
assert( board965697466 != NULL );
assert( strcmp(board965697466, 
"....1......\n"
"..........8\n"
"4..35...241\n"
"1.4........\n"
"......5.7..\n"
"...74....3.\n"
".8.4.......\n"
"...........\n"
"6.5..8....7\n"
".........25\n"
".67...2....\n") == 0);
free(board965697466);
board965697466 = NULL;
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_free_fields(board, 6) == 82 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board811466656 = gamma_board(board);
assert( board811466656 != NULL );
assert( strcmp(board811466656, 
".8..1...3..\n"
"1...6....68\n"
"4..35..1241\n"
"114...81..3\n"
".6.3..577.5\n"
"..3745.2.37\n"
".844..3...8\n"
"........1..\n"
"654..8.27.7\n"
"..48.....25\n"
".677..2...8\n") == 0);
free(board811466656);
board811466656 = NULL;
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );


char* board620576908 = gamma_board(board);
assert( board620576908 != NULL );
assert( strcmp(board620576908, 
"48.312..37.\n"
"17416....68\n"
"4..35.81241\n"
"1142..816.3\n"
"66.3..57725\n"
"..374522.37\n"
"58441.33..8\n"
"1.21....1..\n"
"654..8127.7\n"
"..48.4...25\n"
".677732...8\n") == 0);
free(board620576908);
board620576908 = NULL;
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_golden_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_golden_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_golden_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_golden_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board449225593 = gamma_board(board);
assert( board449225593 != NULL );
assert( strcmp(board449225593, 
"48.312.7373\n"
"17416826.68\n"
"43535.81241\n"
"1145..81673\n"
"66.38.57725\n"
"7.374522.37\n"
"58441533.38\n"
"1521...3141\n"
"654488137.7\n"
"7.487487425\n"
"2677732..11\n") == 0);
free(board449225593);
board449225593 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );


char* board221905467 = gamma_board(board);
assert( board221905467 != NULL );
assert( strcmp(board221905467, 
"48.312.7373\n"
"17416826.68\n"
"43535481241\n"
"1145..81673\n"
"66.38.56725\n"
"73374522.37\n"
"58441533.38\n"
"15211..3141\n"
"654488137.7\n"
"7.487487425\n"
"2677732..11\n") == 0);
free(board221905467);
board221905467 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


char* board977968623 = gamma_board(board);
assert( board977968623 != NULL );
assert( strcmp(board977968623, 
"48.312.7373\n"
"17412826.68\n"
"43535481241\n"
"1145..81673\n"
"66.38.56725\n"
"73374522.37\n"
"58441533.38\n"
"15211..3141\n"
"654488137.7\n"
"73487487425\n"
"2677732..11\n") == 0);
free(board977968623);
board977968623 = NULL;
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );


gamma_delete(board);

    return 0;
}
