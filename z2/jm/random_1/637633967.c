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
uuid: 637633967
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 4, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );


char* board201100190 = gamma_board(board);
assert( board201100190 != NULL );
assert( strcmp(board201100190, 
"1..........\n"
"...........\n"
"...........\n"
"..4........\n") == 0);
free(board201100190);
board201100190 = NULL;
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_golden_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 29 );


char* board704351833 = gamma_board(board);
assert( board704351833 != NULL );
assert( strcmp(board704351833, 
"1....4762..\n"
".17......51\n"
"........4..\n"
"1.456...3..\n") == 0);
free(board704351833);
board704351833 = NULL;
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );


gamma_delete(board);

    return 0;
}
