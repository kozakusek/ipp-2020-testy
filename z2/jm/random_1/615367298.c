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
uuid: 615367298
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );


char* board601297571 = gamma_board(board);
assert( board601297571 != NULL );
assert( strcmp(board601297571, 
"........\n"
"........\n"
"........\n"
"........\n"
".1......\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board601297571);
board601297571 = NULL;
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 1) == 0 );


char* board318365226 = gamma_board(board);
assert( board318365226 != NULL );
assert( strcmp(board318365226, 
".2......\n"
"....2..1\n"
"..1.....\n"
"........\n"
".1.....1\n"
"......3.\n"
"........\n"
"........\n"
"2.......\n"
"3.......\n") == 0);
free(board318365226);
board318365226 = NULL;
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );


char* board638640250 = gamma_board(board);
assert( board638640250 != NULL );
assert( strcmp(board638640250, 
".2......\n"
"..1.2..1\n"
"..1..3..\n"
"........\n"
"21.....1\n"
"....3.3.\n"
"........\n"
"........\n"
"2.......\n"
"3.......\n") == 0);
free(board638640250);
board638640250 = NULL;
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );


char* board489815612 = gamma_board(board);
assert( board489815612 != NULL );
assert( strcmp(board489815612, 
".2......\n"
".21.2..1\n"
"..1..3..\n"
".1......\n"
"21..3..1\n"
"....3.3.\n"
"........\n"
"........\n"
"2.......\n"
"33......\n") == 0);
free(board489815612);
board489815612 = NULL;
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
