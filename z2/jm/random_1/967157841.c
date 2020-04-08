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
uuid: 967157841
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );


char* board602630906 = gamma_board(board);
assert( board602630906 != NULL );
assert( strcmp(board602630906, 
".2....\n"
"..6...\n"
"......\n"
"....3.\n"
"...2..\n"
"....1.\n"
"..5...\n"
"1.4.55\n") == 0);
free(board602630906);
board602630906 = NULL;
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );


char* board266848256 = gamma_board(board);
assert( board266848256 != NULL );
assert( strcmp(board266848256, 
".2....\n"
"..6...\n"
"......\n"
"....3.\n"
"5..2..\n"
"1...1.\n"
"..5...\n"
"1.4.55\n") == 0);
free(board266848256);
board266848256 = NULL;


char* board332385849 = gamma_board(board);
assert( board332385849 != NULL );
assert( strcmp(board332385849, 
".2....\n"
"..6...\n"
"......\n"
"....3.\n"
"5..2..\n"
"1...1.\n"
"..5...\n"
"1.4.55\n") == 0);
free(board332385849);
board332385849 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 4, -1) == 0 );


char* board322869876 = gamma_board(board);
assert( board322869876 != NULL );
assert( strcmp(board322869876, 
".2....\n"
"..6...\n"
"......\n"
"4...3.\n"
"5..2..\n"
"1...1.\n"
"..5...\n"
"1.4.55\n") == 0);
free(board322869876);
board322869876 = NULL;
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );


char* board240998266 = gamma_board(board);
assert( board240998266 != NULL );
assert( strcmp(board240998266, 
".2....\n"
"..6...\n"
"......\n"
"4...3.\n"
"55.2..\n"
"1...1.\n"
"..5.61\n"
"1.4455\n") == 0);
free(board240998266);
board240998266 = NULL;
assert( gamma_move(board, 6, 5, -1) == 0 );


gamma_delete(board);

    return 0;
}
