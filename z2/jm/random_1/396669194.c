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
uuid: 396669194
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );


char* board693116022 = gamma_board(board);
assert( board693116022 != NULL );
assert( strcmp(board693116022, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".....1...\n"
".........\n"
".........\n") == 0);
free(board693116022);
board693116022 = NULL;
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board667201703 = gamma_board(board);
assert( board667201703 != NULL );
assert( strcmp(board667201703, 
"........5\n"
"...1....5\n"
".2.71....\n"
"...3...6.\n"
".........\n"
"..6.41...\n"
"......32.\n"
".........\n") == 0);
free(board667201703);
board667201703 = NULL;
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_golden_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
