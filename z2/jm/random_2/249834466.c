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
uuid: 249834466
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 13, 15, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_move(board, 13, 8, 7) == 1 );
assert( gamma_move(board, 14, 4, 4) == 1 );
assert( gamma_move(board, 14, 6, 6) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_free_fields(board, 14) == 102 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_move(board, 15, 3, 7) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );


char* board612671617 = gamma_board(board);
assert( board612671617 != NULL );
assert( strcmp(board612671617, 
".........\n"
"....4....\n"
"...6.....\n"
".11....1..\n"
"...5.....\n"
"...15....13\n"
"......14.8\n"
".........\n"
"....14...12\n"
"......3..\n"
"....1...2\n"
".7.5..11..\n"
"67.......\n") == 0);
free(board612671617);
board612671617 = NULL;
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 9, 6) == 0 );
assert( gamma_move(board, 11, 5, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 4) == 1 );
assert( gamma_move(board, 12, 8, 12) == 1 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_move(board, 14, 5, 8) == 1 );
assert( gamma_move(board, 14, 4, 8) == 1 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board369972282 = gamma_board(board);
assert( board369972282 != NULL );
assert( strcmp(board369972282, 
"........12\n"
"....4....\n"
"...6.....\n"
".11....1..\n"
"...51414..8\n"
"45.15..10.13\n"
"......14.8\n"
"9105......\n"
".125.143..12\n"
"....9.3..\n"
"45..1...2\n"
".7.5.1111..\n"
"67.......\n") == 0);
free(board369972282);
board369972282 = NULL;
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_free_fields(board, 11) == 80 );
assert( gamma_golden_move(board, 11, 11, 4) == 0 );
assert( gamma_move(board, 12, 2, 10) == 1 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 13, 0, 4) == 1 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_move(board, 14, 8, 6) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 11, 8) == 0 );
assert( gamma_move(board, 15, 0, 3) == 1 );
assert( gamma_busy_fields(board, 15) == 2 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 11, 1) == 0 );
assert( gamma_move(board, 10, 5, 12) == 1 );
assert( gamma_move(board, 11, 12, 6) == 0 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 13, 10, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board178582842 = gamma_board(board);
assert( board178582842 != NULL );
assert( strcmp(board178582842, 
"...6.10..12\n"
"....4....\n"
"..126..7..\n"
".11....1..\n"
"...51414..8\n"
"45.15.710.13\n"
"......14.8\n"
"9105...8..\n"
"13125.143..12\n"
"15...943..\n"
"451.1..122\n"
"97.5.1111..\n"
"67......11\n") == 0);
free(board178582842);
board178582842 = NULL;
assert( gamma_move(board, 14, 2, 7) == 1 );
assert( gamma_move(board, 15, 0, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 11, 0, 4) == 0 );
assert( gamma_free_fields(board, 12) == 60 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 13, 8, 10) == 1 );
assert( gamma_move(board, 14, 5, 3) == 0 );
assert( gamma_move(board, 15, 11, 7) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 13, 5, 10) == 1 );
assert( gamma_move(board, 14, 9, 7) == 0 );
assert( gamma_move(board, 14, 8, 9) == 1 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 15, 6, 11) == 1 );
assert( gamma_move(board, 15, 3, 10) == 0 );
assert( gamma_busy_fields(board, 15) == 3 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_golden_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_golden_move(board, 11, 7, 2) == 1 );
assert( gamma_move(board, 12, 1, 11) == 1 );
assert( gamma_free_fields(board, 12) == 48 );
assert( gamma_free_fields(board, 13) == 48 );
assert( gamma_move(board, 14, 6, 1) == 0 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 1, 1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_free_fields(board, 6) == 45 );


char* board960679668 = gamma_board(board);
assert( board960679668 != NULL );
assert( strcmp(board960679668, 
"..46.10..12\n"
".12..4.15.7\n"
"6.126.137.13\n"
"411..2.1.14\n"
"...51414.18\n"
"451415.710313\n"
"..3.9.1458\n"
"9105..68..\n"
"13125.1434212\n"
"15..6943..\n"
"45191..112\n"
"97.5101111.6\n"
"67......11\n") == 0);
free(board960679668);
board960679668 = NULL;
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_free_fields(board, 10) == 45 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 10) == 1 );
assert( gamma_move(board, 11, 8, 12) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 14, 5, 12) == 0 );
assert( gamma_move(board, 15, 0, 4) == 0 );
assert( gamma_busy_fields(board, 15) == 3 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );


char* board231431866 = gamma_board(board);
assert( board231431866 != NULL );
assert( strcmp(board231431866, 
"..46510..12\n"
".12..4.15.7\n"
"6.126.1371113\n"
"411..2.1.14\n"
"...51414.18\n"
"451415.710313\n"
"..3.9.1458\n"
"9105..68..\n"
"13125.1434212\n"
"15..6943..\n"
"45191..112\n"
"97.5101111.6\n"
"67......11\n") == 0);
free(board231431866);
board231431866 = NULL;
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_free_fields(board, 9) == 43 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_move(board, 11, 4, 12) == 0 );


