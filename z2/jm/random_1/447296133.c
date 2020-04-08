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
uuid: 447296133
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 7) == 0 );


char* board815195602 = gamma_board(board);
assert( board815195602 != NULL );
assert( strcmp(board815195602, 
"4....1...\n"
".3.......\n"
".........\n"
"....4....\n"
".........\n"
".......3.\n"
"....1....\n"
"1........\n") == 0);
free(board815195602);
board815195602 = NULL;
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 5, 0) == 1 );


char* board849829839 = gamma_board(board);
assert( board849829839 != NULL );
assert( strcmp(board849829839, 
"4....1...\n"
".3.......\n"
".........\n"
"....4....\n"
".........\n"
"...3...3.\n"
"....1....\n"
"1..3.2...\n") == 0);
free(board849829839);
board849829839 = NULL;
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );


char* board602250590 = gamma_board(board);
assert( board602250590 != NULL );
assert( strcmp(board602250590, 
"4....13..\n"
".3.......\n"
".........\n"
"..4.4....\n"
".........\n"
"...3...3.\n"
"....1....\n"
"1..332...\n") == 0);
free(board602250590);
board602250590 = NULL;
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_golden_move(board, 1, 0, 8) == 0 );


char* board343604961 = gamma_board(board);
assert( board343604961 != NULL );
assert( strcmp(board343604961, 
"4....13..\n"
".3.......\n"
".........\n"
"..4.4....\n"
".........\n"
"...3...3.\n"
"....1....\n"
"1..332..1\n") == 0);
free(board343604961);
board343604961 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );


char* board660163011 = gamma_board(board);
assert( board660163011 != NULL );
assert( strcmp(board660163011, 
"4....13..\n"
".3......2\n"
"..2......\n"
".14.4....\n"
".........\n"
"...3...3.\n"
"1...1...2\n"
"1..332..1\n") == 0);
free(board660163011);
board660163011 = NULL;
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 15 );


char* board954845703 = gamma_board(board);
assert( board954845703 != NULL );
assert( strcmp(board954845703, 
"4....13..\n"
".3.....42\n"
"..2......\n"
".14.4....\n"
".........\n"
"...3...3.\n"
"1...1...2\n"
"1..332..1\n") == 0);
free(board954845703);
board954845703 = NULL;
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
