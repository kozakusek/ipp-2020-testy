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
uuid: 197777318
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 14, 11, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );


char* board971097670 = gamma_board(board);
assert( board971097670 != NULL );
assert( strcmp(board971097670, 
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"........2..\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board971097670);
board971097670 = NULL;
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 10, 9, 11) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 0) == 1 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_free_fields(board, 11) == 144 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 9, 12) == 1 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 10, 1, 12) == 1 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_free_fields(board, 1) == 131 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 13, 0) == 0 );


char* board410160112 = gamma_board(board);
assert( board410160112 != NULL );
assert( strcmp(board410160112, 
"...........\n"
".10.......8.\n"
"9........10.\n"
".16..5.....\n"
"......3.2..\n"
"...411......\n"
".......5..7\n"
"310..8.....6\n"
"...4......2\n"
".34......12\n"
"...........\n"
"..5...6....\n"
".5.8...10...\n"
"7.......511.\n") == 0);
free(board410160112);
board410160112 = NULL;
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_move(board, 11, 3, 9) == 1 );
assert( gamma_move(board, 11, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 10, 11, 10) == 0 );
assert( gamma_move(board, 10, 9, 9) == 1 );
assert( gamma_move(board, 11, 5, 5) == 1 );
assert( gamma_golden_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 10, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_golden_move(board, 10, 7, 10) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );


char* board980793914 = gamma_board(board);
assert( board980793914 != NULL );
assert( strcmp(board980793914, 
"...........\n"
".10.......84\n"
"9........10.\n"
".16..1...28\n"
"9..11..3.210.\n"
"8..411......\n"
"......55..7\n"
"310.1084....6\n"
"...4211....2\n"
".34......12\n"
".....711...4\n"
"..5.7.62.5.\n"
".5.8...10...\n"
"7.....3.511.\n") == 0);
free(board980793914);
board980793914 = NULL;
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_free_fields(board, 8) == 98 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_free_fields(board, 11) == 88 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_move(board, 11, 8, 11) == 1 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 10, 13) == 1 );


char* board753539787 = gamma_board(board);
assert( board753539787 != NULL );
assert( strcmp(board753539787, 
"...2...4..6\n"
".10.2.....84\n"
"9.......11101\n"
".16.21.1.28\n"
"9..11..3.210.\n"
"8..4119....5\n"
"...32555837\n"
"310.1084..9.6\n"
"7..4211...22\n"
"734....8.12\n"
"...8.711...4\n"
"565.7762353\n"
".51088..10.1010\n"
"7..1..37511.\n") == 0);
free(board753539787);
board753539787 = NULL;
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 9, 4, 13) == 1 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_golden_move(board, 11, 1, 10) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_golden_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 11, 13, 8) == 0 );
assert( gamma_move(board, 11, 9, 13) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 8, 0, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_golden_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );


char* board928248819 = gamma_board(board);
assert( board928248819 != NULL );
assert( strcmp(board928248819, 
"8..29..4.116\n"
".10.2.7...84\n"
"97...9..11101\n"
"9116.2181.28\n"
"9..11..31210.\n"
"8824119..8.5\n"
".7.32555837\n"
"310.10841139.6\n"
"7..42115.222\n"
"7348..28.12\n"
".1.8.711.1.4\n"
"56597762353\n"
"15788..10.1010\n"
"7..1..37511.\n") == 0);
free(board928248819);
board928248819 = NULL;
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_free_fields(board, 9) == 49 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );


char* board870271263 = gamma_board(board);
assert( board870271263 != NULL );
assert( strcmp(board870271263, 
"8..29..4.116\n"
".10.2.7...84\n"
"97...9..11101\n"
"9116.2181.28\n"
"9..11..31210.\n"
"8824119..8.5\n"
".7.32555837\n"
"310.1084339.6\n"
"71.42115.222\n"
"7348..28.12\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7..1..37511.\n") == 0);
free(board870271263);
board870271263 = NULL;
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );


