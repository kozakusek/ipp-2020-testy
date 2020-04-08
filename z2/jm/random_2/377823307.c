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
uuid: 377823307
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 10, 14, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_free_fields(board, 5) == 122 );


char* board417881113 = gamma_board(board);
assert( board417881113 != NULL );
assert( strcmp(board417881113, 
".1...........\n"
".............\n"
"........2....\n"
".............\n"
".............\n"
"........3....\n"
".............\n"
".............\n"
"1..4.........\n"
"...2.....5.5.\n") == 0);
free(board417881113);
board417881113 = NULL;
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_golden_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 6, 3) == 1 );
assert( gamma_move(board, 11, 11, 1) == 1 );
assert( gamma_move(board, 12, 8, 2) == 1 );
assert( gamma_move(board, 13, 5, 8) == 1 );
assert( gamma_move(board, 14, 3, 5) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board405777015 = gamma_board(board);
assert( board405777015 != NULL );
assert( strcmp(board405777015, 
".1...........\n"
".8...138......\n"
".....7..2..6.\n"
".........1...\n"
"...14.........\n"
"........3....\n"
"......11......\n"
"2.......12....\n"
"1..4.......11.\n"
"...210....5.5.\n") == 0);
free(board405777015);
board405777015 = NULL;
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 9, 5) == 1 );
assert( gamma_move(board, 13, 6, 8) == 0 );
assert( gamma_move(board, 14, 2, 9) == 1 );
assert( gamma_move(board, 14, 0, 6) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_free_fields(board, 5) == 96 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_free_fields(board, 7) == 93 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_move(board, 11, 3, 8) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 4) == 1 );
assert( gamma_move(board, 13, 12, 9) == 1 );
assert( gamma_move(board, 14, 1, 7) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_golden_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 10, 10, 5) == 1 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 11, 5, 1) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 12, 12, 1) == 0 );
assert( gamma_move(board, 13, 7, 9) == 0 );
assert( gamma_golden_move(board, 13, 0, 9) == 1 );
assert( gamma_move(board, 14, 0, 7) == 1 );
assert( gamma_move(board, 14, 8, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 12, 7) == 1 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 13, 6, 6) == 1 );
assert( gamma_move(board, 13, 9, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 4, 9) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );


char* board604378723 = gamma_board(board);
assert( board604378723 != NULL );
assert( strcmp(board604378723, 
"13114.49.18...13\n"
".8.11.13828..4.\n"
"14147..77.2..67\n"
"14.....13..1..6\n"
"2.31431210..1110..\n"
".85.....3.912.\n"
"....53115145...\n"
"214...6.12....\n"
"1..4.11...2.114\n"
".5.210...35.56\n") == 0);
free(board604378723);
board604378723 = NULL;
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 9, 12, 2) == 1 );
assert( gamma_golden_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_free_fields(board, 10) == 61 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 13, 9, 10) == 0 );
assert( gamma_move(board, 14, 0, 10) == 0 );
assert( gamma_move(board, 14, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board541692888 = gamma_board(board);
assert( board541692888 != NULL );
assert( strcmp(board541692888, 
"13114249.18...13\n"
".8.11.13828..4.\n"
"14147..7712..67\n"
"14..910.13..1..6\n"
"2.31431210..1110..\n"
"185.....3.912.\n"
"14...53115145...\n"
"214...6.12...9\n"
"15.4.11...2.114\n"
".58210...35.56\n") == 0);
free(board541692888);
board541692888 = NULL;
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_move(board, 12, 7, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 14, 1, 4) == 0 );
assert( gamma_move(board, 14, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board464717091 = gamma_board(board);
assert( board464717091 != NULL );
assert( strcmp(board464717091, 
"13114249.188..13\n"
".8.11.13828..4.\n"
"14147..7712..67\n"
"14..910.13..1.16\n"
"2.31431210..1110..\n"
"1856....3.912.\n"
"14...531151455..\n"
"214...6.12...9\n"
"15.4.11..52.114\n"
"1158210..1235.56\n") == 0);
free(board464717091);
board464717091 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_golden_move(board, 14, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_golden_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 12, 6, 8) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 14, 8, 4) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 12, 4, 6) == 0 );
assert( gamma_move(board, 13, 8, 12) == 0 );
assert( gamma_free_fields(board, 13) == 39 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 2, 5) == 0 );
assert( gamma_move(board, 14, 4, 7) == 1 );
assert( gamma_golden_move(board, 14, 9, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 6, 8) == 0 );


