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
uuid: 290509239
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 4, 14, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_free_fields(board, 10) == 49 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_move(board, 11, 13, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 11, 3, 2) == 1 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 12, 2, 2) == 1 );
assert( gamma_move(board, 13, 2, 10) == 0 );
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 11, 0) == 1 );
assert( gamma_free_fields(board, 14) == 35 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_golden_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_golden_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 0, 13) == 0 );
assert( gamma_free_fields(board, 13) == 31 );
assert( gamma_move(board, 14, 10, 3) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );


char* board734585120 = gamma_board(board);
assert( board734585120 != NULL );
assert( strcmp(board734585120, 
".8.213.48414...\n"
"..1211111...27.7.\n"
".6611.59.28...11\n"
"38.3....541014..\n") == 0);
free(board734585120);
board734585120 = NULL;
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 13, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_move(board, 12, 2, 10) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 0, 4) == 0 );
assert( gamma_move(board, 14, 6, 3) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 13, 11, 2) == 1 );
assert( gamma_move(board, 13, 13, 0) == 1 );
assert( gamma_move(board, 14, 2, 0) == 1 );
assert( gamma_move(board, 14, 7, 1) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );


char* board713477007 = gamma_board(board);
assert( board713477007 != NULL );
assert( strcmp(board713477007, 
"28.9131448414...\n"
".1112111116.1271378\n"
"116611.591428.9.11\n"
"38143..7.541014.13\n") == 0);
free(board713477007);
board713477007 = NULL;
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 13, 3, 2) == 0 );
assert( gamma_move(board, 14, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_golden_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 3, 11) == 0 );
assert( gamma_move(board, 12, 3, 11) == 0 );
assert( gamma_golden_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 13, 3, 13) == 0 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 14, 11, 0) == 0 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_golden_move(board, 11, 0, 13) == 0 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_move(board, 14, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
