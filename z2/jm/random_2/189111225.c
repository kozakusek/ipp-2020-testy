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
uuid: 189111225
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 15, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_free_fields(board, 9) == 110 );
assert( gamma_move(board, 10, 6, 14) == 1 );
assert( gamma_move(board, 11, 14, 2) == 0 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_free_fields(board, 11) == 108 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 0) == 0 );
assert( gamma_move(board, 12, 1, 9) == 1 );
assert( gamma_move(board, 13, 6, 5) == 1 );
assert( gamma_move(board, 14, 10, 2) == 0 );
assert( gamma_move(board, 14, 2, 3) == 1 );
assert( gamma_move(board, 15, 7, 11) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 102 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );


char* board951275214 = gamma_board(board);
assert( board951275214 != NULL );
assert( strcmp(board951275214, 
"......10.\n"
"........\n"
"........\n"
".......15\n"
"...2....\n"
".122...8.\n"
"........\n"
"........\n"
".61..3.11\n"
".51..713.\n"
"3.6.....\n"
"..14.....\n"
"...17...\n"
"........\n"
".8...2.5\n") == 0);
free(board951275214);
board951275214 = NULL;
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 13) == 1 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_move(board, 12, 1, 11) == 1 );
assert( gamma_move(board, 13, 11, 5) == 0 );
assert( gamma_move(board, 13, 5, 1) == 1 );


char* board996995550 = gamma_board(board);
assert( board996995550 != NULL );
assert( strcmp(board996995550, 
"......10.\n"
"....10...\n"
"........\n"
".12.....15\n"
"...2....\n"
".122...8.\n"
"........\n"
"........\n"
".61..3.11\n"
".51.8713.\n"
"3.6.....\n"
"..14.....\n"
"...1711..\n"
".....13..\n"
".8...2.5\n") == 0);
free(board996995550);
board996995550 = NULL;
assert( gamma_move(board, 15, 7, 4) == 1 );
assert( gamma_move(board, 15, 3, 7) == 1 );


char* board397532947 = gamma_board(board);
assert( board397532947 != NULL );
assert( strcmp(board397532947, 
"......10.\n"
"....10...\n"
"........\n"
".12.....15\n"
"...2....\n"
".122...8.\n"
"........\n"
"...15....\n"
".61..3.11\n"
".51.8713.\n"
"3.6....15\n"
"..14.....\n"
"...1711..\n"
".....13..\n"
".8...2.5\n") == 0);
free(board397532947);
board397532947 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board898486825 = gamma_board(board);
assert( board898486825 != NULL );
assert( strcmp(board898486825, 
"......10.\n"
"....10...\n"
"........\n"
"312.....15\n"
"...2...4\n"
".122...8.\n"
"........\n"
"...15....\n"
".61..3.11\n"
".51.8713.\n"
"3.6....15\n"
"..14.....\n"
"1..1711..\n"
".....13..\n"
".8...2.5\n") == 0);
free(board898486825);
board898486825 = NULL;
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );


char* board107276972 = gamma_board(board);
assert( board107276972 != NULL );
assert( strcmp(board107276972, 
"......10.\n"
"....10...\n"
"........\n"
"312.....15\n"
"...2...4\n"
".122...8.\n"
"........\n"
"...15....\n"
".61..3.11\n"
".51.8713.\n"
"3.6....15\n"
"..14.....\n"
"1..1711..\n"
".....13..\n"
".8...2.5\n") == 0);
free(board107276972);
board107276972 = NULL;
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 11, 4, 4) == 1 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_move(board, 13, 3, 3) == 1 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_free_fields(board, 13) == 81 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 12, 4) == 0 );
assert( gamma_move(board, 14, 2, 13) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 5, 14) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_golden_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 14, 3) == 0 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );


char* board235974389 = gamma_board(board);
assert( board235974389 != NULL );
assert( strcmp(board235974389, 
"....21510.\n"
"..14.10...\n"
"........\n"
"312....615\n"
"...2.3.4\n"
".122..108.\n"
".....5..\n"
"...15646.\n"
".61..3611\n"
"251.8713.\n"
"3.6.8.115\n"
"..141313...\n"
"1..1711..\n"
"..11.813..\n"
".812..2.5\n") == 0);
free(board235974389);
board235974389 = NULL;
assert( gamma_move(board, 13, 13, 5) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_move(board, 15, 3, 5) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 1, 14) == 1 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_golden_move(board, 9, 13, 2) == 0 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 11, 12, 7) == 0 );
assert( gamma_move(board, 11, 3, 8) == 1 );
assert( gamma_move(board, 13, 7, 7) == 1 );
assert( gamma_golden_move(board, 13, 9, 0) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_free_fields(board, 14) == 59 );
assert( gamma_move(board, 15, 2, 6) == 0 );
assert( gamma_move(board, 15, 0, 14) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 11, 5, 9) == 0 );
assert( gamma_move(board, 11, 7, 2) == 1 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_move(board, 13, 9, 3) == 0 );
assert( gamma_move(board, 13, 0, 12) == 1 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 14, 4, 11) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 12, 1) == 0 );
assert( gamma_move(board, 15, 0, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 13, 6) == 0 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_free_fields(board, 13) == 45 );
assert( gamma_move(board, 14, 1, 14) == 0 );
assert( gamma_move(board, 15, 12, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 0, 12) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 7, 12) == 1 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_free_fields(board, 12) == 42 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 14, 2, 8) == 1 );
assert( gamma_move(board, 15, 3, 5) == 0 );
assert( gamma_move(board, 15, 7, 14) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 3, 14) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 5, 12) == 1 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_free_fields(board, 10) == 35 );
assert( gamma_move(board, 11, 13, 7) == 0 );
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 13, 9, 7) == 0 );
assert( gamma_move(board, 13, 6, 8) == 1 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_move(board, 15, 4, 7) == 0 );
assert( gamma_move(board, 15, 0, 8) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_golden_move(board, 15, 6, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 6) == 0 );


