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
uuid: 615025438
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );


char* board805429814 = gamma_board(board);
assert( board805429814 != NULL );
assert( strcmp(board805429814, 
".4...5..\n"
"........\n"
".2.5..5.\n"
".3.1....\n"
"........\n"
"3.1.2...\n"
".3...2..\n"
"...5.1..\n") == 0);
free(board805429814);
board805429814 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );


char* board820782223 = gamma_board(board);
assert( board820782223 != NULL );
assert( strcmp(board820782223, 
".4...5..\n"
"...34...\n"
".2.54.5.\n"
".3.1....\n"
".2..2...\n"
"3.1.21..\n"
".3...2..\n"
"...5.1.4\n") == 0);
free(board820782223);
board820782223 = NULL;
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );


gamma_delete(board);

    return 0;
}
