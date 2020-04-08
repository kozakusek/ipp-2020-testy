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
uuid: 245027782
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 14, 9, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );


char* board553556511 = gamma_board(board);
assert( board553556511 != NULL );
assert( strcmp(board553556511, 
".........\n"
".........\n"
"....1....\n"
".........\n"
".........\n"
".1.......\n"
".........\n"
".........\n"
".........\n"
".........\n"
".2.......\n"
"........3\n"
".........\n"
".........\n") == 0);
free(board553556511);
board553556511 = NULL;
assert( gamma_move(board, 4, 7, 3) == 1 );


char* board306496263 = gamma_board(board);
assert( board306496263 != NULL );
assert( strcmp(board306496263, 
".........\n"
".........\n"
"....1....\n"
".........\n"
".........\n"
".1.......\n"
".........\n"
".........\n"
".........\n"
".........\n"
".2.....4.\n"
"........3\n"
".........\n"
".........\n") == 0);
free(board306496263);
board306496263 = NULL;
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 112 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );


char* board127289237 = gamma_board(board);
assert( board127289237 != NULL );
assert( strcmp(board127289237, 
"..1.5..4.\n"
"...16....\n"
"....1....\n"
".........\n"
".........\n"
".1.......\n"
"....2....\n"
"........7\n"
"......9..\n"
"7.73.....\n"
"729....4.\n"
"..3..5..3\n"
".6....6..\n"
"..58..55.\n") == 0);
free(board127289237);
board127289237 = NULL;
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_golden_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );


char* board610724126 = gamma_board(board);
assert( board610724126 != NULL );
assert( strcmp(board610724126, 
"..1.5..4.\n"
"..116....\n"
"....1.16.\n"
".....7..4\n"
".........\n"
"91.2.....\n"
".85.2...9\n"
"...2....7\n"
"81.3..9..\n"
"7.73....6\n"
"729....4.\n"
"..3..5..3\n"
".64...68.\n"
"..58..55.\n") == 0);
free(board610724126);
board610724126 = NULL;
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 81 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );


char* board410737391 = gamma_board(board);
assert( board410737391 != NULL );
assert( strcmp(board410737391, 
"..1.5..4.\n"
"..116....\n"
"....1.16.\n"
"..2..7..4\n"
".........\n"
"91.2.2...\n"
".85.2...9\n"
"...2....7\n"
"81.3..9..\n"
"7173.65.6\n"
"729...84.\n"
"..3..5..3\n"
".64...68.\n"
".258..55.\n") == 0);
free(board410737391);
board410737391 = NULL;
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_free_fields(board, 7) == 75 );


char* board403582217 = gamma_board(board);
assert( board403582217 != NULL );
assert( strcmp(board403582217, 
"7.1.5..4.\n"
"..116....\n"
"....1.16.\n"
"..2..7..4\n"
".........\n"
"91.2.2...\n"
".85.2...9\n"
"...2....7\n"
"81.3..9..\n"
"7173.65.6\n"
"729...84.\n"
"..3..5..3\n"
".64...68.\n"
".258..55.\n") == 0);
free(board403582217);
board403582217 = NULL;
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_golden_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_free_fields(board, 9) == 71 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_free_fields(board, 8) == 59 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );


char* board322060425 = gamma_board(board);
assert( board322060425 != NULL );
assert( strcmp(board322060425, 
"7.1.5..4.\n"
".61166...\n"
"....1.16.\n"
".92.57..4\n"
"27...5..2\n"
"91.2.2...\n"
".85.23..9\n"
"...2..417\n"
"81.3.3978\n"
"7173.65.6\n"
"729...84.\n"
"..3..51.3\n"
".64...68.\n"
".258.555.\n") == 0);
free(board322060425);
board322060425 = NULL;
assert( gamma_golden_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_golden_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_move(board, 9, 1, 13) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );


char* board466543097 = gamma_board(board);
assert( board466543097 != NULL );
assert( strcmp(board466543097, 
"791.54.4.\n"
".61166..3\n"
"....1.16.\n"
".92757..4\n"
"278..5.72\n"
"91.2.2...\n"
".85.23.69\n"
".1.2..417\n"
"81.3.3978\n"
"7173.65.6\n"
"729.9.84.\n"
".73..51.3\n"
".648..68.\n"
".258.555.\n") == 0);
free(board466543097);
board466543097 = NULL;
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_free_fields(board, 8) == 45 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 9, 8, 11) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_golden_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );


char* board494794393 = gamma_board(board);
assert( board494794393 != NULL );
assert( strcmp(board494794393, 
"791.54.4.\n"
".61166..3\n"
"....1.169\n"
".92757.24\n"
"278..5972\n"
"9132.2..2\n"
".85.23.69\n"
".1.2..417\n"
"81.363973\n"
"7173.65.6\n"
"72919.84.\n"
".73..51.3\n"
"2648..68.\n"
".258.555.\n") == 0);
free(board494794393);
board494794393 = NULL;
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );


char* board915323124 = gamma_board(board);
assert( board915323124 != NULL );
assert( strcmp(board915323124, 
"791.54.4.\n"
".61166..3\n"
"....1.169\n"
"492757.24\n"
"278..5972\n"
"9132.2..2\n"
".85.23.69\n"
".1.2..417\n"
"81.363973\n"
"7173.65.6\n"
"72919.84.\n"
".73..51.3\n"
"2648..68.\n"
".258.555.\n") == 0);
free(board915323124);
board915323124 = NULL;
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_golden_move(board, 9, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );


char* board682692682 = gamma_board(board);
assert( board682692682 != NULL );
assert( strcmp(board682692682, 
"791.54.4.\n"
".61166..3\n"
"1...1.169\n"
"492757724\n"
"278..5972\n"
"9132.28.2\n"
".85723.69\n"
".1.2..417\n"
"81.363979\n"
"7173.6536\n"
"72919.84.\n"
".73..51.3\n"
"2648..68.\n"
"2258.5556\n") == 0);
free(board682692682);
board682692682 = NULL;
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );


char* board309318517 = gamma_board(board);
assert( board309318517 != NULL );
assert( strcmp(board309318517, 
"791.54.4.\n"
".61166..3\n"
"1...1.169\n"
"492757724\n"
"278..5972\n"
"9132.28.2\n"
".85723.69\n"
".1.2..417\n"
"81.363979\n"
"7173.6536\n"
"72919.84.\n"
".73..51.3\n"
"2648..68.\n"
"2258.5556\n") == 0);
free(board309318517);
board309318517 = NULL;
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );


char* board947552795 = gamma_board(board);
assert( board947552795 != NULL );
assert( strcmp(board947552795, 
"791.54.4.\n"
".61166..3\n"
"121.14169\n"
"492757724\n"
"278..5972\n"
"9132.28.2\n"
".85723.69\n"
".132..417\n"
"81.363979\n"
"7173.6536\n"
"729196845\n"
".73..51.3\n"
"2648.868.\n"
"2258.5556\n") == 0);
free(board947552795);
board947552795 = NULL;
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );


gamma_delete(board);

    return 0;
}
