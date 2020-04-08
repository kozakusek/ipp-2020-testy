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
uuid: 382084649
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board860875545 = gamma_board(board);
assert( board860875545 != NULL );
assert( strcmp(board860875545, 
".......\n"
"3......\n"
".......\n"
".......\n"
".......\n"
"3......\n"
".......\n"
".1....1\n"
".....3.\n"
".......\n") == 0);
free(board860875545);
board860875545 = NULL;
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 65 );


char* board746003274 = gamma_board(board);
assert( board746003274 != NULL );
assert( strcmp(board746003274, 
".......\n"
"3......\n"
".......\n"
".......\n"
".......\n"
"3......\n"
".......\n"
".1....1\n"
".....3.\n"
".......\n") == 0);
free(board746003274);
board746003274 = NULL;
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );


char* board440384107 = gamma_board(board);
assert( board440384107 != NULL );
assert( strcmp(board440384107, 
".......\n"
"3......\n"
".......\n"
".......\n"
".......\n"
"3......\n"
"....2..\n"
".1....1\n"
".3...3.\n"
".......\n") == 0);
free(board440384107);
board440384107 = NULL;
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, -1, -1) == 0 );


char* board862915718 = gamma_board(board);
assert( board862915718 != NULL );
assert( strcmp(board862915718, 
".......\n"
"3.2....\n"
".......\n"
"1.2...1\n"
".......\n"
"3......\n"
"....2..\n"
".1....1\n"
".3...3.\n"
".......\n") == 0);
free(board862915718);
board862915718 = NULL;
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );


char* board259885597 = gamma_board(board);
assert( board259885597 != NULL );
assert( strcmp(board259885597, 
"..323..\n"
"3.2....\n"
".2.....\n"
"1.2...1\n"
".1.....\n"
"31....2\n"
"....2..\n"
".1....1\n"
".3...3.\n"
"..3....\n") == 0);
free(board259885597);
board259885597 = NULL;
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );


gamma_delete(board);

    return 0;
}
