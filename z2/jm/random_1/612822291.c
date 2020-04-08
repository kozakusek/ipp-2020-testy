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
uuid: 612822291
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_move(board, 5, 4, 0) == 0 );


char* board658453850 = gamma_board(board);
assert( board658453850 != NULL );
assert( strcmp(board658453850, 
"......\n"
"......\n"
"5.....\n"
"..1...\n"
"......\n"
"......\n"
"......\n") == 0);
free(board658453850);
board658453850 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );


char* board542747790 = gamma_board(board);
assert( board542747790 != NULL );
assert( strcmp(board542747790, 
"....3.\n"
"......\n"
"5..5..\n"
"6.1...\n"
"4.....\n"
"......\n"
"......\n") == 0);
free(board542747790);
board542747790 = NULL;
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 33 );


char* board970072843 = gamma_board(board);
assert( board970072843 != NULL );
assert( strcmp(board970072843, 
"..5.3.\n"
"..1...\n"
"5..5..\n"
"6.1...\n"
"4.....\n"
"......\n"
".....4\n") == 0);
free(board970072843);
board970072843 = NULL;
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board647591469 = gamma_board(board);
assert( board647591469 != NULL );
assert( strcmp(board647591469, 
"..5.3.\n"
".61...\n"
"5..5..\n"
"631...\n"
"4..6..\n"
"...2..\n"
"....54\n") == 0);
free(board647591469);
board647591469 = NULL;
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 28 );


gamma_delete(board);

    return 0;
}
