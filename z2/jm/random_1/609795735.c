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
uuid: 609795735
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board342603626 = gamma_board(board);
assert( board342603626 != NULL );
assert( strcmp(board342603626, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board342603626);
board342603626 = NULL;
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_free_fields(board, 3) == 43 );


char* board608114501 = gamma_board(board);
assert( board608114501 != NULL );
assert( strcmp(board608114501, 
"..1....\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1....3.\n"
".......\n"
"....2.2\n"
".2....2\n") == 0);
free(board608114501);
board608114501 = NULL;
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 41 );


char* board112511800 = gamma_board(board);
assert( board112511800 != NULL );
assert( strcmp(board112511800, 
"..1....\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1..1.3.\n"
".......\n"
"...42.2\n"
".2....2\n") == 0);
free(board112511800);
board112511800 = NULL;
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );


char* board434075335 = gamma_board(board);
assert( board434075335 != NULL );
assert( strcmp(board434075335, 
"..1.3..\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1..1.3.\n"
".......\n"
"...42.2\n"
".2....2\n") == 0);
free(board434075335);
board434075335 = NULL;


char* board423878168 = gamma_board(board);
assert( board423878168 != NULL );
assert( strcmp(board423878168, 
"..1.3..\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1..1.3.\n"
".......\n"
"...42.2\n"
".2....2\n") == 0);
free(board423878168);
board423878168 = NULL;
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 3, 8) == 0 );


char* board829966147 = gamma_board(board);
assert( board829966147 != NULL );
assert( strcmp(board829966147, 
"..1.3..\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1..1.3.\n"
".......\n"
"...42.2\n"
".2....2\n") == 0);
free(board829966147);
board829966147 = NULL;
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board699137326 = gamma_board(board);
assert( board699137326 != NULL );
assert( strcmp(board699137326, 
"..1.3..\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1..1.3.\n"
"1......\n"
"...42.2\n"
".2....2\n") == 0);
free(board699137326);
board699137326 = NULL;
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 4) == 38 );


char* board190090992 = gamma_board(board);
assert( board190090992 != NULL );
assert( strcmp(board190090992, 
".41.3..\n"
"..3.1.2\n"
"....34.\n"
"..4....\n"
"1..1.3.\n"
"1......\n"
"...42.2\n"
".2....2\n") == 0);
free(board190090992);
board190090992 = NULL;
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board889326634 = gamma_board(board);
assert( board889326634 != NULL );
assert( strcmp(board889326634, 
".41.3..\n"
"..3.1.2\n"
"....34.\n"
".44....\n"
"1..1.3.\n"
"1......\n"
"...42.2\n"
".2....2\n") == 0);
free(board889326634);
board889326634 = NULL;
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
