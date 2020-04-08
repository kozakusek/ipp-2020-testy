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
uuid: 541878752
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 14, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_free_fields(board, 2) == 195 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 8, 9, 13) == 1 );
assert( gamma_free_fields(board, 1) == 192 );
assert( gamma_golden_move(board, 1, 5, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_free_fields(board, 5) == 187 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_free_fields(board, 1) == 185 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_free_fields(board, 8) == 182 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_move(board, 6, 12, 13) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 0, 13) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 2, 1) == 1 );


char* board941261414 = gamma_board(board);
assert( board941261414 != NULL );
assert( strcmp(board941261414, 
"8........8..6.\n"
"...........5..\n"
"4..8..........\n"
"....4.........\n"
"..........3...\n"
"....8...2..3..\n"
".....1........\n"
"..............\n"
"...51.....6...\n"
"............1.\n"
".....4.53.....\n"
"..............\n"
".76........1..\n"
".7............\n") == 0);
free(board941261414);
board941261414 = NULL;
assert( gamma_move(board, 8, 9, 12) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 13) == 1 );
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, -1, 8) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );


char* board618401358 = gamma_board(board);
assert( board618401358 != NULL );
assert( strcmp(board618401358, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..4..6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board618401358);
board618401358 = NULL;
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_golden_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );


char* board433578479 = gamma_board(board);
assert( board433578479 != NULL );
assert( strcmp(board433578479, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..47.6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board433578479);
board433578479 = NULL;
assert( gamma_move(board, 8, -1, 9) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_golden_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_free_fields(board, 4) == 14 );


char* board121418315 = gamma_board(board);
assert( board121418315 != NULL );
assert( strcmp(board121418315, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..47.6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board121418315);
board121418315 = NULL;
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_free_fields(board, 4) == 14 );


char* board835728136 = gamma_board(board);
assert( board835728136 != NULL );
assert( strcmp(board835728136, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..47.6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board835728136);
board835728136 = NULL;
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 13, 7) == 0 );


char* board742407451 = gamma_board(board);
assert( board742407451 != NULL );
assert( strcmp(board742407451, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..47.6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board742407451);
board742407451 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_golden_move(board, 6, 8, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board832920133 = gamma_board(board);
assert( board832920133 != NULL );
assert( strcmp(board832920133, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..47.6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board832920133);
board832920133 = NULL;
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 3, 12, 7) == 0 );


char* board904813282 = gamma_board(board);
assert( board904813282 != NULL );
assert( strcmp(board904813282, 
"8........8..66\n"
".........8.5..\n"
"4..8........7.\n"
"....4.........\n"
"..........33..\n"
"..238...2..37.\n"
"2....1........\n"
"..............\n"
"...51..47.6...\n"
"............1.\n"
"...5.4.53.6...\n"
"....2.........\n"
"776..3.....1..\n"
".7............\n") == 0);
free(board904813282);
board904813282 = NULL;
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, -1, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_golden_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );


gamma_delete(board);

    return 0;
}
