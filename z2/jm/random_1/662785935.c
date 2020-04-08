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
uuid: 662785935
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 7, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_free_fields(board, 3) == 98 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_free_fields(board, 5) == 93 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 87 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 13, 0) == 1 );


char* board211434849 = gamma_board(board);
assert( board211434849 != NULL );
assert( strcmp(board211434849, 
".....3......4..\n"
"....2...5..5...\n"
"......2..3....5\n"
".2.....3.......\n"
"..2.......43.11\n"
"..1...3........\n"
"4..........2.4.\n") == 0);
free(board211434849);
board211434849 = NULL;
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );


char* board242652916 = gamma_board(board);
assert( board242652916 != NULL );
assert( strcmp(board242652916, 
".....3......43.\n"
"....2.4.5..5...\n"
"......2..3....5\n"
".2.....3.5.....\n"
"..2.......43.11\n"
"..12..3...2....\n"
"4..........2.4.\n") == 0);
free(board242652916);
board242652916 = NULL;
assert( gamma_move(board, 4, 4, 3) == 1 );


char* board824651913 = gamma_board(board);
assert( board824651913 != NULL );
assert( strcmp(board824651913, 
".....3......43.\n"
"....2.4.5..5...\n"
"......2..3....5\n"
".2..4..3.5.....\n"
"..2.......43.11\n"
"..12..3...2....\n"
"4..........2.4.\n") == 0);
free(board824651913);
board824651913 = NULL;
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 13, -1) == 0 );
assert( gamma_golden_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board322047296 = gamma_board(board);
assert( board322047296 != NULL );
assert( strcmp(board322047296, 
".5...3.1.2.1435\n"
"5...2.4.5..551.\n"
".....22..3....5\n"
"12..4.33.5....1\n"
"..2.5.....43.11\n"
"..12..3...2....\n"
"4..........2.4.\n") == 0);
free(board322047296);
board322047296 = NULL;
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );


gamma_delete(board);

    return 0;
}
