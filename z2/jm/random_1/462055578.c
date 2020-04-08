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
uuid: 462055578
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board983949299 = gamma_board(board);
assert( board983949299 != NULL );
assert( strcmp(board983949299, 
"..........\n"
"..........\n"
".3........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
".1........\n"
"..3.......\n"
".....1....\n") == 0);
free(board983949299);
board983949299 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );


char* board130340684 = gamma_board(board);
assert( board130340684 != NULL );
assert( strcmp(board130340684, 
"..........\n"
"..........\n"
".3........\n"
"..........\n"
"..........\n"
".2........\n"
".......3..\n"
".1........\n"
"..3.......\n"
".....1....\n") == 0);
free(board130340684);
board130340684 = NULL;
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );


char* board902327539 = gamma_board(board);
assert( board902327539 != NULL );
assert( strcmp(board902327539, 
"1.2.2.....\n"
"..........\n"
".3..2.....\n"
".....31...\n"
"..........\n"
".2........\n"
"..3....3..\n"
".1....1...\n"
"..3.......\n"
"1....1....\n") == 0);
free(board902327539);
board902327539 = NULL;
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 80 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_golden_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_free_fields(board, 1) == 22 );


gamma_delete(board);

    return 0;
}
