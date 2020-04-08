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
uuid: 310415441
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 9, 15, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board590676364 = gamma_board(board);
assert( board590676364 != NULL );
assert( strcmp(board590676364, 
"...............\n"
"......4........\n"
"..1......7.....\n"
"...............\n"
".....6........1\n"
"...............\n"
"..........3....\n"
".....7.........\n"
"...............\n") == 0);
free(board590676364);
board590676364 = NULL;
assert( gamma_move(board, 8, 12, 7) == 1 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 9, 14, 6) == 1 );
assert( gamma_move(board, 10, 12, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 11, 11, 8) == 1 );
assert( gamma_move(board, 12, 6, 4) == 1 );
assert( gamma_move(board, 12, 12, 4) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 10) == 0 );
assert( gamma_move(board, 13, 14, 4) == 0 );
assert( gamma_move(board, 14, 8, 9) == 0 );
assert( gamma_move(board, 14, 8, 1) == 1 );
assert( gamma_move(board, 15, 3, 13) == 0 );
assert( gamma_move(board, 15, 7, 8) == 1 );
assert( gamma_busy_fields(board, 15) == 1 );
assert( gamma_free_fields(board, 15) == 119 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 112 );
assert( gamma_move(board, 7, 4, 6) == 1 );


char* board230520609 = gamma_board(board);
assert( board230520609 != NULL );
assert( strcmp(board230520609, 
".......153..11...\n"
"......4.....8..\n"
".21.7.11..7....9\n"
"..3.........10..\n"
"...1.612.....12.1\n"
".........5.....\n"
"....2.....3....\n"
".4...7..14......\n"
"...............\n") == 0);
free(board230520609);
board230520609 = NULL;
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 11, 9, 0) == 1 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 13, 2, 7) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 11, 4) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 105 );
assert( gamma_golden_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board690210013 = gamma_board(board);
assert( board690210013 != NULL );
assert( strcmp(board690210013, 
".......153..11...\n"
"..13...4.5...8..\n"
".21.7.11..7....9\n"
"..3..29.....10..\n"
"...1106126...1512.1\n"
".........5.....\n"
"....2.....3....\n"
".4...7..14.....5\n"
".........11.....\n") == 0);
free(board690210013);
board690210013 = NULL;
assert( gamma_golden_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 11, 14, 3) == 1 );
assert( gamma_free_fields(board, 11) == 99 );
assert( gamma_move(board, 12, 1, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 1, 4) == 1 );
assert( gamma_move(board, 14, 5, 0) == 1 );
assert( gamma_move(board, 14, 12, 1) == 1 );
assert( gamma_move(board, 15, 14, 2) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 92 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 11, 3, 6) == 1 );
assert( gamma_free_fields(board, 11) == 87 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 12, 11, 0) == 1 );
assert( gamma_move(board, 13, 5, 7) == 1 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 14, 8, 14) == 0 );
assert( gamma_move(board, 14, 9, 4) == 1 );
assert( gamma_move(board, 15, 2, 5) == 0 );
assert( gamma_free_fields(board, 15) == 82 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_free_fields(board, 8) == 77 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_free_fields(board, 12) == 75 );
assert( gamma_golden_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 13, 4, 8) == 0 );
assert( gamma_move(board, 14, 3, 1) == 1 );
assert( gamma_move(board, 14, 6, 6) == 0 );
assert( gamma_golden_move(board, 14, 4, 14) == 0 );
assert( gamma_move(board, 15, 10, 1) == 1 );
assert( gamma_move(board, 15, 0, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_golden_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 6, 10) == 0 );


char* board496817063 = gamma_board(board);
assert( board496817063 != NULL );
assert( strcmp(board496817063, 
"....33.73..11...\n"
"3.13.2134.5...8..\n"
"721117.11.77..3.9\n"
"15133.629..9..10..\n"
".13.1106126814.1512.1\n"
"11..1210.5155....11\n"
"....2.....3.6.15\n"
".8101427..14115114.5\n"
"..9..14...11.12..8\n") == 0);
free(board496817063);
board496817063 = NULL;
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 13, 8) == 1 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 3, 12) == 0 );
assert( gamma_move(board, 13, 13, 7) == 1 );
assert( gamma_move(board, 14, 5, 4) == 0 );
assert( gamma_move(board, 14, 10, 2) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_free_fields(board, 12) == 55 );
assert( gamma_move(board, 13, 0, 4) == 1 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_free_fields(board, 13) == 54 );


