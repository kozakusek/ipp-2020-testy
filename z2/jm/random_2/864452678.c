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
uuid: 864452678
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 12, 11, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );


char* board109212421 = gamma_board(board);
assert( board109212421 != NULL );
assert( strcmp(board109212421, 
"....5.......\n"
".2.......2..\n"
"............\n"
"............\n"
"....4.......\n"
"............\n"
"............\n"
"............\n"
"6...........\n"
"............\n"
"..7...3.....\n"
".1..........\n") == 0);
free(board109212421);
board109212421 = NULL;
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_free_fields(board, 9) == 133 );
assert( gamma_move(board, 10, 6, 9) == 1 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 128 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );


char* board869815711 = gamma_board(board);
assert( board869815711 != NULL );
assert( strcmp(board869815711, 
"....5.......\n"
".2..4....2..\n"
"......10.....\n"
"........11.2.\n"
"....4......3\n"
"............\n"
"..........9.\n"
"............\n"
"6.8.........\n"
"............\n"
"..7...3.....\n"
".1.....8.1..\n") == 0);
free(board869815711);
board869815711 = NULL;
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_free_fields(board, 5) == 126 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );


char* board244316793 = gamma_board(board);
assert( board244316793 != NULL );
assert( strcmp(board244316793, 
"....5.......\n"
".2..4....2.5\n"
"......10.....\n"
".8......11.2.\n"
"..1.4......3\n"
"............\n"
"........7.9.\n"
"10.....6.....\n"
"6.8.........\n"
".....2......\n"
"..711..3.....\n"
".1.....8.1..\n") == 0);
free(board244316793);
board244316793 = NULL;
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 10, 5, 10) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 11, 9, 11) == 1 );
assert( gamma_free_fields(board, 11) == 105 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 2, 11) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_free_fields(board, 9) == 92 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_golden_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_free_fields(board, 11) == 89 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );


char* board349133089 = gamma_board(board);
assert( board349133089 != NULL );
assert( strcmp(board349133089, 
"..9354..411..\n"
".2.34102.32.5\n"
"..1..1110.....\n"
".87..7.111.2.\n"
"..1104..2...3\n"
"....10....4..\n"
"...9....7.9.\n"
"107.9..6.....\n"
"6.8.11858....\n"
"....82..3.7.\n"
"..711..3....5\n"
".19....8612.\n") == 0);
free(board349133089);
board349133089 = NULL;
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 11, 7) == 0 );
assert( gamma_move(board, 11, 11, 10) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 10, 11) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 6, 6) == 1 );


char* board921030229 = gamma_board(board);
assert( board921030229 != NULL );
assert( strcmp(board921030229, 
"..9354..4118.\n"
".2.3410233255\n"
"..1..1110.....\n"
".87..79111.2.\n"
"561104..2...3\n"
"10.7.10.9..4..\n"
".4.98..47.9.\n"
"107.9..6.....\n"
"6108.118589...\n"
"....82..337.\n"
"..711.43..1.5\n"
".19....86127\n") == 0);
free(board921030229);
board921030229 = NULL;
assert( gamma_move(board, 10, 11, 11) == 1 );
assert( gamma_move(board, 10, 2, 7) == 0 );


char* board272200550 = gamma_board(board);
assert( board272200550 != NULL );
assert( strcmp(board272200550, 
"..9354..411810\n"
".2.3410233255\n"
"..1..1110.....\n"
".87..79111.2.\n"
"561104..2...3\n"
"10.7.10.9..4..\n"
".4.98..47.9.\n"
"107.9..6.....\n"
"6108.118589...\n"
"....82..337.\n"
"..711.43..1.5\n"
".19....86127\n") == 0);
free(board272200550);
board272200550 = NULL;
assert( gamma_move(board, 11, 8, 9) == 1 );
assert( gamma_move(board, 11, 6, 11) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 62 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_golden_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_golden_move(board, 10, 7, 0) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );


char* board246299203 = gamma_board(board);
assert( board246299203 != NULL );
assert( strcmp(board246299203, 
"..935411.411810\n"
".2.3410233255\n"
"..1.11110.11...\n"
".87..79111.23\n"
"561104..2...3\n"
"10.7.10.9..4..\n"
".4.98..47.9.\n"
"107.9..6.....\n"
"6108.118589.1.\n"
"....82..337.\n"
"..711.434.1.5\n"
"219..8.106127\n") == 0);
free(board246299203);
board246299203 = NULL;
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 10, 7) == 1 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_free_fields(board, 10) == 50 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );


