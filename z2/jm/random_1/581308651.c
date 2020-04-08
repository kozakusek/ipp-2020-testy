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
uuid: 581308651
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );


char* board666486542 = gamma_board(board);
assert( board666486542 != NULL );
assert( strcmp(board666486542, 
".5....6...\n"
"....1...2.\n"
"..........\n"
"....3..14.\n"
"..........\n"
"..2.......\n") == 0);
free(board666486542);
board666486542 = NULL;
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board594278558 = gamma_board(board);
assert( board594278558 != NULL );
assert( strcmp(board594278558, 
".5.2..6...\n"
".2..1...2.\n"
"..........\n"
"....31.145\n"
"..........\n"
"..2.....6.\n") == 0);
free(board594278558);
board594278558 = NULL;
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board542082277 = gamma_board(board);
assert( board542082277 != NULL );
assert( strcmp(board542082277, 
"35.2..6...\n"
".2..1...2.\n"
"..........\n"
"....31.145\n"
"........2.\n"
"..2...3.6.\n") == 0);
free(board542082277);
board542082277 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 6, 3, 2) == 1 );


char* board584083035 = gamma_board(board);
assert( board584083035 != NULL );
assert( strcmp(board584083035, 
"35.2..6..6\n"
"42..1...2.\n"
".3.5......\n"
"...6313145\n"
"........2.\n"
"..2...3.6.\n") == 0);
free(board584083035);
board584083035 = NULL;


gamma_delete(board);

    return 0;
}
