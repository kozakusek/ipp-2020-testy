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
uuid: 894186064
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board682960192 = gamma_board(board);
assert( board682960192 != NULL );
assert( strcmp(board682960192, 
"......\n"
".33..1\n"
".1.41.\n"
"..2311\n"
"2.2...\n"
"..1.4.\n"
"3.....\n"
"...3..\n"
"4..4..\n"
"......\n") == 0);
free(board682960192);
board682960192 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );


char* board737321912 = gamma_board(board);
assert( board737321912 != NULL );
assert( strcmp(board737321912, 
".3....\n"
".33..1\n"
".1.41.\n"
"..2311\n"
"2.2...\n"
"..1.4.\n"
"3.....\n"
"...3..\n"
"4..4..\n"
"......\n") == 0);
free(board737321912);
board737321912 = NULL;
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board861614120 = gamma_board(board);
assert( board861614120 != NULL );
assert( strcmp(board861614120, 
".3....\n"
".33..1\n"
".1.41.\n"
"..2311\n"
"2.2...\n"
"..1.4.\n"
"3.....\n"
"...3..\n"
"4..4..\n"
"......\n") == 0);
free(board861614120);
board861614120 = NULL;
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );


gamma_delete(board);

    return 0;
}
