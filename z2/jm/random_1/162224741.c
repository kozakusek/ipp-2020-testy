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
uuid: 162224741
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_golden_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );


char* board516816572 = gamma_board(board);
assert( board516816572 != NULL );
assert( strcmp(board516816572, 
"......\n"
"......\n"
"......\n"
"1.....\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"..3...\n") == 0);
free(board516816572);
board516816572 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board430169913 = gamma_board(board);
assert( board430169913 != NULL );
assert( strcmp(board430169913, 
".2....\n"
".....2\n"
"...1.2\n"
"1..1..\n"
"......\n"
"......\n"
"1....3\n"
"......\n"
"1.3.2.\n"
"....1.\n"
".3....\n"
"..3.1.\n") == 0);
free(board430169913);
board430169913 = NULL;


char* board630241290 = gamma_board(board);
assert( board630241290 != NULL );
assert( strcmp(board630241290, 
".2....\n"
".....2\n"
"...1.2\n"
"1..1..\n"
"......\n"
"......\n"
"1....3\n"
"......\n"
"1.3.2.\n"
"....1.\n"
".3....\n"
"..3.1.\n") == 0);
free(board630241290);
board630241290 = NULL;
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 3, 5, 5) == 0 );


gamma_delete(board);

    return 0;
}
