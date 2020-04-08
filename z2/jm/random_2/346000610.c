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
uuid: 346000610
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board772430735 = gamma_board(board);
assert( board772430735 != NULL );
assert( strcmp(board772430735, 
"........\n"
"........\n"
"...4....\n"
".....79.\n"
"..5..6..\n"
"........\n"
"..2.....\n"
"...1....\n"
".3..8.1.\n"
".......1\n") == 0);
free(board772430735);
board772430735 = NULL;
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board713345206 = gamma_board(board);
assert( board713345206 != NULL );
assert( strcmp(board713345206, 
"........\n"
"........\n"
"...4....\n"
"...2.79.\n"
"..5..6..\n"
"....4...\n"
"..26....\n"
"...17...\n"
".3..811.\n"
"9......1\n") == 0);
free(board713345206);
board713345206 = NULL;
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );


char* board687057542 = gamma_board(board);
assert( board687057542 != NULL );
assert( strcmp(board687057542, 
"........\n"
"..3..2..\n"
"...4..25\n"
".5.2.75.\n"
"..5..6..\n"
"...84...\n"
".126..4.\n"
"...17...\n"
"94..811.\n"
"9.....31\n") == 0);
free(board687057542);
board687057542 = NULL;
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );


char* board429706441 = gamma_board(board);
assert( board429706441 != NULL );
assert( strcmp(board429706441, 
".66..71.\n"
".835.2..\n"
"..84..25\n"
".5.2.752\n"
"..5.86.2\n"
"..984.92\n"
".1262.4.\n"
"..717.4.\n"
"94..811.\n"
"9.997.31\n") == 0);
free(board429706441);
board429706441 = NULL;
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );


char* board520109943 = gamma_board(board);
assert( board520109943 != NULL );
assert( strcmp(board520109943, 
".669.718\n"
".83592..\n"
".884..25\n"
".5.2.752\n"
"3.578692\n"
"..984.92\n"
"81262.41\n"
".4717.41\n"
"9493811.\n"
"9.997.31\n") == 0);
free(board520109943);
board520109943 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 3, 8) == 0 );


char* board938002183 = gamma_board(board);
assert( board938002183 != NULL );
assert( strcmp(board938002183, 
"96695718\n"
".835926.\n"
"38843725\n"
".2224752\n"
"3.578692\n"
"2.984792\n"
"81162.41\n"
".4717641\n"
"9493811.\n"
"9.997.31\n") == 0);
free(board938002183);
board938002183 = NULL;
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_free_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );


char* board658997190 = gamma_board(board);
assert( board658997190 != NULL );
assert( strcmp(board658997190, 
"96695718\n"
".835926.\n"
"38843725\n"
".2224752\n"
"3.578692\n"
"2.984792\n"
"81162.41\n"
".4717641\n"
"9493811.\n"
"9.997.31\n") == 0);
free(board658997190);
board658997190 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );


char* board846381763 = gamma_board(board);
assert( board846381763 != NULL );
assert( strcmp(board846381763, 
"96695718\n"
".835926.\n"
"38843725\n"
".2224752\n"
"3.578692\n"
"2.984792\n"
"81162.41\n"
".4717641\n"
"9493811.\n"
"9.997.31\n") == 0);
free(board846381763);
board846381763 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );


char* board396019873 = gamma_board(board);
assert( board396019873 != NULL );
assert( strcmp(board396019873, 
"96695718\n"
".835926.\n"
"38843725\n"
".2224752\n"
"3.578692\n"
"2.984792\n"
"81162.41\n"
".4717641\n"
"9493811.\n"
"9.997.31\n") == 0);
free(board396019873);
board396019873 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );


gamma_delete(board);

    return 0;
}
