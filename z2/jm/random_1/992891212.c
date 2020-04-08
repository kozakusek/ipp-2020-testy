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
uuid: 992891212
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_free_fields(board, 2) == 59 );


char* board773764888 = gamma_board(board);
assert( board773764888 != NULL );
assert( strcmp(board773764888, 
".........\n"
"........1\n"
"1........\n"
"...4..4..\n"
".........\n"
".........\n"
".........\n") == 0);
free(board773764888);
board773764888 = NULL;
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );


char* board788875495 = gamma_board(board);
assert( board788875495 != NULL );
assert( strcmp(board788875495, 
".........\n"
".......11\n"
"1.......4\n"
"...4..4.6\n"
".........\n"
".........\n"
".........\n") == 0);
free(board788875495);
board788875495 = NULL;
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );


char* board444390774 = gamma_board(board);
assert( board444390774 != NULL );
assert( strcmp(board444390774, 
".........\n"
".......11\n"
"1.......4\n"
"...4..4.6\n"
".........\n"
"....3..2.\n"
".........\n") == 0);
free(board444390774);
board444390774 = NULL;
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );


char* board206502957 = gamma_board(board);
assert( board206502957 != NULL );
assert( strcmp(board206502957, 
"1........\n"
"....3..11\n"
"1....6..4\n"
"...4..4.6\n"
".4..3....\n"
"55.43..2.\n"
"..5.351..\n") == 0);
free(board206502957);
board206502957 = NULL;
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board383402924 = gamma_board(board);
assert( board383402924 != NULL );
assert( strcmp(board383402924, 
"1........\n"
"....3..11\n"
"1....6..4\n"
"6..4..4.6\n"
".4..3....\n"
"55.43..2.\n"
"..5.351..\n") == 0);
free(board383402924);
board383402924 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 4, 6) == 1 );


gamma_delete(board);

    return 0;
}
