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
uuid: 754699007
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 11, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_free_fields(board, 9) == 97 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_free_fields(board, 7) == 92 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_free_fields(board, 8) == 91 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_move(board, 10, 4, 2) == 1 );


char* board271211357 = gamma_board(board);
assert( board271211357 != NULL );
assert( strcmp(board271211357, 
"..........\n"
".6......62\n"
"1........10\n"
"..38......\n"
"6........8\n"
"...4.9....\n"
"87........\n"
"......9...\n"
".4..10..75.\n"
"...10...4..\n"
".....3...3\n") == 0);
free(board271211357);
board271211357 = NULL;
assert( gamma_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 11, 0, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 10, 3, 9) == 1 );


char* board877321181 = gamma_board(board);
assert( board877321181 != NULL );
assert( strcmp(board877321181, 
".....7....\n"
"116.10911..62\n"
"1.......210\n"
"..38......\n"
"6.9......8\n"
"..34.9....\n"
"87...8....\n"
"3.....9...\n"
".4..10.775.\n"
"...10...4..\n"
".....3...3\n") == 0);
free(board877321181);
board877321181 = NULL;
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 71 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_golden_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 6, 6) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_free_fields(board, 11) == 44 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );


char* board542743645 = gamma_board(board);
assert( board542743645 != NULL );
assert( strcmp(board542743645, 
"1136..7..4.\n"
"116210911..62\n"
"111789.6.210\n"
"4.38845692\n"
"6109..115..8\n"
"3634.94.7.\n"
"871..85.4.\n"
"3.5.779...\n"
".47810.775.\n"
"11111010.1.4.2\n"
"162..3..113\n") == 0);
free(board542743645);
board542743645 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );


char* board508145051 = gamma_board(board);
assert( board508145051 != NULL );
assert( strcmp(board508145051, 
"1136..7..45\n"
"116210911..62\n"
"111789106.210\n"
"4.38845692\n"
"6109.735518\n"
"3634.94.7.\n"
"871.585.42\n"
"3.51779...\n"
"447810.775.\n"
"11111010.1.482\n"
"162.33..113\n") == 0);
free(board508145051);
board508145051 = NULL;
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 1, 6) == 0 );


char* board685885568 = gamma_board(board);
assert( board685885568 != NULL );
assert( strcmp(board685885568, 
"1136..7..45\n"
"116210911..62\n"
"111789106.210\n"
"4.38845692\n"
"6109.735518\n"
"3634.94.7.\n"
"871.585.42\n"
"3.51779...\n"
"447810.775.\n"
"11111010.1.482\n"
"162.33..113\n") == 0);
free(board685885568);
board685885568 = NULL;
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_free_fields(board, 11) == 23 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );


char* board382495616 = gamma_board(board);
assert( board382495616 != NULL );
assert( strcmp(board382495616, 
"1136..7..45\n"
"116210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634.94.7.\n"
"871.585.42\n"
"3.51779.6.\n"
"447810.775.\n"
"11111010.1.482\n"
"162.33..113\n") == 0);
free(board382495616);
board382495616 = NULL;
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );


char* board299579299 = gamma_board(board);
assert( board299579299 != NULL );
assert( strcmp(board299579299, 
"1136..7..45\n"
"116210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634.94.7.\n"
"871.585.42\n"
"3.51779.6.\n"
"447810.775.\n"
"11111010.1.482\n"
"162.33..113\n") == 0);
free(board299579299);
board299579299 = NULL;
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 1, 9) == 1 );


char* board692853824 = gamma_board(board);
assert( board692853824 != NULL );
assert( strcmp(board692853824, 
"1136..7..45\n"
"111210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634.94.7.\n"
"871.585.42\n"
"3.51779.6.\n"
"447810.775.\n"
"11111010.1.482\n"
"162.33..113\n") == 0);
free(board692853824);
board692853824 = NULL;
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_free_fields(board, 6) == 20 );


char* board137300645 = gamma_board(board);
assert( board137300645 != NULL );
assert( strcmp(board137300645, 
"1136..7..45\n"
"111210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634494.7.\n"
"871.585.42\n"
"3.51779.6.\n"
"447810.775.\n"
"1111101021.482\n"
"162.33..113\n") == 0);
free(board137300645);
board137300645 = NULL;
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_free_fields(board, 10) == 20 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 20 );


char* board366962608 = gamma_board(board);
assert( board366962608 != NULL );
assert( strcmp(board366962608, 
"1136..7..45\n"
"111210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634494.7.\n"
"871.585.42\n"
"3.51779.6.\n"
"447810.775.\n"
"1111101021.482\n"
"162.33..113\n") == 0);
free(board366962608);
board366962608 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );


char* board850407118 = gamma_board(board);
assert( board850407118 != NULL );
assert( strcmp(board850407118, 
"1136..7..45\n"
"111210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634494.7.\n"
"8715585.42\n"
"3.51779.6.\n"
"447810.775.\n"
"1111101021.482\n"
"162.3399113\n") == 0);
free(board850407118);
board850407118 = NULL;
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );


char* board493392026 = gamma_board(board);
assert( board493392026 != NULL );
assert( strcmp(board493392026, 
"1136..7..45\n"
"111210911..62\n"
"111789106.210\n"
"4438845692\n"
"61091735518\n"
"3634494.72\n"
"8715585.42\n"
"3.51779.6.\n"
"447810.7755\n"
"1111101021.482\n"
"162.3399113\n") == 0);
free(board493392026);
board493392026 = NULL;
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );


gamma_delete(board);

    return 0;
}
