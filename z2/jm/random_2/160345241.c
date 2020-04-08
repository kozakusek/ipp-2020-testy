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
uuid: 160345241
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 12, 10, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_free_fields(board, 7) == 160 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_free_fields(board, 7) == 149 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 10, 10, 12) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_free_fields(board, 4) == 145 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_free_fields(board, 8) == 141 );
assert( gamma_move(board, 9, 9, 0) == 1 );


char* board779180614 = gamma_board(board);
assert( board779180614 != NULL );
assert( strcmp(board779180614, 
".44.....7..5..\n"
"8..7..........\n"
"...9.10........\n"
"..........3...\n"
"..............\n"
".1............\n"
"........37..31\n"
"6.............\n"
"....81.....6..\n"
".6....4.......\n"
".1...9........\n"
"3.21.....98.5.\n") == 0);
free(board779180614);
board779180614 = NULL;
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 135 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );


char* board334703571 = gamma_board(board);
assert( board334703571 != NULL );
assert( strcmp(board334703571, 
".44.....7..5..\n"
"8..7..........\n"
"...9.10........\n"
".7........3.6.\n"
"...1..........\n"
".1...10........\n"
"........37..31\n"
"6........1....\n"
"....81....56..\n"
".6..2.4......5\n"
".1..49.2......\n"
"3.21.....98.5.\n") == 0);
free(board334703571);
board334703571 = NULL;
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 127 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 125 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 122 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 10, 8, 1) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board135295030 = gamma_board(board);
assert( board135295030 != NULL );
assert( strcmp(board135295030, 
".44..5..7..5..\n"
"8..7.4...6....\n"
"...9.10........\n"
".7........3.6.\n"
".1.1..........\n"
".1.10.10........\n"
"9.......37..31\n"
"6........1....\n"
".7..81....56..\n"
".6..24419....5\n"
".1..49.210.....\n"
"3621.....98.5.\n") == 0);
free(board135295030);
board135295030 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_free_fields(board, 2) == 115 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );


char* board582745370 = gamma_board(board);
assert( board582745370 != NULL );
assert( strcmp(board582745370, 
".44..5..7..57.\n"
"8..7.4...6....\n"
"...9.10........\n"
".7..8...2.3.6.\n"
".1.1........2.\n"
".1.10.10........\n"
"9.......37..31\n"
"6........1..7.\n"
".7..81....56..\n"
".6..24419....5\n"
".1..49.2104....\n"
"3621.....9815.\n") == 0);
free(board582745370);
board582745370 = NULL;
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 10, 6, 11) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_free_fields(board, 7) == 102 );
assert( gamma_move(board, 8, 12, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 10, 9, 6) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board654344634 = gamma_board(board);
assert( board654344634 != NULL );
assert( strcmp(board654344634, 
".44..510.7..57.\n"
"86.7.4...65.8.\n"
"...9.10.1......\n"
".7..8...293.64\n"
".1.1.......12.\n"
".1.10.10...10....\n"
"9......437..31\n"
"6......7.12.7.\n"
".7..81....56..\n"
".6..24419....5\n"
".1..49.2104....\n"
"3621.....9815.\n") == 0);
free(board654344634);
board654344634 = NULL;
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 97 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_free_fields(board, 8) == 96 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );


char* board165698929 = gamma_board(board);
assert( board165698929 != NULL );
assert( strcmp(board165698929, 
".44..510.7..57.\n"
"86.7.4...65.8.\n"
"...9.10.1......\n"
".7..8...293.64\n"
"81.1.......12.\n"
".1.10.10...10....\n"
"9.9..4.437..31\n"
"6......7.12.7.\n"
".7..81....56..\n"
".6..24419.3..5\n"
".1..49.2104....\n"
"3621.....9815.\n") == 0);
free(board165698929);
board165698929 = NULL;
assert( gamma_move(board, 10, 4, 11) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 91 );


char* board399431008 = gamma_board(board);
assert( board399431008 != NULL );
assert( strcmp(board399431008, 
".44.10510.7..57.\n"
"86.7.4.2.65.8.\n"
"...9.10.1....2.\n"
".7..8...293.64\n"
"81.1.......12.\n"
".1.10.10...10....\n"
"9.9..4.437..31\n"
"6......7.12.7.\n"
".7..81....56..\n"
"106..24419.3..5\n"
".1..49.2104....\n"
"3621.....9815.\n") == 0);
free(board399431008);
board399431008 = NULL;
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_free_fields(board, 9) == 88 );
assert( gamma_golden_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_free_fields(board, 6) == 84 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_free_fields(board, 9) == 82 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 6, 8) == 1 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_free_fields(board, 10) == 81 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );


char* board466997222 = gamma_board(board);
assert( board466997222 != NULL );
assert( strcmp(board466997222, 
".44.10510.75.57.\n"
"96.79442.65.83\n"
".2.9.10.1....2.\n"
"87..8.10.293.64\n"
"81.1.......12.\n"
".1.10.10...10..6.\n"
"9.9.74.437..31\n"
"6..7.9.7.12.7.\n"
".7.681..6.56..\n"
"106..24419.3..5\n"
".1..49.2104....\n"
"3621...5.9815.\n") == 0);
free(board466997222);
board466997222 = NULL;
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 11, 1) == 0 );


char* board446072848 = gamma_board(board);
assert( board446072848 != NULL );
assert( strcmp(board446072848, 
".44.10510.75.57.\n"
"96.79442.65.83\n"
".2.9.10.1....2.\n"
"87..8.10.293.64\n"
"81.1.......12.\n"
".1.10.10.9.10..6.\n"
"9.9.74.437..31\n"
"6..7.9.7.12.7.\n"
".7.681..6.56..\n"
"106..24419.3..5\n"
".1..49.2104....\n"
"3621...5.9815.\n") == 0);
free(board446072848);
board446072848 = NULL;
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 13, 11) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 10, 12, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );


char* board413988916 = gamma_board(board);
assert( board413988916 != NULL );
assert( strcmp(board413988916, 
".44.10510.75657.\n"
"96.79442465383\n"
".2.9.10.1....2.\n"
"87..8.10.293.64\n"
"81.1...5.8.12.\n"
".1.10.10.9.10..6.\n"
"9.9.74.437..31\n"
"6..7.947.12.7.\n"
".7.681..6.5610.\n"
"106..24419.3..5\n"
".1..49.2104....\n"
"3621...5.9815.\n") == 0);
free(board413988916);
board413988916 = NULL;
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_golden_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 10, 5, 11) == 0 );
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );


char* board464358208 = gamma_board(board);
assert( board464358208 != NULL );
assert( strcmp(board464358208, 
".44.10510.75657.\n"
"96.79442465383\n"
".2.9.10.1.93.2.\n"
"87..8.10.293.64\n"
"81.1...5108.12.\n"
".1.10.10.9.10..6.\n"
"9.9.74.437..31\n"
"6..7.947.12.7.\n"
".7.681..6.5610.\n"
"106..24419.3..5\n"
"714.49.2104....\n"
"3621...5.9815.\n") == 0);
free(board464358208);
board464358208 = NULL;
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_golden_move(board, 10, 4, 10) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_free_fields(board, 8) == 60 );


