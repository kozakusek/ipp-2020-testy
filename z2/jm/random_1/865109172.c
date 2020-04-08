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
uuid: 865109172
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 9) == 0 );


char* board496298332 = gamma_board(board);
assert( board496298332 != NULL );
assert( strcmp(board496298332, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board496298332);
board496298332 = NULL;
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );


char* board100308353 = gamma_board(board);
assert( board100308353 != NULL );
assert( strcmp(board100308353, 
".......\n"
".......\n"
".......\n"
".......\n"
"......2\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board100308353);
board100308353 = NULL;
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );


char* board656700097 = gamma_board(board);
assert( board656700097 != NULL );
assert( strcmp(board656700097, 
".......\n"
"..1....\n"
"..56...\n"
"5..6.3.\n"
".24...2\n"
"..4...1\n"
"....3.4\n"
".2.....\n"
"6..55.2\n") == 0);
free(board656700097);
board656700097 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );


char* board491276124 = gamma_board(board);
assert( board491276124 != NULL );
assert( strcmp(board491276124, 
".......\n"
"..1....\n"
"..56...\n"
"5..6.3.\n"
".24...2\n"
"..4...1\n"
"....3.4\n"
".2.....\n"
"6..55.2\n") == 0);
free(board491276124);
board491276124 = NULL;
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );


char* board669252199 = gamma_board(board);
assert( board669252199 != NULL );
assert( strcmp(board669252199, 
"..5....\n"
"..1....\n"
"..56.4.\n"
"5..6.3.\n"
"324...2\n"
"..4.4.1\n"
"....3.4\n"
".2.....\n"
"6..55.2\n") == 0);
free(board669252199);
board669252199 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );


gamma_delete(board);

    return 0;
}
