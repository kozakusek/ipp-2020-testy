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
uuid: 743514361
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_free_fields(board, 7) == 96 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );


char* board831404671 = gamma_board(board);
assert( board831404671 != NULL );
assert( strcmp(board831404671, 
"..........\n"
"..........\n"
"..........\n"
"........2.\n"
"..........\n"
"..........\n"
"...5......\n"
"..........\n"
"..........\n"
"2...6.7...\n") == 0);
free(board831404671);
board831404671 = NULL;
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_golden_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 5) == 92 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board546031971 = gamma_board(board);
assert( board546031971 != NULL );
assert( strcmp(board546031971, 
"..........\n"
"..........\n"
"..2...6...\n"
"........2.\n"
"..........\n"
"..........\n"
"...5......\n"
"........1.\n"
".4........\n"
"2...6.75..\n") == 0);
free(board546031971);
board546031971 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );


char* board612036550 = gamma_board(board);
assert( board612036550 != NULL );
assert( strcmp(board612036550, 
"..........\n"
"..........\n"
"..2...6...\n"
"........2.\n"
"..........\n"
"..........\n"
"...5......\n"
"........1.\n"
".4........\n"
"2...6.75..\n") == 0);
free(board612036550);
board612036550 = NULL;
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_golden_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_free_fields(board, 5) == 80 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 74 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board166806498 = gamma_board(board);
assert( board166806498 != NULL );
assert( strcmp(board166806498, 
"5...2..3..\n"
".....75...\n"
"..26..6...\n"
"....31..2.\n"
"6...4.....\n"
"..........\n"
"4..5...1..\n"
"......4.1.\n"
".4..7.....\n"
"2...6.7521\n") == 0);
free(board166806498);
board166806498 = NULL;
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_golden_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 10) == 0 );


gamma_delete(board);

    return 0;
}
