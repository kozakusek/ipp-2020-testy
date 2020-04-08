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
uuid: 444606266
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 11, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );


char* board817198981 = gamma_board(board);
assert( board817198981 != NULL );
assert( strcmp(board817198981, 
"...\n"
"...\n"
"...\n"
".2.\n"
"..1\n"
"...\n"
"..2\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board817198981);
board817198981 = NULL;
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board339160675 = gamma_board(board);
assert( board339160675 != NULL );
assert( strcmp(board339160675, 
"...\n"
"...\n"
"...\n"
".2.\n"
"..1\n"
"...\n"
"..2\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board339160675);
board339160675 = NULL;
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board649751533 = gamma_board(board);
assert( board649751533 != NULL );
assert( strcmp(board649751533, 
"...\n"
"...\n"
"...\n"
".2.\n"
"..1\n"
"...\n"
"3.2\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board649751533);
board649751533 = NULL;
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board975986637 = gamma_board(board);
assert( board975986637 != NULL );
assert( strcmp(board975986637, 
"...\n"
"...\n"
"...\n"
".2.\n"
"..1\n"
"...\n"
"3.2\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board975986637);
board975986637 = NULL;
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
