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
uuid: 417835035
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 5, 1, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 1, 12, 2) == 0 );


char* board980242905 = gamma_board(board);
assert( board980242905 != NULL );
assert( strcmp(board980242905, 
"............\n"
"............\n"
"...........1\n"
"............\n"
".1..........\n") == 0);
free(board980242905);
board980242905 = NULL;
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 12, -1) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board135322865 = gamma_board(board);
assert( board135322865 != NULL );
assert( strcmp(board135322865, 
"..........1.\n"
"1.......11.1\n"
".....1.....1\n"
"111...1...1.\n"
"11.11111.1..\n") == 0);
free(board135322865);
board135322865 = NULL;
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );


char* board961057416 = gamma_board(board);
assert( board961057416 != NULL );
assert( strcmp(board961057416, 
"..........1.\n"
"1.......11.1\n"
".....1.1...1\n"
"111...1...1.\n"
"11.11111.1..\n") == 0);
free(board961057416);
board961057416 = NULL;
assert( gamma_move(board, 1, -1, 4) == 0 );


gamma_delete(board);

    return 0;
}
