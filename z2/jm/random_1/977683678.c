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
uuid: 977683678
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 8, 7);
assert( board != NULL );


assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 8, 7, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );


char* board658703630 = gamma_board(board);
assert( board658703630 != NULL );
assert( strcmp(board658703630, 
"...7..447\n"
"..1...46.\n"
"...1..18.\n"
".3..7....\n"
".5..4..5.\n"
"........5\n"
"82.......\n"
".........\n") == 0);
free(board658703630);
board658703630 = NULL;
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_free_fields(board, 5) == 52 );


char* board684532045 = gamma_board(board);
assert( board684532045 != NULL );
assert( strcmp(board684532045, 
"...7..447\n"
"8.1...46.\n"
"...1..18.\n"
".3..7....\n"
".5..41.5.\n"
"........5\n"
"82.......\n"
".........\n") == 0);
free(board684532045);
board684532045 = NULL;
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board476736572 = gamma_board(board);
assert( board476736572 != NULL );
assert( strcmp(board476736572, 
"...7..447\n"
"8.1...46.\n"
"...1..18.\n"
".3..7....\n"
".5..41.5.\n"
"........5\n"
"82.......\n"
".........\n") == 0);
free(board476736572);
board476736572 = NULL;
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 8, 5) == 1 );


gamma_delete(board);

    return 0;
}
