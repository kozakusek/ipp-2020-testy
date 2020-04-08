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
uuid: 799726720
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );


char* board646089821 = gamma_board(board);
assert( board646089821 != NULL );
assert( strcmp(board646089821, 
"3.....\n"
"......\n"
"......\n"
".6....\n"
"4..45.\n"
"..76..\n"
"1.....\n") == 0);
free(board646089821);
board646089821 = NULL;
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );


char* board933114233 = gamma_board(board);
assert( board933114233 != NULL );
assert( strcmp(board933114233, 
"3...3.\n"
"......\n"
".....4\n"
".6....\n"
"4..45.\n"
"..761.\n"
"1.....\n") == 0);
free(board933114233);
board933114233 = NULL;
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );


char* board301830756 = gamma_board(board);
assert( board301830756 != NULL );
assert( strcmp(board301830756, 
"3...3.\n"
"....6.\n"
"..6..4\n"
".6..7.\n"
"4..45.\n"
"..761.\n"
"6.....\n") == 0);
free(board301830756);
board301830756 = NULL;
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );


gamma_delete(board);

    return 0;
}
