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
uuid: 112129793
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 11, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_free_fields(board, 6) == 94 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_golden_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 81 );


char* board758348315 = gamma_board(board);
assert( board758348315 != NULL );
assert( strcmp(board758348315, 
"......7..\n"
"....6....\n"
".......1.\n"
"..3..3.4.\n"
".1...5...\n"
".2..6.4.3\n"
"....6....\n"
"....2....\n"
".....2...\n"
"....27...\n"
"........5\n") == 0);
free(board758348315);
board758348315 = NULL;
assert( gamma_move(board, 2, 8, 2) == 1 );


char* board299798620 = gamma_board(board);
assert( board299798620 != NULL );
assert( strcmp(board299798620, 
"......7..\n"
"....6....\n"
".......1.\n"
"..3..3.4.\n"
".1...5...\n"
".2..6.4.3\n"
"....6....\n"
"....2....\n"
".....2..2\n"
"....27...\n"
"........5\n") == 0);
free(board299798620);
board299798620 = NULL;
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 6) == 78 );


char* board216193169 = gamma_board(board);
assert( board216193169 != NULL );
assert( strcmp(board216193169, 
"......7..\n"
"....6....\n"
".......1.\n"
"..3..3.4.\n"
".1...5...\n"
".2..6.4.3\n"
"..5.6..3.\n"
"....2....\n"
".....2..2\n"
"....27...\n"
"........5\n") == 0);
free(board216193169);
board216193169 = NULL;
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );


char* board715367651 = gamma_board(board);
assert( board715367651 != NULL );
assert( strcmp(board715367651, 
"....5174.\n"
"4...6....\n"
"......71.\n"
".23..3.4.\n"
".1...5..6\n"
".24.6.4.1\n"
".65.63.3.\n"
"..1.2....\n"
".72..23.2\n"
"....27...\n"
"1.6.....5\n") == 0);
free(board715367651);
board715367651 = NULL;
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


gamma_delete(board);

    return 0;
}
