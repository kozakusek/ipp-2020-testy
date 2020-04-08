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
uuid: 673458832
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 19, 14, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_golden_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 12, 17) == 1 );
assert( gamma_move(board, 8, 1, 15) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board913243834 = gamma_board(board);
assert( board913243834 != NULL );
assert( strcmp(board913243834, 
"...............\n"
"............6..\n"
"...............\n"
".8.............\n"
"...............\n"
"...............\n"
".5.............\n"
"...............\n"
"....1..........\n"
"...............\n"
".........2.....\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"......3........\n"
"...............\n"
"...............\n") == 0);
free(board913243834);
board913243834 = NULL;
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, -1, 5) == 0 );
assert( gamma_move(board, 11, 6, 3) == 1 );
assert( gamma_move(board, 12, 9, 16) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 7) == 1 );


char* board331722574 = gamma_board(board);
assert( board331722574 != NULL );
assert( strcmp(board331722574, 
"...............\n"
"............6..\n"
".........12.....\n"
".8.............\n"
"...............\n"
"...............\n"
".5.............\n"
"...............\n"
"....1..........\n"
"...............\n"
".........2.....\n"
"......13........\n"
"...............\n"
"...............\n"
"...............\n"
"......11........\n"
"......3........\n"
"...............\n"
"...............\n") == 0);
free(board331722574);
board331722574 = NULL;
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 276 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 9, 17) == 1 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 11, 4, 9) == 1 );
assert( gamma_move(board, 12, 4, 14) == 1 );
assert( gamma_move(board, 13, 4, 13) == 1 );
assert( gamma_move(board, 14, 1, 15) == 0 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 17) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 266 );


char* board464095878 = gamma_board(board);
assert( board464095878 != NULL );
assert( strcmp(board464095878, 
"...............\n"
"..4......9..6..\n"
".........12.....\n"
".8.............\n"
"....12.6........\n"
"....13..........\n"
".5.............\n"
"...8...........\n"
"....1..........\n"
"....11..........\n"
"..2......2.....\n"
"......13........\n"
"...............\n"
".3.............\n"
"...............\n"
"...10..11........\n"
"......3........\n"
"...............\n"
"...............\n") == 0);
free(board464095878);
board464095878 = NULL;
assert( gamma_move(board, 8, 14, 1) == 1 );
assert( gamma_move(board, 9, 13, 15) == 1 );
assert( gamma_golden_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 5, 17) == 1 );
assert( gamma_move(board, 11, 5, 17) == 0 );


char* board105439278 = gamma_board(board);
assert( board105439278 != NULL );
assert( strcmp(board105439278, 
"...............\n"
"..4..10...9..6..\n"
".........12.....\n"
".8...........9.\n"
"....12.6........\n"
"....13..........\n"
".5.............\n"
"...8...........\n"
"....1..........\n"
"....11..........\n"
"..2......2.....\n"
"......13........\n"
"...............\n"
".3.............\n"
"...............\n"
"...10..11........\n"
"......3........\n"
"..............8\n"
"...............\n") == 0);
free(board105439278);
board105439278 = NULL;
assert( gamma_move(board, 13, 5, 18) == 1 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 14, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 7, 15) == 1 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board340302106 = gamma_board(board);
assert( board340302106 != NULL );
assert( strcmp(board340302106, 
".....13.........\n"
"..4..10...9..6..\n"
".........12.....\n"
".8.....2.....9.\n"
"....12.6........\n"
"....13..........\n"
".5.............\n"
"...8...........\n"
"....1..........\n"
"....115.........\n"
"..2......2.....\n"
"......13........\n"
"...............\n"
".3..........6..\n"
"....14..........\n"
"...10..11........\n"
"......3........\n"
"....1.........8\n"
"...............\n") == 0);
free(board340302106);
board340302106 = NULL;
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 13) == 1 );
assert( gamma_move(board, 9, 7, 14) == 1 );
assert( gamma_move(board, 10, 13, 8) == 1 );
assert( gamma_move(board, 11, 8, -1) == 0 );
assert( gamma_move(board, 13, 2, 7) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 18) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 11, 13) == 1 );
assert( gamma_free_fields(board, 2) == 249 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 11, 9, 13) == 1 );


