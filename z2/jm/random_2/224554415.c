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
uuid: 224554415
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 14, 15, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 8) == 117 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 6, 9) == 1 );
assert( gamma_move(board, 12, 3, 7) == 1 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 6, 11) == 1 );
assert( gamma_move(board, 15, 3, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_free_fields(board, 1) == 108 );
assert( gamma_free_fields(board, 2) == 108 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_free_fields(board, 5) == 105 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 8, 12) == 1 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_move(board, 10, 3, 11) == 1 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 12, 8, 5) == 1 );


char* board899519366 = gamma_board(board);
assert( board899519366 != NULL );
assert( strcmp(board899519366, 
".....9...\n"
".......86\n"
"...10..14..\n"
"...1.....\n"
".9....112.\n"
"....3....\n"
".10512...5.\n"
".......4.\n"
"....8...12\n"
".........\n"
".78..1..3\n"
"..8....1.\n"
".1....119.\n"
"6..6.....\n") == 0);
free(board899519366);
board899519366 = NULL;
assert( gamma_move(board, 13, 6, 5) == 1 );
assert( gamma_move(board, 14, 0, 1) == 1 );
assert( gamma_golden_move(board, 14, 2, 2) == 1 );
assert( gamma_move(board, 15, 3, 7) == 0 );
assert( gamma_move(board, 15, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_free_fields(board, 4) == 92 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 90 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_move(board, 11, 1, 12) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 12, 10, 7) == 0 );
assert( gamma_move(board, 12, 8, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 10) == 1 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_move(board, 15, 0, 5) == 1 );
assert( gamma_move(board, 15, 3, 8) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 81 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 6, 6) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 5, 5) == 1 );
assert( gamma_move(board, 14, 1, 12) == 0 );
assert( gamma_move(board, 15, 5, 7) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_golden_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_free_fields(board, 11) == 68 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 13, 1, 6) == 1 );
assert( gamma_move(board, 14, 13, 2) == 0 );
assert( gamma_move(board, 15, 0, 8) == 1 );
assert( gamma_move(board, 15, 4, 9) == 1 );
assert( gamma_free_fields(board, 15) == 65 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );


char* board619784955 = gamma_board(board);
assert( board619784955 != NULL );
assert( strcmp(board619784955, 
"...249..3\n"
".11...5.86\n"
".2710..14..\n"
".13.1.....\n"
".92.15.112.\n"
"15..153.6..\n"
".10512.1.5.\n"
".13..10.1048\n"
"15.10.81413.12\n"
"..8....7.\n"
"178..1..3\n"
"..14...1312\n"
"1414.96119.\n"
"6.1066..7.\n") == 0);
free(board619784955);
board619784955 = NULL;
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_golden_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_free_fields(board, 9) == 61 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 13, 7) == 0 );
assert( gamma_move(board, 13, 0, 2) == 1 );
assert( gamma_move(board, 14, 12, 6) == 0 );
assert( gamma_move(board, 14, 7, 9) == 0 );
assert( gamma_busy_fields(board, 14) == 4 );


char* board957654478 = gamma_board(board);
assert( board957654478 != NULL );
assert( strcmp(board957654478, 
"...249..3\n"
".11...5.86\n"
".2710..14..\n"
".13.1.....\n"
".92.15.112.\n"
"154.153.6..\n"
".10512.11059\n"
".13..10.1048\n"
"15.10581413.12\n"
"..8....7.\n"
"178..1..3\n"
"13.14...1312\n"
"1414.96119.\n"
"6.1066..7.\n") == 0);
free(board957654478);
board957654478 = NULL;
assert( gamma_move(board, 15, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_golden_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );


char* board949005373 = gamma_board(board);
assert( board949005373 != NULL );
assert( strcmp(board949005373, 
"...249.53\n"
".11...5.86\n"
".2710..14..\n"
".13.13....\n"
".92.1551127\n"
"154.153.6..\n"
".10512.11059\n"
".13..10.1048\n"
"15.10581413.12\n"
"8.8....74\n"
"178..1..3\n"
"13.14...1312\n"
"1414.96119.\n"
"6.1066..7.\n") == 0);
free(board949005373);
board949005373 = NULL;
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 11, 0, 11) == 1 );
assert( gamma_move(board, 12, 10, 7) == 0 );


char* board549360308 = gamma_board(board);
assert( board549360308 != NULL );
assert( strcmp(board549360308, 
"...249.53\n"
".11...5.86\n"
"112710..14..\n"
".13.13....\n"
".92.1551127\n"
"154.153.6..\n"
".10512.11059\n"
".13..10.1048\n"
"15.10581413.12\n"
"8.8....74\n"
"178..1..3\n"
"13.14...1312\n"
"1414.96119.\n"
"6.1066..7.\n") == 0);
free(board549360308);
board549360308 = NULL;
assert( gamma_move(board, 13, 10, 5) == 0 );
assert( gamma_move(board, 14, 8, 13) == 0 );
assert( gamma_move(board, 14, 3, 12) == 1 );
assert( gamma_golden_move(board, 14, 4, 2) == 0 );
assert( gamma_move(board, 15, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 11, 13, 2) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 10, 8) == 0 );


