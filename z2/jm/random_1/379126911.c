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
uuid: 379126911
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 2) == 57 );


char* board203525361 = gamma_board(board);
assert( board203525361 != NULL );
assert( strcmp(board203525361, 
".........\n"
".1.......\n"
"........1\n"
"...4.....\n"
"...3.....\n"
".....2...\n"
"........5\n") == 0);
free(board203525361);
board203525361 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_free_fields(board, 1) == 54 );


char* board803469700 = gamma_board(board);
assert( board803469700 != NULL );
assert( strcmp(board803469700, 
"...1.....\n"
".1......4\n"
".....5..1\n"
"...4.....\n"
"...3.....\n"
".....2...\n"
"........5\n") == 0);
free(board803469700);
board803469700 = NULL;
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board570446253 = gamma_board(board);
assert( board570446253 != NULL );
assert( strcmp(board570446253, 
".2.1..3..\n"
".14.....4\n"
".....55.1\n"
"2..4.....\n"
"...3..5..\n"
"..14.2...\n"
"5.1.....5\n") == 0);
free(board570446253);
board570446253 = NULL;
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );


char* board351003368 = gamma_board(board);
assert( board351003368 != NULL );
assert( strcmp(board351003368, 
".2.15.34.\n"
".14.....4\n"
".....55.1\n"
"2..4.....\n"
"...32.5..\n"
"..1442..2\n"
"5.1.....5\n") == 0);
free(board351003368);
board351003368 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
