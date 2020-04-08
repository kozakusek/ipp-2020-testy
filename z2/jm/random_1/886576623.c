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
uuid: 886576623
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 8) == 0 );


char* board463694623 = gamma_board(board);
assert( board463694623 != NULL );
assert( strcmp(board463694623, 
"...31.....\n"
"....3.....\n"
"..........\n"
".3.....3..\n"
"....1....1\n"
"..22.....2\n"
"....2.....\n"
"..........\n"
".2........\n"
"..1.......\n") == 0);
free(board463694623);
board463694623 = NULL;
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board638771187 = gamma_board(board);
assert( board638771187 != NULL );
assert( strcmp(board638771187, 
"...31.....\n"
"....3.....\n"
"..........\n"
".3.....3..\n"
"....1....1\n"
"..22.....2\n"
"....2.....\n"
"..........\n"
".2........\n"
"..1.......\n") == 0);
free(board638771187);
board638771187 = NULL;
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );


char* board173888374 = gamma_board(board);
assert( board173888374 != NULL );
assert( strcmp(board173888374, 
"...31.....\n"
"....3.....\n"
"..........\n"
".3.....3..\n"
"....1....1\n"
"..22.....2\n"
"....2.....\n"
"....2.....\n"
".2........\n"
"..1.......\n") == 0);
free(board173888374);
board173888374 = NULL;
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board722447416 = gamma_board(board);
assert( board722447416 != NULL );
assert( strcmp(board722447416, 
"...31.....\n"
"....3.....\n"
"..........\n"
".3.....3..\n"
"....1....1\n"
"..22.....2\n"
"....2.....\n"
"....2.....\n"
".2........\n"
"..1.......\n") == 0);
free(board722447416);
board722447416 = NULL;
assert( gamma_move(board, 1, 1, 8) == 0 );


gamma_delete(board);

    return 0;
}
