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
uuid: 122367765
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 11, 14, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_golden_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_move(board, 11, 12, 4) == 1 );
assert( gamma_move(board, 12, 14, 8) == 1 );
assert( gamma_move(board, 13, 4, 5) == 1 );
assert( gamma_move(board, 13, 14, 2) == 1 );
assert( gamma_move(board, 14, 3, 7) == 1 );
assert( gamma_move(board, 14, 0, 8) == 1 );
assert( gamma_golden_move(board, 14, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_free_fields(board, 3) == 143 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_free_fields(board, 9) == 136 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 10, 10, 6) == 1 );
assert( gamma_move(board, 11, 3, 11) == 0 );
assert( gamma_free_fields(board, 11) == 134 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_free_fields(board, 12) == 133 );
assert( gamma_move(board, 13, 2, 9) == 1 );
assert( gamma_move(board, 13, 2, 1) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_free_fields(board, 2) == 130 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 130 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_move(board, 11, 0, 4) == 0 );
assert( gamma_move(board, 11, 14, 9) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 13, 0, 12) == 0 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );


char* board839874994 = gamma_board(board);
assert( board839874994 != NULL );
assert( strcmp(board839874994, 
"9..9...5.......\n"
"6.13....5.16...11\n"
"142........6...12\n"
"..114...........\n"
".......73.10....\n"
".6..1397..8...3.\n"
"9....6...10.711..\n"
"....102..118....3\n"
"693912.........13\n"
"..13...2.2..8...\n"
"12....4....8....\n") == 0);
free(board839874994);
board839874994 = NULL;
assert( gamma_move(board, 10, 2, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 1, 13) == 0 );
assert( gamma_move(board, 11, 3, 8) == 1 );
assert( gamma_move(board, 12, 10, 2) == 1 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 8, 5) == 1 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_free_fields(board, 1) == 112 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );


char* board438960697 = gamma_board(board);
assert( board438960697 != NULL );
assert( strcmp(board438960697, 
"9..9...5.......\n"
"6113....5.16...11\n"
"1421011.5....6.1.12\n"
"..114...........\n"
".......73.10....\n"
".6..1397.138...3.\n"
"9....6...10.711..\n"
"....102..118....3\n"
"693912.....12...13\n"
"..13...2.2..8...\n"
"12....4....8....\n") == 0);
free(board438960697);
board438960697 = NULL;
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 1, 14) == 0 );
assert( gamma_move(board, 11, 12, 9) == 1 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_golden_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 12, 6, 2) == 1 );
assert( gamma_move(board, 13, 6, 8) == 1 );
assert( gamma_move(board, 13, 12, 3) == 1 );
assert( gamma_move(board, 14, 0, 1) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 13, 4, 8) == 1 );
assert( gamma_move(board, 13, 9, 2) == 1 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_move(board, 14, 2, 8) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 8, 11, 9) == 1 );
assert( gamma_move(board, 10, 4, 13) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 13, 0, 13) == 0 );
assert( gamma_move(board, 13, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_free_fields(board, 9) == 85 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 12, 5, 11) == 0 );
assert( gamma_move(board, 12, 7, 2) == 1 );


char* board160159427 = gamma_board(board);
assert( board160159427 != NULL );
assert( strcmp(board160159427, 
"9..9.2.5.......\n"
"6113...45.16811.11\n"
"142101113513711.6.1712\n"
".2114......8....\n"
"......673410....\n"
".62.1397.138...3.\n"
"9....6...10.711..\n"
"11.1361024.118..1353\n"
"693912.121261312...13\n"
"14913...262..8...\n"
"12....4....8....\n") == 0);
free(board160159427);
board160159427 = NULL;
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_move(board, 14, 5, 12) == 0 );
assert( gamma_move(board, 14, 10, 2) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );


char* board362316531 = gamma_board(board);
assert( board362316531 != NULL );
assert( strcmp(board362316531, 
"9..9.2.5.......\n"
"6113...45.16811.11\n"
"142101113513711.6.1712\n"
".2114......8....\n"
"....13.673410....\n"
".62.1397.138...3.\n"
"9....6...10.711..\n"
"11.1361024.118..1353\n"
"693912.121261312...13\n"
"14913...262..8...\n"
"12....4....8....\n") == 0);
free(board362316531);
board362316531 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 14, 10) == 1 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_free_fields(board, 9) == 75 );
assert( gamma_golden_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 13, 3, 10) == 0 );
assert( gamma_move(board, 14, 2, 11) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board362167924 = gamma_board(board);
assert( board362167924 != NULL );
assert( strcmp(board362167924, 
"93.9.2.5.4....8\n"
"6113...45216811.11\n"
"142101113513711.6.1712\n"
".2114......8....\n"
"....13.673410....\n"
".62.1397.138...3.\n"
"95...6...10.711..\n"
"1161361024.118..1353\n"
"6939127121261312.2.13\n"
"149137..262..8...\n"
"12....411...8....\n") == 0);
free(board362167924);
board362167924 = NULL;
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_move(board, 12, 12, 1) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 9, 7) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 2, 2) == 0 );
assert( gamma_move(board, 14, 9, 10) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 9, 11, 10) == 1 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_golden_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 10, 0, 7) == 1 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_free_fields(board, 10) == 65 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 9) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 13, 0, 10) == 0 );
assert( gamma_busy_fields(board, 13) == 11 );
assert( gamma_move(board, 14, 1, 13) == 0 );
assert( gamma_move(board, 14, 14, 2) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_golden_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 3, 9) == 1 );
assert( gamma_move(board, 12, 13, 6) == 1 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_move(board, 13, 12, 5) == 1 );
assert( gamma_move(board, 14, 13, 8) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 3) == 0 );


