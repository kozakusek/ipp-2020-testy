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
uuid: 738678527
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 6, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_free_fields(board, 6) == 113 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_free_fields(board, 2) == 105 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 103 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 102 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 6, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_free_fields(board, 6) == 92 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 7) == 0 );


char* board411253662 = gamma_board(board);
assert( board411253662 != NULL );
assert( strcmp(board411253662, 
"..4...4.\n"
"3....4.3\n"
"...26.61\n"
"..1.31..\n"
"2......2\n"
".....2.4\n"
"..2..1.5\n"
".243...2\n"
"233.....\n"
"..63..65\n"
"2353.5.5\n"
".1.2..6.\n"
".5511...\n"
".1..533.\n"
".1.31641\n") == 0);
free(board411253662);
board411253662 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );


char* board242595637 = gamma_board(board);
assert( board242595637 != NULL );
assert( strcmp(board242595637, 
"..4...4.\n"
"3....4.3\n"
"...26.61\n"
"..1.31..\n"
"2......2\n"
".....2.4\n"
"..2..1.5\n"
".243...2\n"
"233...6.\n"
"..63..65\n"
"2353.5.5\n"
".1.2..6.\n"
".5511...\n"
".1..533.\n"
".1.31641\n") == 0);
free(board242595637);
board242595637 = NULL;
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );


char* board327557720 = gamma_board(board);
assert( board327557720 != NULL );
assert( strcmp(board327557720, 
"..4...4.\n"
"3....4.3\n"
"...26.61\n"
"..1.31..\n"
"2......2\n"
".....2.4\n"
"..2..1.5\n"
".243...2\n"
"233...6.\n"
"..63..65\n"
"2353.5.5\n"
".1.2..6.\n"
".5511...\n"
".1..533.\n"
".1.31641\n") == 0);
free(board327557720);
board327557720 = NULL;
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );


char* board821712746 = gamma_board(board);
assert( board821712746 != NULL );
assert( strcmp(board821712746, 
"..4...4.\n"
"3.5..463\n"
"...26.61\n"
"..1.31..\n"
"2......2\n"
".....2.4\n"
"..2..1.5\n"
".243...2\n"
"233...6.\n"
"..63..65\n"
"2353.5.5\n"
"61.2..6.\n"
".5511...\n"
".1..533.\n"
"21.31641\n") == 0);
free(board821712746);
board821712746 = NULL;
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 0, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_golden_move(board, 5, 12, 4) == 0 );


char* board392432378 = gamma_board(board);
assert( board392432378 != NULL );
assert( strcmp(board392432378, 
"3.4...4.\n"
"3.5..463\n"
"6..26.61\n"
"..1.31..\n"
"2......2\n"
".....2.4\n"
"..25.1.5\n"
".243...2\n"
"233...6.\n"
"..63..65\n"
"2353.5.5\n"
"61.2..6.\n"
".5511...\n"
".1.1533.\n"
"21.31641\n") == 0);
free(board392432378);
board392432378 = NULL;
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );


char* board244333201 = gamma_board(board);
assert( board244333201 != NULL );
assert( strcmp(board244333201, 
"3.4...4.\n"
"3.5..463\n"
"6..26.61\n"
"..1.31..\n"
"2....3.2\n"
".11..2.4\n"
"..25.1.5\n"
".243...2\n"
"233...6.\n"
"..63..65\n"
"2353.5.5\n"
"61.2..6.\n"
".5511...\n"
".1.1533.\n"
"21.31641\n") == 0);
free(board244333201);
board244333201 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_free_fields(board, 5) == 55 );


char* board968985013 = gamma_board(board);
assert( board968985013 != NULL );
assert( strcmp(board968985013, 
"3.4...4.\n"
"3.5..463\n"
"6..26.61\n"
"..1.31..\n"
"2....3.2\n"
".11..2.4\n"
"..25.1.5\n"
".243...2\n"
"233...6.\n"
"..63..65\n"
"2353.5.5\n"
"61.2..6.\n"
".5511...\n"
".1.1533.\n"
"21.31641\n") == 0);
free(board968985013);
board968985013 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 14) == 1 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 1, 2, 7) == 0 );


char* board959682060 = gamma_board(board);
assert( board959682060 != NULL );
assert( strcmp(board959682060, 
"36445.44\n"
"3.5.5463\n"
"6..26.61\n"
"561.3132\n"
"2....3.2\n"
".1151214\n"
"..25.1.5\n"
".243..12\n"
"233...4.\n"
"..63.465\n"
"2353.525\n"
"6112..64\n"
".5511...\n"
".1.15332\n"
"21131641\n") == 0);
free(board959682060);
board959682060 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 7) == 0 );


char* board172617338 = gamma_board(board);
assert( board172617338 != NULL );
assert( strcmp(board172617338, 
"36445.44\n"
"3.5.5463\n"
"6..26.61\n"
"561.3132\n"
"2....3.2\n"
".1151214\n"
"..25.1.5\n"
".243..12\n"
"233...4.\n"
"..63.465\n"
"2353.525\n"
"6112..64\n"
".5511...\n"
".1.15332\n"
"21131641\n") == 0);
free(board172617338);
board172617338 = NULL;
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );


char* board293540594 = gamma_board(board);
assert( board293540594 != NULL );
assert( strcmp(board293540594, 
"36445.44\n"
"3.5.5463\n"
"6..26.61\n"
"561.3132\n"
"2....3.2\n"
".1151214\n"
"..25.1.5\n"
".243..12\n"
"233...4.\n"
"..63.465\n"
"2353.525\n"
"6112..64\n"
".5511...\n"
".1.15332\n"
"21131641\n") == 0);
free(board293540594);
board293540594 = NULL;
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );


char* board250460986 = gamma_board(board);
assert( board250460986 != NULL );
assert( strcmp(board250460986, 
"36445.44\n"
"3.5.5463\n"
"6..26.61\n"
"56163132\n"
"26...3.2\n"
".1151214\n"
"..25.1.5\n"
".243.112\n"
"633...4.\n"
"..63.465\n"
"23533525\n"
"6112..64\n"
".55115..\n"
".1.15332\n"
"21131641\n") == 0);
free(board250460986);
board250460986 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 14) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );


gamma_delete(board);

    return 0;
}
