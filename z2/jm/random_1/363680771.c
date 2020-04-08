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
uuid: 363680771
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );


char* board325493489 = gamma_board(board);
assert( board325493489 != NULL );
assert( strcmp(board325493489, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".5....\n"
"..2...\n"
"......\n") == 0);
free(board325493489);
board325493489 = NULL;
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 51 );


char* board425305010 = gamma_board(board);
assert( board425305010 != NULL );
assert( strcmp(board425305010, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".5....\n"
"..2...\n"
"....2.\n") == 0);
free(board425305010);
board425305010 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 48 );


char* board591940982 = gamma_board(board);
assert( board591940982 != NULL );
assert( strcmp(board591940982, 
"......\n"
"......\n"
"..1...\n"
".....2\n"
"......\n"
"......\n"
".5....\n"
"1.2...\n"
"....2.\n") == 0);
free(board591940982);
board591940982 = NULL;
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );


char* board123798281 = gamma_board(board);
assert( board123798281 != NULL );
assert( strcmp(board123798281, 
"......\n"
"......\n"
"..1...\n"
".....2\n"
".5....\n"
"......\n"
".5....\n"
"1.2...\n"
"....2.\n") == 0);
free(board123798281);
board123798281 = NULL;
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );


char* board468362706 = gamma_board(board);
assert( board468362706 != NULL );
assert( strcmp(board468362706, 
"......\n"
"......\n"
"..1...\n"
"1....2\n"
".5...4\n"
"......\n"
".5....\n"
"1.2...\n"
".4..2.\n") == 0);
free(board468362706);
board468362706 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 36 );


gamma_delete(board);

    return 0;
}
