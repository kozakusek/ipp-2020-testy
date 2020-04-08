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
uuid: 626190408
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board876824328 = gamma_board(board);
assert( board876824328 != NULL );
assert( strcmp(board876824328, 
"....1..\n"
"8.1....\n"
"3......\n"
".....3.\n"
"...46..\n"
"...6...\n"
"4....2.\n"
".......\n"
"..4....\n") == 0);
free(board876824328);
board876824328 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 0, 2) == 0 );


char* board395140296 = gamma_board(board);
assert( board395140296 != NULL );
assert( strcmp(board395140296, 
"....1..\n"
"8.1....\n"
"32.....\n"
"..8..3.\n"
"...46..\n"
"...6.75\n"
"4....2.\n"
".......\n"
"..4...6\n") == 0);
free(board395140296);
board395140296 = NULL;
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );


char* board772732666 = gamma_board(board);
assert( board772732666 != NULL );
assert( strcmp(board772732666, 
"...21..\n"
"8.1....\n"
"32....7\n"
"..84.3.\n"
"...46..\n"
"...6.75\n"
"4....2.\n"
".......\n"
"..4...6\n") == 0);
free(board772732666);
board772732666 = NULL;
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_free_fields(board, 8) == 41 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_busy_fields(board, 7) == 3 );


char* board292094547 = gamma_board(board);
assert( board292094547 != NULL );
assert( strcmp(board292094547, 
"...21..\n"
"8.16...\n"
"32...87\n"
"..84.3.\n"
"...46..\n"
"7..6.75\n"
"4.1..2.\n"
".......\n"
"..434.6\n") == 0);
free(board292094547);
board292094547 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 7) == 36 );


gamma_delete(board);

    return 0;
}
