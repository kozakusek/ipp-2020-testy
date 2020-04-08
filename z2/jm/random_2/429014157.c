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
uuid: 429014157
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 4, 11, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_free_fields(board, 11) == 29 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );


char* board803111719 = gamma_board(board);
assert( board803111719 != NULL );
assert( strcmp(board803111719, 
"...7..7.2\n"
".3.....46\n"
"...2.5...\n"
"92110.24..\n") == 0);
free(board803111719);
board803111719 = NULL;
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_golden_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 0) == 0 );


char* board998367027 = gamma_board(board);
assert( board998367027 != NULL );
assert( strcmp(board998367027, 
"...7..7.2\n"
"3325.41146\n"
"9..265112.\n"
"92110.2489\n") == 0);
free(board998367027);
board998367027 = NULL;
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
