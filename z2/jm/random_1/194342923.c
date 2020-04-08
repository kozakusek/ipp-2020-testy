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
uuid: 194342923
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board459725282 = gamma_board(board);
assert( board459725282 != NULL );
assert( strcmp(board459725282, 
"..........\n"
"..........\n"
"..2...3...\n"
"..1......2\n"
"..........\n"
"..........\n") == 0);
free(board459725282);
board459725282 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );


char* board661598349 = gamma_board(board);
assert( board661598349 != NULL );
assert( strcmp(board661598349, 
"..........\n"
"..........\n"
"..21..3..1\n"
".112.....2\n"
"....3.....\n"
".21..2....\n") == 0);
free(board661598349);
board661598349 = NULL;
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 1, 1) == 1 );


char* board441865562 = gamma_board(board);
assert( board441865562 != NULL );
assert( strcmp(board441865562, 
"..........\n"
"......3...\n"
"..21..3..1\n"
".112.....2\n"
".1..3.....\n"
".21..2....\n") == 0);
free(board441865562);
board441865562 = NULL;
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 2, 0, 5) == 0 );


char* board462922580 = gamma_board(board);
assert( board462922580 != NULL );
assert( strcmp(board462922580, 
"....2.....\n"
"......3...\n"
"..21..3..1\n"
".112.....2\n"
".1..3...1.\n"
".21..2....\n") == 0);
free(board462922580);
board462922580 = NULL;
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );


char* board453574252 = gamma_board(board);
assert( board453574252 != NULL );
assert( strcmp(board453574252, 
"1...2.....\n"
"......3...\n"
"..21..3..1\n"
".112.....2\n"
".1..3...1.\n"
".21..2.3..\n") == 0);
free(board453574252);
board453574252 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );


char* board914687569 = gamma_board(board);
assert( board914687569 != NULL );
assert( strcmp(board914687569, 
"1...2.....\n"
"......3...\n"
".121..3..1\n"
".112.....2\n"
".1..3...1.\n"
".21..2.3..\n") == 0);
free(board914687569);
board914687569 = NULL;
assert( gamma_move(board, 3, 0, 1) == 1 );


gamma_delete(board);

    return 0;
}
