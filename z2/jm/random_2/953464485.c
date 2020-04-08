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
uuid: 953464485
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 14, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_golden_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_free_fields(board, 11) == 21 );
assert( gamma_move(board, 12, 0, 3) == 1 );
assert( gamma_move(board, 13, 3, 2) == 1 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 14, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 2, 5) == 0 );
assert( gamma_busy_fields(board, 14) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );


char* board418767838 = gamma_board(board);
assert( board418767838 != NULL );
assert( strcmp(board418767838, 
"61312.4\n"
"19..58\n"
"123.10.6\n"
"93113.4\n"
"7544113\n"
".2.10..\n") == 0);
free(board418767838);
board418767838 = NULL;
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_move(board, 13, 3, 4) == 1 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_free_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 4, 0) == 0 );


char* board452595030 = gamma_board(board);
assert( board452595030 != NULL );
assert( strcmp(board452595030, 
"6131234\n"
"1911358\n"
"123.10.6\n"
"93113.4\n"
"7544113\n"
"62810.12\n") == 0);
free(board452595030);
board452595030 = NULL;
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 13, 4, 0) == 1 );
assert( gamma_move(board, 14, 2, 4) == 0 );
assert( gamma_move(board, 14, 1, 4) == 0 );
assert( gamma_free_fields(board, 14) == 3 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 3 );


char* board618803140 = gamma_board(board);
assert( board618803140 != NULL );
assert( strcmp(board618803140, 
"6131234\n"
"1911358\n"
"123.10.6\n"
"93113.4\n"
"7544113\n"
"628101312\n") == 0);
free(board618803140);
board618803140 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 14, 3, 4) == 0 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_free_fields(board, 14) == 2 );


char* board186474646 = gamma_board(board);
assert( board186474646 != NULL );
assert( strcmp(board186474646, 
"6131234\n"
"1911358\n"
"123310.6\n"
"93113.4\n"
"7544113\n"
"628101312\n") == 0);
free(board186474646);
board186474646 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
