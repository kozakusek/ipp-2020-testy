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
uuid: 984104644
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );


char* board537143540 = gamma_board(board);
assert( board537143540 != NULL );
assert( strcmp(board537143540, 
"......\n"
"......\n"
"1.....\n"
"......\n"
"6.....\n"
"......\n"
"..2...\n"
".3....\n"
"......\n"
"......\n"
"......\n") == 0);
free(board537143540);
board537143540 = NULL;
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board670427815 = gamma_board(board);
assert( board670427815 != NULL );
assert( strcmp(board670427815, 
"..5...\n"
"......\n"
"1.....\n"
".....3\n"
"6.....\n"
"......\n"
"..2...\n"
".3....\n"
"......\n"
"....1.\n"
".4....\n") == 0);
free(board670427815);
board670427815 = NULL;
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );


char* board979056861 = gamma_board(board);
assert( board979056861 != NULL );
assert( strcmp(board979056861, 
"..5...\n"
"...4..\n"
"1.....\n"
"....23\n"
"63...5\n"
"......\n"
"..2...\n"
".3....\n"
"....54\n"
"....1.\n"
".4....\n") == 0);
free(board979056861);
board979056861 = NULL;
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );


gamma_delete(board);

    return 0;
}
