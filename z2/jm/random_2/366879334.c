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
uuid: 366879334
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 5, 14, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );


char* board257471673 = gamma_board(board);
assert( board257471673 != NULL );
assert( strcmp(board257471673, 
"......\n"
"......\n"
".1....\n"
"......\n"
"......\n") == 0);
free(board257471673);
board257471673 = NULL;


char* board399173562 = gamma_board(board);
assert( board399173562 != NULL );
assert( strcmp(board399173562, 
"......\n"
"......\n"
".1....\n"
"......\n"
"......\n") == 0);
free(board399173562);
board399173562 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_golden_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 11, 5, 3) == 1 );


char* board980708236 = gamma_board(board);
assert( board980708236 != NULL );
assert( strcmp(board980708236, 
"......\n"
".....11\n"
"91.8..\n"
"..4.4.\n"
".75...\n") == 0);
free(board980708236);
board980708236 = NULL;
assert( gamma_move(board, 13, 0, 3) == 1 );
assert( gamma_move(board, 13, 3, 3) == 1 );
assert( gamma_move(board, 14, 4, 0) == 1 );
assert( gamma_move(board, 14, 5, 4) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 14, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );


char* board197832160 = gamma_board(board);
assert( board197832160 != NULL );
assert( strcmp(board197832160, 
"..8..14\n"
"13..13911\n"
"9168..\n"
".4434.\n"
".75.14.\n") == 0);
free(board197832160);
board197832160 = NULL;
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_free_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 14, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );


char* board752349674 = gamma_board(board);
assert( board752349674 != NULL );
assert( strcmp(board752349674, 
"5.814814\n"
"13..13911\n"
"91688.\n"
".44347\n"
".75.141\n") == 0);
free(board752349674);
board752349674 = NULL;
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_free_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_free_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 6 );


gamma_delete(board);

    return 0;
}