char* board799744575 = gamma_board(board);
assert( board799744575 != NULL );
assert( strcmp(board799744575, 
"1....13.........\n"
"..4..10...9..6..\n"
".........12.....\n"
".8.....2.....9.\n"
"....12.69.4.....\n"
"...813....11.2...\n"
".5.............\n"
"...8...........\n"
"....1..........\n"
"....115.........\n"
"..2......2...10.\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..........6..\n"
"....14....7.....\n"
"...10..11........\n"
"......3....7...\n"
"..14.1.........8\n"
"...............\n") == 0);
free(board799744575);
board799744575 = NULL;
assert( gamma_move(board, 12, 8, 11) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 14, -1) == 0 );
assert( gamma_free_fields(board, 14) == 242 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 19) == 0 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_golden_move(board, 3, 17, 5) == 0 );
assert( gamma_free_fields(board, 4) == 241 );
assert( gamma_move(board, 5, 6, 18) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 12, 4) == 1 );
assert( gamma_move(board, 11, 14, 2) == 1 );
assert( gamma_move(board, 12, 6, 1) == 1 );
assert( gamma_free_fields(board, 12) == 236 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_free_fields(board, 14) == 236 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, -1, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_free_fields(board, 11) == 233 );
assert( gamma_move(board, 12, 8, 10) == 1 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, -1) == 0 );
assert( gamma_golden_move(board, 13, 8, 8) == 0 );
assert( gamma_move(board, 14, 10, 9) == 1 );
assert( gamma_busy_fields(board, 14) == 3 );
assert( gamma_free_fields(board, 14) == 231 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );


char* board969719007 = gamma_board(board);
assert( board969719007 != NULL );
assert( strcmp(board969719007, 
"1....135........\n"
"..4..10...9..6..\n"
".........12.....\n"
".8.....2.....9.\n"
"....12.69.4.....\n"
"...813....11.2...\n"
".5.............\n"
"...8....12...3..\n"
"....1...12......\n"
"10.1.115....14....\n"
"..2......2...10.\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..........6..\n"
"....1492..7..10..\n"
"...1..11........\n"
"..6...3....72.11\n"
"..14.1.12.......8\n"
"...............\n") == 0);
free(board969719007);
board969719007 = NULL;
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 229 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 7) == 228 );


char* board940833559 = gamma_board(board);
assert( board940833559 != NULL );
assert( strcmp(board940833559, 
"1....135........\n"
"..4..10...9..6..\n"
".........12.....\n"
".8.....2.....9.\n"
"....12.69.4.....\n"
"...813....11.2...\n"
".5.............\n"
"...8....12...3..\n"
"....1...12......\n"
"10.1.115....14....\n"
"..2......2...10.\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..........6..\n"
"....1492..7..10..\n"
"...1..11........\n"
"..6...3....72.11\n"
"..14.1.12..4....8\n"
"...............\n") == 0);
free(board940833559);
board940833559 = NULL;
assert( gamma_move(board, 8, 0, 16) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 12, -1, 2) == 0 );
assert( gamma_free_fields(board, 12) == 226 );
assert( gamma_move(board, 13, 0, 12) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 8, 11, 3) == 1 );


char* board863699782 = gamma_board(board);
assert( board863699782 != NULL );
assert( strcmp(board863699782, 
"1....135........\n"
"..4..10...9..6..\n"
"8........12.....\n"
".8.....2.....9.\n"
"....12.69.4.....\n"
"...813....1122...\n"
"135.............\n"
"...8....12...3..\n"
"....1...12......\n"
"10.1.115....14....\n"
"..2...9..2...10.\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..3.......6..\n"
"....1492..74.10..\n"
"...1..11....8...\n"
"..6...3....72.11\n"
"..14.1.12..4....8\n"
"..5.........1..\n") == 0);
free(board863699782);
board863699782 = NULL;
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 10, 10, 12) == 1 );
assert( gamma_free_fields(board, 11) == 217 );
assert( gamma_move(board, 12, 4, 4) == 0 );
assert( gamma_move(board, 13, 9, 3) == 1 );
assert( gamma_busy_fields(board, 14) == 3 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 5, 8, 14) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 8, 1, 13) == 1 );


