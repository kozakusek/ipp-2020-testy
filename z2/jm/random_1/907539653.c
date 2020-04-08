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
uuid: 907539653
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );


char* board623208408 = gamma_board(board);
assert( board623208408 != NULL );
assert( strcmp(board623208408, 
"........\n"
"2.2.....\n"
"........\n"
"........\n"
"...2....\n"
".......1\n") == 0);
free(board623208408);
board623208408 = NULL;
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );


char* board215503345 = gamma_board(board);
assert( board215503345 != NULL );
assert( strcmp(board215503345, 
"........\n"
"2.2.....\n"
"........\n"
"..2.....\n"
"...2....\n"
"...1...1\n") == 0);
free(board215503345);
board215503345 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );


char* board670611653 = gamma_board(board);
assert( board670611653 != NULL );
assert( strcmp(board670611653, 
"1.......\n"
"2.2.....\n"
".2......\n"
"..2...1.\n"
"...2....\n"
"...1...1\n") == 0);
free(board670611653);
board670611653 = NULL;
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );


char* board885333449 = gamma_board(board);
assert( board885333449 != NULL );
assert( strcmp(board885333449, 
"1......3\n"
"232.....\n"
".2......\n"
"..2...1.\n"
"...2....\n"
"...1...1\n") == 0);
free(board885333449);
board885333449 = NULL;
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board421885210 = gamma_board(board);
assert( board421885210 != NULL );
assert( strcmp(board421885210, 
"1......3\n"
"232.....\n"
".2......\n"
"..2...1.\n"
"...2....\n"
"...1...1\n") == 0);
free(board421885210);
board421885210 = NULL;
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 5) == 1 );


gamma_delete(board);

    return 0;
}
