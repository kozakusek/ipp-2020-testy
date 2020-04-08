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
uuid: 655418867
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_golden_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );


char* board882598877 = gamma_board(board);
assert( board882598877 != NULL );
assert( strcmp(board882598877, 
"..2...\n"
".....4\n"
"......\n"
".6....\n"
"......\n"
".....1\n"
"......\n") == 0);
free(board882598877);
board882598877 = NULL;
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_golden_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );


char* board876729005 = gamma_board(board);
assert( board876729005 != NULL );
assert( strcmp(board876729005, 
"..2..4\n"
"325..4\n"
"..431.\n"
".6.3..\n"
"..7...\n"
"..6.61\n"
"......\n") == 0);
free(board876729005);
board876729005 = NULL;
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );


gamma_delete(board);

    return 0;
}
