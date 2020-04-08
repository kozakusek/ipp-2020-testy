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
uuid: 474962755
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 13, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_free_fields(board, 4) == 94 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_free_fields(board, 6) == 94 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );


char* board540229684 = gamma_board(board);
assert( board540229684 != NULL );
assert( strcmp(board540229684, 
"...........1..\n"
"...2..........\n"
"..............\n"
"..............\n"
".9............\n"
"..............\n"
".......4..3...\n") == 0);
free(board540229684);
board540229684 = NULL;
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_free_fields(board, 11) == 90 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_move(board, 13, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board500870731 = gamma_board(board);
assert( board500870731 != NULL );
assert( strcmp(board500870731, 
"......7....1.5\n"
".1012..........\n"
"......4.......\n"
"...10..........\n"
".9....6....4..\n"
"..............\n"
".11.13.1.4..3...\n") == 0);
free(board500870731);
board500870731 = NULL;
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 12) == 0 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 8, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_free_fields(board, 11) == 72 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 12, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 0, 12) == 0 );
assert( gamma_move(board, 12, 8, 2) == 1 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );


char* board372324741 = gamma_board(board);
assert( board372324741 != NULL );
assert( strcmp(board372324741, 
"...5..4.3..1.5\n"
".101251........\n"
"...104.4...93..\n"
"...10..8..9..12.\n"
"10917..6.127.4..\n"
".4.1065..1..7.3\n"
"111.13121.41323...\n") == 0);
free(board372324741);
board372324741 = NULL;
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_golden_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 13, 0, 3) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 2, 4) == 1 );
assert( gamma_move(board, 11, 8, 4) == 1 );
assert( gamma_move(board, 12, 11, 0) == 1 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_golden_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_golden_move(board, 10, 6, 12) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 13, 2, 6) == 1 );
assert( gamma_free_fields(board, 13) == 39 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_free_fields(board, 8) == 35 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_move(board, 12, 5, 6) == 1 );


char* board704762645 = gamma_board(board);
assert( board704762645 != NULL );
assert( strcmp(board704762645, 
"..135.12493..155\n"
".101251.1224...4\n"
"..1110424.11.93..\n"
"13..10..8..9..12.\n"
"10917216.12754..\n"
"849106510.1..7.3\n"
"111.1312184132312.5\n") == 0);
free(board704762645);
board704762645 = NULL;
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 11, 3, 13) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board446059203 = gamma_board(board);
assert( board446059203 != NULL );
assert( strcmp(board446059203, 
"8.135.12493..155\n"
".101251.1224.4.4\n"
"..1110424.11.93..\n"
"13..10..8..9..12.\n"
"10917216.12754..\n"
"849106510216.7.3\n"
"111.1312184132312.5\n") == 0);
free(board446059203);
board446059203 = NULL;
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 12, 11, 3) == 1 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_golden_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 11, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 11, 13, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 1, 1) == 0 );
assert( gamma_golden_move(board, 12, 6, 3) == 1 );
assert( gamma_move(board, 13, 10, 4) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_free_fields(board, 5) == 21 );


char* board980616167 = gamma_board(board);
assert( board980616167 != NULL );
assert( strcmp(board980616167, 
"6.135.12493..155\n"
".10125171224.484\n"
"..1110424.11.93..\n"
"13.3103.12..951212.\n"
"10917716.12754.1\n"
"849106510216.743\n"
"111101312184132312.5\n") == 0);
free(board980616167);
board980616167 = NULL;
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );


char* board964364876 = gamma_board(board);
assert( board964364876 != NULL );
assert( strcmp(board964364876, 
"6.135.12493..155\n"
".10125171224.484\n"
"..1110424.11.93..\n"
"13.3103.12..951212.\n"
"10917716.12754.1\n"
"849106510216.743\n"
"111101312184132312.5\n") == 0);
free(board964364876);
board964364876 = NULL;
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 11, 10, 5) == 1 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_golden_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );


char* board632300936 = gamma_board(board);
assert( board632300936 != NULL );
assert( strcmp(board632300936, 
"6.135.12493..155\n"
".1012517122411484\n"
"..1110424.11.93..\n"
"13.3103.12..951212.\n"
"10917716.12754.1\n"
"849106510216.743\n"
"111101312184132312.5\n") == 0);
free(board632300936);
board632300936 = NULL;
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );


char* board504467050 = gamma_board(board);
assert( board504467050 != NULL );
assert( strcmp(board504467050, 
"6.135.12493..155\n"
".1012517122411484\n"
"..1110424.11.93..\n"
"13.3103.122.951212.\n"
"10917716.12754.1\n"
"849106510216.743\n"
"111101312184132312.5\n") == 0);
free(board504467050);
board504467050 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );


char* board498433803 = gamma_board(board);
assert( board498433803 != NULL );
assert( strcmp(board498433803, 
"6.135.12493..155\n"
".1012517122411484\n"
"..1110424.11.93..\n"
"13.3103.122.951212.\n"
"10917716.12754.1\n"
"849106510216.743\n"
"111101312184132312.5\n") == 0);
free(board498433803);
board498433803 = NULL;
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 11, 12, 4) == 1 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_free_fields(board, 13) == 15 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board321777110 = gamma_board(board);
assert( board321777110 != NULL );
assert( strcmp(board321777110, 
"6.135.12493.5155\n"
".1012517122411484\n"
".31110424211.9311.\n"
"13.3103.122.951212.\n"
"10917716.12754.1\n"
"849106510216.743\n"
"111101312184132312.5\n") == 0);
free(board321777110);
board321777110 = NULL;
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 0, 12) == 0 );
assert( gamma_move(board, 13, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
