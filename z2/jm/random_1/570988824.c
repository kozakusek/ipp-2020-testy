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
uuid: 570988824
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board601656183 = gamma_board(board);
assert( board601656183 != NULL );
assert( strcmp(board601656183, 
"..2...5.\n"
".3.3....\n"
"28......\n"
".74.....\n"
"........\n"
"........\n"
"....8...\n"
"...2....\n"
".....1..\n"
".6......\n") == 0);
free(board601656183);
board601656183 = NULL;
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );


char* board745475519 = gamma_board(board);
assert( board745475519 != NULL );
assert( strcmp(board745475519, 
".22...58\n"
"53.3..5.\n"
"2831...5\n"
"874.....\n"
"6...7.7.\n"
"..2..6.4\n"
"....8...\n"
"...2....\n"
"...1.1..\n"
".6..4...\n") == 0);
free(board745475519);
board745475519 = NULL;
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 2, 3) == 1 );


char* board816131013 = gamma_board(board);
assert( board816131013 != NULL );
assert( strcmp(board816131013, 
".22...58\n"
"53.3..5.\n"
"2831...5\n"
"874.....\n"
"6...7.7.\n"
"..2..6.4\n"
"..6.8...\n"
"...2....\n"
"...1.1..\n"
".6..4...\n") == 0);
free(board816131013);
board816131013 = NULL;
assert( gamma_golden_possible(board, 7) == 1 );


gamma_delete(board);

    return 0;
}
