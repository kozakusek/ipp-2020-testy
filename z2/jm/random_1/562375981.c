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
uuid: 562375981
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_golden_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board178253424 = gamma_board(board);
assert( board178253424 != NULL );
assert( strcmp(board178253424, 
"..1...6...\n"
"...4......\n"
"..6..4..5.\n"
"....3.3.2.\n"
"....1.....\n"
"......13..\n") == 0);
free(board178253424);
board178253424 = NULL;
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board810066322 = gamma_board(board);
assert( board810066322 != NULL );
assert( strcmp(board810066322, 
"..1...6...\n"
"...4..4..2\n"
"..6..4..5.\n"
"..1.3.3.2.\n"
".5..1.....\n"
"......13.6\n") == 0);
free(board810066322);
board810066322 = NULL;
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );


char* board521658686 = gamma_board(board);
assert( board521658686 != NULL );
assert( strcmp(board521658686, 
"..1...6...\n"
"...4..4.42\n"
"..6.24..5.\n"
"..133.3.2.\n"
".5..1.....\n"
".6..5.13.6\n") == 0);
free(board521658686);
board521658686 = NULL;
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 10, 6) == 0 );


gamma_delete(board);

    return 0;
}
