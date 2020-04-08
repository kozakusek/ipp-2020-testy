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
uuid: 596894721
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 13, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 10, 4, 11) == 1 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 11, 3, 11) == 1 );
assert( gamma_move(board, 12, 9, 7) == 0 );
assert( gamma_move(board, 13, 7, 3) == 1 );
assert( gamma_free_fields(board, 13) == 108 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 103 );
assert( gamma_golden_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );


char* board403739214 = gamma_board(board);
assert( board403739214 != NULL );
assert( strcmp(board403739214, 
"........\n"
"........\n"
"........\n"
"...1110...\n"
"........\n"
"........\n"
"......8.\n"
".5....5.\n"
"........\n"
".3.4.1..\n"
"74.....2\n"
".......13\n"
"8....4..\n"
"..9.....\n"
".5.9.11.7\n") == 0);
free(board403739214);
board403739214 = NULL;
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 12, 0, 2) == 0 );
assert( gamma_move(board, 12, 6, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 12) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );


char* board677872805 = gamma_board(board);
assert( board677872805 != NULL );
assert( strcmp(board677872805, 
"........\n"
"........\n"
".....13..\n"
"...1110...\n"
"........\n"
"........\n"
"......8.\n"
".5....5.\n"
"........\n"
".3.4.1..\n"
"74.....2\n"
"......1213\n"
"8....4..\n"
"..9.....\n"
".5.9.11.7\n") == 0);
free(board677872805);
board677872805 = NULL;
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_golden_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 13, 0, 8) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_golden_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_free_fields(board, 11) == 76 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board227669274 = gamma_board(board);
assert( board227669274 != NULL );
assert( strcmp(board227669274, 
"..27....\n"
".......1\n"
"....3133.\n"
"...1110...\n"
"7.......\n"
"...6....\n"
"13.2.3.8.\n"
"115....58\n"
"......6.\n"
".3.4.1..\n"
"741..1032\n"
"....11.1213\n"
"8.7..44.\n"
"..9..104.\n"
"125.91111.7\n") == 0);
free(board227669274);
board227669274 = NULL;
assert( gamma_move(board, 13, 13, 1) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board970501342 = gamma_board(board);
assert( board970501342 != NULL );
assert( strcmp(board970501342, 
"..27....\n"
".......1\n"
"....31331\n"
"...1110...\n"
"7.......\n"
"...6....\n"
"13.2.3.8.\n"
"115....58\n"
"......6.\n"
".3.4.1..\n"
"741..1032\n"
"..2.11.1213\n"
"8.7..44.\n"
"..9..104.\n"
"125.91111.7\n") == 0);
free(board970501342);
board970501342 = NULL;
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_move(board, 6, 12, 5) == 0 );


char* board740917384 = gamma_board(board);
assert( board740917384 != NULL );
assert( strcmp(board740917384, 
"..27....\n"
".......1\n"
"....31331\n"
"...1110...\n"
"7.......\n"
"...6....\n"
"13.2.3.8.\n"
"115....58\n"
"......6.\n"
".3.4.1..\n"
"741..1032\n"
"..2.11.1213\n"
"867..44.\n"
"..9..104.\n"
"125.91111.7\n") == 0);
free(board740917384);
board740917384 = NULL;
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 1, 14) == 1 );
assert( gamma_move(board, 10, 14, 4) == 0 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_free_fields(board, 12) == 71 );
assert( gamma_move(board, 13, 3, 11) == 0 );
assert( gamma_free_fields(board, 13) == 71 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_free_fields(board, 8) == 67 );
assert( gamma_move(board, 9, 6, 14) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 66 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 10, 2, 14) == 0 );
assert( gamma_move(board, 11, 4, 7) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 4, 14) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 14) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_free_fields(board, 9) == 61 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_free_fields(board, 10) == 61 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 12, 12, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 13, 4, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 7, 7, 14) == 1 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 7, 14) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 7) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 9, 5) == 0 );
assert( gamma_move(board, 13, 1, 10) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 12, 3, 10) == 1 );
assert( gamma_move(board, 13, 13, 0) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );


char* board369422185 = gamma_board(board);
assert( board369422185 != NULL );
assert( strcmp(board369422185, 
".9271797\n"
".......1\n"
"..2.31331\n"
"...1110...\n"
"713.12...3\n"
"...6....\n"
"13.273.8.\n"
"11510.11858\n"
"4...7861\n"
".3.4131..\n"
"741..1032\n"
"3.2411.1213\n"
"867..441\n"
"6.910.104.\n"
"125.91111.7\n") == 0);
free(board369422185);
board369422185 = NULL;
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 6) == 1 );
assert( gamma_move(board, 10, 4, 10) == 1 );
assert( gamma_move(board, 11, 11, 0) == 0 );
assert( gamma_move(board, 12, 3, 7) == 1 );
assert( gamma_move(board, 12, 2, 12) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );


char* board371181019 = gamma_board(board);
assert( board371181019 != NULL );
assert( strcmp(board371181019, 
".9271797\n"
".......1\n"
"..2.31331\n"
"...1110...\n"
"713.1210..3\n"
"...6....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7861\n"
".3.4131..\n"
"741..1032\n"
"3.2411.1213\n"
"867..441\n"
"6.910.104.\n"
"125.91111.7\n") == 0);
free(board371181019);
board371181019 = NULL;
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 7, 14) == 0 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_golden_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 6, 10) == 1 );
assert( gamma_move(board, 11, 3, 13) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 2) == 0 );


char* board446297371 = gamma_board(board);
assert( board446297371 != NULL );
assert( strcmp(board446297371, 
".9271797\n"
"...5...1\n"
"..2.31331\n"
"...1110...\n"
"713.1210.103\n"
"...6....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7861\n"
".3.4131..\n"
"741..1032\n"
"3.2411.1213\n"
"867..441\n"
"8.910.104.\n"
"125.91111.7\n") == 0);
free(board446297371);
board446297371 = NULL;
assert( gamma_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_free_fields(board, 2) == 43 );


char* board817806119 = gamma_board(board);
assert( board817806119 != NULL );
assert( strcmp(board817806119, 
".9271797\n"
"...5...1\n"
"..2.31331\n"
"...1110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7861\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867..441\n"
"8.910.104.\n"
"125.91111.7\n") == 0);
free(board817806119);
board817806119 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 9, 4, 14) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_move(board, 12, 13, 6) == 0 );
assert( gamma_move(board, 13, 11, 0) == 0 );
assert( gamma_move(board, 13, 7, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 1, 14) == 0 );


char* board423478819 = gamma_board(board);
assert( board423478819 != NULL );
assert( strcmp(board423478819, 
".9271797\n"
"...53..1\n"
"..2.31331\n"
"...1110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7861\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867..441\n"
"8.910.104.\n"
"125491111.7\n") == 0);
free(board423478819);
board423478819 = NULL;
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_move(board, 13, 4, 14) == 0 );


char* board232344899 = gamma_board(board);
assert( board232344899 != NULL );
assert( strcmp(board232344899, 
".9271797\n"
"...53..1\n"
"..2.31331\n"
"...1110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7861\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867..441\n"
"8.910.104.\n"
"125491111.7\n") == 0);
free(board232344899);
board232344899 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );


char* board791097639 = gamma_board(board);
assert( board791097639 != NULL );
assert( strcmp(board791097639, 
".9271797\n"
"...53..1\n"
"..2.31331\n"
"..61110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7851\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867..441\n"
"84910.104.\n"
"125491111.7\n") == 0);
free(board791097639);
board791097639 = NULL;
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 14, 0) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board998968984 = gamma_board(board);
assert( board998968984 != NULL );
assert( strcmp(board998968984, 
".9271797\n"
"...53..1\n"
"..2.31331\n"
"..61110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101211858\n"
"4.10.7851\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867.12441\n"
"84910.104.\n"
"125491111.7\n") == 0);
free(board998968984);
board998968984 = NULL;
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_golden_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_golden_move(board, 9, 2, 6) == 1 );


char* board575317481 = gamma_board(board);
assert( board575317481 != NULL );
assert( strcmp(board575317481, 
".9271797\n"
"...53..1\n"
"..2.31331\n"
"..61110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101211858\n"
"4.9.7851\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867.12441\n"
"84910.104.\n"
"125491111.7\n") == 0);
free(board575317481);
board575317481 = NULL;
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_move(board, 10, 4, 7) == 1 );
assert( gamma_move(board, 11, 1, 14) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 13, 6) == 0 );
assert( gamma_move(board, 13, 9, 1) == 0 );


char* board570974679 = gamma_board(board);
assert( board570974679 != NULL );
assert( strcmp(board570974679, 
".9271797\n"
"...53..1\n"
"..2.31331\n"
"..61110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101210858\n"
"4.9.7851\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867.12441\n"
"84910.104.\n"
"125491111.7\n") == 0);
free(board570974679);
board570974679 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_move(board, 8, 0, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );


char* board376759301 = gamma_board(board);
assert( board376759301 != NULL );
assert( strcmp(board376759301, 
".9271797\n"
"8.553..1\n"
"4.2.31331\n"
"..61110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101210858\n"
"4.9.7851\n"
".3.4131..\n"
"741.131032\n"
"3.2411.1213\n"
"867.12441\n"
"849105104.\n"
"125491111.7\n") == 0);
free(board376759301);
board376759301 = NULL;
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 10, 2, 14) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 6, 13) == 1 );
assert( gamma_free_fields(board, 12) == 32 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );


char* board723903033 = gamma_board(board);
assert( board723903033 != NULL );
assert( strcmp(board723903033, 
".9271797\n"
"8.5532121\n"
"4.2.31331\n"
"..61110...\n"
"713.1210.103\n"
"..26....\n"
"13.273.8.\n"
"115101210858\n"
"4.9.7851\n"
"93.4131.3\n"
"741.131032\n"
"3.2411.1213\n"
"867.12441\n"
"849105104.\n"
"125491111.7\n") == 0);
free(board723903033);
board723903033 = NULL;
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );


gamma_delete(board);

    return 0;
}
