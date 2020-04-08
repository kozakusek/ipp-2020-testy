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
uuid: 386902578
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );


char* board781060642 = gamma_board(board);
assert( board781060642 != NULL );
assert( strcmp(board781060642, 
".1........\n"
"..2.....1.\n"
"..........\n"
"..........\n"
"........3.\n"
"....1.....\n"
"..........\n") == 0);
free(board781060642);
board781060642 = NULL;
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );


char* board176930616 = gamma_board(board);
assert( board176930616 != NULL );
assert( strcmp(board176930616, 
".1.3......\n"
"..2.....13\n"
".2........\n"
"..........\n"
"........31\n"
"....1.....\n"
"..........\n") == 0);
free(board176930616);
board176930616 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board735146866 = gamma_board(board);
assert( board735146866 != NULL );
assert( strcmp(board735146866, 
".1.3......\n"
"..2.....13\n"
".2........\n"
"..........\n"
"........31\n"
"....1.....\n"
"..........\n") == 0);
free(board735146866);
board735146866 = NULL;
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 12 );


char* board329177204 = gamma_board(board);
assert( board329177204 != NULL );
assert( strcmp(board329177204, 
".113...3..\n"
".12.....13\n"
".2........\n"
"..2.......\n"
"..2.2..331\n"
"....1.....\n"
"..........\n") == 0);
free(board329177204);
board329177204 = NULL;
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );


char* board750347096 = gamma_board(board);
assert( board750347096 != NULL );
assert( strcmp(board750347096, 
".113...3..\n"
".12.....13\n"
".2........\n"
"..2.......\n"
"..2.2..331\n"
"....1.....\n"
"..........\n") == 0);
free(board750347096);
board750347096 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );


char* board928769613 = gamma_board(board);
assert( board928769613 != NULL );
assert( strcmp(board928769613, 
".113...3..\n"
".12.....13\n"
".2........\n"
"..2.......\n"
"..2.2..331\n"
"....1.....\n"
"..........\n") == 0);
free(board928769613);
board928769613 = NULL;


gamma_delete(board);

    return 0;
}
