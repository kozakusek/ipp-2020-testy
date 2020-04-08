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
uuid: 927693945
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_free_fields(board, 2) == 89 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board894157211 = gamma_board(board);
assert( board894157211 != NULL );
assert( strcmp(board894157211, 
"..........\n"
"..........\n"
"..........\n"
"...3.....2\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board894157211);
board894157211 = NULL;
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );


char* board860555676 = gamma_board(board);
assert( board860555676 != NULL );
assert( strcmp(board860555676, 
".........3\n"
".....4....\n"
"..........\n"
".2.3.3...2\n"
"3..4......\n"
".1.....4..\n"
"..........\n"
"..........\n"
".......2.2\n") == 0);
free(board860555676);
board860555676 = NULL;
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );


char* board957410164 = gamma_board(board);
assert( board957410164 != NULL );
assert( strcmp(board957410164, 
"...2....33\n"
"4.3..4....\n"
".1........\n"
"2233.3...2\n"
"3..4.....2\n"
"41....24..\n"
".2.3..4.3.\n"
".2........\n"
".......242\n") == 0);
free(board957410164);
board957410164 = NULL;
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );


char* board510816786 = gamma_board(board);
assert( board510816786 != NULL );
assert( strcmp(board510816786, 
"...2....33\n"
"4.3..4....\n"
".1........\n"
"2233.3...2\n"
"3..4.....2\n"
"41....24..\n"
".2.3..4.3.\n"
".2........\n"
".......242\n") == 0);
free(board510816786);
board510816786 = NULL;
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );


char* board897917541 = gamma_board(board);
assert( board897917541 != NULL );
assert( strcmp(board897917541, 
"...2....33\n"
"4.3..4....\n"
".1........\n"
"2233.3...2\n"
"3..4.....2\n"
"41.3..24..\n"
".2.3..443.\n"
".2........\n"
".......242\n") == 0);
free(board897917541);
board897917541 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board124179182 = gamma_board(board);
assert( board124179182 != NULL );
assert( strcmp(board124179182, 
"...2....33\n"
"4.3..4....\n"
".1........\n"
"2233.3...2\n"
"3..4.....2\n"
"41.3..24..\n"
".2.3..443.\n"
".2.3......\n"
".......242\n") == 0);
free(board124179182);
board124179182 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board422737468 = gamma_board(board);
assert( board422737468 != NULL );
assert( strcmp(board422737468, 
"...2....33\n"
"4.3..4....\n"
".1........\n"
"2233.3...2\n"
"3..4.....2\n"
"41.3..24..\n"
".2.3..443.\n"
".2.3......\n"
".......242\n") == 0);
free(board422737468);
board422737468 = NULL;
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
