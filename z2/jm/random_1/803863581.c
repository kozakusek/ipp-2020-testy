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
uuid: 803863581
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 4) == 0 );


char* board309426291 = gamma_board(board);
assert( board309426291 != NULL );
assert( strcmp(board309426291, 
"..3...\n"
"2.....\n"
"......\n"
"......\n"
".2...1\n"
"......\n"
".2....\n") == 0);
free(board309426291);
board309426291 = NULL;
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
