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
uuid: 568146656
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );


char* board988036835 = gamma_board(board);
assert( board988036835 != NULL );
assert( strcmp(board988036835, 
"...6...\n"
"......5\n"
"...51..\n"
".......\n"
"..1....\n"
".......\n"
".....4.\n"
".......\n"
"..12...\n"
".......\n") == 0);
free(board988036835);
board988036835 = NULL;
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );


char* board506679579 = gamma_board(board);
assert( board506679579 != NULL );
assert( strcmp(board506679579, 
".626...\n"
"..64.15\n"
"...51..\n"
".......\n"
".31...4\n"
"1......\n"
".....4.\n"
"6.3....\n"
".512...\n"
"....34.\n") == 0);
free(board506679579);
board506679579 = NULL;
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


char* board108874916 = gamma_board(board);
assert( board108874916 != NULL );
assert( strcmp(board108874916, 
".626...\n"
"..64.15\n"
"...51..\n"
".......\n"
".31...4\n"
"11.....\n"
".....4.\n"
"6.3....\n"
".512...\n"
"....34.\n") == 0);
free(board108874916);
board108874916 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, -1, 9) == 0 );


gamma_delete(board);

    return 0;
}
