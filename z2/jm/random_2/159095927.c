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
uuid: 159095927
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 7, 15, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );


char* board836062549 = gamma_board(board);
assert( board836062549 != NULL );
assert( strcmp(board836062549, 
"...2.\n"
"....3\n"
".....\n"
".....\n"
"....1\n"
"..4..\n"
".27..\n") == 0);
free(board836062549);
board836062549 = NULL;
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 10, 4, 1) == 1 );


char* board230710651 = gamma_board(board);
assert( board230710651 != NULL );
assert( strcmp(board230710651, 
"...2.\n"
"....3\n"
"8....\n"
".....\n"
"....1\n"
"..4.10\n"
".27..\n") == 0);
free(board230710651);
board230710651 = NULL;
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 11, 0, 6) == 1 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 12, 0, 2) == 1 );
assert( gamma_move(board, 13, 1, 1) == 1 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 14, 1, 4) == 1 );
assert( gamma_move(board, 15, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_free_fields(board, 12) == 18 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 13, 1, 3) == 1 );
assert( gamma_move(board, 14, 3, 6) == 0 );
assert( gamma_move(board, 15, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );


char* board528721347 = gamma_board(board);
assert( board528721347 != NULL );
assert( strcmp(board528721347, 
"11..2.\n"
"15139.3\n"
"814...\n"
"213..11\n"
"12...1\n"
".134.10\n"
"727..\n") == 0);
free(board528721347);
board528721347 = NULL;
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_golden_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_golden_move(board, 12, 1, 2) == 1 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 15, 3, 4) == 1 );
assert( gamma_move(board, 15, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );


char* board222751795 = gamma_board(board);
assert( board222751795 != NULL );
assert( strcmp(board222751795, 
"11.62.\n"
"15139.3\n"
"814.157\n"
"213.411\n"
"1212..1\n"
".134.10\n"
"72753\n") == 0);
free(board222751795);
board222751795 = NULL;
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 4, 1) == 0 );
assert( gamma_move(board, 14, 4, 1) == 0 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
