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
uuid: 662992907
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board297423725 = gamma_board(board);
assert( board297423725 != NULL );
assert( strcmp(board297423725, 
".......\n"
"...5...\n"
"...6...\n"
".....4.\n"
".......\n"
".......\n"
"...1...\n"
".......\n"
".......\n") == 0);
free(board297423725);
board297423725 = NULL;
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board266307273 = gamma_board(board);
assert( board266307273 != NULL );
assert( strcmp(board266307273, 
".......\n"
"...5...\n"
"...6...\n"
".....4.\n"
".......\n"
"......8\n"
"...1...\n"
".......\n"
".......\n") == 0);
free(board266307273);
board266307273 = NULL;
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board379588862 = gamma_board(board);
assert( board379588862 != NULL );
assert( strcmp(board379588862, 
".......\n"
"..15...\n"
"...6...\n"
"...4.4.\n"
".......\n"
"......8\n"
"...1...\n"
".......\n"
".......\n") == 0);
free(board379588862);
board379588862 = NULL;
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );


char* board405512862 = gamma_board(board);
assert( board405512862 != NULL );
assert( strcmp(board405512862, 
".......\n"
"..15...\n"
"...6...\n"
"...4.4.\n"
"....7..\n"
"...5..8\n"
"...1...\n"
"....2..\n"
".......\n") == 0);
free(board405512862);
board405512862 = NULL;
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_golden_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_golden_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board458958056 = gamma_board(board);
assert( board458958056 != NULL );
assert( strcmp(board458958056, 
"7...6..\n"
"3515...\n"
"3..1.4.\n"
"4484.4.\n"
"8...7..\n"
"...5..8\n"
"...1...\n"
"....2..\n"
".......\n") == 0);
free(board458958056);
board458958056 = NULL;
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );


gamma_delete(board);

    return 0;
}
