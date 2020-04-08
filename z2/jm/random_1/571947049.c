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
uuid: 571947049
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board117757553 = gamma_board(board);
assert( board117757553 != NULL );
assert( strcmp(board117757553, 
"......\n"
".....4\n"
"...3..\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"....2.\n") == 0);
free(board117757553);
board117757553 = NULL;
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );


char* board401567040 = gamma_board(board);
assert( board401567040 != NULL );
assert( strcmp(board401567040, 
".....1\n"
".....4\n"
"...3.2\n"
"......\n"
"......\n"
".5....\n"
"......\n"
"......\n"
"....2.\n") == 0);
free(board401567040);
board401567040 = NULL;
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board997237121 = gamma_board(board);
assert( board997237121 != NULL );
assert( strcmp(board997237121, 
".2...1\n"
".....4\n"
"2..3.2\n"
"......\n"
"......\n"
".5....\n"
"......\n"
"..1..6\n"
"....2.\n") == 0);
free(board997237121);
board997237121 = NULL;
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board216424104 = gamma_board(board);
assert( board216424104 != NULL );
assert( strcmp(board216424104, 
".2..31\n"
"...134\n"
"2..3.2\n"
"......\n"
"...5..\n"
".5....\n"
"...4..\n"
"..1..6\n"
"...221\n") == 0);
free(board216424104);
board216424104 = NULL;
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_free_fields(board, 6) == 36 );


gamma_delete(board);

    return 0;
}
