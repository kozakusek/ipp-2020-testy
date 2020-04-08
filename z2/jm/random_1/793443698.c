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
uuid: 793443698
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 8, 6);
assert( board != NULL );


assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_golden_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_golden_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 71 );


char* board143828714 = gamma_board(board);
assert( board143828714 != NULL );
assert( strcmp(board143828714, 
"..........\n"
"..........\n"
"..2.4..68.\n"
"......6.4.\n"
"..........\n"
".....7....\n"
".....7....\n"
"7.........\n") == 0);
free(board143828714);
board143828714 = NULL;
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 8, 3) == 1 );


char* board753521838 = gamma_board(board);
assert( board753521838 != NULL );
assert( strcmp(board753521838, 
"..........\n"
".........2\n"
"7.2.45.68.\n"
"...3..6.4.\n"
"....8...3.\n"
".....7....\n"
".....7....\n"
"7......4..\n") == 0);
free(board753521838);
board753521838 = NULL;
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );


gamma_delete(board);

    return 0;
}
