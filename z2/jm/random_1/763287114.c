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
uuid: 763287114
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );


char* board163934044 = gamma_board(board);
assert( board163934044 != NULL );
assert( strcmp(board163934044, 
"......\n"
"......\n"
"....2.\n"
"......\n"
"....5.\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board163934044);
board163934044 = NULL;
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );


char* board645162698 = gamma_board(board);
assert( board645162698 != NULL );
assert( strcmp(board645162698, 
"..4...\n"
"......\n"
"....2.\n"
"......\n"
"....5.\n"
"....3.\n"
"......\n"
"......\n"
".1....\n") == 0);
free(board645162698);
board645162698 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board866922782 = gamma_board(board);
assert( board866922782 != NULL );
assert( strcmp(board866922782, 
"..4...\n"
"......\n"
"....2.\n"
"2.....\n"
"....53\n"
"....3.\n"
"......\n"
"......\n"
".1....\n") == 0);
free(board866922782);
board866922782 = NULL;
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );


char* board387400411 = gamma_board(board);
assert( board387400411 != NULL );
assert( strcmp(board387400411, 
"..4...\n"
"......\n"
".2..2.\n"
"2.....\n"
"....53\n"
"....3.\n"
"....55\n"
"......\n"
".1....\n") == 0);
free(board387400411);
board387400411 = NULL;
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );


char* board703119222 = gamma_board(board);
assert( board703119222 != NULL );
assert( strcmp(board703119222, 
"..4...\n"
"......\n"
".2..2.\n"
"2.....\n"
".2..53\n"
"....3.\n"
"....55\n"
"......\n"
".1....\n") == 0);
free(board703119222);
board703119222 = NULL;
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 6) == 38 );


gamma_delete(board);

    return 0;
}