char* board772299787 = gamma_board(board);
assert( board772299787 != NULL );
assert( strcmp(board772299787, 
"1....135........\n"
"..4..10...9..6..\n"
"8........12.....\n"
".8.....2.....9.\n"
"....12.6954.....\n"
".8.813....1122...\n"
"135........10....\n"
"...8....121..3..\n"
"....1...12......\n"
"10.1.115....14....\n"
"..2...99.2...10.\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..3.......6..\n"
"....1492..74.10..\n"
"...1..11..13.8...\n"
"..6...3....72.11\n"
"..14.1.12..4....8\n"
"..5.........1..\n") == 0);
free(board772299787);
board772299787 = NULL;
assert( gamma_move(board, 9, 10, 18) == 1 );
assert( gamma_move(board, 10, 14, 5) == 1 );
assert( gamma_move(board, 13, 7, 2) == 1 );
assert( gamma_golden_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 14, 3, 10) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );


char* board966794603 = gamma_board(board);
assert( board966794603 != NULL );
assert( strcmp(board966794603, 
"1....135...9....\n"
"..4..10...9..6..\n"
"8........12.....\n"
".8.....2.....9.\n"
"....12.6954.....\n"
".8.813....1122...\n"
"135........10....\n"
"...8....121..3..\n"
"...141...12......\n"
"10.1.115....14....\n"
"..2...99.2...10.\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..3.......6.10\n"
"....1492..74.10..\n"
"...1..11..13.8...\n"
"..6...313...72.11\n"
"1.14.1.12..4....8\n"
"..5.........1..\n") == 0);
free(board966794603);
board966794603 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 17) == 1 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 17) == 1 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_move(board, 9, 9, 19) == 0 );
assert( gamma_free_fields(board, 9) == 204 );
assert( gamma_golden_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 10, 7, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 5, 12) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 6) == 0 );


char* board313605134 = gamma_board(board);
assert( board313605134 != NULL );
assert( strcmp(board313605134, 
"1....135...9....\n"
"..4..107.49..6..\n"
"8........12.....\n"
".8.....2.....9.\n"
"....12.6954.....\n"
".8.813....1122...\n"
"135...11....10....\n"
"...8....121..3..\n"
"...141...12......\n"
"10.1.115..8.14....\n"
"..2...99.2...105\n"
"8.13...13.....3..\n"
"....9..........\n"
".3..3.......6.10\n"
"....149210.74.10..\n"
"...1..11..13.8...\n"
"..6...313...72.11\n"
"1.14.1.12..4....8\n"
"..5.........1..\n") == 0);
free(board313605134);
board313605134 = NULL;
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 202 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 15, 13) == 0 );
assert( gamma_move(board, 4, 15, 18) == 0 );
assert( gamma_move(board, 5, 15, 17) == 0 );
assert( gamma_move(board, 6, 0, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_free_fields(board, 12) == 196 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 7, 12) == 0 );
assert( gamma_move(board, 14, 15, 12) == 0 );
assert( gamma_busy_fields(board, 14) == 4 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 16) == 1 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_free_fields(board, 5) == 194 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_move(board, 9, 0, 13) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_free_fields(board, 10) == 193 );
assert( gamma_move(board, 11, 2, 10) == 1 );
assert( gamma_move(board, 12, -1, 13) == 0 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 12, 18) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, -1, 13) == 0 );
assert( gamma_golden_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );


char* board193789874 = gamma_board(board);
assert( board193789874 != NULL );
assert( strcmp(board193789874, 
"1....135...9.2..\n"
"..4..107.49..6..\n"
"8.4......12.....\n"
"68.....2.....9.\n"
"....12.6954.....\n"
"98.813....1122...\n"
"135...11....10....\n"
"...8....121..3..\n"
"9.11141...12......\n"
"10.1.115..8.14....\n"
".102...99.2...105\n"
"875...13.....3..\n"
".2..9..........\n"
".3..3.......6.10\n"
"69..149210.74.10..\n"
"...113.11..13.8...\n"
"..6...313...72511\n"
"1.14111.12..4..1.8\n"
"..5.....8...1..\n") == 0);
free(board193789874);
board193789874 = NULL;
assert( gamma_move(board, 12, 8, 3) == 1 );
assert( gamma_move(board, 13, 1, 1) == 1 );
assert( gamma_move(board, 14, 5, 14) == 1 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_free_fields(board, 1) == 183 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 4) == 181 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 3, 10) == 0 );


