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
uuid: 865857042
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 15, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_free_fields(board, 6) == 222 );
assert( gamma_move(board, 7, 2, 14) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 4, -1) == 0 );


char* board345602238 = gamma_board(board);
assert( board345602238 != NULL );
assert( strcmp(board345602238, 
"..7............\n"
"...............\n"
"...............\n"
".8.............\n"
"...............\n"
"........4......\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"......5........\n"
"...............\n"
"...............\n"
"...............\n"
"..6............\n") == 0);
free(board345602238);
board345602238 = NULL;
assert( gamma_move(board, 12, 11, 14) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 14) == 1 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 14, 12, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_golden_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_golden_move(board, 7, 1, 12) == 0 );


char* board908951094 = gamma_board(board);
assert( board908951094 != NULL );
assert( strcmp(board908951094, 
"..7....13...12...\n"
"...............\n"
"...............\n"
".8.............\n"
"...............\n"
"........4......\n"
"........6......\n"
"...............\n"
"...............\n"
"....4..........\n"
"......5........\n"
"...............\n"
"...............\n"
"....1.......14..\n"
"..6........7...\n") == 0);
free(board908951094);
board908951094 = NULL;
assert( gamma_move(board, 9, 13, 11) == 1 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, 7, -1) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 13, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 14, 14) == 1 );
assert( gamma_golden_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 14, 9, 4) == 1 );
assert( gamma_free_fields(board, 14) == 209 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 15, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 12, 14) == 1 );
assert( gamma_move(board, 9, 14, 12) == 1 );
assert( gamma_move(board, 10, 15, 11) == 0 );
assert( gamma_move(board, 11, 0, 1) == 1 );


char* board112302427 = gamma_board(board);
assert( board112302427 != NULL );
assert( strcmp(board112302427, 
"3.7....13...128.13\n"
"...............\n"
"..............9\n"
".8...........9.\n"
"...............\n"
"........4......\n"
"........6......\n"
"...............\n"
"..5............\n"
".2..4..........\n"
"......5..14.....\n"
"...............\n"
".............12.\n"
"11...1.......14..\n"
"..6........7...\n") == 0);
free(board112302427);
board112302427 = NULL;
assert( gamma_golden_move(board, 12, 1, 12) == 0 );
assert( gamma_free_fields(board, 13) == 203 );
assert( gamma_golden_move(board, 13, 10, 12) == 0 );
assert( gamma_busy_fields(board, 15) == 0 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_free_fields(board, 1) == 203 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 13, 14) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 0) == 1 );
assert( gamma_move(board, 11, 2, 11) == 1 );