char* board909222186 = gamma_board(board);
assert( board909222186 != NULL );
assert( strcmp(board909222186, 
"93.9.2.5.4.9..8\n"
"611312..45216811.11\n"
"142101113513711.6.1712\n"
"102114.8.2..8....\n"
"....13.673410..12.\n"
".62.1397.138..133.\n"
"95..96.5.10.711..\n"
"1161361024.118.41353\n"
"6939127121261312.2.13\n"
"149137103262..812..\n"
"12....411...8....\n") == 0);
free(board909222186);
board909222186 = NULL;
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_golden_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_free_fields(board, 10) == 58 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 12, 7, 13) == 0 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_busy_fields(board, 13) == 12 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 4, 13) == 0 );
assert( gamma_move(board, 11, 12, 10) == 1 );
assert( gamma_move(board, 12, 1, 10) == 0 );
assert( gamma_move(board, 12, 6, 9) == 0 );
assert( gamma_move(board, 13, 9, 5) == 0 );
assert( gamma_move(board, 13, 13, 8) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_golden_move(board, 14, 10, 11) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );


char* board171816936 = gamma_board(board);
assert( board171816936 != NULL );
assert( strcmp(board171816936, 
"93.9.2.5.44911.8\n"
"611312..45216811.11\n"
"142101113513711.6.1712\n"
"102114.8.27.8....\n"
"1...13.673410..12.\n"
"962.1397.138..133.\n"
"95..96.5.10.711..\n"
"1161361024.118.41353\n"
"6939127121261312.2.13\n"
"149137103262..812..\n"
"12....411...8..6.\n") == 0);
free(board171816936);
board171816936 = NULL;
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 10, 7, 10) == 0 );
assert( gamma_move(board, 11, 1, 13) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 13) == 0 );
assert( gamma_move(board, 13, 1, 2) == 0 );
assert( gamma_move(board, 14, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );


char* board513206591 = gamma_board(board);
assert( board513206591 != NULL );
assert( strcmp(board513206591, 
"93.952.5.44911.8\n"
"611312..45216811.11\n"
"142101113513711.6.1712\n"
"102114.8.27.8....\n"
"1...13.673410..12.\n"
"962.1397.138..133.\n"
"95..96.5.10.711..\n"
"1161361024.118.41353\n"
"6939127121261312.2.13\n"
"149137103262..812..\n"
"12....411...8..6.\n") == 0);
free(board513206591);
board513206591 = NULL;
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );


char* board927192638 = gamma_board(board);
assert( board927192638 != NULL );
assert( strcmp(board927192638, 
"93.952.5.44911.8\n"
"611312..45216811.11\n"
"142101113513711.6.1712\n"
"102114.8.27.8....\n"
"1...13.673410..12.\n"
"962.1397.138..133.\n"
"95..96.5.10.711..\n"
"1161361024.118.41353\n"
"6939127121261312.2.13\n"
"149137103262..812..\n"
"12....411...8..6.\n") == 0);
free(board927192638);
board927192638 = NULL;
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 7, 14) == 0 );
assert( gamma_move(board, 11, 12, 6) == 1 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_move(board, 14, 10, 6) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_golden_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 9) == 1 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 9, 10) == 0 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 14, 7) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 14, 10, 9) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 13, 9) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 9, 14, 10) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 10, 9, 7) == 1 );
assert( gamma_move(board, 11, 13, 1) == 0 );
assert( gamma_move(board, 11, 13, 2) == 1 );
assert( gamma_free_fields(board, 11) == 42 );
assert( gamma_move(board, 12, 9, 8) == 1 );
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 13, 2, 9) == 0 );
assert( gamma_golden_move(board, 13, 6, 10) == 0 );
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 14, 14, 5) == 1 );
assert( gamma_free_fields(board, 14) == 40 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 11, 7, 12) == 0 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 12, 11, 9) == 0 );
assert( gamma_move(board, 13, 10, 13) == 0 );
assert( gamma_golden_move(board, 13, 8, 2) == 0 );
assert( gamma_free_fields(board, 14) == 39 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 12, 9, 0) == 1 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 14, 10, 6) == 0 );
assert( gamma_move(board, 14, 8, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 10) == 0 );
assert( gamma_move(board, 14, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 3, 5) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 12, 7, 13) == 0 );
assert( gamma_free_fields(board, 12) == 30 );
assert( gamma_move(board, 13, 5, 1) == 0 );
assert( gamma_golden_move(board, 13, 6, 6) == 0 );


char* board632100375 = gamma_board(board);
assert( board632100375 != NULL );
assert( strcmp(board632100375, 
"934952.5144911.8\n"
"611312.245216811611\n"
"14210111351371112651712\n"
"102114.8.27108.1.12\n"
"1...13.673410.1112.\n"
"9132141397.138.713314\n"
"95..96105.10.711..\n"
"1161361024.118.41353\n"
"6939127121261312.21113\n"
"149171032628.81255\n"
"12..4.411.31284.61\n") == 0);
free(board632100375);
board632100375 = NULL;
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 14, 8, 10) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_golden_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );


gamma_delete(board);

    return 0;
}
