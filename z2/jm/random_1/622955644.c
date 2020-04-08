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
uuid: 622955644
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 12, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board791749925 = gamma_board(board);
assert( board791749925 != NULL );
assert( strcmp(board791749925, 
"....12.1\n"
"36....3.\n"
"....3.6.\n"
".1......\n"
"..6..2..\n"
"...54.42\n"
"....2..3\n"
"..3...4.\n"
"151..2..\n"
"4....2..\n"
".1......\n"
"3..6....\n") == 0);
free(board791749925);
board791749925 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board194430936 = gamma_board(board);
assert( board194430936 != NULL );
assert( strcmp(board194430936, 
"....12.1\n"
"36....3.\n"
"1...3.6.\n"
".1......\n"
"..6..2..\n"
"...54.42\n"
"...42..3\n"
"..32..4.\n"
"151..2..\n"
"4....2..\n"
".1......\n"
"3..6.6..\n") == 0);
free(board194430936);
board194430936 = NULL;
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_golden_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );


gamma_delete(board);

    return 0;
}
