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
uuid: 577757441
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );


char* board615200445 = gamma_board(board);
assert( board615200445 != NULL );
assert( strcmp(board615200445, 
"......\n"
"3..2..\n"
".2....\n"
"......\n"
".....3\n"
"......\n"
"..1...\n") == 0);
free(board615200445);
board615200445 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board317873971 = gamma_board(board);
assert( board317873971 != NULL );
assert( strcmp(board317873971, 
"....3.\n"
"332213\n"
".2..2.\n"
"......\n"
"...2.3\n"
"....4.\n"
"1.1..3\n") == 0);
free(board317873971);
board317873971 = NULL;


gamma_delete(board);

    return 0;
}
