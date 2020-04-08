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
uuid: 407419109
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 12, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 11, 5, 11) == 1 );
assert( gamma_golden_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, -1, 12) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, -1, 12) == 0 );
assert( gamma_move(board, 10, 5, 11) == 0 );
assert( gamma_free_fields(board, 11) == 60 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 8, -1, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_golden_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 9, 0, 10) == 1 );


char* board405767467 = gamma_board(board);
assert( board405767467 != NULL );
assert( strcmp(board405767467, 
".10...11\n"
"9.....\n"
".853..\n"
"19....\n"
"......\n"
"61.510.\n"
"......\n"
"51....\n"
"2..5.4\n"
"...4.12\n"
".....1\n"
"...610.\n") == 0);
free(board405767467);
board405767467 = NULL;
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );


char* board175555790 = gamma_board(board);
assert( board175555790 != NULL );
assert( strcmp(board175555790, 
".10...11\n"
"9.....\n"
"10853..\n"
"19...3\n"
"......\n"
"61.510.\n"
"......\n"
"517...\n"
"2..5.4\n"
"...4.12\n"
".....1\n"
"...610.\n") == 0);
free(board175555790);
board175555790 = NULL;
assert( gamma_move(board, 11, -1, 11) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 12) == 0 );


gamma_delete(board);

    return 0;
}
