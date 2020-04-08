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
uuid: 574297044
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 12, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );


char* board911262378 = gamma_board(board);
assert( board911262378 != NULL );
assert( strcmp(board911262378, 
".......\n"
".......\n"
".......\n"
"......8\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"...1...\n"
".......\n"
"......7\n") == 0);
free(board911262378);
board911262378 = NULL;
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, -1, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );


char* board186342602 = gamma_board(board);
assert( board186342602 != NULL );
assert( strcmp(board186342602, 
".......\n"
".......\n"
".......\n"
"....5.8\n"
".......\n"
"..6....\n"
"..7....\n"
"...2..1\n"
".8.....\n"
"...1...\n"
"......2\n"
"2.....7\n") == 0);
free(board186342602);
board186342602 = NULL;
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );


char* board567118435 = gamma_board(board);
assert( board567118435 != NULL );
assert( strcmp(board567118435, 
".......\n"
".......\n"
"....5..\n"
"....5.8\n"
".......\n"
"..6....\n"
"..7....\n"
"..22..1\n"
".8.7..8\n"
"...1...\n"
"......2\n"
"2.....7\n") == 0);
free(board567118435);
board567118435 = NULL;
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 69 );


char* board994394343 = gamma_board(board);
assert( board994394343 != NULL );
assert( strcmp(board994394343, 
".......\n"
".......\n"
"....5..\n"
"....5.8\n"
".......\n"
"..6....\n"
"..7....\n"
"..22..1\n"
".8.7..8\n"
"...1...\n"
"......2\n"
"2.....7\n") == 0);
free(board994394343);
board994394343 = NULL;
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_golden_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_golden_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 56 );


gamma_delete(board);

    return 0;
}