char* board514431367 = gamma_board(board);
assert( board514431367 != NULL );
assert( strcmp(board514431367, 
"1....135...9.2..\n"
"..4..107.49..6..\n"
"8.4......12.....\n"
"68.2...2.....9.\n"
"....12146954.....\n"
"98.813....1122...\n"
"135...11....10....\n"
"...8....121..3..\n"
"9.11141...12......\n"
"10.1.115..8.14....\n"
".102..399.2...105\n"
"875...13.....3..\n"
".2..9..........\n"
".3..3....6..6.10\n"
"69..149210.74.10..\n"
"...113.11.1213.8...\n"
"..6...313...72511\n"
"11314111.12..4..1.8\n"
"..5.....8...1..\n") == 0);
free(board514431367);
board514431367 = NULL;
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 14, 10, 18) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 180 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 180 );


char* board452924865 = gamma_board(board);
assert( board452924865 != NULL );
assert( strcmp(board452924865, 
"1....135...9.2..\n"
"..4..107.49..6..\n"
"8.4......12.....\n"
"68.2...2.....9.\n"
"....12146954.....\n"
"98.813....1122...\n"
"135...11....10....\n"
"...8....121..3..\n"
"9.11141...12......\n"
"10.1.115..8.14....\n"
".102..399.2...105\n"
"875...13.....3..\n"
".2..9..........\n"
".3..3....6..6.10\n"
"69..149210.74.10..\n"
"...113.11.1213.8...\n"
"..6...313...72511\n"
"11314111.12..4..1.8\n"
"..5.....8...1..\n") == 0);
free(board452924865);
board452924865 = NULL;
assert( gamma_golden_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 18) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_golden_move(board, 10, 15, 8) == 0 );
assert( gamma_move(board, 11, 10, 16) == 1 );
assert( gamma_move(board, 12, 10, 12) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );


char* board367832458 = gamma_board(board);
assert( board367832458 != NULL );
assert( strcmp(board367832458, 
"1.5..135...9.2..\n"
"..4..107.49..6..\n"
"8.4......1211....\n"
"68.2...2.....9.\n"
"....12146954.....\n"
"98.813....1122...\n"
"135...11....10....\n"
"...8....121..3..\n"
"9.11143...12......\n"
"10.1.115..8.14....\n"
".102..399.2...105\n"
"875...13.....3..\n"
".2..9..........\n"
".3..3.9..6..6.10\n"
"69..149210.74.10..\n"
"...113.11.1213.8...\n"
"..6...313...72511\n"
"11314111.12..4..1.8\n"
"..5.....8...1..\n") == 0);
free(board367832458);
board367832458 = NULL;
assert( gamma_move(board, 14, 14, 15) == 1 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 2, 10, 15) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_move(board, 7, 2, 19) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_golden_move(board, 9, 1, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 11, -1) == 0 );
assert( gamma_move(board, 13, 11, 0) == 1 );
assert( gamma_move(board, 14, -1, 9) == 0 );
assert( gamma_move(board, 1, 5, 16) == 1 );
assert( gamma_free_fields(board, 1) == 171 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 10, -1) == 0 );
assert( gamma_move(board, 10, 15, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 13, 5, 7) == 1 );
assert( gamma_move(board, 14, 7, 17) == 1 );
assert( gamma_free_fields(board, 1) == 167 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_move(board, 2, 18, 6) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


char* board778382450 = gamma_board(board);
assert( board778382450 != NULL );
assert( strcmp(board778382450, 
"1.5..135...9.2..\n"
"..4..1071449..6..\n"
"8.4..1...1211....\n"
"68.2...2..2..914\n"
"....12146954.....\n"
"98.813.1..1122...\n"
"135...11....10...5\n"
"...8....121..3..\n"
"9.11143...12......\n"
"10.1.115..8.14....\n"
".102..399.2...105\n"
"875..1313.....3..\n"
".2..9.....2....\n"
".3..3.9..6..6.10\n"
"69..149210.74.10..\n"
"...113.11.1213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..5.....8..131..\n") == 0);
free(board778382450);
board778382450 = NULL;
assert( gamma_move(board, 5, 9, 15) == 1 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 3, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_move(board, 11, 14, 9) == 1 );
assert( gamma_move(board, 12, 14, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 15, 5) == 0 );
assert( gamma_move(board, 8, 15, 18) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 10, 11, 10) == 1 );
assert( gamma_free_fields(board, 10) == 159 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 14, 3, 19) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 15, 4) == 0 );


