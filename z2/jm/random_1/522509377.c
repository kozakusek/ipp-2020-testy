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
uuid: 522509377
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 7, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 17 );


char* board137070146 = gamma_board(board);
assert( board137070146 != NULL );
assert( strcmp(board137070146, 
"...\n"
"5..\n"
"...\n"
"..1\n"
"...\n"
"...\n"
"3.4\n") == 0);
free(board137070146);
board137070146 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );


char* board891994350 = gamma_board(board);
assert( board891994350 != NULL );
assert( strcmp(board891994350, 
".2.\n"
"5..\n"
"...\n"
"..1\n"
"...\n"
"...\n"
"3.4\n") == 0);
free(board891994350);
board891994350 = NULL;
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_free_fields(board, 1) == 13 );


char* board106063492 = gamma_board(board);
assert( board106063492 != NULL );
assert( strcmp(board106063492, 
".2.\n"
"5.5\n"
"..4\n"
"..1\n"
"...\n"
".1.\n"
"3.4\n") == 0);
free(board106063492);
board106063492 = NULL;
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );


gamma_delete(board);

    return 0;
}
