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
uuid: 485724746
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_free_fields(board, 3) == 50 );


char* board569368497 = gamma_board(board);
assert( board569368497 != NULL );
assert( strcmp(board569368497, 
"....1..\n"
".......\n"
".......\n"
"1.2....\n"
".......\n"
".5.....\n"
".......\n"
"...82..\n") == 0);
free(board569368497);
board569368497 = NULL;
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_free_fields(board, 6) == 50 );


char* board181220389 = gamma_board(board);
assert( board181220389 != NULL );
assert( strcmp(board181220389, 
"....1..\n"
".......\n"
".......\n"
"1.2....\n"
".......\n"
".5.....\n"
".......\n"
"...82..\n") == 0);
free(board181220389);
board181220389 = NULL;
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, -1, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );


char* board433297786 = gamma_board(board);
assert( board433297786 != NULL );
assert( strcmp(board433297786, 
"....18.\n"
"......6\n"
"..7...3\n"
"1.22.3.\n"
"..5....\n"
".5.14..\n"
".......\n"
"...82..\n") == 0);
free(board433297786);
board433297786 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board293556187 = gamma_board(board);
assert( board293556187 != NULL );
assert( strcmp(board293556187, 
"....18.\n"
"......6\n"
"..7...3\n"
"1.22.3.\n"
"..5....\n"
".5.14..\n"
".......\n"
"...82..\n") == 0);
free(board293556187);
board293556187 = NULL;
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );


char* board133716746 = gamma_board(board);
assert( board133716746 != NULL );
assert( strcmp(board133716746, 
"....18.\n"
"4.....6\n"
"..7...3\n"
"1.22.3.\n"
"..5....\n"
".5.14..\n"
".......\n"
"...82..\n") == 0);
free(board133716746);
board133716746 = NULL;
assert( gamma_move(board, 8, -1, 2) == 0 );
assert( gamma_golden_move(board, 8, 5, 2) == 0 );


gamma_delete(board);

    return 0;
}