char* board934340423 = gamma_board(board);
assert( board934340423 != NULL );
assert( strcmp(board934340423, 
"..46510..12\n"
".12..4.15.7\n"
"6.126.1371113\n"
"411..2.1.14\n"
"...51414.18\n"
"451415.710313\n"
"..3.9.1458\n"
"9105..68..\n"
"13125.1434212\n"
"15..6943..\n"
"45191..112\n"
"97.5101111.6\n"
"67......11\n") == 0);
free(board934340423);
board934340423 = NULL;
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 13, 2, 8) == 0 );
assert( gamma_move(board, 14, 5, 8) == 0 );
assert( gamma_move(board, 14, 6, 4) == 0 );
assert( gamma_move(board, 15, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_golden_move(board, 8, 7, 6) == 1 );


char* board574607437 = gamma_board(board);
assert( board574607437 != NULL );
assert( strcmp(board574607437, 
"..46510..12\n"
".12..4.15.7\n"
"6.126.1371113\n"
"4115.2.1.14\n"
".7.51414.18\n"
"451415.710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..6943..\n"
"45191..112\n"
"97.5101111.6\n"
"67..8...11\n") == 0);
free(board574607437);
board574607437 = NULL;
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 11, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 10) == 0 );
assert( gamma_golden_move(board, 11, 12, 8) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 13, 4, 11) == 0 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_move(board, 15, 5, 8) == 0 );
assert( gamma_move(board, 15, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );


char* board473850471 = gamma_board(board);
assert( board473850471 != NULL );
assert( strcmp(board473850471, 
"..46510..12\n"
".12..4.15.7\n"
"6.126.1371113\n"
"4115.2.1.14\n"
".7.51414.18\n"
"451415.710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..6943..\n"
"45191..112\n"
"97.5101111.6\n"
"67..8...11\n") == 0);
free(board473850471);
board473850471 = NULL;
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_free_fields(board, 11) == 38 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 13, 10, 4) == 0 );
assert( gamma_move(board, 13, 1, 1) == 0 );
assert( gamma_move(board, 14, 9, 3) == 0 );
assert( gamma_move(board, 15, 1, 7) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );


char* board334006920 = gamma_board(board);
assert( board334006920 != NULL );
assert( strcmp(board334006920, 
"..46510..12\n"
".12..4.15.7\n"
"6.126.1371113\n"
"4115.2.1.14\n"
".7.514141118\n"
"451415.710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..5943..\n"
"45191..112\n"
"97.5101111.6\n"
"67..8.9.11\n") == 0);
free(board334006920);
board334006920 = NULL;
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );


char* board781942020 = gamma_board(board);
assert( board781942020 != NULL );
assert( strcmp(board781942020, 
"..46510..12\n"
".12..4.15.7\n"
"6.126.1371113\n"
"4115.2.1.14\n"
".7.514141118\n"
"4514157710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..5943..\n"
"45191..112\n"
"97.5101111.6\n"
"67..8.9.11\n") == 0);
free(board781942020);
board781942020 = NULL;
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_free_fields(board, 9) == 35 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_move(board, 12, 2, 12) == 0 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 15, 0, 12) == 1 );
assert( gamma_busy_fields(board, 15) == 4 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 2) == 0 );


char* board209317647 = gamma_board(board);
assert( board209317647 != NULL );
assert( strcmp(board209317647, 
"15.46510..12\n"
".12.94.15.7\n"
"6.126.1371113\n"
"4115.2.1.14\n"
".7.514141118\n"
"4514157710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..5943..\n"
"45191..112\n"
"97.5101111.6\n"
"67..8.9911\n") == 0);
free(board209317647);
board209317647 = NULL;
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_free_fields(board, 9) == 34 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 8, 9) == 0 );
assert( gamma_move(board, 14, 3, 8) == 0 );
assert( gamma_move(board, 14, 1, 8) == 0 );
assert( gamma_golden_move(board, 14, 4, 7) == 1 );
assert( gamma_move(board, 15, 0, 5) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );


char* board721260721 = gamma_board(board);
assert( board721260721 != NULL );
assert( strcmp(board721260721, 
"15.46510..12\n"
".12.94.15.7\n"
"6.126.1371113\n"
"4115.2.1.14\n"
".7.514141118\n"
"45141514710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..5943..\n"
"45191..112\n"
"97.5101111.6\n"
"67..8.9911\n") == 0);
free(board721260721);
board721260721 = NULL;
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_free_fields(board, 9) == 33 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 11, 6, 6) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 13, 4, 12) == 0 );
assert( gamma_move(board, 14, 5, 12) == 0 );
assert( gamma_free_fields(board, 14) == 33 );
assert( gamma_move(board, 15, 2, 5) == 0 );
assert( gamma_move(board, 15, 8, 3) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 11, 10, 1) == 0 );
assert( gamma_golden_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_move(board, 12, 5, 9) == 1 );
assert( gamma_move(board, 13, 6, 0) == 0 );


char* board965000936 = gamma_board(board);
assert( board965000936 != NULL );
assert( strcmp(board965000936, 
"15.46510..12\n"
".12.94.15.7\n"
"6.126.1371113\n"
"4115.2121.14\n"
".7.514141118\n"
"45141514710313\n"
"..3.9.1488\n"
"9105..68..\n"
"13125.1434212\n"
"15..5943.15\n"
"45191.2112\n"
"97.5101111.6\n"
"67..8.9911\n") == 0);
free(board965000936);
board965000936 = NULL;
assert( gamma_move(board, 14, 7, 8) == 0 );
assert( gamma_move(board, 15, 3, 7) == 0 );
assert( gamma_move(board, 15, 5, 11) == 1 );
assert( gamma_busy_fields(board, 15) == 6 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_golden_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 9, 4, 12) == 0 );


char* board851365843 = gamma_board(board);
assert( board851365843 != NULL );
assert( strcmp(board851365843, 
"15.46510..12\n"
".12.941515.7\n"
"6.126.1371113\n"
"4115.2121.14\n"
".7.514141118\n"
"45141514710313\n"
"..3.9.1468\n"
"9105..68..\n"
"1312591434212\n"
"15.55943.15\n"
"45191.2112\n"
"97.5101111.6\n"
"67..8.9411\n") == 0);
free(board851365843);
board851365843 = NULL;


gamma_delete(board);

    return 0;
}
