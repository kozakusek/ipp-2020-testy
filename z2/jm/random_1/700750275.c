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
uuid: 700750275
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );


char* board889408050 = gamma_board(board);
assert( board889408050 != NULL );
assert( strcmp(board889408050, 
".......\n"
".......\n"
".......\n"
"...2...\n"
".......\n"
".......\n"
".......\n") == 0);
free(board889408050);
board889408050 = NULL;
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );


char* board694485659 = gamma_board(board);
assert( board694485659 != NULL );
assert( strcmp(board694485659, 
".3..4..\n"
"......6\n"
".......\n"
"7..2...\n"
".......\n"
".......\n"
"....5..\n") == 0);
free(board694485659);
board694485659 = NULL;
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board844319358 = gamma_board(board);
assert( board844319358 != NULL );
assert( strcmp(board844319358, 
".3..4..\n"
"......6\n"
".......\n"
"7..2...\n"
".......\n"
".......\n"
"....5..\n") == 0);
free(board844319358);
board844319358 = NULL;
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_golden_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );


char* board587481561 = gamma_board(board);
assert( board587481561 != NULL );
assert( strcmp(board587481561, 
".3..4..\n"
"..8..76\n"
".......\n"
"7.55...\n"
"4......\n"
"1...6..\n"
"....5..\n") == 0);
free(board587481561);
board587481561 = NULL;
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_golden_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );


gamma_delete(board);

    return 0;
}