char* board302018642 = gamma_board(board);
assert( board302018642 != NULL );
assert( strcmp(board302018642, 
"8..29..4.116\n"
".10.2.7...84\n"
"97...9..11101\n"
"9116.2181.28\n"
"9..11..31210.\n"
"8824119..8.5\n"
".7.32555837\n"
"310.1084339.6\n"
"71.42115.222\n"
"7348..28.12\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board302018642);
board302018642 = NULL;
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_golden_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );


char* board447760323 = gamma_board(board);
assert( board447760323 != NULL );
assert( strcmp(board447760323, 
"8..29..4.116\n"
".10.2.7...84\n"
"97...9..11101\n"
"9116.2181728\n"
"9..11..312104\n"
"8824119..8.5\n"
".7232555837\n"
"310.1084339.6\n"
"71.42115.222\n"
"73486.28.12\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board447760323);
board447760323 = NULL;
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 10 );


char* board842881265 = gamma_board(board);
assert( board842881265 != NULL );
assert( strcmp(board842881265, 
"8..29..4.116\n"
".10.2.7...84\n"
"97...9..11101\n"
"9116.2181728\n"
"9..11..312104\n"
"8824119..8.5\n"
".7232555837\n"
"310.1084339.6\n"
"71.42115.222\n"
"73486.281012\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board842881265);
board842881265 = NULL;
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );


char* board831253387 = gamma_board(board);
assert( board831253387 != NULL );
assert( strcmp(board831253387, 
"8..29..4.116\n"
".10.2.7...84\n"
"97...9..11101\n"
"9116.2181728\n"
"9..11..312104\n"
"8824119..8.5\n"
".7232555837\n"
"310.1084339.6\n"
"71.42115.222\n"
"73486.281012\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board831253387);
board831253387 = NULL;
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 8, 12) == 1 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 11, 13, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );


char* board548295731 = gamma_board(board);
assert( board548295731 != NULL );
assert( strcmp(board548295731, 
"8..29..4.116\n"
".10.2.7..884\n"
"97...9..11101\n"
"9116.2181728\n"
"9..11..312104\n"
"8824119..8.5\n"
".7232555837\n"
"310.1084339.6\n"
"71.42115.222\n"
"73486.281012\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board548295731);
board548295731 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_free_fields(board, 6) == 39 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 2, 9) == 1 );
assert( gamma_golden_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 12 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board251739246 = gamma_board(board);
assert( board251739246 != NULL );
assert( strcmp(board251739246, 
"85.29..4.116\n"
".10.227..884\n"
"97...9..11101\n"
"911662181728\n"
"9.1011..312104\n"
"8824119..8.5\n"
".7232555837\n"
"1010.1084339.6\n"
"71.42115.222\n"
"73486.281012\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board251739246);
board251739246 = NULL;
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 11, 11, 7) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board482373758 = gamma_board(board);
assert( board482373758 != NULL );
assert( strcmp(board482373758, 
"85.29..4.116\n"
".10.227..884\n"
"97...9..11101\n"
"911662181728\n"
"9.1011..312104\n"
"8824119..8.5\n"
".7232555837\n"
"1010.1084339.6\n"
"71.42115.222\n"
"73486.281012\n"
".1.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board482373758);
board482373758 = NULL;
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );


char* board843171497 = gamma_board(board);
assert( board843171497 != NULL );
assert( strcmp(board843171497, 
"85.29..4.116\n"
".101227..884\n"
"97...9..11101\n"
"911662181728\n"
"9.1011..312104\n"
"8824119..8.5\n"
".7232555837\n"
"1010.1084339.6\n"
"71.42115.222\n"
"73486.281012\n"
"51.8.711.134\n"
"56597762353\n"
"15788..10.1010\n"
"7.101..37511.\n") == 0);
free(board843171497);
board843171497 = NULL;
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 10, 7, 13) == 0 );
assert( gamma_move(board, 11, 13, 6) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );


gamma_delete(board);

    return 0;
}
