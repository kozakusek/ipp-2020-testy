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
uuid: 813798427
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 3, 5);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );


char* board240440969 = gamma_board(board);
assert( board240440969 != NULL );
assert( strcmp(board240440969, 
".......\n"
".......\n"
"..2..1.\n"
".......\n"
".....3.\n"
".......\n"
"......1\n"
".......\n"
".......\n") == 0);
free(board240440969);
board240440969 = NULL;
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board287150373 = gamma_board(board);
assert( board287150373 != NULL );
assert( strcmp(board287150373, 
".....1.\n"
".3.....\n"
"..2..1.\n"
"......3\n"
"....33.\n"
"3.....3\n"
"...2..1\n"
"2...2..\n"
"11....1\n") == 0);
free(board287150373);
board287150373 = NULL;
assert( gamma_move(board, 2, 4, 2) == 1 );


char* board689365776 = gamma_board(board);
assert( board689365776 != NULL );
assert( strcmp(board689365776, 
".....1.\n"
".3.....\n"
"..2..1.\n"
"......3\n"
"....33.\n"
"3.....3\n"
"...22.1\n"
"2...2..\n"
"11....1\n") == 0);
free(board689365776);
board689365776 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );


char* board482775518 = gamma_board(board);
assert( board482775518 != NULL );
assert( strcmp(board482775518, 
".....1.\n"
".3.....\n"
"..2.21.\n"
"......3\n"
"....33.\n"
"3.....3\n"
"...22.1\n"
"2...2..\n"
"11....1\n") == 0);
free(board482775518);
board482775518 = NULL;
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );


gamma_delete(board);

    return 0;
}
