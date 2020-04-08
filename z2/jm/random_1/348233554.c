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
uuid: 348233554
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );


char* board966270204 = gamma_board(board);
assert( board966270204 != NULL );
assert( strcmp(board966270204, 
"........\n"
"........\n"
"........\n"
"..2..13.\n"
"1...3...\n"
"........\n"
"........\n"
".3......\n"
"....1...\n"
"........\n") == 0);
free(board966270204);
board966270204 = NULL;
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_golden_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 1, 8, 6) == 0 );


char* board342145721 = gamma_board(board);
assert( board342145721 != NULL );
assert( strcmp(board342145721, 
".3..2...\n"
"1.......\n"
"........\n"
"..2..13.\n"
"1...3...\n"
"...3....\n"
"........\n"
".3......\n"
"....13.1\n"
".1..1...\n") == 0);
free(board342145721);
board342145721 = NULL;
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );


char* board527942166 = gamma_board(board);
assert( board527942166 != NULL );
assert( strcmp(board527942166, 
".3..2...\n"
"1.......\n"
"...2...2\n"
"..2..13.\n"
"1...312.\n"
"...32...\n"
"........\n"
".3......\n"
"....13.1\n"
".1..1...\n") == 0);
free(board527942166);
board527942166 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );


char* board689955984 = gamma_board(board);
assert( board689955984 != NULL );
assert( strcmp(board689955984, 
".3..2...\n"
"1.......\n"
"...2...2\n"
".22..13.\n"
"1...312.\n"
"...32...\n"
"........\n"
".3......\n"
"....13.1\n"
".1..1...\n") == 0);
free(board689955984);
board689955984 = NULL;
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 3) == 16 );


char* board798674441 = gamma_board(board);
assert( board798674441 != NULL );
assert( strcmp(board798674441, 
".3..2...\n"
"1.......\n"
"...2...2\n"
".22..13.\n"
"1...312.\n"
"...32...\n"
"........\n"
".3......\n"
"....13.1\n"
".1..1...\n") == 0);
free(board798674441);
board798674441 = NULL;


gamma_delete(board);

    return 0;
}
