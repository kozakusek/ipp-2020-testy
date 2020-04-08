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
uuid: 570767902
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 10, -1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 3) == 1 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 46 );


char* board273565158 = gamma_board(board);
assert( board273565158 != NULL );
assert( strcmp(board273565158, 
"7.5.56..3.\n"
"7.7....1..\n"
".6.......4\n"
"..6...4..3\n"
"..565....3\n"
"2..2.1...4\n"
"21.....4..\n") == 0);
free(board273565158);
board273565158 = NULL;
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 46 );


gamma_delete(board);

    return 0;
}
