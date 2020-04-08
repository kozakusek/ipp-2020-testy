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
uuid: 162420631
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 14, 6, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );


char* board583065916 = gamma_board(board);
assert( board583065916 != NULL );
assert( strcmp(board583065916, 
".............\n"
".............\n"
".............\n"
"2............\n"
"2............\n"
".............\n"
".............\n"
".6.....1.....\n"
"41.....2.....\n"
".............\n"
".........2...\n"
"5............\n"
".....5.......\n"
".............\n") == 0);
free(board583065916);
board583065916 = NULL;
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_free_fields(board, 3) == 144 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 8, 6) == 1 );


char* board350248091 = gamma_board(board);
assert( board350248091 != NULL );
assert( strcmp(board350248091, 
".....115.....\n"
"...3....3....\n"
"..5.........1\n"
"2.......3....\n"
"2...4....43..\n"
".4..35....1..\n"
"6..6...32....\n"
"36.61.312....\n"
"41...4.21..2.\n"
"3..62......2.\n"
".......6.2...\n"
"5..1........4\n"
"2...15.....6.\n"
"....6.....3..\n") == 0);
free(board350248091);
board350248091 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 4, 13) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_free_fields(board, 2) == 113 );


char* board397509771 = gamma_board(board);
assert( board397509771 != NULL );
assert( strcmp(board397509771, 
".6..6115.....\n"
"...3.1..3....\n"
"3.5...2.5...1\n"
"2.......35...\n"
"2...4....43..\n"
"24..35....1..\n"
"6..6...32....\n"
"36661.312.5..\n"
"41..34.21..2.\n"
"3..62..3...24\n"
"..4..5.6.21..\n"
"5.216.......4\n"
"2...15.....6.\n"
"...56..3..3..\n") == 0);
free(board397509771);
board397509771 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );


char* board625669185 = gamma_board(board);
assert( board625669185 != NULL );
assert( strcmp(board625669185, 
".6..6115.....\n"
"...3.1..3....\n"
"3.5...2.5...1\n"
"2.......35...\n"
"2...4....43..\n"
"24..35....1.3\n"
"6.26...324..5\n"
"366615312.5.6\n"
"41..34.21..2.\n"
"3..62..3..324\n"
"..4..5.6221..\n"
"5.216.....2.4\n"
"2..315.....66\n"
"...56..3..33.\n") == 0);
free(board625669185);
board625669185 = NULL;
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_free_fields(board, 5) == 101 );
assert( gamma_golden_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_golden_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 92 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_free_fields(board, 6) == 87 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 12, 12) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board265836384 = gamma_board(board);
assert( board265836384 != NULL );
assert( strcmp(board265836384, 
".6..6115.....\n"
"...3.1..34..3\n"
"3.53..2.5...1\n"
"2....5..35...\n"
"2...4....436.\n"
"24..35....1.3\n"
"6.26...324..5\n"
"366615312.5.6\n"
"41..34.21..2.\n"
"3..625.3..324\n"
"5.46.5.62212.\n"
"532162...22.4\n"
"2..315.3.6.66\n"
".4.56..3..33.\n") == 0);
free(board265836384);
board265836384 = NULL;
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_free_fields(board, 6) == 82 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );


char* board973012569 = gamma_board(board);
assert( board973012569 != NULL );
assert( strcmp(board973012569, 
".6..6115..4..\n"
"...3.1..34..3\n"
"3.536.2.5...1\n"
"2....5..35...\n"
"2...4....436.\n"
"24..35...21.3\n"
"6.26...124..5\n"
"366615312.5.6\n"
"41..34.21..2.\n"
"3..625.3..324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6.66\n"
".4.56..32.33.\n") == 0);
free(board973012569);
board973012569 = NULL;
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 12, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_free_fields(board, 5) == 63 );


char* board262850847 = gamma_board(board);
assert( board262850847 != NULL );
assert( strcmp(board262850847, 
".66.6115..4.1\n"
".3.3.1..341.3\n"
"3.53652.5..61\n"
"2...65.6354..\n"
"2...45...436.\n"
"24..3545.21.3\n"
"6.26.5.1244.5\n"
"366615312.516\n"
"41..34.21..2.\n"
"3..625.3.3324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.56..32.33.\n") == 0);
free(board262850847);
board262850847 = NULL;
assert( gamma_busy_fields(board, 6) == 22 );


char* board122489821 = gamma_board(board);
assert( board122489821 != NULL );
assert( strcmp(board122489821, 
".66.6115..4.1\n"
".3.3.1..341.3\n"
"3.53652.5..61\n"
"2...65.6354..\n"
"2...45...436.\n"
"24..3545.21.3\n"
"6.26.5.1244.5\n"
"366615312.516\n"
"41..34.21..2.\n"
"3..625.3.3324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.56..32.33.\n") == 0);
free(board122489821);
board122489821 = NULL;
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_golden_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_move(board, 6, 11, 12) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );


