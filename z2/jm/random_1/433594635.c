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
uuid: 433594635
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_golden_move(board, 2, 5, 2) == 1 );


char* board346901045 = gamma_board(board);
assert( board346901045 != NULL );
assert( strcmp(board346901045, 
"..114...\n"
"....3...\n"
".6....5.\n"
"..8.221.\n"
"........\n"
"........\n") == 0);
free(board346901045);
board346901045 = NULL;
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );


char* board505872817 = gamma_board(board);
assert( board505872817 != NULL );
assert( strcmp(board505872817, 
"..114..6\n"
"....3...\n"
".6...556\n"
"..8.221.\n"
"........\n"
"........\n") == 0);
free(board505872817);
board505872817 = NULL;
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );


char* board501146132 = gamma_board(board);
assert( board501146132 != NULL );
assert( strcmp(board501146132, 
"..114..6\n"
"....3...\n"
".6...556\n"
"..8.221.\n"
"........\n"
"........\n") == 0);
free(board501146132);
board501146132 = NULL;
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_move(board, 5, 3, 5) == 1 );


char* board598241878 = gamma_board(board);
assert( board598241878 != NULL );
assert( strcmp(board598241878, 
"..154..6\n"
"....3...\n"
"16...556\n"
"..8.221.\n"
"....2...\n"
"........\n") == 0);
free(board598241878);
board598241878 = NULL;
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );


gamma_delete(board);

    return 0;
}
