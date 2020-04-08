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
uuid: 144343081
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, -1) == 0 );


char* board897799971 = gamma_board(board);
assert( board897799971 != NULL );
assert( strcmp(board897799971, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board897799971);
board897799971 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 33 );


char* board879105792 = gamma_board(board);
assert( board879105792 != NULL );
assert( strcmp(board879105792, 
"...2..\n"
".2....\n"
"......\n"
".1....\n"
"......\n"
"......\n") == 0);
free(board879105792);
board879105792 = NULL;
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );


char* board289805806 = gamma_board(board);
assert( board289805806 != NULL );
assert( strcmp(board289805806, 
"...2..\n"
".2....\n"
"......\n"
".1....\n"
"......\n"
"......\n") == 0);
free(board289805806);
board289805806 = NULL;
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board176258658 = gamma_board(board);
assert( board176258658 != NULL );
assert( strcmp(board176258658, 
"..12..\n"
".2..1.\n"
"......\n"
"31...2\n"
"......\n"
".2....\n") == 0);
free(board176258658);
board176258658 = NULL;
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 23 );


gamma_delete(board);

    return 0;
}
