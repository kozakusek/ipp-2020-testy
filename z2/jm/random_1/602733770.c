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
uuid: 602733770
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 67 );


char* board321950680 = gamma_board(board);
assert( board321950680 != NULL );
assert( strcmp(board321950680, 
"..3......\n"
"1.....3..\n"
".........\n"
".......2.\n"
".....1...\n"
".........\n"
".........\n"
".........\n") == 0);
free(board321950680);
board321950680 = NULL;
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board293028174 = gamma_board(board);
assert( board293028174 != NULL );
assert( strcmp(board293028174, 
"..3......\n"
"1.....3..\n"
"1...3....\n"
".3....32.\n"
"3....1...\n"
".1.2.....\n"
".....2...\n"
".......2.\n") == 0);
free(board293028174);
board293028174 = NULL;
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 3, 9, 5) == 0 );


gamma_delete(board);

    return 0;
}
