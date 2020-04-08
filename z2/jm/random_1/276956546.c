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
uuid: 276956546
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_golden_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );


char* board187805202 = gamma_board(board);
assert( board187805202 != NULL );
assert( strcmp(board187805202, 
".....2\n"
".....3\n"
".6.45.\n"
"...1..\n"
"......\n"
"......\n") == 0);
free(board187805202);
board187805202 = NULL;
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board558745014 = gamma_board(board);
assert( board558745014 != NULL );
assert( strcmp(board558745014, 
".....2\n"
".....3\n"
".6.45.\n"
"...1..\n"
"......\n"
"......\n") == 0);
free(board558745014);
board558745014 = NULL;
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );


char* board979853611 = gamma_board(board);
assert( board979853611 != NULL );
assert( strcmp(board979853611, 
".....2\n"
".....3\n"
".6.45.\n"
"4..15.\n"
"......\n"
"....1.\n") == 0);
free(board979853611);
board979853611 = NULL;


char* board434506038 = gamma_board(board);
assert( board434506038 != NULL );
assert( strcmp(board434506038, 
".....2\n"
".....3\n"
".6.45.\n"
"4..15.\n"
"......\n"
"....1.\n") == 0);
free(board434506038);
board434506038 = NULL;
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 22 );


gamma_delete(board);

    return 0;
}
