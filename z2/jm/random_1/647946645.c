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
uuid: 647946645
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 5, 5);
assert( board != NULL );




char* board868321678 = gamma_board(board);
assert( board868321678 != NULL );
assert( strcmp(board868321678, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board868321678);
board868321678 = NULL;
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board233479958 = gamma_board(board);
assert( board233479958 != NULL );
assert( strcmp(board233479958, 
".2.......\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board233479958);
board233479958 = NULL;
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 7) == 1 );


char* board507580265 = gamma_board(board);
assert( board507580265 != NULL );
assert( strcmp(board507580265, 
".25.1.2..\n"
"4........\n"
"4........\n"
".54.5.5..\n"
"....4..2.\n"
"3..3....5\n"
"2........\n"
".3.1.14..\n") == 0);
free(board507580265);
board507580265 = NULL;
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 52 );


char* board922074744 = gamma_board(board);
assert( board922074744 != NULL );
assert( strcmp(board922074744, 
".25.1.2..\n"
"4........\n"
"4........\n"
".54.5.5..\n"
"....4..2.\n"
"3..3....5\n"
"2........\n"
".3.1.14..\n") == 0);
free(board922074744);
board922074744 = NULL;
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
