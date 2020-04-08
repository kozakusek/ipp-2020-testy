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
uuid: 844506189
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 1, -1) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 3, 0) == 1 );


char* board882083011 = gamma_board(board);
assert( board882083011 != NULL );
assert( strcmp(board882083011, 
".3....66..\n"
"...8......\n"
"..7...465.\n"
"..4127.1.2\n"
".4..1..3..\n"
"...7....44\n") == 0);
free(board882083011);
board882083011 = NULL;
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 8, 0, -1) == 0 );


char* board323563053 = gamma_board(board);
assert( board323563053 != NULL );
assert( strcmp(board323563053, 
".3..5866..\n"
".4.8......\n"
"..7...465.\n"
"..4127.172\n"
".4..1..3..\n"
"...7....44\n") == 0);
free(board323563053);
board323563053 = NULL;
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_golden_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
