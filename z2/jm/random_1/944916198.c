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
uuid: 944916198
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board965742474 = gamma_board(board);
assert( board965742474 != NULL );
assert( strcmp(board965742474, 
"......\n"
"......\n"
"......\n"
"......\n"
".3....\n"
"2.....\n"
"......\n"
"....4.\n"
"......\n"
"...4..\n") == 0);
free(board965742474);
board965742474 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board855853261 = gamma_board(board);
assert( board855853261 != NULL );
assert( strcmp(board855853261, 
"......\n"
"..1.3.\n"
"1.4.2.\n"
"3..12.\n"
".11..1\n"
"2.....\n"
"....43\n"
"1..34.\n"
"3.2..3\n"
"1..4..\n") == 0);
free(board855853261);
board855853261 = NULL;
assert( gamma_move(board, 4, 6, 3) == 0 );


gamma_delete(board);

    return 0;
}
