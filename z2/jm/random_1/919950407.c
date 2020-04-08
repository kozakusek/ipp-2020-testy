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
uuid: 919950407
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );


char* board261174707 = gamma_board(board);
assert( board261174707 != NULL );
assert( strcmp(board261174707, 
"..........\n"
".3........\n"
"..........\n"
".......2..\n"
".5....75..\n"
"..........\n"
"..4.......\n"
"4.........\n"
"...3......\n") == 0);
free(board261174707);
board261174707 = NULL;
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );


char* board833190624 = gamma_board(board);
assert( board833190624 != NULL );
assert( strcmp(board833190624, 
".5.7......\n"
".3....46..\n"
"3.........\n"
"....4..2..\n"
".5....75..\n"
".........7\n"
"..4...12..\n"
"41......1.\n"
"...3..4...\n") == 0);
free(board833190624);
board833190624 = NULL;
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_golden_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


gamma_delete(board);

    return 0;
}
