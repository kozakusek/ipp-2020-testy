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
uuid: 707073895
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );


char* board474599725 = gamma_board(board);
assert( board474599725 != NULL );
assert( strcmp(board474599725, 
".........1\n"
"......3...\n"
"..........\n"
"..........\n"
"..........\n"
".....1....\n") == 0);
free(board474599725);
board474599725 = NULL;
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );


char* board440903944 = gamma_board(board);
assert( board440903944 != NULL );
assert( strcmp(board440903944, 
"..6......1\n"
".....33...\n"
"..........\n"
"..........\n"
"..........\n"
"..5..1....\n") == 0);
free(board440903944);
board440903944 = NULL;
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, -1, 0) == 0 );


char* board135118491 = gamma_board(board);
assert( board135118491 != NULL );
assert( strcmp(board135118491, 
"..6......1\n"
".....33...\n"
".54......1\n"
"..........\n"
"..........\n"
"..5..1....\n") == 0);
free(board135118491);
board135118491 = NULL;
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );


gamma_delete(board);

    return 0;
}
