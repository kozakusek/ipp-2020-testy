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
uuid: 566207746
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 5, 3, 0) == 1 );


char* board113771264 = gamma_board(board);
assert( board113771264 != NULL );
assert( strcmp(board113771264, 
"..........\n"
".........3\n"
"..........\n"
"........5.\n"
"..........\n"
"...4.....1\n"
"...5.4....\n") == 0);
free(board113771264);
board113771264 = NULL;
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_golden_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );


char* board963623001 = gamma_board(board);
assert( board963623001 != NULL );
assert( strcmp(board963623001, 
".6...1....\n"
"....2....3\n"
".5.......2\n"
"..5..46.56\n"
"...4.2....\n"
"...455...1\n"
"...5.4....\n") == 0);
free(board963623001);
board963623001 = NULL;
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );


gamma_delete(board);

    return 0;
}
