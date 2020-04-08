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
uuid: 810984702
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );


char* board344813329 = gamma_board(board);
assert( board344813329 != NULL );
assert( strcmp(board344813329, 
".........\n"
".........\n"
".........\n"
"...1....2\n"
".........\n"
".........\n") == 0);
free(board344813329);
board344813329 = NULL;
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 1, 6, 4) == 1 );


char* board369063278 = gamma_board(board);
assert( board369063278 != NULL );
assert( strcmp(board369063278, 
"...2.....\n"
"...2..1..\n"
".........\n"
"...1....2\n"
"..3....1.\n"
".........\n") == 0);
free(board369063278);
board369063278 = NULL;
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board831535042 = gamma_board(board);
assert( board831535042 != NULL );
assert( strcmp(board831535042, 
"...2.....\n"
"...2..1..\n"
".........\n"
"...1.3..2\n"
"..3....1.\n"
".........\n") == 0);
free(board831535042);
board831535042 = NULL;
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
