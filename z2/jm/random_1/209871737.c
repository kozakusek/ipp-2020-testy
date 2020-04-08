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
uuid: 209871737
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );


char* board855203862 = gamma_board(board);
assert( board855203862 != NULL );
assert( strcmp(board855203862, 
".......\n"
".......\n"
"..1....\n"
"3......\n"
".......\n"
".......\n") == 0);
free(board855203862);
board855203862 = NULL;
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board334864179 = gamma_board(board);
assert( board334864179 != NULL );
assert( strcmp(board334864179, 
".......\n"
".....7.\n"
"..1....\n"
"3......\n"
".......\n"
".6....5\n") == 0);
free(board334864179);
board334864179 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_golden_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );


gamma_delete(board);

    return 0;
}
