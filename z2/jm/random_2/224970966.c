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
uuid: 224970966
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 12, 9, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 3, 11) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 9, 10, 11) == 1 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_golden_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 14, 10) == 1 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_move(board, 9, 4, 11) == 1 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_free_fields(board, 2) == 154 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_golden_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_free_fields(board, 4) == 141 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );


char* board832247757 = gamma_board(board);
assert( board832247757 != NULL );
assert( strcmp(board832247757, 
"..679..68494...\n"
"......4.8.....7\n"
"2......1.21....\n"
"...1....6......\n"
".7...........1.\n"
".........6....3\n"
".............1.\n"
"736...5..3.4...\n"
".86..8........3\n"
"39...8.........\n"
".....4..23..2..\n"
"......6...58...\n") == 0);
free(board832247757);
board832247757 = NULL;
assert( gamma_move(board, 9, 4, 14) == 0 );
assert( gamma_free_fields(board, 9) == 138 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 133 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 7, 10, 6) == 1 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 129 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 14, 7) == 1 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_free_fields(board, 6) == 124 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 4) == 117 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_move(board, 9, 14, 2) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_golden_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_free_fields(board, 8) == 104 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_golden_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 9, 12, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_golden_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 11, 12) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_golden_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_free_fields(board, 8) == 88 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_free_fields(board, 6) == 83 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board136554595 = gamma_board(board);
assert( board136554595 != NULL );
assert( strcmp(board136554595, 
"8.67981684946..\n"
"......4.83...27\n"
"2.1.3..1.21....\n"
".5.1.57.6874...\n"
".77.2.68.....15\n"
"76.4..27367..63\n"
"3...244......12\n"
"736.325..3.43..\n"
".86..8486.3.3.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
".1.8..6.5.58...\n") == 0);
free(board136554595);
board136554595 = NULL;
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_golden_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 13, 8) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 14, 4) == 1 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_golden_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 9, 7, 10) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 9, 14) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );


char* board829417730 = gamma_board(board);
assert( board829417730 != NULL );
assert( strcmp(board829417730, 
"8.67981684946..\n"
".1..9.49831..27\n"
"29153..1421..5.\n"
".5.1.5756874.9.\n"
".77.2.68....515\n"
"76.4..273678163\n"
"3...244.2....12\n"
"73673254.344318\n"
"8869.8486.3.3.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8..1.5.58...\n") == 0);
free(board829417730);
board829417730 = NULL;
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_free_fields(board, 9) == 60 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_golden_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_free_fields(board, 8) == 12 );
assert( gamma_golden_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 19 );


char* board154200560 = gamma_board(board);
assert( board154200560 != NULL );
assert( strcmp(board154200560, 
"8667981684946..\n"
".1..9249831..27\n"
"291537.1421..5.\n"
".5.1.5756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3...244.23...12\n"
"736732542344318\n"
"8869.8489.3.3.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board154200560);
board154200560 = NULL;


char* board416009495 = gamma_board(board);
assert( board416009495 != NULL );
assert( strcmp(board416009495, 
"8667981684946..\n"
".1..9249831..27\n"
"291537.1421..5.\n"
".5.1.5756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3...244.23...12\n"
"736732542344318\n"
"8869.8489.3.3.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board416009495);
board416009495 = NULL;
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 9, 12) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );


char* board532432622 = gamma_board(board);
assert( board532432622 != NULL );
assert( strcmp(board532432622, 
"8667981684946..\n"
".1..9249831..27\n"
"291537.1421..5.\n"
".5.1.5756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board532432622);
board532432622 = NULL;
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board689649010 = gamma_board(board);
assert( board689649010 != NULL );
assert( strcmp(board689649010, 
"8667981684946..\n"
".1..9249831..27\n"
"291537.1421..5.\n"
".5.1.5756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board689649010);
board689649010 = NULL;
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );


char* board345690202 = gamma_board(board);
assert( board345690202 != NULL );
assert( strcmp(board345690202, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
".5.195756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board345690202);
board345690202 = NULL;
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_golden_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 11) == 0 );


char* board444245133 = gamma_board(board);
assert( board444245133 != NULL );
assert( strcmp(board444245133, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
".5.195756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board444245133);
board444245133 = NULL;
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_free_fields(board, 7) == 11 );


char* board270789505 = gamma_board(board);
assert( board270789505 != NULL );
assert( strcmp(board270789505, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
".5.195756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board270789505);
board270789505 = NULL;
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );


char* board921040774 = gamma_board(board);
assert( board921040774 != NULL );
assert( strcmp(board921040774, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
".5.195756874.9.\n"
"17712268....515\n"
"76.4..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board921040774);
board921040774 = NULL;
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_free_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 11, 11) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );


char* board817098383 = gamma_board(board);
assert( board817098383 != NULL );
assert( strcmp(board817098383, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
"15.195756874.9.\n"
"17712268....515\n"
"7694..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.333.3\n"
"39...8117.429.9\n"
".65.448.237.24.\n"
"61.8861.5.58...\n") == 0);
free(board817098383);
board817098383 = NULL;
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_golden_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_golden_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_golden_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 9, 14, 5) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );


char* board337435011 = gamma_board(board);
assert( board337435011 != NULL );
assert( strcmp(board337435011, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
"15.195756874.9.\n"
"17712268....515\n"
"7694..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.33313\n"
"39...8117.429.9\n"
".65.448.233.24.\n"
"61.8861.5.58...\n") == 0);
free(board337435011);
board337435011 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board422014617 = gamma_board(board);
assert( board422014617 != NULL );
assert( strcmp(board422014617, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
"15.195756874.9.\n"
"17712268....515\n"
"7694..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.33313\n"
"39...8117.429.9\n"
".65.448.233.24.\n"
"61.8861.5.58...\n") == 0);
free(board422014617);
board422014617 = NULL;
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );


char* board274227233 = gamma_board(board);
assert( board274227233 != NULL );
assert( strcmp(board274227233, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
"15.195756874.9.\n"
"17712268....515\n"
"7694..273678163\n"
"3.3.244.23...12\n"
"736732542344318\n"
"8869.8489.33313\n"
"39...8117.429.9\n"
".65.448.233.24.\n"
"61.8861.5.58...\n") == 0);
free(board274227233);
board274227233 = NULL;
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_golden_move(board, 9, 11, 9) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_free_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );


char* board940336883 = gamma_board(board);
assert( board940336883 != NULL );
assert( strcmp(board940336883, 
"8667981684946..\n"
".1..2249831..27\n"
"29153761421..5.\n"
"155195756874.95\n"
"17712268....515\n"
"7694..273678163\n"
"3.32244.23...12\n"
"736732542344318\n"
"8869.8489.33313\n"
"39...8117.429.9\n"
".65.4481233.24.\n"
"61.8861.5.5897.\n") == 0);
free(board940336883);
board940336883 = NULL;
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 12, 8) == 1 );
assert( gamma_golden_move(board, 9, 0, 12) == 0 );


gamma_delete(board);

    return 0;
}
