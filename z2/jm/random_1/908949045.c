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
uuid: 908949045
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );


char* board693371680 = gamma_board(board);
assert( board693371680 != NULL );
assert( strcmp(board693371680, 
"..12.3...1\n"
".2.33..2..\n"
"..3...12..\n"
"..2..1.332\n"
".331......\n"
"......1...\n"
"..2...3...\n") == 0);
free(board693371680);
board693371680 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );


char* board652427971 = gamma_board(board);
assert( board652427971 != NULL );
assert( strcmp(board652427971, 
"..12.3...1\n"
".2.33..2..\n"
"..3...12..\n"
"..2..11332\n"
".331.1....\n"
"......1...\n"
"..2...3.3.\n") == 0);
free(board652427971);
board652427971 = NULL;
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