char* board353705216 = gamma_board(board);
assert( board353705216 != NULL );
assert( strcmp(board353705216, 
"1.5..135...9.2..\n"
"..4..1071449..6..\n"
"8.4..1...1211....\n"
"68.2...2.52..914\n"
"....12146954.....\n"
"98.813.1..1122..12\n"
"135...11....10...5\n"
"...8....121..3..\n"
"9.11143...12..10...\n"
"10.1.115..8.14...11\n"
".10210.399.2...105\n"
"875..13134....3..\n"
".2.69.....2....\n"
".3..3.9..6..6.10\n"
"69..149210.74.10..\n"
".8.113.11.1213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..5.....8..131..\n") == 0);
free(board353705216);
board353705216 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 17) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 11, 15) == 1 );
assert( gamma_move(board, 10, 2, -1) == 0 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 1, 10, 14) == 1 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 14, 12) == 0 );
assert( gamma_move(board, 9, -1, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 14 );


char* board380880813 = gamma_board(board);
assert( board380880813 != NULL );
assert( strcmp(board380880813, 
"1.5..135...9.2..\n"
"..4.61071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"98.813.1..1122..12\n"
"135..711....10...5\n"
"...8....1212.3..\n"
"9.11143...12..10...\n"
"10.1.115..8.14...11\n"
".102104399.2...105\n"
"875..13134....3..\n"
".2.69.....2....\n"
".3..3.9..6..6.10\n"
"69..149210.74.10..\n"
".8.113.11.1213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..5.....8..131..\n") == 0);
free(board380880813);
board380880813 = NULL;
assert( gamma_move(board, 11, 15, 1) == 0 );
assert( gamma_move(board, 12, 11, 7) == 1 );
assert( gamma_move(board, 13, 7, 3) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 150 );
assert( gamma_move(board, 3, 3, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_free_fields(board, 8) == 147 );
assert( gamma_golden_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 11, -1, 15) == 0 );
assert( gamma_move(board, 12, 4, 18) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, -1, 1) == 0 );
assert( gamma_move(board, 14, 9, 19) == 0 );
assert( gamma_free_fields(board, 1) == 146 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 4, 13, 18) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 15) == 0 );
assert( gamma_move(board, 6, 10, 16) == 0 );
assert( gamma_move(board, 7, 14, 4) == 1 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 11, 15) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, -1, 19) == 0 );
assert( gamma_move(board, 14, 15, 5) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 2, 13) == 1 );


char* board903572050 = gamma_board(board);
assert( board903572050 != NULL );
assert( strcmp(board903572050, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1.61122..12\n"
"1355.711....10...5\n"
"...8....1212.3..\n"
"9.11143...12..10...\n"
"10.1.115..8.14...11\n"
".102104399.2...105\n"
"875..13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..6.10\n"
"69..149210.74.10.7\n"
".8.113.11131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..5.....8..131..\n") == 0);
free(board903572050);
board903572050 = NULL;
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_free_fields(board, 3) == 142 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 7, 19) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_free_fields(board, 8) == 141 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 7, 15) == 0 );
assert( gamma_move(board, 13, -1, 10) == 0 );
assert( gamma_move(board, 14, 8, 12) == 1 );


