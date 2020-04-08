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
uuid: 207340620
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );


char* board597127602 = gamma_board(board);
assert( board597127602 != NULL );
assert( strcmp(board597127602, 
"..........\n"
"....1.....\n"
"....3.1...\n"
".3........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
".......2..\n") == 0);
free(board597127602);
board597127602 = NULL;
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 9, 6) == 1 );


char* board985733886 = gamma_board(board);
assert( board985733886 != NULL );
assert( strcmp(board985733886, 
"......7...\n"
"....1.....\n"
"2...3.1..3\n"
".3....8...\n"
"4.........\n"
"....5.....\n"
"6.........\n"
"...1......\n"
".......2..\n") == 0);
free(board985733886);
board985733886 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );


char* board680839630 = gamma_board(board);
assert( board680839630 != NULL );
assert( strcmp(board680839630, 
"......7...\n"
"....1.....\n"
"2..53.1..3\n"
".3....8...\n"
"4.........\n"
"....5.....\n"
"6.........\n"
"...1......\n"
"5......2..\n") == 0);
free(board680839630);
board680839630 = NULL;
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );


char* board659383654 = gamma_board(board);
assert( board659383654 != NULL );
assert( strcmp(board659383654, 
"......72..\n"
".6..1....2\n"
"2..53.1..3\n"
"637.8.8...\n"
"4.........\n"
"....5.....\n"
"6.........\n"
"...1......\n"
"5......2..\n") == 0);
free(board659383654);
board659383654 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );


char* board973196314 = gamma_board(board);
assert( board973196314 != NULL );
assert( strcmp(board973196314, 
"......72..\n"
".6..1....2\n"
"24.53.13.3\n"
"637.8.8...\n"
"4.........\n"
"....5.....\n"
"6.........\n"
"...1......\n"
"5..5..52..\n") == 0);
free(board973196314);
board973196314 = NULL;
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );


char* board699512731 = gamma_board(board);
assert( board699512731 != NULL );
assert( strcmp(board699512731, 
".6....72..\n"
".6..14...2\n"
"24.53413.3\n"
"63788.8...\n"
"4.1...3...\n"
"..775.672.\n"
"62........\n"
"...12.....\n"
"5..5..52..\n") == 0);
free(board699512731);
board699512731 = NULL;
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board267321563 = gamma_board(board);
assert( board267321563 != NULL );
assert( strcmp(board267321563, 
".6....72..\n"
".6..14.832\n"
"24753413.3\n"
"63788.8...\n"
"4.1...3...\n"
"..775.672.\n"
"62........\n"
"...12.....\n"
"5..5..52..\n") == 0);
free(board267321563);
board267321563 = NULL;
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );


char* board111239924 = gamma_board(board);
assert( board111239924 != NULL );
assert( strcmp(board111239924, 
".6....72.7\n"
".6..14.832\n"
"24753413.3\n"
"63788.8...\n"
"4.1..63...\n"
"..775.672.\n"
"62.....6.8\n"
"...12.....\n"
"5..5..52..\n") == 0);
free(board111239924);
board111239924 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );


char* board831541740 = gamma_board(board);
assert( board831541740 != NULL );
assert( strcmp(board831541740, 
".6....72.7\n"
".6..14.832\n"
"24753413.3\n"
"63788.8...\n"
"4.1..63...\n"
"..775.672.\n"
"62.....6.8\n"
"...12.....\n"
"5..5..525.\n") == 0);
free(board831541740);
board831541740 = NULL;
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );


char* board818622982 = gamma_board(board);
assert( board818622982 != NULL );
assert( strcmp(board818622982, 
".6....72.7\n"
".6..14.832\n"
"24753413.3\n"
"63788.8...\n"
"4.1..63...\n"
"..775.672.\n"
"62.....6.8\n"
"...12.....\n"
"5..5..525.\n") == 0);
free(board818622982);
board818622982 = NULL;
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_golden_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board968815792 = gamma_board(board);
assert( board968815792 != NULL );
assert( strcmp(board968815792, 
".6....72.7\n"
".6..14.832\n"
"24753413.3\n"
"6378818...\n"
"4.1..33...\n"
"..7756672.\n"
"62.....6.8\n"
"..812..1..\n"
"5..5..525.\n") == 0);
free(board968815792);
board968815792 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_golden_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_golden_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );


char* board288786412 = gamma_board(board);
assert( board288786412 != NULL );
assert( strcmp(board288786412, 
".6...472.7\n"
".6..14.832\n"
"24753413.3\n"
"63788183..\n"
"4.1..33...\n"
"..7756472.\n"
"62.7...628\n"
"5.812..17.\n"
"5..5..525.\n") == 0);
free(board288786412);
board288786412 = NULL;
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );


char* board359634230 = gamma_board(board);
assert( board359634230 != NULL );
assert( strcmp(board359634230, 
"46.5.47237\n"
".6..14.832\n"
"2175341383\n"
"63788183..\n"
"4.1..33.3.\n"
"..7756472.\n"
"6227...628\n"
"54812.817.\n"
"5..5.75255\n") == 0);
free(board359634230);
board359634230 = NULL;
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_golden_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
