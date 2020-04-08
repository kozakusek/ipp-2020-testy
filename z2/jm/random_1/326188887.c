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
uuid: 326188887
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(20, 9, 13, 19);
assert( board != NULL );


assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );


char* board217298006 = gamma_board(board);
assert( board217298006 != NULL );
assert( strcmp(board217298006, 
"....................\n"
"....2...............\n"
"....................\n"
"....................\n"
"....................\n"
"..............3.....\n"
"....................\n"
"....................\n"
"....................\n") == 0);
free(board217298006);
board217298006 = NULL;
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 18, 9) == 0 );
assert( gamma_move(board, 9, 2, -1) == 0 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_move(board, 11, 17, 0) == 1 );
assert( gamma_move(board, 12, 11, 9) == 0 );
assert( gamma_move(board, 13, 7, 3) == 1 );


char* board776741474 = gamma_board(board);
assert( board776741474 != NULL );
assert( strcmp(board776741474, 
".....5..............\n"
"....2...............\n"
"....................\n"
"....10...............\n"
"...........4........\n"
".......13......3.....\n"
"....................\n"
"....................\n"
"..7..............11..\n") == 0);
free(board776741474);
board776741474 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 1) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 8, 18, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 11, 12, 9) == 0 );
assert( gamma_free_fields(board, 11) == 166 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 3) == 1 );
assert( gamma_move(board, 13, 14, -1) == 0 );
assert( gamma_move(board, 1, 16, 3) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_free_fields(board, 6) == 162 );
assert( gamma_move(board, 7, 17, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 11, -1, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 19, -1) == 0 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 14, 4) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 18, 3) == 1 );
assert( gamma_move(board, 10, 16, 4) == 1 );
assert( gamma_move(board, 12, 7, 4) == 1 );
assert( gamma_move(board, 13, 5, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 19, 6) == 1 );
assert( gamma_free_fields(board, 3) == 149 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );


char* board528171535 = gamma_board(board);
assert( board528171535 != NULL );
assert( strcmp(board528171535, 
"...8.57..4.2........\n"
"....2.............8.\n"
"....5136............3\n"
"....10...............\n"
".......12...4..7.10...\n"
".......13...12..3.179.\n"
".....1......44......\n"
"..10....52.....4....3\n"
".137..............11..\n") == 0);
free(board528171535);
board528171535 = NULL;
assert( gamma_move(board, 8, 11, 0) == 1 );


char* board347262884 = gamma_board(board);
assert( board347262884 != NULL );
assert( strcmp(board347262884, 
"...8.57..4.2........\n"
"....2.............8.\n"
"....5136............3\n"
"....10...............\n"
".......12...4..7.10...\n"
".......13...12..3.179.\n"
".....1......44......\n"
"..10....52.....4....3\n"
".137........8.....11..\n") == 0);
free(board347262884);
board347262884 = NULL;
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 9, 6) == 1 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_move(board, 11, 14, 1) == 0 );
assert( gamma_free_fields(board, 11) == 140 );
assert( gamma_move(board, 12, 14, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_move(board, 7, 17, 1) == 1 );
assert( gamma_move(board, 8, 12, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_free_fields(board, 10) == 134 );
assert( gamma_move(board, 11, 10, 5) == 1 );
assert( gamma_move(board, 12, 17, 2) == 1 );
assert( gamma_move(board, 13, 17, 0) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 5, 13, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 13, 8) == 1 );
assert( gamma_move(board, 11, 5, 9) == 0 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_move(board, 13, 19, 1) == 0 );
assert( gamma_move(board, 1, 18, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 17, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 20, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 125 );
assert( gamma_move(board, 5, 15, 8) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 8, 16, 5) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );


char* board177528155 = gamma_board(board);
assert( board177528155 != NULL );
assert( strcmp(board177528155, 
"...8.57..4.2.10.5....\n"
"11...2.....5.84....8.\n"
"....5136..9.........3\n"
"..10.10.....11...12.8...\n"
".......12...4..7.10.1.\n"
".3.....13.5.12..3.179.\n"
".6...1......44...12..\n"
"9610..2.52310.8.4..7.3\n"
"6137........8.....11..\n") == 0);
free(board177528155);
board177528155 = NULL;
assert( gamma_move(board, 10, 11, 5) == 1 );
assert( gamma_free_fields(board, 10) == 121 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 1, 16, 6) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_move(board, 3, 4, 18) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 7, 18, 0) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 17, 0) == 0 );
assert( gamma_move(board, 10, 18, -1) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_free_fields(board, 10) == 118 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_free_fields(board, 11) == 118 );
assert( gamma_move(board, 12, 12, 7) == 0 );
assert( gamma_move(board, 13, 18, 2) == 1 );
assert( gamma_golden_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_free_fields(board, 3) == 117 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );


char* board615633245 = gamma_board(board);
assert( board615633245 != NULL );
assert( strcmp(board615633245, 
"...8.57..4.2.10.5....\n"
"11...2.....5.84....8.\n"
".3..5136..9......1..3\n"
"..10.10.....1110..12.8...\n"
".......12...4..7.10.1.\n"
".3.....13.5.125.3.179.\n"
".6...1......44...1213.\n"
"9610..2.52310.8.4..7.3\n"
"6137........8.....117.\n") == 0);
free(board615633245);
board615633245 = NULL;
assert( gamma_move(board, 9, 9, -1) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_free_fields(board, 11) == 116 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, 0) == 0 );
assert( gamma_move(board, 1, 17, -1) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 16, 9) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_move(board, 9, 14, 8) == 1 );
assert( gamma_move(board, 10, 10, 8) == 1 );
assert( gamma_move(board, 11, 14, 6) == 1 );
assert( gamma_move(board, 12, 2, 9) == 0 );
assert( gamma_move(board, 13, 14, 5) == 0 );
assert( gamma_free_fields(board, 13) == 113 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );


char* board321103114 = gamma_board(board);
assert( board321103114 != NULL );
assert( strcmp(board321103114, 
"...8.57..4102.1095....\n"
"11...2.....5.84....8.\n"
"13..5136..9....11.1..3\n"
"..10.10.....1110..12.8...\n"
".......12...4..7.10.1.\n"
".3.....13.5.125.3.179.\n"
".6...1......44...1213.\n"
"9610..2.52310.8.4..7.3\n"
"6137........8.....117.\n") == 0);
free(board321103114);
board321103114 = NULL;
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_free_fields(board, 10) == 112 );
assert( gamma_golden_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 11, 4, 1) == 1 );


gamma_delete(board);

    return 0;
}
