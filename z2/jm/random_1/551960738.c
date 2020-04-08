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
uuid: 551960738
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 15, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_free_fields(board, 7) == 57 );


char* board661993715 = gamma_board(board);
assert( board661993715 != NULL );
assert( strcmp(board661993715, 
"....\n"
"5...\n"
".3..\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"..7.\n"
"....\n"
"....\n") == 0);
free(board661993715);
board661993715 = NULL;
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );


char* board842957998 = gamma_board(board);
assert( board842957998 != NULL );
assert( strcmp(board842957998, 
"....\n"
"5...\n"
".3.5\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"...3\n"
"9...\n"
"....\n"
"....\n"
"..67\n"
"4...\n"
"....\n") == 0);
free(board842957998);
board842957998 = NULL;
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, -1, 13) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 7, -1, 11) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_free_fields(board, 9) == 44 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board464114731 = gamma_board(board);
assert( board464114731 != NULL );
assert( strcmp(board464114731, 
".4..\n"
"517.\n"
".3.5\n"
"....\n"
"2..5\n"
"2...\n"
"....\n"
".5..\n"
"..33\n"
"9...\n"
".1..\n"
"..3.\n"
"9.67\n"
"4...\n"
"....\n") == 0);
free(board464114731);
board464114731 = NULL;
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, -1, 15) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );


gamma_delete(board);

    return 0;
}
