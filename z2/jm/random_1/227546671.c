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
uuid: 227546671
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board625484321 = gamma_board(board);
assert( board625484321 != NULL );
assert( strcmp(board625484321, 
"........32\n"
".....3....\n"
"..........\n"
"..1.......\n"
"..........\n"
".....1.2..\n") == 0);
free(board625484321);
board625484321 = NULL;
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );


char* board136154005 = gamma_board(board);
assert( board136154005 != NULL );
assert( strcmp(board136154005, 
"..3..3..32\n"
".....321..\n"
".....2...3\n"
"..1.......\n"
"2.......12\n"
".....1.2.3\n") == 0);
free(board136154005);
board136154005 = NULL;
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 41 );


char* board181853020 = gamma_board(board);
assert( board181853020 != NULL );
assert( strcmp(board181853020, 
"..3..3..32\n"
".....321.1\n"
".....22..3\n"
"..13......\n"
"2.......12\n"
".....1.2.3\n") == 0);
free(board181853020);
board181853020 = NULL;
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );


char* board248556776 = gamma_board(board);
assert( board248556776 != NULL );
assert( strcmp(board248556776, 
"..3..3..32\n"
".....321.1\n"
".....22..3\n"
"..13......\n"
"2......212\n"
".....1.2.3\n") == 0);
free(board248556776);
board248556776 = NULL;
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );


gamma_delete(board);

    return 0;
}