char* board523948001 = gamma_board(board);
assert( board523948001 != NULL );
assert( strcmp(board523948001, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1.61122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12..10...\n"
"10.1.115..8.14...11\n"
".102104399.2...105\n"
"875..13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..6.10\n"
"69..149210.74.10.7\n"
".8.113.11131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....8..131..\n") == 0);
free(board523948001);
board523948001 = NULL;
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_free_fields(board, 2) == 138 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 12, 2, -1) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 2, 3) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 13, 17, 12) == 0 );


char* board656623377 = gamma_board(board);
assert( board656623377 != NULL );
assert( strcmp(board656623377, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1461122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12..10...\n"
"1071.115..8.14...11\n"
".102104399.2...105\n"
"875..13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..6.10\n"
"691.149210.74.10.7\n"
".813113.11131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....8..131..\n") == 0);
free(board656623377);
board656623377 = NULL;
assert( gamma_move(board, 14, 10, 12) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );


char* board283171400 = gamma_board(board);
assert( board283171400 != NULL );
assert( strcmp(board283171400, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1461122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12..10...\n"
"1071.115..8.14...11\n"
".102104399.2...105\n"
"875..13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..6.10\n"
"691.149210.74.10.7\n"
".813113.11131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....8..131..\n") == 0);
free(board283171400);
board283171400 = NULL;
assert( gamma_move(board, 2, 12, -1) == 0 );
assert( gamma_move(board, 3, 12, 8) == 1 );


char* board153188117 = gamma_board(board);
assert( board153188117 != NULL );
assert( strcmp(board153188117, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1461122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12..10...\n"
"1071.115..8.14...11\n"
".102104399.2..3105\n"
"875..13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..6.10\n"
"691.149210.74.10.7\n"
".813113.11131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....8..131..\n") == 0);
free(board153188117);
board153188117 = NULL;
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 9, -1, 10) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 7, 13) == 0 );


char* board851836045 = gamma_board(board);
assert( board851836045 != NULL );
assert( strcmp(board851836045, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1461122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12..10...\n"
"1071.115..8.14...11\n"
".102104399.2..3105\n"
"875..13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..6.10\n"
"691.149210.74.10.7\n"
".813113.11131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....8..131..\n") == 0);
free(board851836045);
board851836045 = NULL;
assert( gamma_golden_move(board, 11, 6, 4) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 14, 11, 2) == 0 );
assert( gamma_free_fields(board, 14) == 134 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_free_fields(board, 1) == 133 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 133 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 17) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_free_fields(board, 7) == 133 );
assert( gamma_free_fields(board, 8) == 133 );
assert( gamma_move(board, 9, 0, 15) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 13, 5) == 1 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 14, 3, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );


char* board732103842 = gamma_board(board);
assert( board732103842 != NULL );
assert( strcmp(board732103842, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1461122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12..10...\n"
"1071.115..8.14...11\n"
".102104399.2..3105\n"
"87514.13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..61110\n"
"691.1491110.74.10.7\n"
".8131131211131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....81.131..\n") == 0);
free(board732103842);
board732103842 = NULL;
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board733928240 = gamma_board(board);
assert( board733928240 != NULL );
assert( strcmp(board733928240, 
"1.5.12135...9.24.\n"
"..4361071449..6..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541....\n"
"982813.1461122..12\n"
"1355.711..14.10...5\n"
"...8....1212.3..\n"
"9711143...12.210...\n"
"1071.115..8.14...11\n"
".102104399.2..3105\n"
"87514.13134...123..\n"
".2.69.....2....\n"
".31.3.9..6..61110\n"
"691.1491110.74.10.7\n"
".8131131211131213.86..\n"
"..6...313...72511\n"
"1914111.12..4..1.8\n"
"..510....81.131..\n") == 0);
free(board733928240);
board733928240 = NULL;
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 6) == 129 );
assert( gamma_move(board, 7, 14, 18) == 1 );
assert( gamma_move(board, 8, 15, 12) == 0 );
assert( gamma_move(board, 9, 11, 17) == 1 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 14, 13) == 0 );
assert( gamma_move(board, 13, 6, 12) == 1 );
assert( gamma_move(board, 14, 11, 6) == 1 );
assert( gamma_busy_fields(board, 14) == 10 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 13, 14) == 1 );
assert( gamma_move(board, 10, 13, 7) == 1 );
assert( gamma_free_fields(board, 10) == 121 );
assert( gamma_move(board, 11, 12, 19) == 0 );
assert( gamma_move(board, 12, 13, 9) == 1 );
assert( gamma_busy_fields(board, 12) == 11 );
assert( gamma_move(board, 13, 7, 1) == 1 );
assert( gamma_busy_fields(board, 13) == 13 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );


