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
uuid: 135459804
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_golden_move(board, 7, 5, 1) == 0 );


char* board996752979 = gamma_board(board);
assert( board996752979 != NULL );
assert( strcmp(board996752979, 
"23........\n"
"....7...75\n"
"......21..\n"
".34..76...\n"
"..........\n"
".......4..\n") == 0);
free(board996752979);
board996752979 = NULL;
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 10, -1) == 0 );


char* board669202036 = gamma_board(board);
assert( board669202036 != NULL );
assert( strcmp(board669202036, 
"23........\n"
"....7...75\n"
"......21.6\n"
".34..76...\n"
".........1\n"
".......4..\n") == 0);
free(board669202036);
board669202036 = NULL;
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 45 );


char* board888920982 = gamma_board(board);
assert( board888920982 != NULL );
assert( strcmp(board888920982, 
"231.......\n"
"....7...75\n"
"......21.6\n"
".34..76...\n"
".........1\n"
".......4..\n") == 0);
free(board888920982);
board888920982 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 10, 0) == 0 );


gamma_delete(board);

    return 0;
}
