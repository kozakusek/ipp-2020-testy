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
uuid: 811642618
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 4, 8);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );


char* board467637326 = gamma_board(board);
assert( board467637326 != NULL );
assert( strcmp(board467637326, 
"........\n"
"..4.....\n"
"........\n"
"...21...\n"
"........\n"
".......3\n") == 0);
free(board467637326);
board467637326 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );


char* board248767111 = gamma_board(board);
assert( board248767111 != NULL );
assert( strcmp(board248767111, 
"........\n"
"..4.....\n"
"....1...\n"
"...21...\n"
"........\n"
".....4.3\n") == 0);
free(board248767111);
board248767111 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );


char* board633211721 = gamma_board(board);
assert( board633211721 != NULL );
assert( strcmp(board633211721, 
"......2.\n"
"..4.....\n"
"....1...\n"
"...21...\n"
"........\n"
".2...4.3\n") == 0);
free(board633211721);
board633211721 = NULL;
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board271254147 = gamma_board(board);
assert( board271254147 != NULL );
assert( strcmp(board271254147, 
"......2.\n"
"..4.....\n"
".3..1..1\n"
"...21.2.\n"
"4.....14\n"
".2...4.3\n") == 0);
free(board271254147);
board271254147 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 3) == 1 );


gamma_delete(board);

    return 0;
}