char* board836438017 = gamma_board(board);
assert( board836438017 != NULL );
assert( strcmp(board836438017, 
"..935411.411810\n"
".2.3410233255\n"
"9.1.11110.11...\n"
".87.1179111.23\n"
"561104..2..93\n"
"1077.10291.4..\n"
".4.98..47.9.\n"
"107.94.6.....\n"
"6108.118589.1.\n"
"..5.829.337.\n"
".1711.434.1.5\n"
"219..8.106127\n") == 0);
free(board836438017);
board836438017 = NULL;
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_golden_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_free_fields(board, 9) == 48 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_golden_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 9, 7, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_move(board, 3, 10, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_free_fields(board, 10) == 44 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 11, 7, 6) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );


char* board779766288 = gamma_board(board);
assert( board779766288 != NULL );
assert( strcmp(board779766288, 
"..9354119411810\n"
".283410233235\n"
"9.1111110.11...\n"
".87.1179111.23\n"
"561104..2.993\n"
"1077.1029144..\n"
".47983347.9.\n"
"107.94.6...8.\n"
"6108.11859991.\n"
"..5.829.337.\n"
".1711.834.155\n"
"219..8.106127\n") == 0);
free(board779766288);
board779766288 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_free_fields(board, 9) == 35 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );


char* board115851428 = gamma_board(board);
assert( board115851428 != NULL );
assert( strcmp(board115851428, 
"..9354119411810\n"
".283410233235\n"
"9.1111110.117..\n"
".8761179111.23\n"
"561104..2.993\n"
"107741029144..\n"
".47983347.93\n"
"107594.6...8.\n"
"6108.11859991.\n"
"..5.829.337.\n"
".17112834.155\n"
"219..8.106127\n") == 0);
free(board115851428);
board115851428 = NULL;
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_free_fields(board, 8) == 32 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_free_fields(board, 9) == 32 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_free_fields(board, 10) == 32 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 11, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board373680028 = gamma_board(board);
assert( board373680028 != NULL );
assert( strcmp(board373680028, 
"..9354119411810\n"
".283410233235\n"
"9.1111110.117..\n"
".8761179111.23\n"
"561104..2.993\n"
"107741029144..\n"
".47983347.93\n"
"107594.6...8.\n"
"6108811859991.\n"
"..5.829.337.\n"
".17112834.155\n"
"21910.8.106127\n") == 0);
free(board373680028);
board373680028 = NULL;
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 9, 5) == 1 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 10, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 8, 1) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 11, 1) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 11, 2) == 1 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_free_fields(board, 11) == 22 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_golden_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_free_fields(board, 11) == 19 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_free_fields(board, 8) == 17 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 10, 9, 11) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_free_fields(board, 11) == 17 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );


char* board563861672 = gamma_board(board);
assert( board563861672 != NULL );
assert( strcmp(board563861672, 
"5.9354119411810\n"
".283410233235\n"
"9.1111110.1174.\n"
".8761179111523\n"
"5611046.26993\n"
"107741029144..\n"
"94798334710113\n"
"107594.67101088\n"
"61088118599911\n"
"..58829.33711\n"
".1711283411155\n"
"21910.8.106127\n") == 0);
free(board563861672);
board563861672 = NULL;
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );


char* board495963935 = gamma_board(board);
assert( board495963935 != NULL );
assert( strcmp(board495963935, 
"5.9354119411810\n"
".283410233235\n"
"9.1111110.1174.\n"
".8761179111523\n"
"5611046.26993\n"
"107741029144..\n"
"94798334710113\n"
"107594.67101088\n"
"61088118599911\n"
"..58829.33711\n"
".1711283411155\n"
"21910.8.106127\n") == 0);
free(board495963935);
board495963935 = NULL;
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 10, 9, 1) == 0 );


char* board835094814 = gamma_board(board);
assert( board835094814 != NULL );
assert( strcmp(board835094814, 
"5.9354119411810\n"
".283410233235\n"
"9.1111110.1174.\n"
".8761179111523\n"
"5611046.26993\n"
"107741029144..\n"
"94798334710113\n"
"107594.67101088\n"
"61088118599911\n"
"..58829.33711\n"
".1711283411155\n"
"21910.86106127\n") == 0);
free(board835094814);
board835094814 = NULL;
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_free_fields(board, 11) == 15 );
assert( gamma_golden_move(board, 11, 6, 0) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );


gamma_delete(board);

    return 0;
}
