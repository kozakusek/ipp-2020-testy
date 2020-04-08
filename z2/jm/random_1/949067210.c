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
uuid: 949067210
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board831410782 = gamma_board(board);
assert( board831410782 != NULL );
assert( strcmp(board831410782, 
"....14....\n"
"..........\n"
"..2....5.5\n"
"4..14.5...\n"
"..1.....3.\n"
"....4.13.2\n"
"41..2.....\n") == 0);
free(board831410782);
board831410782 = NULL;
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board839866809 = gamma_board(board);
assert( board839866809 != NULL );
assert( strcmp(board839866809, 
"....14....\n"
"..........\n"
"..2....5.5\n"
"4..14.5...\n"
"..1.....3.\n"
"...44.13.2\n"
"41.42.1..5\n") == 0);
free(board839866809);
board839866809 = NULL;
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board618430024 = gamma_board(board);
assert( board618430024 != NULL );
assert( strcmp(board618430024, 
"....14....\n"
"..........\n"
"..2....5.5\n"
"4..14.5..3\n"
"..1.....3.\n"
"...44.13.2\n"
"41.42.1..5\n") == 0);
free(board618430024);
board618430024 = NULL;
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );


gamma_delete(board);

    return 0;
}
