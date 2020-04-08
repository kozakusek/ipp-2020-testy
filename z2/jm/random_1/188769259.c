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
uuid: 188769259
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 5, 12, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );


char* board959764689 = gamma_board(board);
assert( board959764689 != NULL );
assert( strcmp(board959764689, 
".\n"
".\n"
"2\n"
"4\n"
".\n") == 0);
free(board959764689);
board959764689 = NULL;
assert( gamma_move(board, 5, -1, 5) == 0 );


char* board631404933 = gamma_board(board);
assert( board631404933 != NULL );
assert( strcmp(board631404933, 
".\n"
".\n"
"2\n"
"4\n"
".\n") == 0);
free(board631404933);
board631404933 = NULL;
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
