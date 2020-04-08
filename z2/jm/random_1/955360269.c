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
uuid: 955360269
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );


char* board714446132 = gamma_board(board);
assert( board714446132 != NULL );
assert( strcmp(board714446132, 
".........4\n"
"..1.......\n"
"..........\n"
".......3..\n"
"........5.\n"
"...2......\n"
"..........\n") == 0);
free(board714446132);
board714446132 = NULL;
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );


char* board871943862 = gamma_board(board);
assert( board871943862 != NULL );
assert( strcmp(board871943862, 
".........4\n"
"..1..5....\n"
"..5...1..3\n"
".......3..\n"
"...2....54\n"
"...2......\n"
"..1.......\n") == 0);
free(board871943862);
board871943862 = NULL;
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 2) == 0 );


char* board313091238 = gamma_board(board);
assert( board313091238 != NULL );
assert( strcmp(board313091238, 
"......4..4\n"
"..13.5....\n"
"..5...1.53\n"
"...42..3.1\n"
"...2..1.54\n"
"...2.4....\n"
"..1...3...\n") == 0);
free(board313091238);
board313091238 = NULL;
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
