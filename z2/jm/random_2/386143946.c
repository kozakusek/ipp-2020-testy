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
uuid: 386143946
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 11, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );


char* board987568900 = gamma_board(board);
assert( board987568900 != NULL );
assert( strcmp(board987568900, 
".5.......\n"
".........\n"
"2........\n"
".........\n"
".4.......\n"
"1........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"6........\n"
"...2.....\n") == 0);
free(board987568900);
board987568900 = NULL;
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_free_fields(board, 9) == 97 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_free_fields(board, 10) == 96 );
assert( gamma_move(board, 11, 4, 5) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 11, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );


char* board789108078 = gamma_board(board);
assert( board789108078 != NULL );
assert( strcmp(board789108078, 
".5.......\n"
".........\n"
"2.....2..\n"
"29......4\n"
"14.......\n"
"1...11....\n"
"783.115786\n"
"....2..31\n"
".73.....8\n"
"..1......\n"
"6.....93.\n"
".5.2108.10.\n") == 0);
free(board789108078);
board789108078 = NULL;
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_golden_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 10, 1) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_free_fields(board, 7) == 64 );


char* board570118444 = gamma_board(board);
assert( board570118444 != NULL );
assert( strcmp(board570118444, 
".5...3...\n"
"......9..\n"
"2.....2.7\n"
"29......4\n"
"14.......\n"
"110.111....\n"
"783.115786\n"
"...52..31\n"
"1173.....8\n"
"6.6....46\n"
"6.....93.\n"
"85.2108.10.\n") == 0);
free(board570118444);
board570118444 = NULL;
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board254136797 = gamma_board(board);
assert( board254136797 != NULL );
assert( strcmp(board254136797, 
".5...3...\n"
"......9..\n"
"2.....2.7\n"
"29......4\n"
"14.......\n"
"110.111...9\n"
"783.115786\n"
"...52..31\n"
"1173.....8\n"
"6.6....46\n"
"6.....93.\n"
"85.2108.10.\n") == 0);
free(board254136797);
board254136797 = NULL;
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 11, 4, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 3, 4) == 0 );


char* board180402397 = gamma_board(board);
assert( board180402397 != NULL );
assert( strcmp(board180402397, 
".5...3...\n"
"......9..\n"
"2.....2.7\n"
"29......4\n"
"14..11...6\n"
"110.111...9\n"
"783.115786\n"
"...52..31\n"
"1173.....8\n"
"6.6....46\n"
"6.....93.\n"
"85.2108.10.\n") == 0);
free(board180402397);
board180402397 = NULL;
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_free_fields(board, 11) == 60 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 6, 11) == 1 );
assert( gamma_move(board, 9, 7, 11) == 1 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_free_fields(board, 11) == 54 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );


char* board523822139 = gamma_board(board);
assert( board523822139 != NULL );
assert( strcmp(board523822139, 
".5...389.\n"
"......9..\n"
"2.1...2.7\n"
"29......4\n"
"14..11.11.6\n"
"110.111...9\n"
"783.115786\n"
"...52..31\n"
"1173.....8\n"
"616.10..46\n"
"6.8...93.\n"
"85.2108.1010\n") == 0);
free(board523822139);
board523822139 = NULL;
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 11, 6, 11) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );


char* board940637530 = gamma_board(board);
assert( board940637530 != NULL );
assert( strcmp(board940637530, 
"253..3898\n"
".5....9..\n"
"2.1...2.7\n"
"29.77.4.4\n"
"14..11511.6\n"
"11031114..9\n"
"783.115786\n"
"...522.31\n"
"1173761..8\n"
"616.10..46\n"
"6.8..193.\n"
"8542108.1010\n") == 0);
free(board940637530);
board940637530 = NULL;
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );


char* board976203592 = gamma_board(board);
assert( board976203592 != NULL );
assert( strcmp(board976203592, 
"2534.3898\n"
".5....9..\n"
"2.1...2.7\n"
"29.77.4.4\n"
"14..11511.6\n"
"11031114..9\n"
"783.115786\n"
"...522.31\n"
"1173761.108\n"
"616.10..46\n"
"6.8..193.\n"
"8542108.1010\n") == 0);
free(board976203592);
board976203592 = NULL;
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_free_fields(board, 8) == 35 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 10, 4, 10) == 1 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );


char* board251817925 = gamma_board(board);
assert( board251817925 != NULL );
assert( strcmp(board251817925, 
"2534.3898\n"
".5..10.9..\n"
"2.1...2.7\n"
"29.77.4.4\n"
"14..11511.6\n"
"11031114..9\n"
"783.115786\n"
".8.522.31\n"
"1173761.108\n"
"616.10..46\n"
"6.8..193.\n"
"8542108.1010\n") == 0);
free(board251817925);
board251817925 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board109736298 = gamma_board(board);
assert( board109736298 != NULL );
assert( strcmp(board109736298, 
"2534.3898\n"
".5..10.9..\n"
"2.1...2.7\n"
"29.77.4.4\n"
"14..11511.6\n"
"11031114..9\n"
"783.115786\n"
".8.522.31\n"
"1173761.108\n"
"616.10..46\n"
"6.8..193.\n"
"8542108.1010\n") == 0);
free(board109736298);
board109736298 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_golden_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board248152133 = gamma_board(board);
assert( board248152133 != NULL );
assert( strcmp(board248152133, 
"2534.3898\n"
".5..10.9.6\n"
"2.1...227\n"
"29.77.4.4\n"
"14..11511.6\n"
"11031114..9\n"
"78310115786\n"
".8.522.31\n"
"1173761.108\n"
"6163105.46\n"
"6989.193.\n"
"8542108.1010\n") == 0);
free(board248152133);
board248152133 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_golden_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_golden_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 7, 8) == 1 );


char* board836836833 = gamma_board(board);
assert( board836836833 != NULL );
assert( strcmp(board836836833, 
"2534.3898\n"
".5..10.9.6\n"
"2.11..227\n"
"29.77.494\n"
"14..1151196\n"
"11031114..9\n"
"7838115746\n"
"48.522.31\n"
"1173761.108\n"
"6163105.46\n"
"6989.193.\n"
"8542108.1010\n") == 0);
free(board836836833);
board836836833 = NULL;
assert( gamma_move(board, 10, 10, 5) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_move(board, 3, 6, 5) == 1 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 10, 3, 10) == 1 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_golden_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_free_fields(board, 9) == 16 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 10, 2) == 0 );


char* board687386351 = gamma_board(board);
assert( board687386351 != NULL );
assert( strcmp(board687386351, 
"253453898\n"
".5.101059.6\n"
"2.11..227\n"
"21.773494\n"
"14..1151196\n"
"1531114679\n"
"7838115346\n"
"48.522431\n"
"1173761.108\n"
"6163105.46\n"
"69891193.\n"
"8542108.1010\n") == 0);
free(board687386351);
board687386351 = NULL;
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 4, 9) == 1 );


gamma_delete(board);

    return 0;
}
