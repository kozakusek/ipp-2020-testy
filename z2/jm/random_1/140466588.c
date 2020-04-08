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
uuid: 140466588
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 14, 12, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 9, 11, 8) == 1 );
assert( gamma_move(board, 10, 8, -1) == 0 );
assert( gamma_move(board, 11, 13, 10) == 0 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );


char* board586891102 = gamma_board(board);
assert( board586891102 != NULL );
assert( strcmp(board586891102, 
"....8........\n"
".............\n"
".........6.3.\n"
".............\n"
".............\n"
"......1....94\n"
".............\n"
".............\n"
".....3.......\n"
"........12....\n"
"1............\n"
".............\n"
".........4...\n"
".............\n") == 0);
free(board586891102);
board586891102 = NULL;
assert( gamma_move(board, 5, 13, 2) == 0 );


char* board911375429 = gamma_board(board);
assert( board911375429 != NULL );
assert( strcmp(board911375429, 
"....8........\n"
".............\n"
".........6.3.\n"
".............\n"
".............\n"
"......1....94\n"
".............\n"
".............\n"
".....3.......\n"
"........12....\n"
"1............\n"
".............\n"
".........4...\n"
".............\n") == 0);
free(board911375429);
board911375429 = NULL;
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 8, 1, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_golden_move(board, 11, 10, 11) == 0 );
assert( gamma_move(board, 12, 9, 8) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );


char* board338065883 = gamma_board(board);
assert( board338065883 != NULL );
assert( strcmp(board338065883, 
"....8........\n"
".............\n"
".8.......6.3.\n"
".............\n"
".............\n"
"......1..12.94\n"
".10...........\n"
".........36..\n"
".....3.....9.\n"
"........12....\n"
"1............\n"
".............\n"
".........4...\n"
"....2........\n") == 0);
free(board338065883);
board338065883 = NULL;
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 164 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_golden_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, -1, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, -1, 10) == 0 );
assert( gamma_move(board, 11, 0, 8) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 9, 7) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 3, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 10, 4, 7) == 1 );
assert( gamma_move(board, 11, 10, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 156 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_free_fields(board, 4) == 156 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );


char* board240373011 = gamma_board(board);
assert( board240373011 != NULL );
assert( strcmp(board240373011, 
"....8........\n"
".............\n"
".8.......6.3.\n"
".............\n"
"...4...89....\n"
"11.....1..12.94\n"
".10..10........\n"
".........36..\n"
".....31....9.\n"
"........12....\n"
"1.5..........\n"
"..6..........\n"
".........4...\n"
"6...2........\n") == 0);
free(board240373011);
board240373011 = NULL;
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 12, 11, 5) == 0 );


char* board759042648 = gamma_board(board);
assert( board759042648 != NULL );
assert( strcmp(board759042648, 
"....8........\n"
".............\n"
".8.......6.3.\n"
"...8.........\n"
"...4...89....\n"
"11.....1..12.94\n"
".10..10........\n"
".........366.\n"
".....31....9.\n"
"9.......12....\n"
"1.5..........\n"
"..6..........\n"
".........4...\n"
"6...2........\n") == 0);
free(board759042648);
board759042648 = NULL;
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_free_fields(board, 2) == 153 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 11, 8, 12) == 1 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 12, 8, 12) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );


char* board354640340 = gamma_board(board);
assert( board354640340 != NULL );
assert( strcmp(board354640340, 
"3...8........\n"
"...4....11....\n"
".8.......6.3.\n"
"..28.........\n"
".8.4...89....\n"
"11.....1..12.94\n"
".10..10..53....\n"
".........3661\n"
".....31.5..9.\n"
"9...8...12....\n"
"1.5..74..4...\n"
"..6.7........\n"
"11........4...\n"
"6.10.2........\n") == 0);
free(board354640340);
board354640340 = NULL;
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 5, 13) == 1 );
assert( gamma_free_fields(board, 7) == 135 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_golden_move(board, 10, 5, 11) == 0 );


