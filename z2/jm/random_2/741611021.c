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
uuid: 741611021
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 4, 6, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 0 );


char* board638989639 = gamma_board(board);
assert( board638989639 != NULL );
assert( strcmp(board638989639, 
"..............\n"
"..............\n"
"..............\n"
"..............\n") == 0);
free(board638989639);
board638989639 = NULL;
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );


char* board968793089 = gamma_board(board);
assert( board968793089 != NULL );
assert( strcmp(board968793089, 
"5.3..3.25.2.46\n"
".........21..6\n"
".641.3.41....2\n"
"4.1........3..\n") == 0);
free(board968793089);
board968793089 = NULL;
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board839109444 = gamma_board(board);
assert( board839109444 != NULL );
assert( strcmp(board839109444, 
"5.34.3.25.2.46\n"
".2.......21..6\n"
"5641.3.41...22\n"
"4.1...1.3..3..\n") == 0);
free(board839109444);
board839109444 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );


char* board890108920 = gamma_board(board);
assert( board890108920 != NULL );
assert( strcmp(board890108920, 
"5.34.3.25.2.46\n"
".2.......213.6\n"
"564143.41...22\n"
"4.14..1.3..3..\n") == 0);
free(board890108920);
board890108920 = NULL;
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );


char* board986499414 = gamma_board(board);
assert( board986499414 != NULL );
assert( strcmp(board986499414, 
"5.3413.2532.46\n"
".21.3....213.6\n"
"56414364131222\n"
"44142.1.3..3..\n") == 0);
free(board986499414);
board986499414 = NULL;
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );


char* board544187559 = gamma_board(board);
assert( board544187559 != NULL );
assert( strcmp(board544187559, 
"5.3413.2532.46\n"
".21.3..4.213.6\n"
"56414364131222\n"
"44142.1233.3.1\n") == 0);
free(board544187559);
board544187559 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );


char* board752060485 = gamma_board(board);
assert( board752060485 != NULL );
assert( strcmp(board752060485, 
"5.3413.2532.46\n"
".21.3..4.213.6\n"
"56414364131222\n"
"44142.1233.3.1\n") == 0);
free(board752060485);
board752060485 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board847640236 = gamma_board(board);
assert( board847640236 != NULL );
assert( strcmp(board847640236, 
"5.3413.2532.46\n"
".21.3..4.213.6\n"
"56414364131222\n"
"44142.1233.3.1\n") == 0);
free(board847640236);
board847640236 = NULL;
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );


gamma_delete(board);

    return 0;
}
