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
uuid: 777952765
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );


char* board939345350 = gamma_board(board);
assert( board939345350 != NULL );
assert( strcmp(board939345350, 
".5.....\n"
"1......\n"
".4.....\n"
"..7....\n"
".......\n"
"2......\n"
"....1..\n") == 0);
free(board939345350);
board939345350 = NULL;
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );


char* board249263199 = gamma_board(board);
assert( board249263199 != NULL );
assert( strcmp(board249263199, 
".5..5..\n"
"1....6.\n"
"244..3.\n"
"..7...2\n"
".1...3.\n"
"2.....4\n"
"....1..\n") == 0);
free(board249263199);
board249263199 = NULL;
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 1, 6, 1) == 1 );


char* board695957462 = gamma_board(board);
assert( board695957462 != NULL );
assert( strcmp(board695957462, 
".5..5..\n"
"1....6.\n"
"244..3.\n"
"..7...2\n"
".1...3.\n"
"2.....1\n"
"....1..\n") == 0);
free(board695957462);
board695957462 = NULL;
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );


gamma_delete(board);

    return 0;
}
