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
uuid: 997055974
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );


char* board114564040 = gamma_board(board);
assert( board114564040 != NULL );
assert( strcmp(board114564040, 
".......43.\n"
"........5.\n"
".....2....\n"
".5.4...3..\n"
"25...33..4\n"
"....3..1..\n"
"..1..45...\n"
"..135..21.\n") == 0);
free(board114564040);
board114564040 = NULL;
assert( gamma_golden_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board647825463 = gamma_board(board);
assert( board647825463 != NULL );
assert( strcmp(board647825463, 
".......535\n"
"....2...54\n"
"...24234..\n"
".5.4...3..\n"
"2512.33..4\n"
".5..3..1..\n"
".51..453.2\n"
"..1351.21.\n") == 0);
free(board647825463);
board647825463 = NULL;
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );


gamma_delete(board);

    return 0;
}
