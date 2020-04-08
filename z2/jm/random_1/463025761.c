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
uuid: 463025761
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, -1, 7) == 0 );


char* board452515823 = gamma_board(board);
assert( board452515823 != NULL );
assert( strcmp(board452515823, 
"........\n"
"...1....\n"
"........\n"
"........\n"
"....2...\n"
".....3..\n"
"........\n"
"........\n") == 0);
free(board452515823);
board452515823 = NULL;
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 7) == 0 );


char* board878795837 = gamma_board(board);
assert( board878795837 != NULL );
assert( strcmp(board878795837, 
"..5.....\n"
".4.1....\n"
".......6\n"
".2..1...\n"
"....2...\n"
".....3..\n"
"........\n"
"........\n") == 0);
free(board878795837);
board878795837 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 3) == 0 );


char* board939598310 = gamma_board(board);
assert( board939598310 != NULL );
assert( strcmp(board939598310, 
"..57....\n"
".4.1..1.\n"
"......26\n"
".2..1...\n"
"....2...\n"
".....3..\n"
"........\n"
"........\n") == 0);
free(board939598310);
board939598310 = NULL;
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_move(board, 1, 6, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );


gamma_delete(board);

    return 0;
}
