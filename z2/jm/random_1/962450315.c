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
uuid: 962450315
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );


char* board969974112 = gamma_board(board);
assert( board969974112 != NULL );
assert( strcmp(board969974112, 
".........\n"
".......32\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board969974112);
board969974112 = NULL;
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );


char* board899604074 = gamma_board(board);
assert( board899604074 != NULL );
assert( strcmp(board899604074, 
"........2\n"
".......32\n"
".........\n"
"1........\n"
"........3\n"
".........\n") == 0);
free(board899604074);
board899604074 = NULL;
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );


char* board421717152 = gamma_board(board);
assert( board421717152 != NULL );
assert( strcmp(board421717152, 
"........2\n"
".......32\n"
".74.5..46\n"
"1........\n"
"........3\n"
"......1..\n") == 0);
free(board421717152);
board421717152 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );


gamma_delete(board);

    return 0;
}
