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
uuid: 119960684
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_free_fields(board, 1) == 95 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );


char* board937949673 = gamma_board(board);
assert( board937949673 != NULL );
assert( strcmp(board937949673, 
".1.1..4...\n"
"...25.5..3\n"
"...3.64...\n"
"....34....\n"
"552.....1.\n"
".....2....\n"
".........3\n"
".....6.2..\n"
"..........\n"
"2........3\n") == 0);
free(board937949673);
board937949673 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 6) == 74 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, -1) == 0 );


char* board984235392 = gamma_board(board);
assert( board984235392 != NULL );
assert( strcmp(board984235392, 
".1.1..4...\n"
"...25.5..3\n"
".6.3.64...\n"
"....34....\n"
"552.....1.\n"
".....2....\n"
".........3\n"
"5....652.1\n"
"..........\n"
"2........3\n") == 0);
free(board984235392);
board984235392 = NULL;
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board508734507 = gamma_board(board);
assert( board508734507 != NULL );
assert( strcmp(board508734507, 
".1.11.4...\n"
"...25.5..3\n"
"16.3.64.5.\n"
"....34....\n"
"552.6...1.\n"
"..6..2....\n"
".6.......3\n"
"5....652.1\n"
"..........\n"
"2.1......3\n") == 0);
free(board508734507);
board508734507 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );


gamma_delete(board);

    return 0;
}
