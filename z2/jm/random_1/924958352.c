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
uuid: 924958352
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );


char* board712642520 = gamma_board(board);
assert( board712642520 != NULL );
assert( strcmp(board712642520, 
"........\n"
"...2.231\n"
".......1\n"
"2.......\n"
".1..2...\n"
"...222..\n"
"..1.....\n"
"........\n"
"........\n") == 0);
free(board712642520);
board712642520 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 1, 0, 7) == 0 );


char* board890507203 = gamma_board(board);
assert( board890507203 != NULL );
assert( strcmp(board890507203, 
".3....1.\n"
"...2.231\n"
".......1\n"
"2.......\n"
".1..2...\n"
".3.222..\n"
"3.1..12.\n"
"........\n"
"........\n") == 0);
free(board890507203);
board890507203 = NULL;
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 2, 2) == 0 );


char* board315587334 = gamma_board(board);
assert( board315587334 != NULL );
assert( strcmp(board315587334, 
".3.2..1.\n"
"...2.231\n"
".......1\n"
"2.......\n"
".1..2...\n"
".31222..\n"
"3.1..12.\n"
"........\n"
"......3.\n") == 0);
free(board315587334);
board315587334 = NULL;
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