char* board913575250 = gamma_board(board);
assert( board913575250 != NULL );
assert( strcmp(board913575250, 
"1.5.12135...9.247\n"
"..4361071449.96..\n"
"8.4..1..51211....\n"
"68.2...2.529.914\n"
"....121469541..9.\n"
"982813.1461122..12\n"
"1355.71113.14.10...5\n"
"...8....1212.3..\n"
"9711143...12.210...\n"
"1071.115..8.14..1211\n"
".102104399.2..3105\n"
"87514313134...12310.\n"
".2.69.....214...\n"
".31.3.9..6..61110\n"
"691.1491110.74.10.7\n"
".8131131211131213.861.\n"
"..6...313...72511\n"
"1914111.1213.4..1.8\n"
"..510....81.131..\n") == 0);
free(board913575250);
board913575250 = NULL;
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_free_fields(board, 8) == 117 );
assert( gamma_move(board, 9, 14, 10) == 1 );
assert( gamma_move(board, 10, 15, 8) == 0 );
assert( gamma_move(board, 12, 12, 16) == 1 );
assert( gamma_move(board, 13, 12, 14) == 1 );


char* board683147321 = gamma_board(board);
assert( board683147321 != NULL );
assert( strcmp(board683147321, 
"1.5.12135...9.247\n"
"..4361071449.96..\n"
"8.4..1..51211.12..\n"
"68.2...2.529.914\n"
"....121469541.139.\n"
"98281361461122..12\n"
"1355.71113.14.10...5\n"
"...8....1212.3..\n"
"9711143...12.210..9\n"
"1071.115..8.14..1211\n"
"5102104399.2..3105\n"
"87514313134...12310.\n"
".2.69.....214...\n"
".31.3.9..6..61110\n"
"691.1491110.74.10.7\n"
".8131131211131213.861.\n"
"..6...313...72511\n"
"1914111.1213.4..1.8\n"
"..510....81.131..\n") == 0);
free(board683147321);
board683147321 = NULL;
assert( gamma_move(board, 14, 11, 19) == 0 );
assert( gamma_move(board, 1, 15, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 114 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 15, -1) == 0 );
assert( gamma_move(board, 7, 0, 16) == 0 );
assert( gamma_free_fields(board, 7) == 114 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_golden_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 11, 11) == 1 );
assert( gamma_free_fields(board, 12) == 113 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 4) == 0 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_golden_move(board, 1, 17, 5) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board568908108 = gamma_board(board);
assert( board568908108 != NULL );
assert( strcmp(board568908108, 
"1.5.12135...9.247\n"
"..4361071449.96..\n"
"8.4..1..51211.12..\n"
"68.2...2.529.914\n"
"....121469541.139.\n"
"98281361461122..12\n"
"1355.71113.14.10...5\n"
"...8....1212113..\n"
"9711143...12.210..9\n"
"1071.115..8.14..1211\n"
"5102104399.2..3105\n"
"87514313134...12310.\n"
".2.69.....214...\n"
".31.3.9..6..61110\n"
"691.1491110.74.10.7\n"
".8131131211131213.861.\n"
"..6...313...72511\n"
"1914111.1213.4..1.8\n"
"..510....81.131.1\n") == 0);
free(board568908108);
board568908108 = NULL;
assert( gamma_move(board, 5, 2, 19) == 0 );
assert( gamma_move(board, 6, 0, 18) == 0 );
assert( gamma_move(board, 7, 4, 15) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 11, 15) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, -1, 17) == 0 );
assert( gamma_move(board, 12, 10, 11) == 0 );
assert( gamma_move(board, 13, 6, 9) == 1 );
assert( gamma_move(board, 14, 11, 2) == 0 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_golden_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_free_fields(board, 9) == 109 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_free_fields(board, 12) == 109 );
assert( gamma_move(board, 13, 11, 19) == 0 );
assert( gamma_move(board, 14, 14, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_golden_move(board, 3, 18, 13) == 0 );
assert( gamma_move(board, 5, 8, 18) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 15, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, -1) == 0 );
assert( gamma_move(board, 10, 2, 18) == 0 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_busy_fields(board, 13) == 15 );
assert( gamma_free_fields(board, 13) == 104 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 7, 11, 16) == 1 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_golden_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 14, 3) == 1 );
assert( gamma_move(board, 9, 15, -1) == 0 );
assert( gamma_busy_fields(board, 9) == 17 );
assert( gamma_move(board, 10, 7, 6) == 1 );
assert( gamma_free_fields(board, 10) == 99 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 14, 4, 4) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 4, 19) == 0 );
assert( gamma_golden_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 2, 17) == 0 );
assert( gamma_move(board, 9, -1, 5) == 0 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_move(board, 11, 4, -1) == 0 );


