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
uuid: 495935764
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 15, 2, 10);
assert( board != NULL );


assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_golden_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 13) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 7, 12) == 1 );


char* board712591876 = gamma_board(board);
assert( board712591876 != NULL );
assert( strcmp(board712591876, 
".............\n"
"...........2.\n"
".......22....\n"
"......1......\n"
".............\n"
"..2.....1....\n"
".............\n"
"...........2.\n"
"......2......\n"
".............\n"
"......1.....1\n"
"...........1.\n"
".............\n"
".............\n"
".............\n") == 0);
free(board712591876);
board712591876 = NULL;
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_free_fields(board, 1) == 179 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 9, 7) == 1 );


char* board365071093 = gamma_board(board);
assert( board365071093 != NULL );
assert( strcmp(board365071093, 
".1...........\n"
"...........2.\n"
".......22....\n"
".1....1......\n"
"....2........\n"
"..2.....1....\n"
".2...........\n"
".........1.2.\n"
"......2....2.\n"
".............\n"
"......12...11\n"
"...........1.\n"
".............\n"
".............\n"
".............\n") == 0);
free(board365071093);
board365071093 = NULL;
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 170 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );


char* board249834014 = gamma_board(board);
assert( board249834014 != NULL );
assert( strcmp(board249834014, 
".1...........\n"
"...........2.\n"
".......22....\n"
".1....1......\n"
"....2........\n"
"..2.1...1.1..\n"
".2.......1...\n"
".........1.2.\n"
"......2....2.\n"
"...2..1......\n"
"......122..11\n"
"1..........1.\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board249834014);
board249834014 = NULL;
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );


char* board193261759 = gamma_board(board);
assert( board193261759 != NULL );
assert( strcmp(board193261759, 
".1...........\n"
"...........2.\n"
".......22....\n"
".1....1.2....\n"
"....2.1......\n"
"..2.1...1.1..\n"
".2.......1...\n"
".........1.2.\n"
"......2....2.\n"
"...2..1......\n"
"......122..11\n"
"1..........1.\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board193261759);
board193261759 = NULL;
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board931833143 = gamma_board(board);
assert( board931833143 != NULL );
assert( strcmp(board931833143, 
".1...........\n"
"...........2.\n"
".......22....\n"
".1....1.2....\n"
"....2.1......\n"
"..2.1.1.1.1..\n"
".2.......1...\n"
".........1.2.\n"
"......2....2.\n"
"...2..1......\n"
"......122..11\n"
"1..........1.\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board931833143);
board931833143 = NULL;
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );


char* board742699004 = gamma_board(board);
assert( board742699004 != NULL );
assert( strcmp(board742699004, 
".1...........\n"
"...........2.\n"
".......22....\n"
".1....1.2....\n"
"....2.1......\n"
"..2.1.1.1.1..\n"
".2.......1...\n"
".........1.2.\n"
"......2..1.2.\n"
"...2..1......\n"
"......122..11\n"
"1..........1.\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board742699004);
board742699004 = NULL;
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 12, 15) == 0 );


char* board683870584 = gamma_board(board);
assert( board683870584 != NULL );
assert( strcmp(board683870584, 
".1...........\n"
".1.........2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.1..\n"
".2.......1...\n"
"........11.2.\n"
"......2..1.2.\n"
"...2..1......\n"
"......122..11\n"
"1..........1.\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board683870584);
board683870584 = NULL;
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, -1, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );


char* board955227402 = gamma_board(board);
assert( board955227402 != NULL );
assert( strcmp(board955227402, 
".1...........\n"
".1.........2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
"........11.2.\n"
"......2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board955227402);
board955227402 = NULL;
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );


char* board263331235 = gamma_board(board);
assert( board263331235 != NULL );
assert( strcmp(board263331235, 
".1...........\n"
".1.........2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
"........11.2.\n"
"......2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board263331235);
board263331235 = NULL;
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );


char* board411231033 = gamma_board(board);
assert( board411231033 != NULL );
assert( strcmp(board411231033, 
".1...........\n"
".1.........2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
"........11.2.\n"
"...2..2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board411231033);
board411231033 = NULL;
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 7, 13) == 1 );


char* board489174203 = gamma_board(board);
assert( board489174203 != NULL );
assert( strcmp(board489174203, 
".1...........\n"
".1.....2...2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
"........11.2.\n"
"...2..2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board489174203);
board489174203 = NULL;
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );


char* board389663676 = gamma_board(board);
assert( board389663676 != NULL );
assert( strcmp(board389663676, 
".1...........\n"
".1.....2...2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
"........11.2.\n"
"...2..2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
".............\n"
".............\n"
".......2.....\n") == 0);
free(board389663676);
board389663676 = NULL;
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );


char* board205675265 = gamma_board(board);
assert( board205675265 != NULL );
assert( strcmp(board205675265, 
".1...........\n"
".1.....2...2.\n"
".......22....\n"
".1....1.2....\n"
"..2.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
"........11.2.\n"
"...22.2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
"1............\n"
".............\n"
".......2.....\n") == 0);
free(board205675265);
board205675265 = NULL;
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_golden_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 1, 1, 13) == 0 );


char* board184021261 = gamma_board(board);
assert( board184021261 != NULL );
assert( strcmp(board184021261, 
".1...........\n"
".1.....2...2.\n"
".......22....\n"
".1....1.2....\n"
".22.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
".2......11.2.\n"
"...22.2..122.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
"1..........1.\n"
".............\n"
".......2.....\n") == 0);
free(board184021261);
board184021261 = NULL;
assert( gamma_golden_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board581232038 = gamma_board(board);
assert( board581232038 != NULL );
assert( strcmp(board581232038, 
".1...........\n"
".1.....2...2.\n"
".......22....\n"
".1....1.2....\n"
".22.2.1......\n"
"..2.1.1.1.11.\n"
".2.......1...\n"
".2......11.2.\n"
"...22.2..222.\n"
"...2..1.2....\n"
"......122..11\n"
"1.........111\n"
"1..........1.\n"
"1............\n"
".......2.....\n") == 0);
free(board581232038);
board581232038 = NULL;
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );


gamma_delete(board);

    return 0;
}
