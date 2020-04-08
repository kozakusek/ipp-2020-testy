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
uuid: 184121369
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 94 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_golden_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board243354347 = gamma_board(board);
assert( board243354347 != NULL );
assert( strcmp(board243354347, 
".4....1.1\n"
".....4..4\n"
".........\n"
".........\n"
"....4....\n"
"....3....\n"
"1.1..33..\n"
"2...3..2.\n"
".2.2...4.\n"
"....1....\n"
".3...2...\n"
"..2......\n") == 0);
free(board243354347);
board243354347 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board436888531 = gamma_board(board);
assert( board436888531 != NULL );
assert( strcmp(board436888531, 
".4....131\n"
".....4..4\n"
".......1.\n"
".........\n"
"....4....\n"
"....3....\n"
"1.1..33..\n"
"2...3..2.\n"
".2.2...4.\n"
".4.21....\n"
".3...2...\n"
"..23.....\n") == 0);
free(board436888531);
board436888531 = NULL;
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );


char* board279285337 = gamma_board(board);
assert( board279285337 != NULL );
assert( strcmp(board279285337, 
".4....131\n"
".....4..4\n"
".......1.\n"
".........\n"
"...34....\n"
"....31...\n"
"1.1..33..\n"
"2...3..2.\n"
".2.2...4.\n"
".4.21....\n"
".3...2...\n"
"..23.4...\n") == 0);
free(board279285337);
board279285337 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, -1, 12) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 77 );


char* board653569203 = gamma_board(board);
assert( board653569203 != NULL );
assert( strcmp(board653569203, 
".4....131\n"
".....4.34\n"
".......1.\n"
".........\n"
"...34....\n"
"....31...\n"
"1.1..33..\n"
"2...3..2.\n"
".2.2...42\n"
".4.21....\n"
".3...2...\n"
"..23.4...\n") == 0);
free(board653569203);
board653569203 = NULL;
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );


char* board265281148 = gamma_board(board);
assert( board265281148 != NULL );
assert( strcmp(board265281148, 
".4....131\n"
".3...4.34\n"
".......1.\n"
"........1\n"
"...34....\n"
"....31...\n"
"1.1..33..\n"
"2...3..2.\n"
".2.2...42\n"
".4.213...\n"
".1...2...\n"
"..23.4..1\n") == 0);
free(board265281148);
board265281148 = NULL;
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_move(board, 2, 10, 5) == 0 );


gamma_delete(board);

    return 0;
}
