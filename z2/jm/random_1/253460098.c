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
uuid: 253460098
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );


char* board859178910 = gamma_board(board);
assert( board859178910 != NULL );
assert( strcmp(board859178910, 
"......2.\n"
"1......1\n"
"........\n"
"2.....1.\n"
"........\n"
"......3.\n"
"......2.\n"
"....2...\n") == 0);
free(board859178910);
board859178910 = NULL;
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board651409355 = gamma_board(board);
assert( board651409355 != NULL );
assert( strcmp(board651409355, 
".13.3.2.\n"
"1.2..3.1\n"
"2.2.2...\n"
"21.3.112\n"
".13..3.1\n"
"..2...3.\n"
"......2.\n"
".1..2.1.\n") == 0);
free(board651409355);
board651409355 = NULL;
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );


char* board952845528 = gamma_board(board);
assert( board952845528 != NULL );
assert( strcmp(board952845528, 
".13.3.2.\n"
"1.2..3.1\n"
"2.2.2...\n"
"21.3.112\n"
".13..3.1\n"
"..2...3.\n"
"......2.\n"
".1..2.1.\n") == 0);
free(board952845528);
board952845528 = NULL;
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );


char* board296994100 = gamma_board(board);
assert( board296994100 != NULL );
assert( strcmp(board296994100, 
"313.3.2.\n"
"1.2..3.1\n"
"2.2.2...\n"
"21.3.112\n"
".13..3.1\n"
"..2...3.\n"
"......2.\n"
".1..2.1.\n") == 0);
free(board296994100);
board296994100 = NULL;
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );


gamma_delete(board);

    return 0;
}
