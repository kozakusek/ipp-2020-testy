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
uuid: 904150222
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 0, 5) == 1 );


char* board371692690 = gamma_board(board);
assert( board371692690 != NULL );
assert( strcmp(board371692690, 
"........\n"
"2....5..\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board371692690);
board371692690 = NULL;
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );


char* board920922877 = gamma_board(board);
assert( board920922877 != NULL );
assert( strcmp(board920922877, 
"..5.....\n"
"2....5..\n"
".6..1...\n"
"......6.\n"
"2......3\n"
".4......\n"
"........\n") == 0);
free(board920922877);
board920922877 = NULL;
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 2) == 33 );


gamma_delete(board);

    return 0;
}
