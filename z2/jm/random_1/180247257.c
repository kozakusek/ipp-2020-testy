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
uuid: 180247257
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 3, 15, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 17, -1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 15, 1) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, -1, 0) == 0 );
assert( gamma_move(board, 12, 14, 0) == 1 );
assert( gamma_free_fields(board, 14) == 52 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 19, 3) == 0 );


char* board953644992 = gamma_board(board);
assert( board953644992 != NULL );
assert( strcmp(board953644992, 
".4.........1.......\n"
"....7..2.......65..\n"
"...1..........12....\n") == 0);
free(board953644992);
board953644992 = NULL;
assert( gamma_move(board, 9, 17, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, 7, 0) == 1 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_move(board, 14, 11, 3) == 0 );
assert( gamma_move(board, 15, 13, 1) == 1 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_golden_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 4, 16, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 12, -1) == 0 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_free_fields(board, 10) == 42 );
assert( gamma_move(board, 11, 12, 3) == 0 );
assert( gamma_move(board, 12, 0, -1) == 0 );
assert( gamma_move(board, 13, 14, 2) == 1 );
assert( gamma_move(board, 14, 6, 2) == 0 );
assert( gamma_move(board, 15, 14, -1) == 0 );
assert( gamma_busy_fields(board, 15) == 1 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 18, 2) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 2) == 1 );


char* board729866829 = gamma_board(board);
assert( board729866829 != NULL );
assert( strcmp(board729866829, 
".4....8....1.713...4\n"
"....7..2..10..15.65..\n"
"12..1...11......12.49.\n") == 0);
free(board729866829);
board729866829 = NULL;
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 10, -1) == 0 );
assert( gamma_move(board, 10, 13, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 19, 2) == 0 );
assert( gamma_free_fields(board, 13) == 38 );
assert( gamma_move(board, 2, 18, -1) == 0 );
assert( gamma_move(board, 3, 18, 1) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 16, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 15, 3) == 0 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 11, 0, 2) == 1 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_free_fields(board, 12) == 32 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 14, 1) == 1 );
assert( gamma_move(board, 14, -1, -1) == 0 );
assert( gamma_move(board, 15, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_golden_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_free_fields(board, 12) == 30 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_move(board, 15, -1, 3) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_golden_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 9, 11, -1) == 0 );
assert( gamma_golden_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 18, -1) == 0 );
assert( gamma_move(board, 12, 10, 3) == 0 );
assert( gamma_move(board, 13, 5, 1) == 1 );
assert( gamma_move(board, 14, 3, 0) == 0 );


char* board894071537 = gamma_board(board);
assert( board894071537 != NULL );
assert( strcmp(board894071537, 
"114....82...1.713.7.4\n"
".5..713.2..10..151365.3\n"
"128.1...11.610...12.49.\n") == 0);
free(board894071537);
board894071537 = NULL;
assert( gamma_move(board, 15, 19, -1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_move(board, 4, 16, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 18, 3) == 0 );
assert( gamma_move(board, 8, 19, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


gamma_delete(board);

    return 0;
}
