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
uuid: 829883506
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 12, 14, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 1, 11) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 10, 5, 10) == 1 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_move(board, 12, 2, 8) == 1 );
assert( gamma_move(board, 13, 5, 0) == 1 );
assert( gamma_move(board, 13, 7, 3) == 1 );
assert( gamma_golden_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 14, 9, 8) == 1 );
assert( gamma_move(board, 14, 3, 5) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board335397287 = gamma_board(board);
assert( board335397287 != NULL );
assert( strcmp(board335397287, 
".8.2......\n"
".....10....\n"
"..2.......\n"
"..12......14\n"
".......6..\n"
"........1.\n"
".1.145..4..\n"
"92........\n"
".......13..\n"
".....11...3\n"
"...11....4.\n"
"..6..13....\n") == 0);
free(board335397287);
board335397287 = NULL;
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_golden_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 10, 4, 9) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 2) == 1 );
assert( gamma_move(board, 12, 9, 7) == 1 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board485382661 = gamma_board(board);
assert( board485382661 != NULL );
assert( strcmp(board485382661, 
".8.2......\n"
".....10....\n"
"..2.10.....\n"
"4.12......14\n"
".......6.12\n"
".....5..1.\n"
".1.1458.4..\n"
"92........\n"
".....8.13..\n"
"101211..114..5\n"
"...11....4.\n"
"..65.13....\n") == 0);
free(board485382661);
board485382661 = NULL;
assert( gamma_move(board, 14, 0, 10) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );


char* board894600664 = gamma_board(board);
assert( board894600664 != NULL );
assert( strcmp(board894600664, 
".812......\n"
"14....10....\n"
"..2.10.....\n"
"4112......14\n"
"....2..6.12\n"
".....5..1.\n"
".1.1458.4..\n"
"92.......2\n"
".....8.13..\n"
"101211..114..5\n"
"...11....4.\n"
"..65.13....\n") == 0);
free(board894600664);
board894600664 = NULL;
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_golden_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 12, 8, 7) == 1 );
assert( gamma_move(board, 13, 5, 5) == 0 );
assert( gamma_move(board, 14, 6, 10) == 1 );
assert( gamma_move(board, 14, 5, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_free_fields(board, 9) == 68 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_free_fields(board, 11) == 68 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 10, 3) == 0 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_golden_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 13, 8, 6) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_golden_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 5, 11) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_move(board, 12, 9, 8) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 13, 4, 9) == 0 );
assert( gamma_free_fields(board, 14) == 53 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 13, 10, 9) == 0 );
assert( gamma_move(board, 13, 0, 6) == 1 );
assert( gamma_free_fields(board, 13) == 48 );
assert( gamma_move(board, 14, 9, 6) == 1 );
assert( gamma_golden_move(board, 14, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_free_fields(board, 10) == 44 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 12, 3, 9) == 0 );
assert( gamma_move(board, 13, 7, 0) == 1 );
assert( gamma_move(board, 13, 6, 8) == 1 );
assert( gamma_move(board, 14, 3, 11) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_free_fields(board, 10) == 39 );
assert( gamma_move(board, 11, 4, 8) == 1 );


char* board608263949 = gamma_board(board);
assert( board608263949 != NULL );
assert( strcmp(board608263949, 
"2812.7....\n"
"14..7.1014.4.\n"
".92510...38\n"
"41121111413.414\n"
"46..2..61212\n"
"135...547114\n"
".1.14583467\n"
"9299104.142\n"
"6.514.1313..\n"
"101211..1141285\n"
".3.1174..42\n"
"8.651213.1311.\n") == 0);
free(board608263949);
board608263949 = NULL;
assert( gamma_move(board, 12, 7, 9) == 1 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 13, 3, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 1) == 1 );
assert( gamma_free_fields(board, 14) == 36 );


char* board361289401 = gamma_board(board);
assert( board361289401 != NULL );
assert( strcmp(board361289401, 
"2812.7....\n"
"14..7.1014.4.\n"
".92510..1238\n"
"41121111413.414\n"
"46..2..61212\n"
"135...547114\n"
".1.14583467\n"
"9299104.142\n"
"6.514.1313..\n"
"101211..1141285\n"
"143.1174..42\n"
"8.651213.1311.\n") == 0);
free(board361289401);
board361289401 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );


char* board457211503 = gamma_board(board);
assert( board457211503 != NULL );
assert( strcmp(board457211503, 
"2812.7....\n"
"14..7.1014.4.\n"
".92510..1238\n"
"41121111413.414\n"
"46..2.761212\n"
"135...547114\n"
"31.14583467\n"
"9299104.142\n"
"6.514.1313..\n"
"101211..1141285\n"
"143.1174..42\n"
"8.651213.1311.\n") == 0);
free(board457211503);
board457211503 = NULL;
assert( gamma_move(board, 11, 11, 9) == 0 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_move(board, 12, 7, 8) == 1 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_move(board, 14, 9, 4) == 0 );
assert( gamma_move(board, 14, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_free_fields(board, 9) == 31 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 12, 5, 11) == 0 );
assert( gamma_move(board, 13, 7, 5) == 0 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );


char* board300634469 = gamma_board(board);
assert( board300634469 != NULL );
assert( strcmp(board300634469, 
"2812.7..4.\n"
"14..7.1014.4.\n"
".92510..1238\n"
"4112111141312414\n"
"46..2.761212\n"
"135...547114\n"
"31.14583467\n"
"92991046142\n"
"62514.1313..\n"
"101211.31141285\n"
"143.1174..42\n"
"8.651213.1311.\n") == 0);
free(board300634469);
board300634469 = NULL;
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_move(board, 11, 7, 6) == 0 );
assert( gamma_move(board, 11, 2, 5) == 1 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_move(board, 14, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 9, 10) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 11, 11, 4) == 0 );
assert( gamma_move(board, 12, 9, 9) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_move(board, 13, 11, 7) == 0 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_move(board, 14, 8, 6) == 0 );
assert( gamma_free_fields(board, 14) == 25 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );


char* board753869460 = gamma_board(board);
assert( board753869460 != NULL );
assert( strcmp(board753869460, 
"2812.7..4.\n"
"14..7.1014.48\n"
".92510..1238\n"
"4112111141312414\n"
"46.22.761212\n"
"135...547114\n"
"311114583467\n"
"92991046142\n"
"62514.1313.9\n"
"101211.31141285\n"
"143.1174..42\n"
"8.651213.13114\n") == 0);
free(board753869460);
board753869460 = NULL;
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_free_fields(board, 9) == 24 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 11) == 0 );
assert( gamma_move(board, 11, 8, 11) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_move(board, 12, 7, 10) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_free_fields(board, 12) == 23 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 14, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_golden_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_golden_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 13, 3, 8) == 0 );
assert( gamma_move(board, 13, 5, 7) == 1 );
assert( gamma_golden_move(board, 13, 0, 2) == 1 );
assert( gamma_move(board, 14, 3, 0) == 0 );
assert( gamma_move(board, 14, 9, 1) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_move(board, 11, 11, 9) == 0 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_move(board, 12, 6, 11) == 1 );
assert( gamma_move(board, 13, 0, 11) == 0 );
assert( gamma_move(board, 14, 1, 2) == 0 );
assert( gamma_move(board, 14, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_move(board, 11, 11, 7) == 0 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 14, 5, 4) == 0 );
assert( gamma_move(board, 14, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 9, 5) == 0 );


gamma_delete(board);

    return 0;
}
