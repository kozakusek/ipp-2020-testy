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
uuid: 725678419
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 44 );


char* board185895589 = gamma_board(board);
assert( board185895589 != NULL );
assert( strcmp(board185895589, 
".......\n"
"....1..\n"
"....2..\n"
"......3\n"
".......\n"
"1......\n"
".3.....\n") == 0);
free(board185895589);
board185895589 = NULL;
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 29 );


char* board648556105 = gamma_board(board);
assert( board648556105 != NULL );
assert( strcmp(board648556105, 
"...1...\n"
"....2..\n"
"....22.\n"
".2.2133\n"
"3..1.32\n"
"1..22.3\n"
".1.23..\n") == 0);
free(board648556105);
board648556105 = NULL;


gamma_delete(board);

    return 0;
}
