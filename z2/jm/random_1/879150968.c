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
uuid: 879150968
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 3, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 7, 3, 2) == 1 );


char* board654940866 = gamma_board(board);
assert( board654940866 != NULL );
assert( strcmp(board654940866, 
"......5.\n"
"........\n"
".74....3\n"
"........\n"
".1......\n"
"...2.4..\n"
"...7....\n"
"........\n"
".......3\n") == 0);
free(board654940866);
board654940866 = NULL;
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );


char* board437755238 = gamma_board(board);
assert( board437755238 != NULL );
assert( strcmp(board437755238, 
"......58\n"
"....8..5\n"
".74.77.3\n"
".4.....4\n"
".1......\n"
"25.2.4.2\n"
".5.7....\n"
".....2.8\n"
".......3\n") == 0);
free(board437755238);
board437755238 = NULL;
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );


gamma_delete(board);

    return 0;
}