char* board740321265 = gamma_board(board);
assert( board740321265 != NULL );
assert( strcmp(board740321265, 
"3...87.......\n"
"...4....11....\n"
".8.......6.3.\n"
"..28..6......\n"
".8.4...89....\n"
"11.....1..12.94\n"
".10..10..53....\n"
".........3661\n"
".....61.5..9.\n"
"9...8...12....\n"
"1.58.74..4...\n"
"..6.7........\n"
"11........4...\n"
"6.10.2..9.....\n") == 0);
free(board740321265);
board740321265 = NULL;
assert( gamma_move(board, 12, 9, 14) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 133 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_free_fields(board, 2) == 132 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 132 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 132 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 13, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 13) == 1 );
assert( gamma_move(board, 11, 10, -1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_free_fields(board, 6) == 126 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 11, 3, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 9, 2) == 1 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 10, -1) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_move(board, 12, 12, 9) == 1 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 119 );
assert( gamma_golden_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_free_fields(board, 7) == 118 );


char* board642231557 = gamma_board(board);
assert( board642231557 != NULL );
assert( strcmp(board642231557, 
"3.10.87.......\n"
"..24..1.11....\n"
".8.......633.\n"
"..28..6.8....\n"
".8.4...89.6.12\n"
"11..11..1..12.94\n"
".10.110..53....\n"
".......12.3661\n"
".....61.5.59.\n"
"9...8...12....\n"
"1.58.74..2...\n"
"..6.7....12...\n"
"11...10....44..\n"
"6.10.2..9.7...\n") == 0);
free(board642231557);
board642231557 = NULL;
assert( gamma_move(board, 12, 7, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 8, 0, 12) == 1 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 3) == 1 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 12, 10, 9) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 113 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_free_fields(board, 3) == 112 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_golden_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, -1, 2) == 0 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 11) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_golden_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 1, 13) == 1 );
assert( gamma_free_fields(board, 9) == 104 );
assert( gamma_move(board, 10, 5, 7) == 1 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 11, 5) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 100 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 10, 10, 12) == 1 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 13) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_free_fields(board, 7) == 94 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 12, 11) == 1 );
assert( gamma_free_fields(board, 10) == 92 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_move(board, 12, 6, -1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 13, 14) == 0 );
assert( gamma_free_fields(board, 9) == 90 );
assert( gamma_move(board, 10, 6, 9) == 1 );
assert( gamma_move(board, 11, 1, 12) == 1 );
assert( gamma_move(board, 12, 6, 2) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_golden_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 8, 8, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 10, 11, 11) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board861541916 = gamma_board(board);
assert( board861541916 != NULL );
assert( strcmp(board861541916, 
"3910.87.7..52.\n"
"81124..1.11.10..\n"
".8.2.12.2.63310\n"
"..28..6.8..4.\n"
".8.4..108916.12\n"
"11..113.16712.94\n"
".10.11010253....\n"
".5.2..812.3661\n"
".....61.5.59.\n"
"9...8...124.3.\n"
"1.58974.42.10.\n"
"..617.12..12...\n"
"11.11.10...644..\n"
"6.10.2219107...\n") == 0);
free(board861541916);
board861541916 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );


char* board785083756 = gamma_board(board);
assert( board785083756 != NULL );
assert( strcmp(board785083756, 
"3910.87.7..52.\n"
"81124..1.11.10..\n"
".8.2.12.2.63310\n"
"..28..6.8..4.\n"
".8.4..108916.12\n"
"11..113.16712.94\n"
".10.11010253....\n"
".5.2..812.3661\n"
".....61.5.59.\n"
"9...8...124.3.\n"
"1358974.42.10.\n"
"..617.12..12...\n"
"11.11.10...644..\n"
"6.10.2219107...\n") == 0);
free(board785083756);
board785083756 = NULL;
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_free_fields(board, 9) == 82 );
assert( gamma_free_fields(board, 10) == 18 );
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board334600550 = gamma_board(board);
assert( board334600550 != NULL );
assert( strcmp(board334600550, 
"3910.87.7..52.\n"
"81124..1.11.10..\n"
".8.2.12.2.63310\n"
"..28..6.8..4.\n"
".8.4..108916.12\n"
"11..113.16712.94\n"
".10.11010253....\n"
".5.2.9812.3661\n"
".....61.5.59.\n"
"9...8...124.3.\n"
"1358974.42.10.\n"
"..6171212..12...\n"
"11.11.10...644..\n"
"6.10.2219107...\n") == 0);
free(board334600550);
board334600550 = NULL;
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 6, 12) == 0 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );


