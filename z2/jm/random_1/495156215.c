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
uuid: 495156215
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );


char* board134246904 = gamma_board(board);
assert( board134246904 != NULL );
assert( strcmp(board134246904, 
"........7.\n"
"....2.....\n"
"...8..4...\n"
"....2.6...\n"
"...4......\n"
"..........\n"
"...5......\n") == 0);
free(board134246904);
board134246904 = NULL;
assert( gamma_move(board, 7, 10, 5) == 0 );


char* board773019200 = gamma_board(board);
assert( board773019200 != NULL );
assert( strcmp(board773019200, 
"........7.\n"
"....2.....\n"
"...8..4...\n"
"....2.6...\n"
"...4......\n"
"..........\n"
"...5......\n") == 0);
free(board773019200);
board773019200 = NULL;
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_move(board, 8, 10, -1) == 0 );


char* board463115625 = gamma_board(board);
assert( board463115625 != NULL );
assert( strcmp(board463115625, 
"..7.42..7.\n"
"3...2.....\n"
"...8.44.55\n"
"....2.6...\n"
"5.84......\n"
".5........\n"
".2.5....47\n") == 0);
free(board463115625);
board463115625 = NULL;
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
