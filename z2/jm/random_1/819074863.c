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
uuid: 819074863
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );


char* board241570733 = gamma_board(board);
assert( board241570733 != NULL );
assert( strcmp(board241570733, 
".......3\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".7......\n"
".....41.\n"
"......5.\n") == 0);
free(board241570733);
board241570733 = NULL;
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );


char* board399599015 = gamma_board(board);
assert( board399599015 != NULL );
assert( strcmp(board399599015, 
".......3\n"
"........\n"
".5....3.\n"
".....1..\n"
"........\n"
"......6.\n"
".7......\n"
".....41.\n"
"......52\n") == 0);
free(board399599015);
board399599015 = NULL;
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_move(board, 4, 1, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_golden_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, -1, 9) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );


gamma_delete(board);

    return 0;
}
