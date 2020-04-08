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
uuid: 137974410
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 7, 5);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_free_fields(board, 7) == 87 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );


char* board847065483 = gamma_board(board);
assert( board847065483 != NULL );
assert( strcmp(board847065483, 
"..........\n"
"..6.......\n"
".....2...2\n"
".5........\n"
"......64..\n"
"..........\n"
"......4...\n"
"......1...\n"
"3..34...5.\n") == 0);
free(board847065483);
board847065483 = NULL;
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );


char* board728522264 = gamma_board(board);
assert( board728522264 != NULL );
assert( strcmp(board728522264, 
"..........\n"
"1.6.....7.\n"
"...7.2...2\n"
"354.......\n"
"5.....64..\n"
"....1....2\n"
"2.....4...\n"
".....61...\n"
"35.34...55\n") == 0);
free(board728522264);
board728522264 = NULL;
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board947834662 = gamma_board(board);
assert( board947834662 != NULL );
assert( strcmp(board947834662, 
"6...7.....\n"
"1.6....57.\n"
".5.7.2...2\n"
"354.4.....\n"
"5...2.64..\n"
"....1....2\n"
"2.....4...\n"
"....461...\n"
"35.34...55\n") == 0);
free(board947834662);
board947834662 = NULL;
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );


gamma_delete(board);

    return 0;
}
