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
uuid: 649233867
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board450283855 = gamma_board(board);
assert( board450283855 != NULL );
assert( strcmp(board450283855, 
"4.....\n"
"......\n"
"......\n"
"......\n"
"......\n"
".11..4\n") == 0);
free(board450283855);
board450283855 = NULL;
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board327184633 = gamma_board(board);
assert( board327184633 != NULL );
assert( strcmp(board327184633, 
"4.....\n"
"......\n"
"......\n"
"......\n"
"..3...\n"
".11..4\n") == 0);
free(board327184633);
board327184633 = NULL;
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 5) == 1 );


gamma_delete(board);

    return 0;
}
