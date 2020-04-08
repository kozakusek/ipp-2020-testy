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
uuid: 557201045
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 14, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board302049033 = gamma_board(board);
assert( board302049033 != NULL );
assert( strcmp(board302049033, 
".....\n"
"..7..\n"
".....\n"
"2....\n"
".....\n"
"..5..\n"
".....\n"
".....\n"
".....\n"
".....\n"
"..6..\n"
"1..3.\n"
"....2\n"
".....\n") == 0);
free(board302049033);
board302049033 = NULL;
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );


char* board514972582 = gamma_board(board);
assert( board514972582 != NULL );
assert( strcmp(board514972582, 
"1....\n"
"..7..\n"
".....\n"
"2....\n"
".....\n"
"..5..\n"
".....\n"
"...5.\n"
".....\n"
".....\n"
"..6..\n"
"1..3.\n"
"....2\n"
".....\n") == 0);
free(board514972582);
board514972582 = NULL;
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );


gamma_delete(board);

    return 0;
}