char* board206126597 = gamma_board(board);
assert( board206126597 != NULL );
assert( strcmp(board206126597, 
".44.10510.75657.\n"
"96.710442465383\n"
".2.9.10.1.93.2.\n"
"878.8.10.293.64\n"
"81.1...5108.12.\n"
".1.10.10.9.10..6.\n"
"9.9.74.437..31\n"
"6..7.947.12.7.\n"
".7.681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"3621...5.9815.\n") == 0);
free(board206126597);
board206126597 = NULL;
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );


char* board209121293 = gamma_board(board);
assert( board209121293 != NULL );
assert( strcmp(board209121293, 
".44.10510.75657.\n"
"96.710442465383\n"
".2.9.10.1.93.2.\n"
"878.8.10.293.64\n"
"81.1...5108.12.\n"
"21.10.10.9.10..6.\n"
"9.9.74.437..31\n"
"6..7.947.12.7.\n"
".7.681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"3621...5.9815.\n") == 0);
free(board209121293);
board209121293 = NULL;
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_free_fields(board, 8) == 58 );


char* board851976364 = gamma_board(board);
assert( board851976364 != NULL );
assert( strcmp(board851976364, 
".44.10510.75657.\n"
"96.710442465383\n"
".2.9.10.1.93.24\n"
"878.8.10.293.64\n"
"81.1...5108.12.\n"
"21.10.10.9.10..6.\n"
"9.9.74.437..31\n"
"6..7.947.12.7.\n"
".7.681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"3621...5.9815.\n") == 0);
free(board851976364);
board851976364 = NULL;
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 10, 5, 11) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 10, 13, 2) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_free_fields(board, 10) == 17 );
assert( gamma_golden_move(board, 10, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );


char* board977155961 = gamma_board(board);
assert( board977155961 != NULL );
assert( strcmp(board977155961, 
".44.10510.75657.\n"
"96.710442465383\n"
"22.9.10.1993324\n"
"878.8.10.293.64\n"
"81.1...5108.12.\n"
"21.10.10.9.102.6.\n"
"939.74.437..31\n"
"6..7.947.12.7.\n"
".7.681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"3621...5.9815.\n") == 0);
free(board977155961);
board977155961 = NULL;
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_golden_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 12 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 10, 4, 11) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );


char* board745235807 = gamma_board(board);
assert( board745235807 != NULL );
assert( strcmp(board745235807, 
".44.10510.75657.\n"
"98.710442465383\n"
"22.9.10.1993324\n"
"878.8.10.293.64\n"
"81.1...5108.12.\n"
"21.10.10.97102.6.\n"
"939.74.437..31\n"
"6..77947.12.7.\n"
"678681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"36211..5.9815.\n") == 0);
free(board745235807);
board745235807 = NULL;
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 0) == 1 );
assert( gamma_golden_move(board, 7, 2, 10) == 0 );


char* board770642677 = gamma_board(board);
assert( board770642677 != NULL );
assert( strcmp(board770642677, 
".44.10510.75657.\n"
"98.710442465383\n"
"22.9.10.1993324\n"
"878.8.10.293.64\n"
"81.1...5108.12.\n"
"21.10.10.97102.6.\n"
"939.74.437..31\n"
"6..77947.12.7.\n"
"678681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"36211..5.6815.\n") == 0);
free(board770642677);
board770642677 = NULL;
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 4, 3) == 0 );


char* board450401171 = gamma_board(board);
assert( board450401171 != NULL );
assert( strcmp(board450401171, 
".44.10510875657.\n"
"98.710442465383\n"
"22.9.10.1993324\n"
"878.8.105293.64\n"
"81.1...5108112.\n"
"21.10.10.97102.6.\n"
"939.74.437..31\n"
"6.877947.12.7.\n"
"678681..6.5610.\n"
"106..24419935.5\n"
"714.49.21045...\n"
"36211..5.6815.\n") == 0);
free(board450401171);
board450401171 = NULL;
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 12 );
assert( gamma_golden_move(board, 10, 10, 12) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );


char* board105113038 = gamma_board(board);
assert( board105113038 != NULL );
assert( strcmp(board105113038, 
".44.10510875657.\n"
"98.710442465383\n"
"22.9.1041993324\n"
"878.8.105293.64\n"
"81.1...5108112.\n"
"21.10.10.97102.6.\n"
"939.74.437..31\n"
"6.877947.12.7.\n"
"678681..685610.\n"
"1068.24419935.5\n"
"714.49.21045...\n"
"36211..5.6815.\n") == 0);
free(board105113038);
board105113038 = NULL;
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );


char* board914688279 = gamma_board(board);
assert( board914688279 != NULL );
assert( strcmp(board914688279, 
".44.10510875657.\n"
"98.710442465383\n"
"22.9.1041993324\n"
"878.8.105293.64\n"
"81.1...5108112.\n"
"21.10.10.97102.6.\n"
"939.74.437..31\n"
"6.877947.12.7.\n"
"678681..685610.\n"
"1068.24419935.5\n"
"714.49.21045...\n"
"36211..5.6815.\n") == 0);
free(board914688279);
board914688279 = NULL;
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 10, 12, 9) == 0 );


char* board865077255 = gamma_board(board);
assert( board865077255 != NULL );
assert( strcmp(board865077255, 
".44.10510875657.\n"
"98.710442465383\n"
"22.9.1041993324\n"
"878.8.105293.64\n"
"81.1...5108112.\n"
"21.10.10.97102.6.\n"
"939.74.437..31\n"
"6.877947.12.7.\n"
"678681..685610.\n"
"1068.24419935.5\n"
"714.49.21045...\n"
"36211..5.6815.\n") == 0);
free(board865077255);
board865077255 = NULL;
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_golden_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_golden_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );


char* board685682143 = gamma_board(board);
assert( board685682143 != NULL );
assert( strcmp(board685682143, 
".44.10510875657.\n"
"98.710442465383\n"
"2229.1041993324\n"
"878.88105293.64\n"
"81.1...5108112.\n"
"21.10.10997102.6.\n"
"939.74.437..31\n"
"6.877947.12.7.\n"
"678681..685610.\n"
"1068.24419935.5\n"
"714149321045..3\n"
"36211..5.6815.\n") == 0);
free(board685682143);
board685682143 = NULL;
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_golden_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 7, 13) == 0 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );


char* board728900401 = gamma_board(board);
assert( board728900401 != NULL );
assert( strcmp(board728900401, 
".44.10510875657.\n"
"98.710442465383\n"
"222981041993324\n"
"878.88105293.64\n"
"81.1...5108112.\n"
"21.10.10997102.6.\n"
"939.74.437..31\n"
"6.877947.12.7.\n"
"678681..685610.\n"
"1068.24419935.5\n"
"714149321045..3\n"
"36211..5.6815.\n") == 0);
free(board728900401);
board728900401 = NULL;
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );


gamma_delete(board);

    return 0;
}
