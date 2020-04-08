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
uuid: 214774371
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board902052094 = gamma_board(board);
assert( board902052094 != NULL );
assert( strcmp(board902052094, 
".......5..\n"
".....6....\n"
".....3.5..\n"
"......4.3.\n"
".......4..\n"
".1..3...2.\n"
"......1...\n") == 0);
free(board902052094);
board902052094 = NULL;
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board523000373 = gamma_board(board);
assert( board523000373 != NULL );
assert( strcmp(board523000373, 
".......5..\n"
".....6.7..\n"
".2...335.6\n"
"......4.3.\n"
".......44.\n"
".1..3...2.\n"
"....1.1..5\n") == 0);
free(board523000373);
board523000373 = NULL;
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board408256854 = gamma_board(board);
assert( board408256854 != NULL );
assert( strcmp(board408256854, 
".......5..\n"
".2...6.7..\n"
".2...335.6\n"
"......4.3.\n"
"2.4....44.\n"
".1..54..2.\n"
"..3.171..5\n") == 0);
free(board408256854);
board408256854 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );


char* board963271239 = gamma_board(board);
assert( board963271239 != NULL );
assert( strcmp(board963271239, 
".......5..\n"
".2...6.7..\n"
".2...335.6\n"
"......4.3.\n"
"2.4....44.\n"
".1..54..2.\n"
"..3.171..5\n") == 0);
free(board963271239);
board963271239 = NULL;
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
