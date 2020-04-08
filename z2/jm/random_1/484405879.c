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
uuid: 484405879
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board608184600 = gamma_board(board);
assert( board608184600 != NULL );
assert( strcmp(board608184600, 
".4........\n"
"...2......\n"
"..........\n"
"..1......3\n"
"...42.....\n"
"..........\n"
".........2\n"
"..4.......\n"
"..........\n"
"....3...4.\n"
".1.....1..\n") == 0);
free(board608184600);
board608184600 = NULL;
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_free_fields(board, 4) == 88 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );


char* board916830588 = gamma_board(board);
assert( board916830588 != NULL );
assert( strcmp(board916830588, 
".4.1.4..4.\n"
"...2......\n"
"..2..233..\n"
"241....133\n"
"...42..4..\n"
"....2.3...\n"
"....31.4.2\n"
"..4...3...\n"
"...2......\n"
"....3.2.4.\n"
"1114...12.\n") == 0);
free(board916830588);
board916830588 = NULL;
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board106120279 = gamma_board(board);
assert( board106120279 != NULL );
assert( strcmp(board106120279, 
".4.1.4..4.\n"
"...2......\n"
"..2..233..\n"
"241....133\n"
"...42..4..\n"
"....2.3...\n"
"....31.4.2\n"
"..4...3...\n"
"...2......\n"
"....312.4.\n"
"1114...12.\n") == 0);
free(board106120279);
board106120279 = NULL;
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );


gamma_delete(board);

    return 0;
}
