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
uuid: 618747167
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );


char* board820550798 = gamma_board(board);
assert( board820550798 != NULL );
assert( strcmp(board820550798, 
".......\n"
".2....8\n"
"..1....\n"
".......\n"
"...18.1\n"
"..4....\n"
".......\n") == 0);
free(board820550798);
board820550798 = NULL;
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );


char* board873176015 = gamma_board(board);
assert( board873176015 != NULL );
assert( strcmp(board873176015, 
".5.....\n"
".24...8\n"
"..1....\n"
"..3..8.\n"
"...18.1\n"
"..4....\n"
"...2.1.\n") == 0);
free(board873176015);
board873176015 = NULL;
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );


char* board542721396 = gamma_board(board);
assert( board542721396 != NULL );
assert( strcmp(board542721396, 
"85..1..\n"
".24...8\n"
"..1....\n"
"..3..8.\n"
"...18.1\n"
"..4....\n"
"...2.1.\n") == 0);
free(board542721396);
board542721396 = NULL;
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