char* board611690708 = gamma_board(board);
assert( board611690708 != NULL );
assert( strcmp(board611690708, 
"3910.87.7..52.\n"
"81124..1.11.10..\n"
".8.2.1222.63310\n"
"..28..6.8..4.\n"
".8.4..108916.12\n"
"11..113.16712.94\n"
".10.11010253....\n"
".5.2.9812.3661\n"
"..4..61.5.59.\n"
"9...8...124.3.\n"
"1358974.42.10.\n"
"..6171212.312...\n"
"11.11.10...644..\n"
"6.10.2219107...\n") == 0);
free(board611690708);
board611690708 = NULL;
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 10, 9) == 0 );
assert( gamma_move(board, 12, 11, 1) == 1 );
assert( gamma_free_fields(board, 12) == 75 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_golden_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 13, 9) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_golden_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board966360963 = gamma_board(board);
assert( board966360963 != NULL );
assert( strcmp(board966360963, 
"3910.87.7..525\n"
"81124..1.11.10..\n"
".8.2.1222.63310\n"
"..23..6.8..4.\n"
".8.4..108916.12\n"
"11..113.16712.94\n"
".10.11010253...1\n"
".5.2.9812.3661\n"
"..4..61.5.59.\n"
"9...8...124.3.\n"
"1358974.42.10.\n"
"..6171212.312...\n"
"11.11.10.6.64412.\n"
"6.10.2219107...\n") == 0);
free(board966360963);
board966360963 = NULL;
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 72 );
assert( gamma_move(board, 9, 12, 4) == 1 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 5, 12) == 1 );
assert( gamma_move(board, 12, 7, 4) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_golden_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 11, -1, 10) == 0 );
assert( gamma_free_fields(board, 11) == 67 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 11, 13, 5) == 0 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_busy_fields(board, 12) == 10 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 9, 10) == 1 );


char* board170103069 = gamma_board(board);
assert( board170103069 != NULL );
assert( strcmp(board170103069, 
"3910.87.7..525\n"
"81124.111.11.10..\n"
"58.2.1222.63310\n"
"..23..6.811.4.\n"
".824..108916.12\n"
"11..113.16712.94\n"
"210.11010253...1\n"
".5.8.9812.3661\n"
"..4..61.5.593\n"
"95..8.712124.39\n"
"1358974.42.10.\n"
"..6171212.312...\n"
"11.11.10.6.64412.\n"
"6.10.2219107.9.\n") == 0);
free(board170103069);
board170103069 = NULL;
assert( gamma_move(board, 12, 3, 6) == 0 );


char* board107404730 = gamma_board(board);
assert( board107404730 != NULL );
assert( strcmp(board107404730, 
"3910.87.7..525\n"
"81124.111.11.10..\n"
"58.2.1222.63310\n"
"..23..6.811.4.\n"
".824..108916.12\n"
"11..113.16712.94\n"
"210.11010253...1\n"
".5.8.9812.3661\n"
"..4..61.5.593\n"
"95..8.712124.39\n"
"1358974.42.10.\n"
"..6171212.312...\n"
"11.11.10.6.64412.\n"
"6.10.2219107.9.\n") == 0);
free(board107404730);
board107404730 = NULL;
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_free_fields(board, 10) == 16 );
assert( gamma_golden_move(board, 10, 4, 12) == 0 );
assert( gamma_free_fields(board, 11) == 60 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 7, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_free_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 11, 6, 14) == 0 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_free_fields(board, 4) == 58 );


gamma_delete(board);

    return 0;
}
