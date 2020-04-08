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
uuid: 156867243
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );


char* board703292325 = gamma_board(board);
assert( board703292325 != NULL );
assert( strcmp(board703292325, 
"23.......\n"
".........\n"
"......1..\n"
"...4.....\n"
".........\n"
".........\n"
"...6.....\n") == 0);
free(board703292325);
board703292325 = NULL;
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_golden_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );


char* board120624544 = gamma_board(board);
assert( board120624544 != NULL );
assert( strcmp(board120624544, 
"23.......\n"
"...4.....\n"
"......1..\n"
"1..4.....\n"
".........\n"
".........\n"
"2.33.....\n") == 0);
free(board120624544);
board120624544 = NULL;
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 9, 0) == 0 );


gamma_delete(board);

    return 0;
}
