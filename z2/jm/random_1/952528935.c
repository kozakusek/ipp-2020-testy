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
uuid: 952528935
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );


char* board540158660 = gamma_board(board);
assert( board540158660 != NULL );
assert( strcmp(board540158660, 
"..5....5.\n"
".3.....1.\n"
"35.5.....\n"
".........\n"
"2........\n"
"..3..1...\n"
"..21.22.2\n"
".........\n") == 0);
free(board540158660);
board540158660 = NULL;
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );


char* board633114558 = gamma_board(board);
assert( board633114558 != NULL );
assert( strcmp(board633114558, 
"..5....5.\n"
".3.....1.\n"
"35.5.....\n"
".........\n"
"2........\n"
"..3..1.1.\n"
"..21.22.2\n"
".........\n") == 0);
free(board633114558);
board633114558 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );


char* board385674859 = gamma_board(board);
assert( board385674859 != NULL );
assert( strcmp(board385674859, 
"..5....5.\n"
".3.5...1.\n"
"35.5.....\n"
".........\n"
"2........\n"
"..3..1.1.\n"
"..21.22.2\n"
".........\n") == 0);
free(board385674859);
board385674859 = NULL;
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 1) == 12 );


char* board578063697 = gamma_board(board);
assert( board578063697 != NULL );
assert( strcmp(board578063697, 
"..5....5.\n"
".3.5...1.\n"
"35.5.....\n"
".........\n"
"2........\n"
"..3..1.1.\n"
"..21.22.2\n"
"....3....\n") == 0);
free(board578063697);
board578063697 = NULL;
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 11 );


char* board496977601 = gamma_board(board);
assert( board496977601 != NULL );
assert( strcmp(board496977601, 
"..5....5.\n"
".3.5...1.\n"
"35.5.....\n"
".........\n"
"2......4.\n"
"..3..1.1.\n"
"..21.22.2\n"
"....3....\n") == 0);
free(board496977601);
board496977601 = NULL;


gamma_delete(board);

    return 0;
}
