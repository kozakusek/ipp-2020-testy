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
uuid: 861037714
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );


char* board854149697 = gamma_board(board);
assert( board854149697 != NULL );
assert( strcmp(board854149697, 
".5....5\n"
".......\n"
".......\n"
"5...2..\n"
"...33..\n"
"....4..\n"
".....2.\n"
".......\n"
"....11.\n"
".4.....\n") == 0);
free(board854149697);
board854149697 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );


char* board522071332 = gamma_board(board);
assert( board522071332 != NULL );
assert( strcmp(board522071332, 
".5..4.5\n"
".......\n"
"1..2...\n"
"52532..\n"
"...33..\n"
"....44.\n"
"...5.2.\n"
"....3..\n"
"1...11.\n"
"54....4\n") == 0);
free(board522071332);
board522071332 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );


char* board498786970 = gamma_board(board);
assert( board498786970 != NULL );
assert( strcmp(board498786970, 
".51.4.5\n"
".......\n"
"14.2...\n"
"52532..\n"
"..233..\n"
"4...44.\n"
"...5.2.\n"
".2..3..\n"
"1...11.\n"
"54..3.4\n") == 0);
free(board498786970);
board498786970 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
