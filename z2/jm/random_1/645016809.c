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
uuid: 645016809
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_busy_fields(board, 5) == 0 );


char* board256608860 = gamma_board(board);
assert( board256608860 != NULL );
assert( strcmp(board256608860, 
"..1......\n"
".........\n"
".........\n"
"......2..\n"
".........\n"
".........\n") == 0);
free(board256608860);
board256608860 = NULL;
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board374065942 = gamma_board(board);
assert( board374065942 != NULL );
assert( strcmp(board374065942, 
"..1..1..6\n"
"4...2....\n"
"..2......\n"
"......2..\n"
".........\n"
"....6....\n") == 0);
free(board374065942);
board374065942 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board690275150 = gamma_board(board);
assert( board690275150 != NULL );
assert( strcmp(board690275150, 
"..1..1..6\n"
"4...2..1.\n"
"..2.....5\n"
"......26.\n"
".........\n"
"....6....\n") == 0);
free(board690275150);
board690275150 = NULL;
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );


char* board620791628 = gamma_board(board);
assert( board620791628 != NULL );
assert( strcmp(board620791628, 
"..1..1..6\n"
"4...2..1.\n"
"..2....65\n"
"......26.\n"
".........\n"
"....6..3.\n") == 0);
free(board620791628);
board620791628 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );


gamma_delete(board);

    return 0;
}
