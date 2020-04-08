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
uuid: 787937110
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 2, 6);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 53 );


char* board869537440 = gamma_board(board);
assert( board869537440 != NULL );
assert( strcmp(board869537440, 
"......1\n"
".1....2\n"
".......\n"
"....1.2\n"
"2......\n"
".......\n"
".......\n"
"..11..1\n"
"..1....\n") == 0);
free(board869537440);
board869537440 = NULL;
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );


char* board188970301 = gamma_board(board);
assert( board188970301 != NULL );
assert( strcmp(board188970301, 
"......1\n"
".11...2\n"
"...11..\n"
"...21.2\n"
"2......\n"
"..2....\n"
".......\n"
"..11..1\n"
"..1..2.\n") == 0);
free(board188970301);
board188970301 = NULL;
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );


gamma_delete(board);

    return 0;
}
