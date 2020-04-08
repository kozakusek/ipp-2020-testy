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
uuid: 286202236
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );


char* board228973259 = gamma_board(board);
assert( board228973259 != NULL );
assert( strcmp(board228973259, 
"..1...\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".....2\n") == 0);
free(board228973259);
board228973259 = NULL;
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board910424000 = gamma_board(board);
assert( board910424000 != NULL );
assert( strcmp(board910424000, 
"..1...\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"..6..2\n") == 0);
free(board910424000);
board910424000 = NULL;
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );


char* board583429977 = gamma_board(board);
assert( board583429977 != NULL );
assert( strcmp(board583429977, 
"..1...\n"
".....5\n"
"......\n"
"......\n"
"......\n"
"...1.3\n"
"....3.\n"
".5....\n"
".4....\n"
"..61.2\n") == 0);
free(board583429977);
board583429977 = NULL;
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );


char* board969206550 = gamma_board(board);
assert( board969206550 != NULL );
assert( strcmp(board969206550, 
"..17..\n"
".....5\n"
".....1\n"
"4...7.\n"
"......\n"
"...1.3\n"
"2...3.\n"
".55...\n"
".4....\n"
".26132\n") == 0);
free(board969206550);
board969206550 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );


char* board326377784 = gamma_board(board);
assert( board326377784 != NULL );
assert( strcmp(board326377784, 
"..17..\n"
".....5\n"
".....1\n"
"4...7.\n"
"......\n"
"...1.3\n"
"2...3.\n"
".55...\n"
".4....\n"
"226132\n") == 0);
free(board326377784);
board326377784 = NULL;
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );


gamma_delete(board);

    return 0;
}
