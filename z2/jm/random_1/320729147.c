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
uuid: 320729147
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );


char* board910575678 = gamma_board(board);
assert( board910575678 != NULL );
assert( strcmp(board910575678, 
"....1....\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board910575678);
board910575678 = NULL;
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );


char* board218918062 = gamma_board(board);
assert( board218918062 != NULL );
assert( strcmp(board218918062, 
".1..1....\n"
".......23\n"
"...3.....\n"
"2......3.\n"
".........\n"
"1.......3\n"
"...22....\n"
"1....2...\n") == 0);
free(board218918062);
board218918062 = NULL;
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );


char* board316479189 = gamma_board(board);
assert( board316479189 != NULL );
assert( strcmp(board316479189, 
".1..12...\n"
".....1.23\n"
"3..3.2...\n"
"2......3.\n"
"3...1....\n"
"1.1.....3\n"
"...22....\n"
"1.2.12.3.\n") == 0);
free(board316479189);
board316479189 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board682679911 = gamma_board(board);
assert( board682679911 != NULL );
assert( strcmp(board682679911, 
".1..12...\n"
"3....1.23\n"
"3..3.2...\n"
"2..3.2.3.\n"
"3...3....\n"
"1.1.....3\n"
"..122.2.1\n"
"1.2.1223.\n") == 0);
free(board682679911);
board682679911 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
