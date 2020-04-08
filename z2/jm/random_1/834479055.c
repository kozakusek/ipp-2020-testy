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
uuid: 834479055
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 8, 8);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 44 );


char* board990051128 = gamma_board(board);
assert( board990051128 != NULL );
assert( strcmp(board990051128, 
"..2.......\n"
"..57238.8.\n"
".1.6..52..\n"
".71....17.\n"
".8.2..83..\n"
".38...4...\n"
"3.3...26..\n") == 0);
free(board990051128);
board990051128 = NULL;
assert( gamma_move(board, 5, 0, 5) == 1 );


char* board549248187 = gamma_board(board);
assert( board549248187 != NULL );
assert( strcmp(board549248187, 
"..2.......\n"
"5.57238.8.\n"
".1.6..52..\n"
".71....17.\n"
".8.2..83..\n"
".38...4...\n"
"3.3...26..\n") == 0);
free(board549248187);
board549248187 = NULL;
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
