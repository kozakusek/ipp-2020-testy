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
uuid: 843438952
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 6, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board562724783 = gamma_board(board);
assert( board562724783 != NULL );
assert( strcmp(board562724783, 
"...........\n"
"...........\n"
".........1.\n"
"...........\n"
"...........\n"
"....2......\n") == 0);
free(board562724783);
board562724783 = NULL;
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );


char* board579221869 = gamma_board(board);
assert( board579221869 != NULL );
assert( strcmp(board579221869, 
"...........\n"
"...........\n"
"....32...1.\n"
"...........\n"
".....2..1..\n"
"....2.5....\n") == 0);
free(board579221869);
board579221869 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board428263004 = gamma_board(board);
assert( board428263004 != NULL );
assert( strcmp(board428263004, 
"115.....21.\n"
"...........\n"
".3..32...1.\n"
"3....1...4.\n"
"...4.2..1..\n"
"...22.5....\n") == 0);
free(board428263004);
board428263004 = NULL;
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );


gamma_delete(board);

    return 0;
}
