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
uuid: 199508504
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board429796200 = gamma_board(board);
assert( board429796200 != NULL );
assert( strcmp(board429796200, 
"..........\n"
".......3..\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"....1.....\n"
"..........\n") == 0);
free(board429796200);
board429796200 = NULL;
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board236113266 = gamma_board(board);
assert( board236113266 != NULL );
assert( strcmp(board236113266, 
"..........\n"
"...1...3..\n"
"....2..5..\n"
"..2.......\n"
".........1\n"
".55.......\n"
"....11....\n"
".......5..\n") == 0);
free(board236113266);
board236113266 = NULL;
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 63 );


char* board107261988 = gamma_board(board);
assert( board107261988 != NULL );
assert( strcmp(board107261988, 
"..1....3..\n"
"...1...34.\n"
".3..2..5..\n"
"..2.......\n"
"...1.....1\n"
".55.......\n"
"....11....\n"
".......5.3\n") == 0);
free(board107261988);
board107261988 = NULL;
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );


char* board885044994 = gamma_board(board);
assert( board885044994 != NULL );
assert( strcmp(board885044994, 
"..1....3..\n"
"...1...34.\n"
".3..5..5..\n"
".32.24....\n"
"...1....21\n"
"155......3\n"
"...511.1..\n"
".......5.3\n") == 0);
free(board885044994);
board885044994 = NULL;
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );


gamma_delete(board);

    return 0;
}
