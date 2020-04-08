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
uuid: 777534514
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 7, 8, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );


char* board381275903 = gamma_board(board);
assert( board381275903 != NULL );
assert( strcmp(board381275903, 
"............\n"
"....7...7...\n"
"65.......1..\n"
"484...3...7.\n"
"....5.......\n"
"11..5..2....\n"
".....67.8.4.\n") == 0);
free(board381275903);
board381275903 = NULL;
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board385853696 = gamma_board(board);
assert( board385853696 != NULL );
assert( strcmp(board385853696, 
"...2.......8\n"
"7.287...77..\n"
"65....2..1..\n"
"4841..3.6.7.\n"
".3..5.......\n"
"11..5..2....\n"
"15...67.8.4.\n") == 0);
free(board385853696);
board385853696 = NULL;
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );


char* board548908072 = gamma_board(board);
assert( board548908072 != NULL );
assert( strcmp(board548908072, 
"...2.......8\n"
"7.287...77..\n"
"65....2..1..\n"
"4841..3.6.7.\n"
".3..5.3.....\n"
"11..55.2....\n"
"158..67.8.4.\n") == 0);
free(board548908072);
board548908072 = NULL;
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );


char* board732844811 = gamma_board(board);
assert( board732844811 != NULL );
assert( strcmp(board732844811, 
".7.2..7....8\n"
"71287...77..\n"
"65....26.1.6\n"
"4841781.6878\n"
"23555.3.1...\n"
"11..55.287..\n"
"1583.67.8.4.\n") == 0);
free(board732844811);
board732844811 = NULL;
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );


char* board390900268 = gamma_board(board);
assert( board390900268 != NULL );
assert( strcmp(board390900268, 
".7.2..7....8\n"
"71287...77..\n"
"65....26.1.6\n"
"4841781.6878\n"
"23555.3.1...\n"
"11..55.287..\n"
"1583.67.8.41\n") == 0);
free(board390900268);
board390900268 = NULL;
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );


char* board897144146 = gamma_board(board);
assert( board897144146 != NULL );
assert( strcmp(board897144146, 
".7.2..7....8\n"
"71287.3.77..\n"
"65....26.1.6\n"
"4841781.6878\n"
"23555.3.1...\n"
"11..55.287..\n"
"1583.67.8.41\n") == 0);
free(board897144146);
board897144146 = NULL;
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


char* board708704827 = gamma_board(board);
assert( board708704827 != NULL );
assert( strcmp(board708704827, 
".7.2..73...8\n"
"71287.3.77.3\n"
"65..8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board708704827);
board708704827 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 9) == 0 );


char* board514573236 = gamma_board(board);
assert( board514573236 != NULL );
assert( strcmp(board514573236, 
".7.2..735..8\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board514573236);
board514573236 = NULL;
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );


char* board587723930 = gamma_board(board);
assert( board587723930 != NULL );
assert( strcmp(board587723930, 
".7.2..735..8\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board587723930);
board587723930 = NULL;
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );


char* board579199607 = gamma_board(board);
assert( board579199607 != NULL );
assert( strcmp(board579199607, 
".7.2..735..8\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board579199607);
board579199607 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );


char* board415971521 = gamma_board(board);
assert( board415971521 != NULL );
assert( strcmp(board415971521, 
".7.2..735..8\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board415971521);
board415971521 = NULL;
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );


char* board336305282 = gamma_board(board);
assert( board336305282 != NULL );
assert( strcmp(board336305282, 
".7.2..735..8\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board336305282);
board336305282 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board520892256 = gamma_board(board);
assert( board520892256 != NULL );
assert( strcmp(board520892256, 
".7.2..735..8\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"2355543.1...\n"
"11..55.287..\n"
"1583.67.8841\n") == 0);
free(board520892256);
board520892256 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );


char* board271567207 = gamma_board(board);
assert( board271567207 != NULL );
assert( strcmp(board271567207, 
".7.2..735.38\n"
"7128723.77.3\n"
"657.8826.1.6\n"
"484178176878\n"
"235554341..1\n"
"11..55.287.3\n"
"4583.6748841\n") == 0);
free(board271567207);
board271567207 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_golden_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_golden_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );


char* board615510671 = gamma_board(board);
assert( board615510671 != NULL );
assert( strcmp(board615510671, 
".7.25.735.38\n"
"7528723.77.3\n"
"65788826.1.6\n"
"484178176878\n"
"235554341..1\n"
"11..55.287.3\n"
"4583.6748841\n") == 0);
free(board615510671);
board615510671 = NULL;


gamma_delete(board);

    return 0;
}
