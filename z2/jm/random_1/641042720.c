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
uuid: 641042720
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );


char* board348905039 = gamma_board(board);
assert( board348905039 != NULL );
assert( strcmp(board348905039, 
"...1.....\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board348905039);
board348905039 = NULL;
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 1, 8, 5) == 1 );


char* board584765685 = gamma_board(board);
assert( board584765685 != NULL );
assert( strcmp(board584765685, 
"..11....1\n"
"..1......\n"
"3........\n"
"..3.14...\n"
".........\n"
".........\n") == 0);
free(board584765685);
board584765685 = NULL;
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );


char* board831761843 = gamma_board(board);
assert( board831761843 != NULL );
assert( strcmp(board831761843, 
"..11....1\n"
".31.4.4..\n"
"3...1....\n"
"..3.14...\n"
".....2...\n"
"..33.....\n") == 0);
free(board831761843);
board831761843 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );


gamma_delete(board);

    return 0;
}
