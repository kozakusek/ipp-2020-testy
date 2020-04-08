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
uuid: 675273531
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );


char* board740530964 = gamma_board(board);
assert( board740530964 != NULL );
assert( strcmp(board740530964, 
".....2\n"
"5.3...\n"
".....2\n"
"......\n"
"......\n"
"...1..\n"
"......\n"
"...4..\n") == 0);
free(board740530964);
board740530964 = NULL;
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board462370055 = gamma_board(board);
assert( board462370055 != NULL );
assert( strcmp(board462370055, 
".....2\n"
"5.3...\n"
".....2\n"
"......\n"
"......\n"
"...1..\n"
"......\n"
"...4..\n") == 0);
free(board462370055);
board462370055 = NULL;
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_golden_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );


char* board481647865 = gamma_board(board);
assert( board481647865 != NULL );
assert( strcmp(board481647865, 
"4...12\n"
"5.3...\n"
"..1..2\n"
"......\n"
"......\n"
"...1..\n"
"......\n"
"...4..\n") == 0);
free(board481647865);
board481647865 = NULL;
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_free_fields(board, 3) == 31 );


gamma_delete(board);

    return 0;
}
