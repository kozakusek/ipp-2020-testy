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
uuid: 555990732
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );


char* board954014250 = gamma_board(board);
assert( board954014250 != NULL );
assert( strcmp(board954014250, 
".1.3....\n"
".1......\n"
"..2.3...\n"
"........\n"
"..1.....\n"
"........\n"
"........\n"
".2......\n") == 0);
free(board954014250);
board954014250 = NULL;
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board428738946 = gamma_board(board);
assert( board428738946 != NULL );
assert( strcmp(board428738946, 
".1.3....\n"
".1......\n"
".1233...\n"
".....2..\n"
".21....3\n"
".....3..\n"
"...1.3..\n"
".2....11\n") == 0);
free(board428738946);
board428738946 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board882731801 = gamma_board(board);
assert( board882731801 != NULL );
assert( strcmp(board882731801, 
".1.3....\n"
".1......\n"
".1233...\n"
".....2..\n"
".21....3\n"
".....3..\n"
"...1.3..\n"
".2....11\n") == 0);
free(board882731801);
board882731801 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
