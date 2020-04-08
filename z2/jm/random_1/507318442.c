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
uuid: 507318442
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 11, 9, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 9, -1, 11) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );


char* board289837314 = gamma_board(board);
assert( board289837314 != NULL );
assert( strcmp(board289837314, 
"...\n"
"..7\n"
"...\n"
"...\n"
".3.\n"
"...\n"
"...\n"
".2.\n"
"...\n"
"...\n"
"...\n") == 0);
free(board289837314);
board289837314 = NULL;
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_free_fields(board, 3) == 27 );


char* board388875680 = gamma_board(board);
assert( board388875680 != NULL );
assert( strcmp(board388875680, 
"3..\n"
"..7\n"
"...\n"
"...\n"
".3.\n"
"..6\n"
"...\n"
".2.\n"
".8.\n"
"...\n"
"...\n") == 0);
free(board388875680);
board388875680 = NULL;
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 0, 10) == 0 );


char* board374675569 = gamma_board(board);
assert( board374675569 != NULL );
assert( strcmp(board374675569, 
"3..\n"
"..7\n"
"...\n"
"...\n"
"63.\n"
"..6\n"
"...\n"
".2.\n"
".8.\n"
"...\n"
"...\n") == 0);
free(board374675569);
board374675569 = NULL;
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board396451921 = gamma_board(board);
assert( board396451921 != NULL );
assert( strcmp(board396451921, 
"3..\n"
"..7\n"
"...\n"
"...\n"
"63.\n"
"..6\n"
"...\n"
".2.\n"
".8.\n"
"...\n"
"...\n") == 0);
free(board396451921);
board396451921 = NULL;
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_move(board, 9, -1, 5) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );


gamma_delete(board);

    return 0;
}
