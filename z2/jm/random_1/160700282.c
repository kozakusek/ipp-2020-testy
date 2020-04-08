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
uuid: 160700282
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 81 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board131197620 = gamma_board(board);
assert( board131197620 != NULL );
assert( strcmp(board131197620, 
".........\n"
".........\n"
".........\n"
"...145...\n"
"......1..\n"
".........\n"
"........6\n"
"5.3......\n"
"..3....2.\n") == 0);
free(board131197620);
board131197620 = NULL;
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );


char* board504114059 = gamma_board(board);
assert( board504114059 != NULL );
assert( strcmp(board504114059, 
".........\n"
".........\n"
".........\n"
"...145...\n"
"......1..\n"
".........\n"
"........6\n"
"5.3.4....\n"
"..3....2.\n") == 0);
free(board504114059);
board504114059 = NULL;
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board329058878 = gamma_board(board);
assert( board329058878 != NULL );
assert( strcmp(board329058878, 
"...5.....\n"
".3.....6.\n"
".........\n"
"...145...\n"
"......1..\n"
".3.3.....\n"
"........6\n"
"5.3.44..4\n"
"..3....2.\n") == 0);
free(board329058878);
board329058878 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
