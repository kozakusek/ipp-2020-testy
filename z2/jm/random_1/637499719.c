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
uuid: 637499719
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 4, 13, 11);
assert( board != NULL );


assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 14, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_move(board, 11, 10, 3) == 1 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 16, -1) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 12, 3) == 1 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_move(board, 12, 16, -1) == 0 );
assert( gamma_move(board, 13, 7, 0) == 1 );
assert( gamma_free_fields(board, 13) == 51 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 14, -1) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 16, 1) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 12, 12, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );


char* board943811755 = gamma_board(board);
assert( board943811755 != NULL );
assert( strcmp(board943811755, 
"..3....6..11.8...\n"
".729..11..92....1\n"
".11..............\n"
".3.....1310.4.....\n") == 0);
free(board943811755);
board943811755 = NULL;
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );


char* board193988895 = gamma_board(board);
assert( board193988895 != NULL );
assert( strcmp(board193988895, 
"..3....6..11.8...\n"
".729..11..92....1\n"
".11..............\n"
".3.....1310.4.....\n") == 0);
free(board193988895);
board193988895 = NULL;
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_free_fields(board, 9) == 47 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 12, 9, 4) == 0 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 2, 16, -1) == 0 );


char* board408550465 = gamma_board(board);
assert( board408550465 != NULL );
assert( strcmp(board408550465, 
"..3....6..11.8...\n"
".729..11..92...81\n"
".11....10.........\n"
".3.....1310.4.....\n") == 0);
free(board408550465);
board408550465 = NULL;
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 14, 0) == 1 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_move(board, 12, 2, 14) == 0 );


gamma_delete(board);

    return 0;
}
