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
uuid: 936796091
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board236768449 = gamma_board(board);
assert( board236768449 != NULL );
assert( strcmp(board236768449, 
".5.....\n"
".1..3..\n"
".3.....\n"
"..4...1\n"
"3...2..\n"
".....5.\n"
".5.641.\n"
"2..1.3.\n"
"2...1..\n") == 0);
free(board236768449);
board236768449 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );


char* board307842829 = gamma_board(board);
assert( board307842829 != NULL );
assert( strcmp(board307842829, 
".5.....\n"
"41..3..\n"
".3.2...\n"
"2.4...1\n"
"3...25.\n"
"5..6.5.\n"
".51641.\n"
"2.61.3.\n"
"2...1..\n") == 0);
free(board307842829);
board307842829 = NULL;
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 36 );


gamma_delete(board);

    return 0;
}