char* board383522048 = gamma_board(board);
assert( board383522048 != NULL );
assert( strcmp(board383522048, 
"104..33.73..11.11.\n"
"31113.2134.5...813.\n"
"721117.11.77..3.9\n"
"15133.629.29.110..\n"
"1313.1106126814.1512.1\n"
"11..1210.51558..111\n"
"....2.....3.6.15\n"
"108101427..14115114.5\n"
"..9..14.10.11.12..8\n") == 0);
free(board383522048);
board383522048 = NULL;
assert( gamma_move(board, 14, 0, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_free_fields(board, 10) == 52 );
assert( gamma_move(board, 11, 4, 13) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 6, 10) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 13, 7, 7) == 1 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 14, 5, 8) == 0 );
assert( gamma_move(board, 14, 8, 0) == 1 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 15, 6, 7) == 0 );
assert( gamma_move(board, 15, 4, 5) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_golden_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 0, 12) == 0 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 7, 10) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 14, 0, 3) == 0 );
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 15, 0, 1) == 0 );
assert( gamma_move(board, 15, 7, 7) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_golden_move(board, 12, 6, 5) == 1 );


char* board428722041 = gamma_board(board);
assert( board428722041 != NULL );
assert( strcmp(board428722041, 
"1046433.73..11.11.\n"
"31113.2134135...813.\n"
"7211171011.776.3.9\n"
"15133.6212.29.110..\n"
"1313.1106126814.1512.1\n"
"112112101051558..111\n"
"...142.6...3.6.15\n"
"108101427..14115114.5\n"
".99..14.101411.12..8\n") == 0);
free(board428722041);
board428722041 = NULL;
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_free_fields(board, 14) == 42 );
assert( gamma_golden_move(board, 14, 4, 5) == 1 );
assert( gamma_move(board, 15, 8, 6) == 0 );
assert( gamma_move(board, 15, 4, 8) == 0 );


char* board973560843 = gamma_board(board);
assert( board973560843 != NULL );
assert( strcmp(board973560843, 
"1046433.73..11.11.\n"
"31113.2134135...813.\n"
"7211171011.776.3.9\n"
"15133.14212.29.110..\n"
"1313.1106126814.1512.1\n"
"112112101051558..111\n"
"...142.6...3.6.15\n"
"108101427..14115114.5\n"
".99..14.101411.12..8\n") == 0);
free(board973560843);
board973560843 = NULL;
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );


char* board306667957 = gamma_board(board);
assert( board306667957 != NULL );
assert( strcmp(board306667957, 
"1046433.73..11.11.\n"
"31113.2134135.1.813.\n"
"7211171011.776.3.9\n"
"15133.14212.29.110..\n"
"1313.1106126814.1512.1\n"
"112112101051558..111\n"
"...142.6...3.6.15\n"
"108101427..14115114.5\n"
".99..146101411.12..8\n") == 0);
free(board306667957);
board306667957 = NULL;
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_golden_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 13, 4) == 1 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 10, 2, 4) == 1 );


char* board621319498 = gamma_board(board);
assert( board621319498 != NULL );
assert( strcmp(board621319498, 
"1046433.73..11.11.\n"
"31113.2134135.1.813.\n"
"7211171011.776.3.9\n"
"15133.14212.29.110..\n"
"1313101106126814.151291\n"
"112112101051558..111\n"
"...142.6...3.6.15\n"
"108101427..14115114.5\n"
".99..146101411.12..8\n") == 0);
free(board621319498);
board621319498 = NULL;
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_free_fields(board, 11) == 38 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_golden_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 13, 8, 9) == 0 );
assert( gamma_move(board, 14, 2, 8) == 0 );
assert( gamma_move(board, 15, 10, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 12, 7, 1) == 1 );
assert( gamma_move(board, 14, 0, 12) == 0 );
assert( gamma_move(board, 15, 6, 11) == 0 );
assert( gamma_move(board, 15, 7, 4) == 0 );
assert( gamma_free_fields(board, 15) == 33 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 5, 13) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_move(board, 14, 8, 10) == 0 );
assert( gamma_move(board, 14, 10, 2) == 0 );
assert( gamma_golden_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 15, 2, 11) == 0 );
assert( gamma_move(board, 15, 7, 7) == 0 );


