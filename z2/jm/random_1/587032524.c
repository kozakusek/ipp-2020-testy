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
uuid: 587032524
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );


char* board529906595 = gamma_board(board);
assert( board529906595 != NULL );
assert( strcmp(board529906595, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"..1......\n") == 0);
free(board529906595);
board529906595 = NULL;
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 6) == 0 );


char* board691043889 = gamma_board(board);
assert( board691043889 != NULL );
assert( strcmp(board691043889, 
"....4112.\n"
"..31....2\n"
".2..3.3..\n"
"......2..\n"
"........4\n"
"..1.3..13\n") == 0);
free(board691043889);
board691043889 = NULL;
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );


gamma_delete(board);

    return 0;
}
