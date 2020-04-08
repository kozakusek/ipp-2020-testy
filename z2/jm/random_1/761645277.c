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
uuid: 761645277
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 9, -1) == 0 );


char* board546018957 = gamma_board(board);
assert( board546018957 != NULL );
assert( strcmp(board546018957, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board546018957);
board546018957 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );


char* board759358220 = gamma_board(board);
assert( board759358220 != NULL );
assert( strcmp(board759358220, 
"..........\n"
"..3.......\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"2.........\n") == 0);
free(board759358220);
board759358220 = NULL;
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_free_fields(board, 7) == 65 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 9, 5) == 1 );


char* board738915895 = gamma_board(board);
assert( board738915895 != NULL );
assert( strcmp(board738915895, 
"..55.....6\n"
"..3..4...2\n"
".....1..7.\n"
"....4....7\n"
"..........\n"
"3..71.....\n"
"4.1..6.562\n") == 0);
free(board738915895);
board738915895 = NULL;
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_golden_move(board, 7, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 0, 5) == 1 );


char* board985747633 = gamma_board(board);
assert( board985747633 != NULL );
assert( strcmp(board985747633, 
"4.55.....6\n"
"3.3..4...2\n"
".....1..7.\n"
"....4...77\n"
"..........\n"
"3..71.....\n"
"4.1..6.562\n") == 0);
free(board985747633);
board985747633 = NULL;
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_golden_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );


char* board469489070 = gamma_board(board);
assert( board469489070 != NULL );
assert( strcmp(board469489070, 
"4.55...4.6\n"
"3.3..4...2\n"
"....11..7.\n"
"....4...77\n"
"....3.4...\n"
"3..71.....\n"
"4.1..6.562\n") == 0);
free(board469489070);
board469489070 = NULL;


gamma_delete(board);

    return 0;
}
