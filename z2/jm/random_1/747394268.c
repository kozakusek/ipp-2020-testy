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
uuid: 747394268
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_golden_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );


char* board718370040 = gamma_board(board);
assert( board718370040 != NULL );
assert( strcmp(board718370040, 
"5....1.\n"
"..5.1..\n"
"......3\n"
"..4....\n"
".......\n"
".......\n"
"..3....\n"
".......\n"
"4....4.\n") == 0);
free(board718370040);
board718370040 = NULL;
assert( gamma_move(board, 1, 5, 2) == 1 );


char* board979278544 = gamma_board(board);
assert( board979278544 != NULL );
assert( strcmp(board979278544, 
"5....1.\n"
"..5.1..\n"
"......3\n"
"..4....\n"
".......\n"
".......\n"
"..3..1.\n"
".......\n"
"4....4.\n") == 0);
free(board979278544);
board979278544 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );


char* board556912637 = gamma_board(board);
assert( board556912637 != NULL );
assert( strcmp(board556912637, 
"55...1.\n"
"..5.1..\n"
"......3\n"
"..4..25\n"
"..2.5..\n"
".......\n"
"2.3..1.\n"
".1.3...\n"
"4...14.\n") == 0);
free(board556912637);
board556912637 = NULL;
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );


char* board533231464 = gamma_board(board);
assert( board533231464 != NULL );
assert( strcmp(board533231464, 
"55...1.\n"
"..5.1..\n"
"......3\n"
"..4..25\n"
"2.235..\n"
".......\n"
"2.3..1.\n"
".1.3...\n"
"4...14.\n") == 0);
free(board533231464);
board533231464 = NULL;
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
