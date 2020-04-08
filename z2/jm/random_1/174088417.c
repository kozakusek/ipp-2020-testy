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
uuid: 174088417
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board594534542 = gamma_board(board);
assert( board594534542 != NULL );
assert( strcmp(board594534542, 
".......4\n"
"........\n"
"........\n"
"2...1...\n"
"5....6..\n"
"........\n"
"...83...\n") == 0);
free(board594534542);
board594534542 = NULL;
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );


char* board240436387 = gamma_board(board);
assert( board240436387 != NULL );
assert( strcmp(board240436387, 
".......4\n"
"..5.....\n"
"...3....\n"
"2...1...\n"
"5....6..\n"
".......2\n"
"...83...\n") == 0);
free(board240436387);
board240436387 = NULL;
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board441873209 = gamma_board(board);
assert( board441873209 != NULL );
assert( strcmp(board441873209, 
"..1..7.4\n"
"..53.4..\n"
"...3.5..\n"
"2..71..2\n"
"5....6..\n"
"7...5..2\n"
"..2838..\n") == 0);
free(board441873209);
board441873209 = NULL;
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_golden_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );


gamma_delete(board);

    return 0;
}
