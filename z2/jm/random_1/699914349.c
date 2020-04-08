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
uuid: 699914349
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 12, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_free_fields(board, 5) == 166 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_free_fields(board, 6) == 165 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_free_fields(board, 7) == 164 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 159 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 159 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );


char* board249303715 = gamma_board(board);
assert( board249303715 != NULL );
assert( strcmp(board249303715, 
".......7......\n"
"..............\n"
"...1..........\n"
".........3....\n"
"..............\n"
"...4..26.2....\n"
"..............\n"
".........5....\n"
".7............\n"
".......2......\n"
"5.............\n"
"........63....\n") == 0);
free(board249303715);
board249303715 = NULL;
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 154 );


char* board924070304 = gamma_board(board);
assert( board924070304 != NULL );
assert( strcmp(board924070304, 
".......7......\n"
"..............\n"
"...1..........\n"
".........3....\n"
"..............\n"
"...4..26.2....\n"
"3.............\n"
".........5....\n"
".7............\n"
".......2......\n"
"5.............\n"
"........63....\n") == 0);
free(board924070304);
board924070304 = NULL;
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_free_fields(board, 6) == 153 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 151 );
assert( gamma_move(board, 5, 11, 10) == 1 );


char* board119290820 = gamma_board(board);
assert( board119290820 != NULL );
assert( strcmp(board119290820, 
".......7......\n"
"...........5..\n"
"...1..........\n"
".......2.3....\n"
"7.............\n"
"...4..26.2....\n"
"3........4....\n"
".........5....\n"
".7............\n"
".......2......\n"
"5.............\n"
"........63....\n") == 0);
free(board119290820);
board119290820 = NULL;
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_free_fields(board, 1) == 149 );


char* board102489123 = gamma_board(board);
assert( board102489123 != NULL );
assert( strcmp(board102489123, 
".......7......\n"
"...........5..\n"
"...1..........\n"
".......2.3....\n"
"7.............\n"
"...4..26.2....\n"
"3.....6..4....\n"
".........5....\n"
".7............\n"
".......2......\n"
"5.............\n"
"........63....\n") == 0);
free(board102489123);
board102489123 = NULL;
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 147 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 2) == 146 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 12, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 6) == 140 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_free_fields(board, 7) == 139 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_free_fields(board, 3) == 137 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 134 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, -1) == 0 );
assert( gamma_free_fields(board, 5) == 132 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 14, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board881437979 = gamma_board(board);
assert( board881437979 != NULL );
assert( strcmp(board881437979, 
".......7......\n"
".....4.....5..\n"
".6.1....3.....\n"
".......213....\n"
"7.......7.2...\n"
".2.44.26.2....\n"
"3.....6..46...\n"
".....15..5....\n"
"67.....3..7...\n"
".......2..4...\n"
"5.2..7........\n"
"...7....63..3.\n") == 0);
free(board881437979);
board881437979 = NULL;
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_free_fields(board, 5) == 130 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_free_fields(board, 5) == 127 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 13, 9) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 126 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 5, 12, -1) == 0 );
assert( gamma_free_fields(board, 5) == 123 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 122 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );


char* board712839863 = gamma_board(board);
assert( board712839863 != NULL );
assert( strcmp(board712839863, 
"1......7...5..\n"
".....4.6...5..\n"
".6.1....3....7\n"
"5......213...3\n"
"7.......4.2...\n"
".2.44.26.2...4\n"
"3.....6..46...\n"
".....15..5....\n"
"67.....3.47...\n"
"......12..4...\n"
"5.2..7........\n"
"...7....63..3.\n") == 0);
free(board712839863);
board712839863 = NULL;
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 3, 10) == 0 );


char* board894330852 = gamma_board(board);
assert( board894330852 != NULL );
assert( strcmp(board894330852, 
"1......7...5..\n"
".....4.6...5..\n"
".661....3....7\n"
"5......213...3\n"
"7.......4.2...\n"
".2.44.26.2...4\n"
"3.....6..46...\n"
".....15..5....\n"
"67.....3.47...\n"
"......12..4...\n"
"5.2..7........\n"
"...7....63..3.\n") == 0);
free(board894330852);
board894330852 = NULL;
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board454492588 = gamma_board(board);
assert( board454492588 != NULL );
assert( strcmp(board454492588, 
"1......7...5..\n"
".....4.6...5..\n"
".661....3....7\n"
"5......213...3\n"
"7.......4.2..3\n"
".2.44.26.2...4\n"
"3.....6..46...\n"
".....15..5....\n"
"67.....3.47...\n"
"......12..4...\n"
"5.2..7........\n"
"...7....63..3.\n") == 0);
free(board454492588);
board454492588 = NULL;
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_free_fields(board, 7) == 18 );


gamma_delete(board);

    return 0;
}