char* board724150877 = gamma_board(board);
assert( board724150877 != NULL );
assert( strcmp(board724150877, 
"3.7....13...128913\n"
"...............\n"
"..............9\n"
".811..........9.\n"
"...............\n"
"........4......\n"
"........6......\n"
"...............\n"
"..5....2.......\n"
".2..4..........\n"
"......5..14.....\n"
"........8......\n"
".............12.\n"
"11...1.......14..\n"
"4106........7...\n") == 0);
free(board724150877);
board724150877 = NULL;
assert( gamma_move(board, 13, 3, 6) == 1 );
assert( gamma_move(board, 14, 3, 4) == 1 );
assert( gamma_move(board, 15, 3, 14) == 1 );
assert( gamma_busy_fields(board, 15) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_free_fields(board, 6) == 189 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_move(board, 9, -1, 9) == 0 );
assert( gamma_move(board, 10, 8, 6) == 1 );
assert( gamma_move(board, 11, 8, 7) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 6, 1) == 1 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 14, 3, 0) == 1 );
assert( gamma_move(board, 15, 7, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 183 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board309847702 = gamma_board(board);
assert( board309847702 != NULL );
assert( strcmp(board309847702, 
"3.715...13...128913\n"
"...............\n"
"..............9\n"
".811....6.....9.\n"
"...............\n"
"...5....4......\n"
".2......6......\n"
"........11......\n"
"..513...210......\n"
".2..4..........\n"
"...14..515.14.....\n"
"........8......\n"
"......3.....312.\n"
"11...1.13.....14..\n"
"410614.....1.7...\n") == 0);
free(board309847702);
board309847702 = NULL;
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_free_fields(board, 8) == 181 );
assert( gamma_move(board, 9, 14, -1) == 0 );
assert( gamma_move(board, 11, 14, 1) == 1 );
assert( gamma_move(board, 12, 9, 6) == 1 );
assert( gamma_move(board, 13, 13, 2) == 0 );
assert( gamma_free_fields(board, 13) == 179 );


char* board592277544 = gamma_board(board);
assert( board592277544 != NULL );
assert( strcmp(board592277544, 
"3.715...13...128913\n"
"...............\n"
"..............9\n"
".811....6....79.\n"
"...............\n"
"...5....4......\n"
".2......6......\n"
"........11......\n"
"..513...21012.....\n"
".2..4..........\n"
"...14..515.14.....\n"
"........8......\n"
"......38....312.\n"
"11...1.13.....14.11\n"
"410614.....1.7...\n") == 0);
free(board592277544);
board592277544 = NULL;
assert( gamma_move(board, 15, 8, 7) == 0 );


char* board985891631 = gamma_board(board);
assert( board985891631 != NULL );
assert( strcmp(board985891631, 
"3.715...13...128913\n"
"...............\n"
"..............9\n"
".811....6....79.\n"
"...............\n"
"...5....4......\n"
".2......6......\n"
"........11......\n"
"..513...21012.....\n"
".2..4..........\n"
"...14..515.14.....\n"
"........8......\n"
"......38....312.\n"
"11...1.13.....14.11\n"
"410614.....1.7...\n") == 0);
free(board985891631);
board985891631 = NULL;
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 178 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 15, 13) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 176 );
assert( gamma_move(board, 7, 12, 5) == 1 );
assert( gamma_move(board, 8, -1, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_move(board, 11, 13, 11) == 0 );
assert( gamma_move(board, 12, 9, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 1, 4) == 1 );
assert( gamma_free_fields(board, 13) == 172 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 9, 2) == 1 );
assert( gamma_move(board, 15, 6, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );


char* board115442162 = gamma_board(board);
assert( board115442162 != NULL );
assert( strcmp(board115442162, 
"3.715...13...128913\n"
"...............\n"
"..............9\n"
".811....6....79.\n"
"...............\n"
"10..5....4......\n"
"125.....6......\n"
"..4.....11......\n"
"..513...21012.....\n"
".2..4.15..12..7..\n"
".13.14..515.14.....\n"
"1.......8......\n"
".6....38.14..312.\n"
"11...1.13....414.11\n"
"410614.3...1.7...\n") == 0);
free(board115442162);
board115442162 = NULL;
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 12, 13) == 1 );
assert( gamma_move(board, 9, 10, 12) == 1 );
assert( gamma_move(board, 10, 4, 9) == 1 );
assert( gamma_move(board, 11, 4, 12) == 1 );
assert( gamma_move(board, 12, 9, -1) == 0 );
assert( gamma_move(board, 14, 13, 9) == 1 );
assert( gamma_free_fields(board, 15) == 160 );
assert( gamma_move(board, 1, -1, 15) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_free_fields(board, 4) == 157 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, -1, 13) == 0 );
assert( gamma_move(board, 12, 13, 6) == 1 );
assert( gamma_move(board, 13, 14, 0) == 1 );
assert( gamma_free_fields(board, 13) == 153 );
assert( gamma_move(board, 14, 3, 1) == 1 );
assert( gamma_golden_move(board, 14, 2, 12) == 0 );
assert( gamma_move(board, 15, 0, 7) == 1 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_free_fields(board, 2) == 151 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_free_fields(board, 6) == 150 );
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 10) == 1 );
assert( gamma_free_fields(board, 10) == 149 );
assert( gamma_move(board, 11, 10, 12) == 0 );


char* board373594716 = gamma_board(board);
assert( board373594716 != NULL );
assert( strcmp(board373594716, 
"3.715...13...128913\n"
"............8..\n"
"....11.....9...9\n"
".811....6....797\n"
".............10.\n"
"10..510...46...14.\n"
"125.....6......\n"
"15.4.....11......\n"
"..5138..21012...12.\n"
".2..4.15..12..7..\n"
".13.1426515.14.....\n"
"1.......8......\n"
".6....38414.3312.\n"
"11..141.13....414.11\n"
"410614.3...1.7..13\n") == 0);
free(board373594716);
board373594716 = NULL;
assert( gamma_move(board, 13, 15, 14) == 0 );
assert( gamma_move(board, 14, 0, 2) == 1 );


