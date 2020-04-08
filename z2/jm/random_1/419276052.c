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
uuid: 419276052
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );


char* board951882673 = gamma_board(board);
assert( board951882673 != NULL );
assert( strcmp(board951882673, 
"..........\n"
"..........\n"
"..........\n"
"..5..8....\n"
"..3.2....1\n"
"..........\n"
"..........\n") == 0);
free(board951882673);
board951882673 = NULL;
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_free_fields(board, 4) == 63 );


char* board613745110 = gamma_board(board);
assert( board613745110 != NULL );
assert( strcmp(board613745110, 
"..........\n"
"..........\n"
"..........\n"
"..5..8....\n"
"..3.2.4..1\n"
"..........\n"
"....1.....\n") == 0);
free(board613745110);
board613745110 = NULL;
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 46 );


char* board834569745 = gamma_board(board);
assert( board834569745 != NULL );
assert( strcmp(board834569745, 
"...1....7.\n"
"...65....7\n"
".....2....\n"
"..5..86...\n"
"4.682.4841\n"
"..4..3....\n"
".72.138...\n") == 0);
free(board834569745);
board834569745 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_golden_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );


char* board449969802 = gamma_board(board);
assert( board449969802 != NULL );
assert( strcmp(board449969802, 
"...1....7.\n"
"...65....7\n"
".....2....\n"
"..5..86...\n"
"47682.4841\n"
"..4..3.8..\n"
".72.138...\n") == 0);
free(board449969802);
board449969802 = NULL;
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 8, 0) == 1 );


char* board835580517 = gamma_board(board);
assert( board835580517 != NULL );
assert( strcmp(board835580517, 
"...1....7.\n"
"...65...57\n"
".....2....\n"
"..5..86...\n"
"47682.4841\n"
"..4..3.8..\n"
".72.138.8.\n") == 0);
free(board835580517);
board835580517 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_golden_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );


gamma_delete(board);

    return 0;
}
