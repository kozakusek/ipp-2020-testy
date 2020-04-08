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
uuid: 677490007
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );


char* board726916436 = gamma_board(board);
assert( board726916436 != NULL );
assert( strcmp(board726916436, 
"..3.....\n"
"........\n"
"...1..2.\n"
"..2.....\n"
"..2.3...\n"
"...2....\n") == 0);
free(board726916436);
board726916436 = NULL;
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );


char* board722396788 = gamma_board(board);
assert( board722396788 != NULL );
assert( strcmp(board722396788, 
"..3.13..\n"
".....4..\n"
"...1..2.\n"
"..2.....\n"
"..2.3...\n"
".3.2....\n") == 0);
free(board722396788);
board722396788 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 30 );


gamma_delete(board);

    return 0;
}
