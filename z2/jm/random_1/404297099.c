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
uuid: 404297099
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 7, 6);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_golden_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );


char* board673931528 = gamma_board(board);
assert( board673931528 != NULL );
assert( strcmp(board673931528, 
"6.54...\n"
"...5...\n"
"6......\n"
"...2...\n"
".......\n"
".2.....\n"
".......\n"
".......\n"
".......\n") == 0);
free(board673931528);
board673931528 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board655444966 = gamma_board(board);
assert( board655444966 != NULL );
assert( strcmp(board655444966, 
"6.54...\n"
"...5...\n"
"6..6...\n"
".5.22.1\n"
".....4.\n"
".23.3.7\n"
"..6....\n"
".......\n"
".2.....\n") == 0);
free(board655444966);
board655444966 = NULL;
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_golden_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );


char* board579397046 = gamma_board(board);
assert( board579397046 != NULL );
assert( strcmp(board579397046, 
"6.54...\n"
"...5...\n"
"6..6...\n"
".5.22.1\n"
".....4.\n"
".23.3.7\n"
"..6....\n"
".2....6\n"
".2.....\n") == 0);
free(board579397046);
board579397046 = NULL;
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, -1, 8) == 0 );


gamma_delete(board);

    return 0;
}