char* board666058514 = gamma_board(board);
assert( board666058514 != NULL );
assert( strcmp(board666058514, 
".66.61152.4.1\n"
".3.3.1..34163\n"
"3.53652.5.661\n"
"2...65.6354..\n"
"2...45..6436.\n"
"24..3545.21.3\n"
"6.2645.1244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.3.3324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.56..32.33.\n") == 0);
free(board666058514);
board666058514 = NULL;
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 26 );


char* board813158375 = gamma_board(board);
assert( board813158375 != NULL );
assert( strcmp(board813158375, 
".66.61152.4.1\n"
".3.3.1..34163\n"
"3.53652.5.661\n"
"2...65.6354..\n"
"2...45..6436.\n"
"24..3545.21.3\n"
"6.2645.1244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.3.3324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.56..32.33.\n") == 0);
free(board813158375);
board813158375 = NULL;
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_golden_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );


char* board313658907 = gamma_board(board);
assert( board313658907 != NULL );
assert( strcmp(board313658907, 
".66.61152.4.1\n"
".3.321..34163\n"
"3.53652.5.661\n"
"2..565.6354..\n"
"2...45..6436.\n"
"241.3545421.3\n"
"6.264561244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.6.3324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.56..32.33.\n") == 0);
free(board313658907);
board313658907 = NULL;
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 28 );


char* board889611616 = gamma_board(board);
assert( board889611616 != NULL );
assert( strcmp(board889611616, 
".66.61152.4.1\n"
".3.321..34163\n"
"3.53652.5.661\n"
"2..565.6354..\n"
"2.6.45..6436.\n"
"24123545421.3\n"
"62264561244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.633324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.56..32.33.\n") == 0);
free(board889611616);
board889611616 = NULL;
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );


char* board513563881 = gamma_board(board);
assert( board513563881 != NULL );
assert( strcmp(board513563881, 
".66.61152.4.1\n"
".3.321..34163\n"
"3.53652.5.661\n"
"2..565.6354..\n"
"2.6.45..6436.\n"
"24123545421.3\n"
"62264561244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.633324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.563.32.33.\n") == 0);
free(board513563881);
board513563881 = NULL;
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board602723539 = gamma_board(board);
assert( board602723539 != NULL );
assert( strcmp(board602723539, 
".66.61152.4.1\n"
".3.321..34163\n"
"3.53652.5.661\n"
"2..565.6354..\n"
"2.6.45..6436.\n"
"24123545421.3\n"
"62264561244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.633324\n"
"5.46.5.62212.\n"
"532162..522.4\n"
"21.315.3.6366\n"
".4.563.32.33.\n") == 0);
free(board602723539);
board602723539 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );


char* board956757938 = gamma_board(board);
assert( board956757938 != NULL );
assert( strcmp(board956757938, 
".66.61152.4.1\n"
".3.321..34163\n"
"3.53652.5.661\n"
"2..565.6354..\n"
"2.6.45..6436.\n"
"24123545421.3\n"
"62264561244.5\n"
"3666153125516\n"
"41..34.21..2.\n"
"3..625.633324\n"
"5.46.5.62212.\n"
"532162.4522.4\n"
"21.315.3.6366\n"
".4.563.32133.\n") == 0);
free(board956757938);
board956757938 = NULL;
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_move(board, 1, 13, 2) == 0 );


char* board591541710 = gamma_board(board);
assert( board591541710 != NULL );
assert( strcmp(board591541710, 
".66461152.4.1\n"
"53.321..34163\n"
"3.53652.5.661\n"
"2.5565.63545.\n"
"216245..6436.\n"
"24123545421.3\n"
"6226456124465\n"
"3666153125516\n"
"41.134121..24\n"
"32.6252633324\n"
"5.46.5562212.\n"
"532162.4522.4\n"
"21.315.326366\n"
"44.563.321336\n") == 0);
free(board591541710);
board591541710 = NULL;
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );


char* board755679023 = gamma_board(board);
assert( board755679023 != NULL );
assert( strcmp(board755679023, 
".66461152.4.1\n"
"53.321..34163\n"
"3.53652.5.661\n"
"2.5565.63545.\n"
"216245..6436.\n"
"24123545421.3\n"
"6226455124465\n"
"3666153125516\n"
"41.134121..24\n"
"32.6252633324\n"
"5.46.5562212.\n"
"532162.4522.4\n"
"21.315.326366\n"
"44.563.321336\n") == 0);
free(board755679023);
board755679023 = NULL;
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_free_fields(board, 3) == 10 );


char* board815169988 = gamma_board(board);
assert( board815169988 != NULL );
assert( strcmp(board815169988, 
".66461152.4.1\n"
"53.321..34163\n"
"3653652.5.661\n"
"2.5565.63545.\n"
"216245..6436.\n"
"24123545421.3\n"
"6226455124465\n"
"3666153125516\n"
"41.134121..24\n"
"32.6252633324\n"
"5.46.5562212.\n"
"532162.4522.4\n"
"21.315.326366\n"
"44.563.321336\n") == 0);
free(board815169988);
board815169988 = NULL;
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_golden_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_golden_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
