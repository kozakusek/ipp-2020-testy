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
uuid: 539475945
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );


char* board296276935 = gamma_board(board);
assert( board296276935 != NULL );
assert( strcmp(board296276935, 
"4...1...\n"
".3....25\n"
"........\n"
".....7..\n"
"........\n"
"..1.....\n"
"......6.\n"
"........\n"
"....1...\n") == 0);
free(board296276935);
board296276935 = NULL;
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 5) == 1 );


char* board547340109 = gamma_board(board);
assert( board547340109 != NULL );
assert( strcmp(board547340109, 
"4...1.5.\n"
".35...25\n"
"........\n"
"755.47.3\n"
".....6..\n"
"..1..2..\n"
"4.....6.\n"
"...62...\n"
".21.1.7.\n") == 0);
free(board547340109);
board547340109 = NULL;
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );


gamma_delete(board);

    return 0;
}
