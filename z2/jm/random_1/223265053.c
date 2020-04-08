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
uuid: 223265053
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 1 );


char* board951257372 = gamma_board(board);
assert( board951257372 != NULL );
assert( strcmp(board951257372, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"......1..\n") == 0);
free(board951257372);
board951257372 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 6) == 1 );


char* board663281128 = gamma_board(board);
assert( board663281128 != NULL );
assert( strcmp(board663281128, 
"43.....31\n"
"2........\n"
"..5.1..4.\n"
"5.......4\n"
".........\n"
".........\n"
"......1.2\n") == 0);
free(board663281128);
board663281128 = NULL;
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );


char* board277775249 = gamma_board(board);
assert( board277775249 != NULL );
assert( strcmp(board277775249, 
"43..1..31\n"
"2........\n"
"..5.1..4.\n"
"5.......4\n"
".....5...\n"
".........\n"
"......1.2\n") == 0);
free(board277775249);
board277775249 = NULL;
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 3) == 0 );


char* board194895064 = gamma_board(board);
assert( board194895064 != NULL );
assert( strcmp(board194895064, 
"43..1..31\n"
"2.......3\n"
".45.1..4.\n"
"5.......4\n"
".33.55...\n"
".....5...\n"
"......1.2\n") == 0);
free(board194895064);
board194895064 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 4) == 0 );


gamma_delete(board);

    return 0;
}
