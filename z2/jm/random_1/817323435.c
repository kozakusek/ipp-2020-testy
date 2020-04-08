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
uuid: 817323435
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(20, 2, 11, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 18, 1) == 1 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 7, 17, -1) == 0 );
assert( gamma_golden_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 19, 1) == 1 );
assert( gamma_move(board, 10, 2, -1) == 0 );
assert( gamma_move(board, 11, 7, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 16, 0) == 1 );
assert( gamma_move(board, 9, 13, -1) == 0 );
assert( gamma_free_fields(board, 11) == 34 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 1, 19) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 5, 15, 1) == 1 );
assert( gamma_move(board, 7, 20, -1) == 0 );
assert( gamma_move(board, 8, 18, 1) == 0 );
assert( gamma_move(board, 9, 12, -1) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_free_fields(board, 10) == 30 );
assert( gamma_golden_move(board, 10, 1, 13) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );


char* board612760354 = gamma_board(board);
assert( board612760354 != NULL );
assert( strcmp(board612760354, 
"....1..11...2545..38\n"
"..9..2.11.4..7...7...\n") == 0);
free(board612760354);
board612760354 = NULL;
assert( gamma_move(board, 10, -1, 0) == 0 );
assert( gamma_move(board, 11, 4, -1) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 1, 13) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 9, -1) == 0 );


char* board647588589 = gamma_board(board);
assert( board647588589 != NULL );
assert( strcmp(board647588589, 
"....1..11...2545..38\n"
"..9..2.11.4..7...7...\n") == 0);
free(board647588589);
board647588589 = NULL;
assert( gamma_move(board, 8, 16, 1) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 11, 17, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 14, 2) == 0 );


char* board393120884 = gamma_board(board);
assert( board393120884 != NULL );
assert( strcmp(board393120884, 
"....1..11...25458.38\n"
"..9..2.11.4..7...7...\n") == 0);
free(board393120884);
board393120884 = NULL;
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 17, 1) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 20, 1) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 20, 0) == 0 );


char* board409678301 = gamma_board(board);
assert( board409678301 != NULL );
assert( strcmp(board409678301, 
"....1..11...254581038\n"
"..98.2.11.47.7...7...\n") == 0);
free(board409678301);
board409678301 = NULL;
assert( gamma_move(board, 8, 16, 0) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_free_fields(board, 9) == 21 );
assert( gamma_move(board, 10, 20, 1) == 0 );
assert( gamma_move(board, 11, 18, 0) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );


char* board400575064 = gamma_board(board);
assert( board400575064 != NULL );
assert( strcmp(board400575064, 
"....1..11...254581038\n"
"..98.2.11.4737...7.11.\n") == 0);
free(board400575064);
board400575064 = NULL;


gamma_delete(board);

    return 0;
}
