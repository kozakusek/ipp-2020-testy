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
uuid: 323665287
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_golden_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 43 );


char* board787803055 = gamma_board(board);
assert( board787803055 != NULL );
assert( strcmp(board787803055, 
".5..6.....\n"
"5.....25..\n"
".12626...5\n"
"..3..5.32.\n"
"...61...5.\n"
"..1..4.62.\n"
"34..32.1..\n") == 0);
free(board787803055);
board787803055 = NULL;
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );


char* board173952892 = gamma_board(board);
assert( board173952892 != NULL );
assert( strcmp(board173952892, 
".5..6.....\n"
"5....625..\n"
".12626...5\n"
"..3..5.32.\n"
"...61...5.\n"
"..11.4.62.\n"
"34..32.1.4\n") == 0);
free(board173952892);
board173952892 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 5, 7) == 0 );


gamma_delete(board);

    return 0;
}
