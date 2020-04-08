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
uuid: 639801155
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 4, 15, 12);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_move(board, 12, 0, 3) == 1 );
assert( gamma_free_fields(board, 12) == 24 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 1) == 1 );
assert( gamma_move(board, 14, 1, 8) == 0 );
assert( gamma_move(board, 14, 1, 1) == 1 );
assert( gamma_move(board, 15, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_move(board, 14, 0, 7) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_free_fields(board, 14) == 17 );
assert( gamma_golden_possible(board, 14) == 1 );


char* board365036913 = gamma_board(board);
assert( board365036913 != NULL );
assert( strcmp(board365036913, 
"12111525114.3\n"
"..6..94..\n"
"6149.138...\n"
"3.7.....7\n") == 0);
free(board365036913);
board365036913 = NULL;
assert( gamma_move(board, 15, 0, 4) == 0 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_golden_move(board, 15, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_free_fields(board, 9) == 13 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 14, 2, 4) == 0 );
assert( gamma_move(board, 14, 0, 2) == 1 );
assert( gamma_move(board, 15, 1, 6) == 0 );
assert( gamma_move(board, 15, 5, 0) == 0 );


char* board882024268 = gamma_board(board);
assert( board882024268 != NULL );
assert( strcmp(board882024268, 
"12111525114.3\n"
"14.6..94..\n"
"6149.138.7.\n"
"3.7366..7\n") == 0);
free(board882024268);
board882024268 = NULL;
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_free_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_move(board, 13, 6, 3) == 0 );


char* board239056442 = gamma_board(board);
assert( board239056442 != NULL );
assert( strcmp(board239056442, 
"1211152511493\n"
"14.6..94..\n"
"61494138.7.\n"
"3.7366..7\n") == 0);
free(board239056442);
board239056442 = NULL;
assert( gamma_move(board, 14, 1, 8) == 0 );
assert( gamma_move(board, 14, 4, 0) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_free_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_free_fields(board, 10) == 9 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
