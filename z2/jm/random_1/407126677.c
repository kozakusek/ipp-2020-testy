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
uuid: 407126677
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );


char* board873949817 = gamma_board(board);
assert( board873949817 != NULL );
assert( strcmp(board873949817, 
"...1....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"....3...\n") == 0);
free(board873949817);
board873949817 = NULL;
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );


char* board786468034 = gamma_board(board);
assert( board786468034 != NULL );
assert( strcmp(board786468034, 
".5.13.3.\n"
"......5.\n"
"..2.....\n"
"..4....2\n"
"2..14445\n"
"......25\n"
"5.5...31\n"
"33..3...\n") == 0);
free(board786468034);
board786468034 = NULL;
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );


char* board454474054 = gamma_board(board);
assert( board454474054 != NULL );
assert( strcmp(board454474054, 
".5.13.3.\n"
"......5.\n"
"..2.....\n"
"..4....2\n"
"2..14445\n"
"......25\n"
"5.5...31\n"
"33..3...\n") == 0);
free(board454474054);
board454474054 = NULL;
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );


gamma_delete(board);

    return 0;
}