char* board598067491 = gamma_board(board);
assert( board598067491 != NULL );
assert( strcmp(board598067491, 
"159.821510.\n"
"6414.106..\n"
"13....10.11\n"
"312..14.615\n"
"11..2.3.4\n"
".122.4108.\n"
"811411105139\n"
"15..1564613\n"
".617.3611\n"
"251158713.\n"
"3.638.115\n"
"7.141313.3.\n"
"1.101711211\n"
".9111281333\n"
"2812..255\n") == 0);
free(board598067491);
board598067491 = NULL;
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 13, 6) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 6, 0) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_move(board, 13, 2, 13) == 0 );
assert( gamma_move(board, 14, 0, 4) == 0 );
assert( gamma_move(board, 14, 0, 9) == 1 );
assert( gamma_move(board, 15, 3, 13) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 12, 3) == 0 );
assert( gamma_move(board, 14, 4, 0) == 1 );
assert( gamma_move(board, 15, 14, 2) == 0 );
assert( gamma_move(board, 15, 4, 11) == 0 );
assert( gamma_busy_fields(board, 15) == 7 );


char* board510559610 = gamma_board(board);
assert( board510559610 != NULL );
assert( strcmp(board510559610, 
"159.821510.\n"
"6414.106..\n"
"13....10.11\n"
"312..14.615\n"
"11..2.3.4\n"
"14122.4108.\n"
"811411105139\n"
"15..1564613\n"
".617.3611\n"
"251158713.\n"
"3.638.115\n"
"7.141313.3.\n"
"1.101711211\n"
"109111281333\n"
"2812.14255\n") == 0);
free(board510559610);
board510559610 = NULL;
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_free_fields(board, 9) == 31 );
assert( gamma_move(board, 11, 7, 11) == 0 );
assert( gamma_move(board, 12, 14, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 13, 7) == 0 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_move(board, 14, 5, 11) == 1 );
assert( gamma_move(board, 15, 12, 4) == 0 );
assert( gamma_free_fields(board, 15) == 5 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 13, 7) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 10, 5, 12) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 6, 12) == 1 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_free_fields(board, 13) == 29 );
assert( gamma_move(board, 14, 10, 1) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_move(board, 15, 7, 0) == 0 );
assert( gamma_move(board, 15, 2, 13) == 0 );
assert( gamma_busy_fields(board, 15) == 7 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 13, 3, 2) == 0 );
assert( gamma_move(board, 14, 5, 9) == 0 );
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_move(board, 15, 13, 3) == 0 );
assert( gamma_move(board, 15, 7, 9) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board786298854 = gamma_board(board);
assert( board786298854 != NULL );
assert( strcmp(board786298854, 
"159.821510.\n"
"6414.106..\n"
"13....101111\n"
"312..1414615\n"
"11..2.3.4\n"
"14122.4108.\n"
"811411105139\n"
"15..1564613\n"
"1617.3611\n"
"251158713.\n"
"3.638.115\n"
"7.141313.3.\n"
"1.101711211\n"
"109111281333\n"
"2812.14255\n") == 0);
free(board786298854);
board786298854 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_free_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );


char* board447408032 = gamma_board(board);
assert( board447408032 != NULL );
assert( strcmp(board447408032, 
"159.821510.\n"
"6414.106..\n"
"13....101111\n"
"312..1414615\n"
"11..2.3.4\n"
"14122.41085\n"
"811411105139\n"
"15..1564613\n"
"1617.3611\n"
"251158713.\n"
"3.638.115\n"
"7.141313.3.\n"
"1.101711211\n"
"109111281333\n"
"2812.14255\n") == 0);
free(board447408032);
board447408032 = NULL;
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 12, 4, 4) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_move(board, 14, 2, 5) == 0 );
assert( gamma_move(board, 15, 3, 1) == 0 );
assert( gamma_move(board, 15, 2, 10) == 0 );
assert( gamma_free_fields(board, 15) == 4 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 4, 14) == 0 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_free_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_move(board, 13, 14, 2) == 0 );
assert( gamma_move(board, 13, 6, 14) == 0 );
assert( gamma_move(board, 14, 1, 7) == 1 );
assert( gamma_move(board, 14, 1, 10) == 0 );
assert( gamma_busy_fields(board, 14) == 8 );
assert( gamma_move(board, 15, 12, 2) == 0 );
assert( gamma_free_fields(board, 15) == 3 );


gamma_delete(board);

    return 0;
}
