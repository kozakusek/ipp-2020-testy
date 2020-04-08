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
uuid: 433466760
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_free_fields(board, 6) == 72 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board243062075 = gamma_board(board);
assert( board243062075 != NULL );
assert( strcmp(board243062075, 
"..6.....\n"
".5......\n"
".....2..\n"
"........\n"
"........\n"
"3......5\n"
"...7.4..\n"
"......2.\n"
"7......4\n"
"........\n") == 0);
free(board243062075);
board243062075 = NULL;
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_free_fields(board, 7) == 69 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board626225535 = gamma_board(board);
assert( board626225535 != NULL );
assert( strcmp(board626225535, 
"..6.....\n"
".5......\n"
".....2..\n"
"..5.....\n"
"........\n"
"3......5\n"
"...7.4..\n"
"......2.\n"
"7......4\n"
"........\n") == 0);
free(board626225535);
board626225535 = NULL;
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_golden_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );


gamma_delete(board);

    return 0;
}
