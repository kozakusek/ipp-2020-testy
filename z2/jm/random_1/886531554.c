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
uuid: 886531554
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_golden_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );


char* board104464030 = gamma_board(board);
assert( board104464030 != NULL );
assert( strcmp(board104464030, 
"....2.....\n"
"....3.4.2.\n"
".....3..31\n"
"61..6...2.\n"
"..........\n"
".3..4.....\n"
"...5.5....\n"
"..4.5..4..\n"
"...21.....\n"
"1....5....\n") == 0);
free(board104464030);
board104464030 = NULL;
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_golden_move(board, 1, 8, 4) == 0 );


char* board523420268 = gamma_board(board);
assert( board523420268 != NULL );
assert( strcmp(board523420268, 
"....2.....\n"
"....3.4.21\n"
".....3..31\n"
"61..6...2.\n"
"..........\n"
".3..4.....\n"
"...5.5....\n"
"..4.5..4..\n"
"...21.....\n"
"1....5....\n") == 0);
free(board523420268);
board523420268 = NULL;
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 4) == 0 );


char* board240367863 = gamma_board(board);
assert( board240367863 != NULL );
assert( strcmp(board240367863, 
"....2.....\n"
"....3.4.21\n"
".....3..31\n"
"616.6...2.\n"
"..........\n"
".3..4.....\n"
"...5.5....\n"
"..4.5..4..\n"
"...21.....\n"
"1..6.5....\n") == 0);
free(board240367863);
board240367863 = NULL;
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );


gamma_delete(board);

    return 0;
}