char* board879465387 = gamma_board(board);
assert( board879465387 != NULL );
assert( strcmp(board879465387, 
"3.715...13...128913\n"
"............8..\n"
"....11.....9...9\n"
".811....6....797\n"
".............10.\n"
"10..510...46...14.\n"
"125.....6......\n"
"15.4.....11......\n"
"..5138..21012...12.\n"
".2..4.15..12..7..\n"
".13.1426515.14.....\n"
"1.......8......\n"
"146....38414.3312.\n"
"11..141.13....414.11\n"
"410614.3...1.7..13\n") == 0);
free(board879465387);
board879465387 = NULL;
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 5, 14, 13) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 11, 15, 14) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );


char* board876834388 = gamma_board(board);
assert( board876834388 != NULL );
assert( strcmp(board876834388, 
"3.715...13...128913\n"
"..7.........8.5\n"
"....11.....9...9\n"
".811.2..6....797\n"
".............10.\n"
"10..510...46...14.\n"
"125.....6......\n"
"15.4.....11......\n"
"..5138..21012...12.\n"
".2..4.15..12..7..\n"
".13.1426515.14.....\n"
"18......8......\n"
"146....38414.3312.\n"
"11..141.13....414.11\n"
"410614.3...1.7..13\n") == 0);
free(board876834388);
board876834388 = NULL;
assert( gamma_move(board, 12, 15, 8) == 0 );
assert( gamma_move(board, 13, 10, 6) == 1 );
assert( gamma_move(board, 15, 10, 4) == 1 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 9, 12) == 1 );
assert( gamma_move(board, 11, 15, 9) == 0 );


char* board611930730 = gamma_board(board);
assert( board611930730 != NULL );
assert( strcmp(board611930730, 
"3.715...13...128913\n"
"..7.........8.5\n"
"....11....109...9\n"
".811.2..6....797\n"
"............410.\n"
"10..510...46...14.\n"
"125.....6......\n"
"15.4.....11......\n"
"..5138..2101213..12.\n"
".2..4.15..12..7..\n"
".13.1426515.1415....\n"
"18......8......\n"
"146....38414.3312.\n"
"11..141.13....414.11\n"
"410614.3...1.7..13\n") == 0);
free(board611930730);
board611930730 = NULL;
assert( gamma_move(board, 12, 15, 14) == 0 );
assert( gamma_free_fields(board, 12) == 140 );
assert( gamma_busy_fields(board, 14) == 8 );
assert( gamma_move(board, 15, 9, 3) == 1 );
assert( gamma_busy_fields(board, 15) == 6 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 139 );
assert( gamma_move(board, 6, 4, 15) == 0 );


char* board282588501 = gamma_board(board);
assert( board282588501 != NULL );
assert( strcmp(board282588501, 
"3.715...13...128913\n"
"..7.........8.5\n"
"....11....109...9\n"
".811.2..6....797\n"
"............410.\n"
"10..510...46...14.\n"
"125.....6......\n"
"15.4.....11......\n"
"..5138..2101213..12.\n"
".2..4.15..12..7..\n"
".13.1426515.1415....\n"
"18......815.....\n"
"146....38414.3312.\n"
"11..141.13....414.11\n"
"410614.3...1.7..13\n") == 0);
free(board282588501);
board282588501 = NULL;
assert( gamma_move(board, 7, 5, 3) == 1 );


char* board132675970 = gamma_board(board);
assert( board132675970 != NULL );
assert( strcmp(board132675970, 
"3.715...13...128913\n"
"..7.........8.5\n"
"....11....109...9\n"
".811.2..6....797\n"
"............410.\n"
"10..510...46...14.\n"
"125.....6......\n"
"15.4.....11......\n"
"..5138..2101213..12.\n"
".2..4.15..12..7..\n"
".13.1426515.1415....\n"
"18...7..815.....\n"
"146....38414.3312.\n"
"11..141.13....414.11\n"
"410614.3...1.7..13\n") == 0);
free(board132675970);
board132675970 = NULL;
assert( gamma_move(board, 8, 12, 11) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_free_fields(board, 11) == 136 );
assert( gamma_move(board, 13, 4, 8) == 1 );
assert( gamma_move(board, 14, 2, 7) == 0 );
assert( gamma_move(board, 15, 4, 1) == 0 );
assert( gamma_busy_fields(board, 15) == 6 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 13, 12) == 1 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_golden_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 11, 10, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 7, 8) == 1 );
assert( gamma_free_fields(board, 12) == 128 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 3, 3) == 1 );
assert( gamma_move(board, 14, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_free_fields(board, 9) == 124 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 12, -1, 10) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 14, 3, 9) == 0 );


gamma_delete(board);

    return 0;
}
