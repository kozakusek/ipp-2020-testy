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
uuid: 375569512
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );


char* board999003770 = gamma_board(board);
assert( board999003770 != NULL );
assert( strcmp(board999003770, 
".....5\n"
"......\n"
"..1...\n"
".7.4.8\n"
"......\n"
"......\n") == 0);
free(board999003770);
board999003770 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_golden_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );


char* board832304259 = gamma_board(board);
assert( board832304259 != NULL );
assert( strcmp(board832304259, 
"...875\n"
".....2\n"
"..88..\n"
".754.8\n"
"......\n"
"......\n") == 0);
free(board832304259);
board832304259 = NULL;
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_golden_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );


char* board243768562 = gamma_board(board);
assert( board243768562 != NULL );
assert( strcmp(board243768562, 
"..7875\n"
".5...2\n"
"..884.\n"
".754.8\n"
"......\n"
".....1\n") == 0);
free(board243768562);
board243768562 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );


gamma_delete(board);

    return 0;
}
