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
uuid: 751731543
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );


char* board352408273 = gamma_board(board);
assert( board352408273 != NULL );
assert( strcmp(board352408273, 
"1..4..\n"
"......\n"
"1.....\n"
"...1..\n"
"3.....\n"
"..2...\n"
"..3...\n") == 0);
free(board352408273);
board352408273 = NULL;
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );


char* board104435544 = gamma_board(board);
assert( board104435544 != NULL );
assert( strcmp(board104435544, 
"1..4..\n"
"2.4...\n"
"1.....\n"
".1.1..\n"
"3.....\n"
"..2...\n"
"..3...\n") == 0);
free(board104435544);
board104435544 = NULL;
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board890272814 = gamma_board(board);
assert( board890272814 != NULL );
assert( strcmp(board890272814, 
"1..44.\n"
"2.4...\n"
"1...3.\n"
".1.1..\n"
"3.....\n"
".32..4\n"
"..31..\n") == 0);
free(board890272814);
board890272814 = NULL;
assert( gamma_move(board, 2, 5, 2) == 1 );


char* board339126582 = gamma_board(board);
assert( board339126582 != NULL );
assert( strcmp(board339126582, 
"1..44.\n"
"2.4...\n"
"1...3.\n"
".1.1..\n"
"3....2\n"
".32..4\n"
"..31..\n") == 0);
free(board339126582);
board339126582 = NULL;
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
