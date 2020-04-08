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
uuid: 594091712
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_golden_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_free_fields(board, 2) == 41 );


char* board271245569 = gamma_board(board);
assert( board271245569 != NULL );
assert( strcmp(board271245569, 
"........\n"
"........\n"
"....4..3\n"
"...1.2..\n"
".1..7...\n"
"......3.\n") == 0);
free(board271245569);
board271245569 = NULL;
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );


char* board878934819 = gamma_board(board);
assert( board878934819 != NULL );
assert( strcmp(board878934819, 
"........\n"
"...3....\n"
"....4..3\n"
"...1.2..\n"
".1..74..\n"
"......3.\n") == 0);
free(board878934819);
board878934819 = NULL;
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_golden_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
