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
uuid: 900644552
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );


char* board650497649 = gamma_board(board);
assert( board650497649 != NULL );
assert( strcmp(board650497649, 
"...4....\n"
".......6\n"
"........\n"
"........\n"
".7......\n"
"........\n") == 0);
free(board650497649);
board650497649 = NULL;
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_golden_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );


char* board589999305 = gamma_board(board);
assert( board589999305 != NULL );
assert( strcmp(board589999305, 
"...4....\n"
".......6\n"
"1..6...8\n"
"........\n"
".7....7.\n"
"........\n") == 0);
free(board589999305);
board589999305 = NULL;
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board252037435 = gamma_board(board);
assert( board252037435 != NULL );
assert( strcmp(board252037435, 
"...4....\n"
"..5....6\n"
"11.6...8\n"
"..2.1...\n"
".7....7.\n"
"........\n") == 0);
free(board252037435);
board252037435 = NULL;
assert( gamma_move(board, 2, 5, 1) == 1 );


char* board708158171 = gamma_board(board);
assert( board708158171 != NULL );
assert( strcmp(board708158171, 
"...4....\n"
"..5....6\n"
"11.6...8\n"
"..2.1...\n"
".7...27.\n"
"........\n") == 0);
free(board708158171);
board708158171 = NULL;
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );


gamma_delete(board);

    return 0;
}
