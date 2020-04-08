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
uuid: 795908366
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_golden_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 1, 4) == 1 );


char* board788630487 = gamma_board(board);
assert( board788630487 != NULL );
assert( strcmp(board788630487, 
".3....\n"
"....45\n"
"2...64\n"
"1.3...\n"
"......\n"
"2552..\n"
"5..3..\n"
"3.....\n"
"..1...\n"
"3....4\n") == 0);
free(board788630487);
board788630487 = NULL;


char* board220164701 = gamma_board(board);
assert( board220164701 != NULL );
assert( strcmp(board220164701, 
".3....\n"
"....45\n"
"2...64\n"
"1.3...\n"
"......\n"
"2552..\n"
"5..3..\n"
"3.....\n"
"..1...\n"
"3....4\n") == 0);
free(board220164701);
board220164701 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 39 );


char* board719667239 = gamma_board(board);
assert( board719667239 != NULL );
assert( strcmp(board719667239, 
".3....\n"
".3..45\n"
"2...64\n"
"1.3..6\n"
"......\n"
"2552..\n"
"5..3..\n"
"3..1..\n"
"..1...\n"
"3....4\n") == 0);
free(board719667239);
board719667239 = NULL;
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );


gamma_delete(board);

    return 0;
}
