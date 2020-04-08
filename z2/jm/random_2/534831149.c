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
uuid: 534831149
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 10, 11, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );


char* board923156802 = gamma_board(board);
assert( board923156802 != NULL );
assert( strcmp(board923156802, 
"...............\n"
"...............\n"
"........1......\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"......1........\n"
"...............\n") == 0);
free(board923156802);
board923156802 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 11, 11, 2) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_free_fields(board, 11) == 140 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 9, 12, 9) == 1 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 5) == 1 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 129 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );


char* board539730847 = gamma_board(board);
assert( board539730847 != NULL );
assert( strcmp(board539730847, 
"..6.2.......9..\n"
".10.8...........\n"
"8.......1..4...\n"
"5....10.5.......\n"
"7.2..6.9.11.2...\n"
"...............\n"
"....7..........\n"
".11.........11...\n"
"......1........\n"
".......6.3..6..\n") == 0);
free(board539730847);
board539730847 = NULL;
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 12, 0) == 0 );


char* board835184109 = gamma_board(board);
assert( board835184109 != NULL );
assert( strcmp(board835184109, 
"..6.2.......9..\n"
".1088...........\n"
"8.......1..4...\n"
"5...710.5.......\n"
"7.2..6.9.11.2...\n"
"...............\n"
"....7..........\n"
".11.........11...\n"
".9....1........\n"
".......6.3..6..\n") == 0);
free(board835184109);
board835184109 = NULL;
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 8, 5) == 1 );
assert( gamma_move(board, 10, 6, 8) == 1 );
assert( gamma_move(board, 10, 13, 5) == 1 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 110 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_free_fields(board, 11) == 104 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );


char* board622724287 = gamma_board(board);
assert( board622724287 != NULL );
assert( strcmp(board622724287, 
"..6.2.4.....9..\n"
".1088..10........\n"
"89......1..4...\n"
"5...710.5...17..\n"
"7.2.26.9911.2.10.\n"
"..4........5...\n"
"....7....64....\n"
"811.1.......11...\n"
"109.7.111.......\n"
"11...5.66.3..6..\n") == 0);
free(board622724287);
board622724287 = NULL;
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );


char* board287570063 = gamma_board(board);
assert( board287570063 != NULL );
assert( strcmp(board287570063, 
"..6.2.4....49..\n"
".1088..10........\n"
"89......1..4...\n"
"5...710.5...17..\n"
"7.2.26.9911.2.10.\n"
"..4........5...\n"
"....7....64....\n"
"811.1.......11...\n"
"109.7.111.......\n"
"11...5.66.3..6..\n") == 0);
free(board287570063);
board287570063 = NULL;
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_free_fields(board, 8) == 100 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 10, 5, 2) == 1 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_free_fields(board, 11) == 98 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );


char* board957932153 = gamma_board(board);
assert( board957932153 != NULL );
assert( strcmp(board957932153, 
"..6.2.4....49..\n"
".1088..10........\n"
"89......1..4...\n"
"5...710.5...17..\n"
"7.2.26.9911.2.10.\n"
"..4........5...\n"
"..6.7....64....\n"
"811.1.10.....11...\n"
"109.7.111.......\n"
"11.9.5.66.3..6..\n") == 0);
free(board957932153);
board957932153 = NULL;
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );


char* board611193812 = gamma_board(board);
assert( board611193812 != NULL );
assert( strcmp(board611193812, 
"..6.2.4....49..\n"
".1088..10........\n"
"89.....41..4...\n"
"5...710.5...17..\n"
"7.2.26.9911.2.10.\n"
"..4........5...\n"
"..6.7....64....\n"
"811.1.10.....11...\n"
"109.7.111.......\n"
"11.9.5.6633..6..\n") == 0);
free(board611193812);
board611193812 = NULL;
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_golden_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_golden_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_move(board, 11, 8, 14) == 0 );
assert( gamma_move(board, 11, 9, 9) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_free_fields(board, 11) == 81 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 8) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 14, 9) == 1 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 13) == 0 );
assert( gamma_golden_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_golden_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 12, 7) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 14, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board445515413 = gamma_board(board);
assert( board445515413 != NULL );
assert( strcmp(board445515413, 
".6672.41.11.49.9\n"
".108851010.48..8..\n"
"89.33.791..49..\n"
"54.4710551.817..\n"
"7.2826119911.2.103\n"
".2462...105.5...\n"
"7.6.7..5.64....\n"
"811.1.10710...11..1\n"
"109.7.111...4...\n"
"111111.526633226..\n") == 0);
free(board445515413);
board445515413 = NULL;
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_move(board, 10, 10, 9) == 1 );
assert( gamma_move(board, 11, 8, 14) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 6, 14) == 0 );
assert( gamma_move(board, 11, 14, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 13, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 11, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );


char* board491146551 = gamma_board(board);
assert( board491146551 != NULL );
assert( strcmp(board491146551, 
"26672.41.111049.9\n"
".108851010.48..8..\n"
"89.33.791.3495.\n"
"54.4710551.817..\n"
"7.2826119911.25103\n"
".2462...105.5...\n"
"7.687..5.64....\n"
"811.1.10710...11..1\n"
"109.7.111..34..11\n"
"111111.526633226..\n") == 0);
free(board491146551);
board491146551 = NULL;
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 8, 14) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 12, 2) == 1 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 10, 14, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 0, 13) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 12, 3) == 1 );
assert( gamma_move(board, 9, 3, 14) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_free_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 0, 14) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 45 );


char* board887394091 = gamma_board(board);
assert( board887394091 != NULL );
assert( strcmp(board887394091, 
"26672.41.111049.9\n"
".108851010.48..8..\n"
"89.33.791.3495.\n"
"54.4710551.817..\n"
"7.2826119911.25103\n"
".2462...105.5...\n"
"7.687.35.64.8..\n"
"81191.10710..6119.1\n"
"109.73111..34..11\n"
"111111.526633226..\n") == 0);
free(board887394091);
board887394091 = NULL;
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_golden_move(board, 7, 8, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 14, 8) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_golden_move(board, 11, 9, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );


char* board194925198 = gamma_board(board);
assert( board194925198 != NULL );
assert( strcmp(board194925198, 
"2667211411111049.9\n"
".108851010.48..8..\n"
"89.33.791.3495.\n"
"54.4710551.817..\n"
"7.2826119911.25103\n"
".2462...105.5...\n"
"7.617.35.64.8..\n"
"81191.10710..6119.1\n"
"109.73111..34..11\n"
"111111.526633226..\n") == 0);
free(board194925198);
board194925198 = NULL;
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_free_fields(board, 11) == 43 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_golden_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 4, 14) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_golden_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );


gamma_delete(board);

    return 0;
}