char* board492855941 = gamma_board(board);
assert( board492855941 != NULL );
assert( strcmp(board492855941, 
"...249.53\n"
".11614.5.86\n"
"112710..14..\n"
".13.13....\n"
".92.1551127\n"
"154.153.6..\n"
".10512511059\n"
"813.210.1048\n"
"15.10581413.12\n"
"8.8....74\n"
"178.11..3\n"
"13.14...1312\n"
"1414396119.\n"
"6.1066..7.\n") == 0);
free(board492855941);
board492855941 = NULL;
assert( gamma_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 13, 3, 6) == 0 );


char* board467533483 = gamma_board(board);
assert( board467533483 != NULL );
assert( strcmp(board467533483, 
"...249.53\n"
".11614.5.86\n"
"112710..14..\n"
".13.13....\n"
".92.1551127\n"
"154.153.6..\n"
".10512511059\n"
"813.210.1048\n"
"15.10581413.12\n"
"8.8.13..74\n"
"178.11..3\n"
"13.14...1312\n"
"1414396119.\n"
"6.1066..7.\n") == 0);
free(board467533483);
board467533483 = NULL;
assert( gamma_move(board, 14, 8, 5) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_move(board, 15, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 13, 3, 3) == 0 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 15, 6, 2) == 0 );
assert( gamma_move(board, 15, 7, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_move(board, 12, 12, 0) == 0 );


char* board958319079 = gamma_board(board);
assert( board958319079 != NULL );
assert( strcmp(board958319079, 
"..4249.53\n"
".11614.5.86\n"
"112710..14..\n"
".13.139...\n"
".92.1551127\n"
"154.153.6.2\n"
".10512511059\n"
"813.210.1048\n"
"15410581413.12\n"
"8108.13..74\n"
"178611.153\n"
"13.14..121312\n"
"1414396119.\n"
"651066..73\n") == 0);
free(board958319079);
board958319079 = NULL;
assert( gamma_move(board, 14, 9, 3) == 0 );
assert( gamma_move(board, 15, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 10, 6, 10) == 1 );
assert( gamma_move(board, 11, 13, 1) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_free_fields(board, 13) == 32 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 15, 8, 0) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_move(board, 12, 1, 1) == 0 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_golden_move(board, 12, 11, 3) == 0 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_move(board, 15, 10, 7) == 0 );
assert( gamma_free_fields(board, 15) == 28 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );


char* board523711335 = gamma_board(board);
assert( board523711335 != NULL );
assert( strcmp(board523711335, 
".54249.53\n"
".11614.5.86\n"
"1127107.14..\n"
".13.13910..\n"
".9221551127\n"
"154.153.6.2\n"
".10512511059\n"
"813.210.1048\n"
"154105814131212\n"
"8108313..74\n"
"178611.153\n"
"13.14..121312\n"
"1414396119.\n"
"651066..73\n") == 0);
free(board523711335);
board523711335 = NULL;
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_free_fields(board, 9) == 27 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_free_fields(board, 10) == 27 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 12, 6, 12) == 1 );
assert( gamma_move(board, 13, 12, 0) == 0 );
assert( gamma_move(board, 13, 7, 0) == 0 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_golden_possible(board, 14) == 0 );


char* board802082012 = gamma_board(board);
assert( board802082012 != NULL );
assert( strcmp(board802082012, 
".54249.53\n"
".11614.51286\n"
"1127107.14..\n"
".13.13910..\n"
".9221551127\n"
"154.153.6.2\n"
".10512511059\n"
"813.210.1048\n"
"154105814131212\n"
"8108313..74\n"
"178611.153\n"
"13.14..121312\n"
"14143961199\n"
"651066..73\n") == 0);
free(board802082012);
board802082012 = NULL;
assert( gamma_move(board, 15, 11, 8) == 0 );
assert( gamma_move(board, 15, 6, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 14, 1, 4) == 0 );
assert( gamma_move(board, 15, 6, 13) == 1 );
assert( gamma_move(board, 15, 2, 6) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_golden_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );


char* board116155846 = gamma_board(board);
assert( board116155846 != NULL );
assert( strcmp(board116155846, 
".542491553\n"
".11614.51286\n"
"1127107.14..\n"
"113.13910..\n"
".9221551127\n"
"154.153.6.2\n"
"1110512511059\n"
"81315210.1048\n"
"154105814131212\n"
"8108313.1574\n"
"1786112153\n"
"13.14..121312\n"
"14143961199\n"
"651066..73\n") == 0);
free(board116155846);
board116155846 = NULL;
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 12, 0) == 0 );
assert( gamma_move(board, 10, 1, 13) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 15, 12, 0) == 0 );
assert( gamma_move(board, 15, 5, 4) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_golden_move(board, 15, 3, 8) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 12, 12, 4) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 13, 4, 2) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 8, 7) == 0 );
assert( gamma_move(board, 14, 1, 2) == 1 );
assert( gamma_free_fields(board, 14) == 12 );
assert( gamma_move(board, 15, 3, 13) == 0 );
assert( gamma_move(board, 15, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );


char* board880592416 = gamma_board(board);
assert( board880592416 != NULL );
assert( strcmp(board880592416, 
".542491553\n"
".11614.51286\n"
"1127107.14..\n"
"113.139108.\n"
"109221551127\n"
"1549153.6.2\n"
"1110512511059\n"
"8131521081048\n"
"154105814131212\n"
"8108313151574\n"
"1726112153\n"
"1314141413121312\n"
"14143961199\n"
"651066..73\n") == 0);
free(board880592416);
board880592416 = NULL;
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_golden_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 10, 6, 12) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_golden_move(board, 12, 1, 8) == 1 );


gamma_delete(board);

    return 0;
}
