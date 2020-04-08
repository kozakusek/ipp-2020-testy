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
uuid: 495544231
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 15, 15, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, -1, 2) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 12, -1, 4) == 0 );
assert( gamma_golden_move(board, 12, 3, 0) == 0 );


char* board228442030 = gamma_board(board);
assert( board228442030 != NULL );
assert( strcmp(board228442030, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"..\n"
"..\n") == 0);
free(board228442030);
board228442030 = NULL;
assert( gamma_move(board, 14, 1, 14) == 1 );
assert( gamma_move(board, 15, -1, 10) == 0 );
assert( gamma_busy_fields(board, 15) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );


char* board856007937 = gamma_board(board);
assert( board856007937 != NULL );
assert( strcmp(board856007937, 
".14\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"..\n"
"..\n") == 0);
free(board856007937);
board856007937 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board563151193 = gamma_board(board);
assert( board563151193 != NULL );
assert( strcmp(board563151193, 
".14\n"
"..\n"
"..\n"
"3.\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"..\n"
"2.\n") == 0);
free(board563151193);
board563151193 = NULL;
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, -1, 2) == 0 );
assert( gamma_move(board, 10, -1, 8) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_move(board, 12, -1, 14) == 0 );


char* board229829385 = gamma_board(board);
assert( board229829385 != NULL );
assert( strcmp(board229829385, 
".14\n"
"..\n"
"..\n"
"3.\n"
".4\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"..\n"
"2.\n") == 0);
free(board229829385);
board229829385 = NULL;
assert( gamma_free_fields(board, 13) == 25 );
assert( gamma_move(board, 14, -1, 9) == 0 );
assert( gamma_move(board, 15, 1, 1) == 1 );


gamma_delete(board);

    return 0;
}
