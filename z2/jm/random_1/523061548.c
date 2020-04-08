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
uuid: 523061548
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 7, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_golden_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );


char* board633487940 = gamma_board(board);
assert( board633487940 != NULL );
assert( strcmp(board633487940, 
"............\n"
"7.8.4..2....\n"
".....5...5..\n"
".....55.....\n"
"....1...8.6.\n"
"..2....4.4.2\n"
"16....17....\n") == 0);
free(board633487940);
board633487940 = NULL;
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );


char* board874859135 = gamma_board(board);
assert( board874859135 != NULL );
assert( strcmp(board874859135, 
".......66...\n"
"7.8.4..2.8.8\n"
"..1.15...5..\n"
"..7.355.....\n"
"....1...8.6.\n"
".42..5.4.442\n"
"16....17....\n") == 0);
free(board874859135);
board874859135 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 47 );


gamma_delete(board);

    return 0;
}
