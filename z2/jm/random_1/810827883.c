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
uuid: 810827883
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 8, 4);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );


char* board574964196 = gamma_board(board);
assert( board574964196 != NULL );
assert( strcmp(board574964196, 
".36......\n"
"......3..\n"
".........\n"
"......1.5\n"
"4........\n"
"......8..\n") == 0);
free(board574964196);
board574964196 = NULL;
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 1) == 1 );


char* board687024075 = gamma_board(board);
assert( board687024075 != NULL );
assert( strcmp(board687024075, 
".365.....\n"
"......3..\n"
"....1..3.\n"
"......1.5\n"
"4...2....\n"
"......86.\n") == 0);
free(board687024075);
board687024075 = NULL;
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );


char* board214142371 = gamma_board(board);
assert( board214142371 != NULL );
assert( strcmp(board214142371, 
".365.....\n"
"......3..\n"
"....1..3.\n"
"......1.5\n"
"4...2....\n"
"......86.\n") == 0);
free(board214142371);
board214142371 = NULL;
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_golden_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_golden_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );


char* board106089806 = gamma_board(board);
assert( board106089806 != NULL );
assert( strcmp(board106089806, 
".365...2.\n"
".....53..\n"
"..6.1..38\n"
".14...1.5\n"
"4...21...\n"
"..8...86.\n") == 0);
free(board106089806);
board106089806 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );


gamma_delete(board);

    return 0;
}
