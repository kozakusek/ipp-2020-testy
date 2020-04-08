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
uuid: 420973561
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );


char* board813719997 = gamma_board(board);
assert( board813719997 != NULL );
assert( strcmp(board813719997, 
".....3..\n"
"11......\n"
".2...12.\n"
"1......2\n"
"....1...\n"
"......23\n"
".33.....\n"
"3.......\n") == 0);
free(board813719997);
board813719997 = NULL;
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );


char* board639780621 = gamma_board(board);
assert( board639780621 != NULL );
assert( strcmp(board639780621, 
".....3..\n"
"11......\n"
".2...12.\n"
"1......2\n"
"....1...\n"
"......23\n"
".33.....\n"
"3.......\n") == 0);
free(board639780621);
board639780621 = NULL;
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );


gamma_delete(board);

    return 0;
}
