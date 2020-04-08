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
uuid: 875183875
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );


char* board241202560 = gamma_board(board);
assert( board241202560 != NULL );
assert( strcmp(board241202560, 
".........\n"
".........\n"
"..5......\n"
".........\n"
"........3\n"
".........\n"
".........\n"
"...2.....\n") == 0);
free(board241202560);
board241202560 = NULL;
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, -1, -1) == 0 );


char* board253466925 = gamma_board(board);
assert( board253466925 != NULL );
assert( strcmp(board253466925, 
"........4\n"
"........1\n"
"..52.....\n"
".........\n"
"........3\n"
".........\n"
".........\n"
"...2.5...\n") == 0);
free(board253466925);
board253466925 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );


char* board268513856 = gamma_board(board);
assert( board268513856 != NULL );
assert( strcmp(board268513856, 
"........4\n"
"........1\n"
"..52...5.\n"
".3.....1.\n"
"....21..3\n"
".........\n"
"........2\n"
"...2.5...\n") == 0);
free(board268513856);
board268513856 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );


char* board102127040 = gamma_board(board);
assert( board102127040 != NULL );
assert( strcmp(board102127040, 
"....3.5.4\n"
"..2...4.1\n"
"..52...54\n"
".3....51.\n"
".3..21..3\n"
"..35.1..3\n"
"..2.....2\n"
"...435..4\n") == 0);
free(board102127040);
board102127040 = NULL;
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );


gamma_delete(board);

    return 0;
}
