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
uuid: 683236781
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 14, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 13, 3) == 1 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 13) == 0 );
assert( gamma_move(board, 12, 13, 3) == 0 );
assert( gamma_move(board, 13, 4, 10) == 0 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_move(board, 14, 2, 1) == 1 );
assert( gamma_move(board, 14, 8, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );


char* board826867458 = gamma_board(board);
assert( board826867458 != NULL );
assert( strcmp(board826867458, 
"....5.........\n"
".....3......4.\n"
"...........1.6\n"
"8...7...14....9\n"
"...10........1.\n"
"..14..10.......2\n"
".13............\n") == 0);
free(board826867458);
board826867458 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board547505404 = gamma_board(board);
assert( board547505404 != NULL );
assert( strcmp(board547505404, 
"....55........\n"
".....3......4.\n"
"....4.....51.6\n"
"8...7...14....9\n"
"...10......2.1.\n"
"..14..10.......2\n"
".13............\n") == 0);
free(board547505404);
board547505404 = NULL;
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_free_fields(board, 8) == 79 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_free_fields(board, 9) == 78 );
assert( gamma_move(board, 10, 13, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 13, 3, 1) == 1 );
assert( gamma_move(board, 14, 5, 11) == 0 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_free_fields(board, 14) == 75 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_free_fields(board, 7) == 70 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 14, 13, 2) == 1 );
assert( gamma_move(board, 14, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 12, 6, 8) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 14, 13, 6) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 58 );


char* board911793898 = gamma_board(board);
assert( board911793898 != NULL );
assert( strcmp(board911793898, 
"..5.55.......14\n"
".13...3.....34.\n"
"3...4.....5176\n"
"8.8.7...14.5..9\n"
"..810.12....2.114\n"
"..141311101..3.9.2\n"
"613..69.....9.10\n") == 0);
free(board911793898);
board911793898 = NULL;
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 11, 0, 2) == 1 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 14, 12, 6) == 1 );
assert( gamma_move(board, 14, 10, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_free_fields(board, 11) == 46 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 12, 5, 4) == 1 );
assert( gamma_move(board, 13, 2, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 5 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_golden_move(board, 14, 5, 12) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 10, 1, 2) == 1 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 13, 9, 4) == 1 );


char* board156084574 = gamma_board(board);
assert( board156084574 != NULL );
assert( strcmp(board156084574, 
"..5.554..2..1414\n"
".1313933.7...34.\n"
"3.2.41213..135176\n"
"8.8.7.5.14.5..9\n"
"1110810.127...2.114\n"
"61141311101..3.9.2\n"
"613.169....89.10\n") == 0);
free(board156084574);
board156084574 = NULL;
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 12, 3) == 1 );
assert( gamma_free_fields(board, 10) == 33 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 11, 12, 0) == 1 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_free_fields(board, 12) == 32 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 3, 11) == 0 );
assert( gamma_move(board, 13, 8, 0) == 1 );
assert( gamma_move(board, 14, 5, 3) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_free_fields(board, 8) == 26 );
assert( gamma_golden_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 11, 5, 13) == 0 );
assert( gamma_move(board, 11, 10, 5) == 1 );
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 12, 12, 1) == 1 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 14, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 12, 3) == 0 );
assert( gamma_move(board, 12, 12, 0) == 0 );
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_move(board, 13, 3, 4) == 1 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );


char* board643252621 = gamma_board(board);
assert( board643252621 != NULL );
assert( strcmp(board643252621, 
"..5105544.2161414\n"
".131393317..1134.\n"
"32213412135.135176\n"
"8.8107145.14.5.109\n"
"1110810.127..829114\n"
"61141311101..3.9122\n"
"61371692.13.891110\n") == 0);
free(board643252621);
board643252621 = NULL;
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 11, 3) == 1 );
assert( gamma_move(board, 12, 5, 8) == 0 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 6) == 1 );


char* board691550026 = gamma_board(board);
assert( board691550026 != NULL );
assert( strcmp(board691550026, 
"14.5105544.2161414\n"
".13139331712.1134.\n"
"32213412135.135176\n"
"8.8107145.14.511109\n"
"1110810.127..829114\n"
"61141311101..3.9122\n"
"61371692.13.891110\n") == 0);
free(board691550026);
board691550026 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_golden_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 0, 7) == 0 );
assert( gamma_move(board, 13, 11, 6) == 0 );
assert( gamma_move(board, 14, 5, 0) == 0 );
assert( gamma_move(board, 14, 12, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );


char* board999251767 = gamma_board(board);
assert( board999251767 != NULL );
assert( strcmp(board999251767, 
"14.5105544.2161414\n"
".13139336712.1134.\n"
"32213412135.135176\n"
"8.8107145.14.511109\n"
"1110810.127..829114\n"
"61141311101..3.9122\n"
"61371692.13.891110\n") == 0);
free(board999251767);
board999251767 = NULL;
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_move(board, 12, 10, 5) == 0 );
assert( gamma_free_fields(board, 12) == 15 );
assert( gamma_move(board, 13, 5, 6) == 0 );


char* board102079356 = gamma_board(board);
assert( board102079356 != NULL );
assert( strcmp(board102079356, 
"14.5105544.2161414\n"
".1313933671281134.\n"
"3221341213512135176\n"
"8.8107145.14.511109\n"
"1110810.127..829114\n"
"61141311101..3.9122\n"
"61371692.13.891110\n") == 0);
free(board102079356);
board102079356 = NULL;
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 8, 6) == 1 );
assert( gamma_golden_move(board, 14, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_golden_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_free_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 5, 13) == 0 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 13, 0, 0) == 0 );
assert( gamma_move(board, 14, 10, 2) == 0 );


gamma_delete(board);

    return 0;
}
