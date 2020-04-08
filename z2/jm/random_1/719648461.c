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
uuid: 719648461
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );


char* board951140306 = gamma_board(board);
assert( board951140306 != NULL );
assert( strcmp(board951140306, 
".........\n"
".2.......\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board951140306);
board951140306 = NULL;
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board410047201 = gamma_board(board);
assert( board410047201 != NULL );
assert( strcmp(board410047201, 
".........\n"
".2.......\n"
"...2.....\n"
".........\n"
"4..4.....\n"
".........\n"
"...36.1..\n"
".........\n"
"......5..\n") == 0);
free(board410047201);
board410047201 = NULL;
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );


char* board638853808 = gamma_board(board);
assert( board638853808 != NULL );
assert( strcmp(board638853808, 
"544....5.\n"
"424.3....\n"
"..225....\n"
".2.....1.\n"
"4514...4.\n"
"6......23\n"
"...36.1..\n"
"42.......\n"
"...33.5..\n") == 0);
free(board638853808);
board638853808 = NULL;
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_free_fields(board, 3) == 48 );


gamma_delete(board);

    return 0;
}
