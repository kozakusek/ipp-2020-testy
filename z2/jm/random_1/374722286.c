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
uuid: 374722286
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 4, 2, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_golden_move(board, 2, 0, 10) == 0 );


char* board464302422 = gamma_board(board);
assert( board464302422 != NULL );
assert( strcmp(board464302422, 
"............\n"
".....1......\n"
"............\n"
"............\n") == 0);
free(board464302422);
board464302422 = NULL;
assert( gamma_move(board, 1, 10, 0) == 1 );


char* board719018027 = gamma_board(board);
assert( board719018027 != NULL );
assert( strcmp(board719018027, 
"............\n"
".....1......\n"
"............\n"
"..........1.\n") == 0);
free(board719018027);
board719018027 = NULL;
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board438095824 = gamma_board(board);
assert( board438095824 != NULL );
assert( strcmp(board438095824, 
"............\n"
"...2.1......\n"
"......1....1\n"
"......2..21.\n") == 0);
free(board438095824);
board438095824 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );


char* board706392516 = gamma_board(board);
assert( board706392516 != NULL );
assert( strcmp(board706392516, 
"............\n"
"...2.1......\n"
"......1....1\n"
"......2..21.\n") == 0);
free(board706392516);
board706392516 = NULL;
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );


char* board681545002 = gamma_board(board);
assert( board681545002 != NULL );
assert( strcmp(board681545002, 
"............\n"
"...2.1......\n"
"......1....1\n"
"....2.2..21.\n") == 0);
free(board681545002);
board681545002 = NULL;
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );


gamma_delete(board);

    return 0;
}
