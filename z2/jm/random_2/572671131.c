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
uuid: 572671131
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 12, 12, 10);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 84 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_free_fields(board, 6) == 80 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 10, 0, 10) == 1 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 12, 1, 9) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 10, 2, 7) == 1 );


char* board818170889 = gamma_board(board);
assert( board818170889 != NULL );
assert( strcmp(board818170889, 
".7..2..\n"
"10......\n"
".122....\n"
".......\n"
"..10....\n"
"...9...\n"
"856....\n"
"..4....\n"
"...4.3.\n"
"..29..8\n"
"....53.\n"
"...7...\n") == 0);
free(board818170889);
board818170889 = NULL;
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 12, 6, 10) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );


char* board212557341 = gamma_board(board);
assert( board212557341 != NULL );
assert( strcmp(board212557341, 
".7..2..\n"
"10.....12\n"
".122....\n"
".......\n"
"..10....\n"
"...9...\n"
"856..12.\n"
"..4....\n"
"...4.3.\n"
"..29..8\n"
"..2.53.\n"
"...72..\n") == 0);
free(board212557341);
board212557341 = NULL;
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board844203123 = gamma_board(board);
assert( board844203123 != NULL );
assert( strcmp(board844203123, 
".7..2..\n"
"10.....12\n"
".122....\n"
".......\n"
"..10....\n"
"...9...\n"
"856..12.\n"
"..4....\n"
"...4.3.\n"
"..29..8\n"
"..2.53.\n"
"...72..\n") == 0);
free(board844203123);
board844203123 = NULL;
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 12, 6, 6) == 1 );
assert( gamma_free_fields(board, 12) == 57 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );


char* board897314269 = gamma_board(board);
assert( board897314269 != NULL );
assert( strcmp(board897314269, 
".7..2..\n"
"10.4...12\n"
".122.6..\n"
".......\n"
".1010....\n"
"...9..12\n"
"856..12.\n"
"3.4....\n"
"2..463.\n"
"..29..8\n"
"..2.53.\n"
".1.72..\n") == 0);
free(board897314269);
board897314269 = NULL;
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );


char* board760185853 = gamma_board(board);
assert( board760185853 != NULL );
assert( strcmp(board760185853, 
".7..2..\n"
"10.4...12\n"
".122.6..\n"
".......\n"
"91010....\n"
"...9..12\n"
"856..12.\n"
"364....\n"
"27.463.\n"
"..297.8\n"
"..2.53.\n"
".11072..\n") == 0);
free(board760185853);
board760185853 = NULL;
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 12, 6, 4) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_free_fields(board, 12) == 40 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );


char* board828557448 = gamma_board(board);
assert( board828557448 != NULL );
assert( strcmp(board828557448, 
".7..2..\n"
"10.43..12\n"
".122.6..\n"
".....10.\n"
"91010..9.\n"
"...91512\n"
"8563212.\n"
"364...12\n"
"27.463.\n"
"..297.8\n"
"..2.53.\n"
"1111072.11\n") == 0);
free(board828557448);
board828557448 = NULL;
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_free_fields(board, 9) == 37 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_free_fields(board, 10) == 37 );
assert( gamma_golden_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 8, 0) == 0 );


char* board384357748 = gamma_board(board);
assert( board384357748 != NULL );
assert( strcmp(board384357748, 
".7..2..\n"
"10.43..12\n"
".122.6..\n"
".....10.\n"
"91010..9.\n"
".6.91512\n"
"8563212.\n"
"364...12\n"
"27.463.\n"
"..297.8\n"
"..2.53.\n"
"11110102.11\n") == 0);
free(board384357748);
board384357748 = NULL;
assert( gamma_move(board, 12, 10, 5) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_golden_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_free_fields(board, 9) == 34 );
assert( gamma_move(board, 10, 4, 10) == 1 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );


char* board599952838 = gamma_board(board);
assert( board599952838 != NULL );
assert( strcmp(board599952838, 
".7..2..\n"
"10.4310.12\n"
".122.6.8\n"
".....10.\n"
"91010..96\n"
".6.91512\n"
"8563212.\n"
"364...12\n"
"277463.\n"
"..29728\n"
"..2.58.\n"
"11110102.11\n") == 0);
free(board599952838);
board599952838 = NULL;
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );


char* board283071494 = gamma_board(board);
assert( board283071494 != NULL );
assert( strcmp(board283071494, 
".7..2..\n"
"10.4310.12\n"
".122.6.8\n"
".....10.\n"
"91010..96\n"
".6.91512\n"
"8563212.\n"
"364...12\n"
"277463.\n"
"..29728\n"
"..2.58.\n"
"11110102.11\n") == 0);
free(board283071494);
board283071494 = NULL;
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 12, 6, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 3, 6) == 0 );


char* board869705545 = gamma_board(board);
assert( board869705545 != NULL );
assert( strcmp(board869705545, 
".7..2..\n"
"10.4310.12\n"
".122.6.8\n"
".....10.\n"
"91010..96\n"
".6.91512\n"
"8563212.\n"
"36441.12\n"
"277463.\n"
".1129728\n"
"10.235812\n"
"11110102611\n") == 0);
free(board869705545);
board869705545 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_free_fields(board, 10) == 24 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 11, 0, 6) == 1 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );


char* board404848961 = gamma_board(board);
assert( board404848961 != NULL );
assert( strcmp(board404848961, 
".7..2.1\n"
"10.4310.12\n"
"3122.6.8\n"
"..48.10.\n"
"91010..96\n"
"116291512\n"
"2561212.\n"
"36441.12\n"
"277463.\n"
".1129728\n"
"10.235812\n"
"11110102611\n") == 0);
free(board404848961);
board404848961 = NULL;
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_free_fields(board, 10) == 18 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );


char* board136761958 = gamma_board(board);
assert( board136761958 != NULL );
assert( strcmp(board136761958, 
".7..2.1\n"
"10.4310.12\n"
"3122.6.8\n"
"..48.10.\n"
"9101010.96\n"
"116291512\n"
"2561212.\n"
"36441.12\n"
"277463.\n"
".1129728\n"
"10.235812\n"
"11110102611\n") == 0);
free(board136761958);
board136761958 = NULL;
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 2, 10) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_golden_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 10, 1) == 0 );
assert( gamma_move(board, 12, 11, 5) == 0 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_free_fields(board, 8) == 11 );


char* board525398385 = gamma_board(board);
assert( board525398385 != NULL );
assert( strcmp(board525398385, 
"77542.1\n"
"1064310.12\n"
"3122.638\n"
"3.48.10.\n"
"9101010.96\n"
"116291512\n"
"2561212.\n"
"56441.12\n"
"477463.\n"
".1129728\n"
"105235812\n"
"11110102611\n") == 0);
free(board525398385);
board525398385 = NULL;
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_free_fields(board, 12) == 11 );


gamma_delete(board);

    return 0;
}
