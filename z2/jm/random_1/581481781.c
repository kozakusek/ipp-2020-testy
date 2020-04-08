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
uuid: 581481781
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );


char* board962548746 = gamma_board(board);
assert( board962548746 != NULL );
assert( strcmp(board962548746, 
"......\n"
"...1..\n"
"......\n"
"......\n"
"2.....\n"
"......\n") == 0);
free(board962548746);
board962548746 = NULL;
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );


char* board881304695 = gamma_board(board);
assert( board881304695 != NULL );
assert( strcmp(board881304695, 
"......\n"
"...1..\n"
"......\n"
"...3..\n"
"2.....\n"
"......\n") == 0);
free(board881304695);
board881304695 = NULL;
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board606565206 = gamma_board(board);
assert( board606565206 != NULL );
assert( strcmp(board606565206, 
"......\n"
"...1..\n"
"....5.\n"
"...3..\n"
"2.....\n"
".....6\n") == 0);
free(board606565206);
board606565206 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );


char* board219193871 = gamma_board(board);
assert( board219193871 != NULL );
assert( strcmp(board219193871, 
"....3.\n"
"...2..\n"
".1..5.\n"
"...3.1\n"
"2.....\n"
"..4..6\n") == 0);
free(board219193871);
board219193871 = NULL;
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );


gamma_delete(board);

    return 0;
}