char* board276667284 = gamma_board(board);
assert( board276667284 != NULL );
assert( strcmp(board276667284, 
"1046433.732.11.11.\n"
"31113.2134135.1.813.\n"
"7211171011.776.3.9\n"
"15133.14212.29.110..\n"
"131310110612681415151291\n"
"112112101051558.5111\n"
"..6142126...3.6.15\n"
"108101427.1214115114.5\n"
"999..146101411.12..8\n") == 0);
free(board276667284);
board276667284 = NULL;
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board387209641 = gamma_board(board);
assert( board387209641 != NULL );
assert( strcmp(board387209641, 
"1046433.732.11.11.\n"
"31113.2134135.1.813.\n"
"7211171011.776.3.9\n"
"15133.14212.29.110.3\n"
"131310110612681415151291\n"
"112112101051558.5111\n"
"..6142126...3.6.15\n"
"108101427.121411511425\n"
"999..146101411.12..8\n") == 0);
free(board387209641);
board387209641 = NULL;
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 9, 7) == 1 );
assert( gamma_move(board, 12, 0, 12) == 0 );
assert( gamma_move(board, 13, 8, 10) == 0 );
assert( gamma_move(board, 13, 10, 4) == 0 );
assert( gamma_move(board, 14, 2, 11) == 0 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_move(board, 15, 3, 11) == 0 );
assert( gamma_move(board, 15, 5, 7) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_golden_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 0, 12) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_free_fields(board, 12) == 27 );
assert( gamma_move(board, 13, 7, 14) == 0 );
assert( gamma_move(board, 14, 2, 6) == 0 );
assert( gamma_free_fields(board, 14) == 27 );
assert( gamma_move(board, 15, 5, 10) == 0 );
assert( gamma_busy_fields(board, 15) == 5 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 10, 8) == 1 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_free_fields(board, 12) == 26 );


char* board631000832 = gamma_board(board);
assert( board631000832 != NULL );
assert( strcmp(board631000832, 
"1046433.732911.11.\n"
"31113.2134135111.813.\n"
"72111710118776.3.9\n"
"15133.14212.29.110.3\n"
"131310110612681415151291\n"
"112112101051558.5111\n"
"..6142126...3.6.15\n"
"108101457.121411511425\n"
"999..146101411.12..8\n") == 0);
free(board631000832);
board631000832 = NULL;
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_move(board, 14, 2, 2) == 0 );
assert( gamma_move(board, 15, 5, 10) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );


char* board528855522 = gamma_board(board);
assert( board528855522 != NULL );
assert( strcmp(board528855522, 
"1046433.732911.11.\n"
"31113.2134135111.813.\n"
"72111710118776.3.9\n"
"15133.14212.29.110.3\n"
"131310110612681415151291\n"
"112112101051558.5111\n"
"..6142126...3.6.15\n"
"108101457.121411511425\n"
"999..146101411.12..8\n") == 0);
free(board528855522);
board528855522 = NULL;
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_free_fields(board, 8) == 26 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 11) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_free_fields(board, 11) == 25 );
assert( gamma_move(board, 12, 11, 4) == 0 );
assert( gamma_move(board, 13, 8, 12) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 0, 8) == 0 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_golden_move(board, 14, 2, 0) == 0 );


char* board236785778 = gamma_board(board);
assert( board236785778 != NULL );
assert( strcmp(board236785778, 
"1046433.732911.11.\n"
"31113.2134135111.813.\n"
"72111710118776.3.9\n"
"151331014212.29.110.3\n"
"131310110612681415151291\n"
"112112101051558.5111\n"
"..6142126...3.6.15\n"
"108101457.121411511425\n"
"999..146101411.12..8\n") == 0);
free(board236785778);
board236785778 = NULL;
assert( gamma_move(board, 15, 7, 11) == 0 );
assert( gamma_move(board, 15, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 11, 8, 12) == 0 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 12, 13, 1) == 0 );
assert( gamma_move(board, 13, 5, 2) == 0 );
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_move(board, 14, 0, 4) == 0 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 15, 3, 11) == 0 );
assert( gamma_move(board, 15, 5, 0) == 0 );


char* board499742168 = gamma_board(board);
assert( board499742168 != NULL );
assert( strcmp(board499742168, 
"10464335732911.11.\n"
"31113.2134135111.813.\n"
"72111710118776.3.9\n"
"151331014212.29.110.3\n"
"131310110612681415151291\n"
"112112101051558.5111\n"
"..6142126...3.6.15\n"
"10810145710121411511425\n"
"999..146101411.12..8\n") == 0);
free(board499742168);
board499742168 = NULL;


gamma_delete(board);

    return 0;
}
