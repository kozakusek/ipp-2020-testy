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
uuid: 922327002
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );


char* board300424522 = gamma_board(board);
assert( board300424522 != NULL );
assert( strcmp(board300424522, 
"......1..\n"
"1...4...2\n"
".......12\n"
".........\n"
".........\n"
"2....3.31\n"
".1.......\n") == 0);
free(board300424522);
board300424522 = NULL;
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 0, 7) == 0 );


char* board221030913 = gamma_board(board);
assert( board221030913 != NULL );
assert( strcmp(board221030913, 
"......12.\n"
"1...4...2\n"
".......12\n"
"...3.....\n"
".........\n"
"2.2..3.31\n"
"31.......\n") == 0);
free(board221030913);
board221030913 = NULL;
assert( gamma_move(board, 4, 4, 1) == 1 );


char* board315233318 = gamma_board(board);
assert( board315233318 != NULL );
assert( strcmp(board315233318, 
"......12.\n"
"1...4...2\n"
".......12\n"
"...3.....\n"
".........\n"
"2.2.43.31\n"
"31.......\n") == 0);
free(board315233318);
board315233318 = NULL;
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


gamma_delete(board);

    return 0;
}