char* board711306992 = gamma_board(board);
assert( board711306992 != NULL );
assert( strcmp(board711306992, 
"131142497189..13\n"
".8.11.13828.64.\n"
"14147.147712..67\n"
"14..910313..1516\n"
"2.31431210.121110..\n"
"1856...83.912.\n"
"143.5531151455..\n"
"214...6112...9\n"
"15104.118752.114\n"
"1158210..12314.56\n") == 0);
free(board711306992);
board711306992 = NULL;
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 3, 7) == 1 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_move(board, 13, 8, 8) == 0 );
assert( gamma_move(board, 13, 6, 0) == 1 );
assert( gamma_move(board, 14, 9, 10) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_free_fields(board, 7) == 33 );


char* board667364626 = gamma_board(board);
assert( board667364626 != NULL );
assert( strcmp(board667364626, 
"131142497189..13\n"
".8.11.13828.64.\n"
"1414711147712..67\n"
"14.2910313..1516\n"
"2.31431210.121110..\n"
"1856...83.9124\n"
"143.5531151455..\n"
"214...6112...9\n"
"15104.118752.114\n"
"1158210.1312314.56\n") == 0);
free(board667364626);
board667364626 = NULL;
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_free_fields(board, 11) == 32 );


char* board115773925 = gamma_board(board);
assert( board115773925 != NULL );
assert( strcmp(board115773925, 
"131142497189..13\n"
".8.11.13828.64.\n"
"1414711147712..67\n"
"14.2910313..1516\n"
"2.31431210.121110..\n"
"1856...83.9124\n"
"143.5531151455..\n"
"214...6112...9\n"
"15104.118752.114\n"
"1158210.13123141056\n") == 0);
free(board115773925);
board115773925 = NULL;
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 8, 12) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 12, 5, 4) == 1 );
assert( gamma_move(board, 13, 1, 10) == 0 );
assert( gamma_move(board, 13, 7, 1) == 0 );
assert( gamma_move(board, 14, 6, 8) == 0 );
assert( gamma_move(board, 14, 1, 1) == 0 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_move(board, 11, 7, 10) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 8) == 0 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 14, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );


char* board888339263 = gamma_board(board);
assert( board888339263 != NULL );
assert( strcmp(board888339263, 
"131142497189..13\n"
".8511.13828364.\n"
"1414711147712..67\n"
"14.2910313..1516\n"
"21031431210.121110..\n"
"1856.12.83.9124\n"
"143.55311514555.\n"
"214..16112.7.9\n"
"151043118752.114\n"
"1158210.13123141056\n") == 0);
free(board888339263);
board888339263 = NULL;
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 11, 6) == 0 );
assert( gamma_move(board, 12, 6, 8) == 0 );
assert( gamma_move(board, 13, 8, 0) == 0 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 14, 8, 6) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 12, 6, 8) == 0 );
assert( gamma_move(board, 13, 9, 6) == 0 );
assert( gamma_free_fields(board, 13) == 21 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );


char* board657720120 = gamma_board(board);
assert( board657720120 != NULL );
assert( strcmp(board657720120, 
"131142497189..13\n"
".8511113828364.\n"
"145711147712..67\n"
"14.29103137141516\n"
"21031431210.121110..\n"
"1856.12.83.9124\n"
"1431055311514555.\n"
"214..16112.7.9\n"
"151043118752.114\n"
"1158210.13123141056\n") == 0);
free(board657720120);
board657720120 = NULL;
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_golden_move(board, 10, 0, 9) == 1 );
assert( gamma_move(board, 11, 8, 12) == 0 );
assert( gamma_free_fields(board, 11) == 20 );
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 8, 0) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 10, 11, 9) == 1 );
assert( gamma_free_fields(board, 10) == 17 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 9) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 13, 3, 3) == 0 );
assert( gamma_move(board, 14, 1, 10) == 0 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 8, 4, 9) == 0 );


gamma_delete(board);

    return 0;
}
