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
uuid: 949683759
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 31 );


char* board613870224 = gamma_board(board);
assert( board613870224 != NULL );
assert( strcmp(board613870224, 
"...1..\n"
".4....\n"
"......\n"
"3.....\n"
"....1.\n"
".....3\n") == 0);
free(board613870224);
board613870224 = NULL;
assert( gamma_move(board, 2, 2, 2) == 1 );


char* board619264288 = gamma_board(board);
assert( board619264288 != NULL );
assert( strcmp(board619264288, 
"...1..\n"
".4....\n"
"......\n"
"3.2...\n"
"....1.\n"
".....3\n") == 0);
free(board619264288);
board619264288 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );


char* board652687927 = gamma_board(board);
assert( board652687927 != NULL );
assert( strcmp(board652687927, 
"5.51..\n"
"14....\n"
".4....\n"
"3.2...\n"
"....3.\n"
".....3\n") == 0);
free(board652687927);
board652687927 = NULL;
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board466086856 = gamma_board(board);
assert( board466086856 != NULL );
assert( strcmp(board466086856, 
"5.51..\n"
"14.1..\n"
".4....\n"
"3.2...\n"
"....3.\n"
".....3\n") == 0);
free(board466086856);
board466086856 = NULL;
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );


gamma_delete(board);

    return 0;
}
