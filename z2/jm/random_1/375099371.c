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
uuid: 375099371
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );


char* board791208307 = gamma_board(board);
assert( board791208307 != NULL );
assert( strcmp(board791208307, 
".......\n"
"...1...\n"
".......\n"
".......\n"
".......\n"
".......\n"
"...4...\n"
".......\n"
"1......\n"
".......\n") == 0);
free(board791208307);
board791208307 = NULL;
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_golden_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board989883159 = gamma_board(board);
assert( board989883159 != NULL );
assert( strcmp(board989883159, 
".......\n"
"...15..\n"
".1.....\n"
".......\n"
".......\n"
".......\n"
"...4...\n"
".......\n"
"1......\n"
".......\n") == 0);
free(board989883159);
board989883159 = NULL;
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, -1) == 0 );


char* board318719468 = gamma_board(board);
assert( board318719468 != NULL );
assert( strcmp(board318719468, 
"..44...\n"
"3..15..\n"
".1.4...\n"
"...55.3\n"
"..233..\n"
"..21...\n"
"4..44..\n"
"..2.51.\n"
"1..5...\n"
"......1\n") == 0);
free(board318719468);
board318719468 = NULL;
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );


gamma_delete(board);

    return 0;
}
