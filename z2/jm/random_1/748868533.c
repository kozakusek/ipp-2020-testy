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
uuid: 748868533
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_golden_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );


char* board581817036 = gamma_board(board);
assert( board581817036 != NULL );
assert( strcmp(board581817036, 
".....3..4.\n"
".........5\n"
"..........\n"
".......6..\n"
".5........\n"
"..........\n"
"..........\n"
"..7......1\n") == 0);
free(board581817036);
board581817036 = NULL;
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 1, -1) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 58 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_golden_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_golden_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_free_fields(board, 5) == 51 );


char* board620032338 = gamma_board(board);
assert( board620032338 != NULL );
assert( strcmp(board620032338, 
"..6.73.243\n"
"2.1...2..5\n"
"6.......7.\n"
"..56...642\n"
".547...6..\n"
"..1......6\n"
".3..7.....\n"
"..7.44...1\n") == 0);
free(board620032338);
board620032338 = NULL;
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 10, -1) == 0 );


gamma_delete(board);

    return 0;
}
