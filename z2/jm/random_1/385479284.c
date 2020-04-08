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
uuid: 385479284
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );


char* board538056998 = gamma_board(board);
assert( board538056998 != NULL );
assert( strcmp(board538056998, 
"....1.....\n"
"..........\n"
".4...2...3\n"
"1.........\n"
"..........\n"
"..........\n") == 0);
free(board538056998);
board538056998 = NULL;


char* board694539905 = gamma_board(board);
assert( board694539905 != NULL );
assert( strcmp(board694539905, 
"....1.....\n"
"..........\n"
".4...2...3\n"
"1.........\n"
"..........\n"
"..........\n") == 0);
free(board694539905);
board694539905 = NULL;
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );


char* board405288811 = gamma_board(board);
assert( board405288811 != NULL );
assert( strcmp(board405288811, 
"....12....\n"
"..........\n"
".4...2...3\n"
"1...4.....\n"
"..........\n"
"..........\n") == 0);
free(board405288811);
board405288811 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 2) == 1 );


char* board381997406 = gamma_board(board);
assert( board381997406 != NULL );
assert( strcmp(board381997406, 
".1..12....\n"
"..........\n"
".4...2...3\n"
"1.4.4.....\n"
"..........\n"
".....3....\n") == 0);
free(board381997406);
board381997406 = NULL;
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board162519345 = gamma_board(board);
assert( board162519345 != NULL );
assert( strcmp(board162519345, 
".1..12....\n"
"5.........\n"
".4...2...3\n"
"1.4.4.....\n"
"..........\n"
".....3....\n") == 0);
free(board162519345);
board162519345 = NULL;
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );


char* board993101401 = gamma_board(board);
assert( board993101401 != NULL );
assert( strcmp(board993101401, 
".1..1233..\n"
"5.........\n"
".4.5.2..13\n"
"1.4.4.....\n"
"5.1.4..4..\n"
"...433...2\n") == 0);
free(board993101401);
board993101401 = NULL;
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );


gamma_delete(board);

    return 0;
}