char* board747073300 = gamma_board(board);
assert( board747073300 != NULL );
assert( strcmp(board747073300, 
"1.5.12135.5.9.247\n"
"..4361071449.96..\n"
"8.4..1..51211712..\n"
"68.271.2.529.914\n"
"....121469541.139.\n"
"98281361461122..12\n"
"1355.71113.14.10...5\n"
"...8....1212113..\n"
"9711143...12.210..9\n"
"1071.11513.8.14..122\n"
"5102104399.2.13105\n"
"87514313134..112310.\n"
".2.69..10..214...\n"
".31.3.9.116..61110\n"
"691.1491110.74.10.7\n"
".8131131211131213.8618\n"
".67...31310..72511\n"
"1914111.1213.4..1.8\n"
"..51032..817131.1\n") == 0);
free(board747073300);
board747073300 = NULL;
assert( gamma_move(board, 14, 1, 8) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 14, 19) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 9, 0, 18) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 10) == 1 );
assert( gamma_free_fields(board, 11) == 93 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_free_fields(board, 3) == 92 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_free_fields(board, 7) == 92 );
assert( gamma_move(board, 8, 15, 17) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 15, 1) == 0 );
assert( gamma_move(board, 10, 10, 12) == 0 );
assert( gamma_move(board, 11, 11, 14) == 1 );
assert( gamma_free_fields(board, 11) == 91 );
assert( gamma_move(board, 12, 9, 6) == 1 );
assert( gamma_move(board, 13, 15, 14) == 0 );
assert( gamma_golden_move(board, 13, 1, 2) == 1 );
assert( gamma_move(board, 14, -1, 1) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 7, 14, 17) == 1 );
assert( gamma_golden_move(board, 7, 11, 3) == 0 );


char* board973560105 = gamma_board(board);
assert( board973560105 != NULL );
assert( strcmp(board973560105, 
"1.5.12135.5.9.247\n"
"..4361071449.96.7\n"
"8.4..1..51211712..\n"
"68.271.2.529.914\n"
"....12146954111139.\n"
"98281361461122..12\n"
"1355.71113.14.10...5\n"
"...8....1212113..\n"
"9711143...1211210..9\n"
"1071.11513.8314..122\n"
"5102104399.2.13105\n"
"87514313134..112310.\n"
".2.69..10.12214..3\n"
".31.3.9.116..61110\n"
"691.1491110.74210.7\n"
".8131131211131213.8618\n"
".137...31310..72511\n"
"1914111.121384..1.8\n"
"..51032..81713151\n") == 0);
free(board973560105);
board973560105 = NULL;
assert( gamma_golden_move(board, 8, 17, 11) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 17 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_move(board, 13, 11, 13) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 12, 15) == 1 );
assert( gamma_move(board, 1, -1, 17) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 4, 16) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 14, 7) == 1 );


gamma_delete(board);

    return 0;
}
