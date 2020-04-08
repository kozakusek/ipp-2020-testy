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
uuid: 814661188
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board362780780 = gamma_board(board);
assert( board362780780 != NULL );
assert( strcmp(board362780780, 
".......\n"
".2....1\n"
"....1..\n"
"..2....\n"
".......\n"
"......3\n"
".......\n") == 0);
free(board362780780);
board362780780 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );


char* board687038979 = gamma_board(board);
assert( board687038979 != NULL );
assert( strcmp(board687038979, 
".2.....\n"
"22....1\n"
"5...1.1\n"
"3.2..4.\n"
"...23..\n"
".....43\n"
"..1..2.\n") == 0);
free(board687038979);
board687038979 = NULL;
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
