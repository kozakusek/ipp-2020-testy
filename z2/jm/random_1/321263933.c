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
uuid: 321263933
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );


char* board141177083 = gamma_board(board);
assert( board141177083 != NULL );
assert( strcmp(board141177083, 
"..3....3.\n"
"...31....\n"
"1..1..33.\n"
"...1...3.\n"
".......3.\n"
"3.2...1..\n"
".....2.1.\n"
"........1\n") == 0);
free(board141177083);
board141177083 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );


char* board701119884 = gamma_board(board);
assert( board701119884 != NULL );
assert( strcmp(board701119884, 
".13....3.\n"
"3..31....\n"
"1..1.2333\n"
".1.1...32\n"
".......3.\n"
"322...1..\n"
".2...2.1.\n"
"........1\n") == 0);
free(board701119884);
board701119884 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );


gamma_delete(board);

    return 0;
}
