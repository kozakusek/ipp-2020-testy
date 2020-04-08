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
uuid: 199953087
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );


char* board905463781 = gamma_board(board);
assert( board905463781 != NULL );
assert( strcmp(board905463781, 
"......\n"
"..4..7\n"
".1....\n"
"......\n"
".4.3..\n"
".5..2.\n"
"....1.\n"
"..6...\n"
"...4..\n") == 0);
free(board905463781);
board905463781 = NULL;
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_golden_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );


char* board403516669 = gamma_board(board);
assert( board403516669 != NULL );
assert( strcmp(board403516669, 
"...6..\n"
"..4.77\n"
".1.3..\n"
"....5.\n"
".4.3..\n"
".5..22\n"
"....17\n"
"..6.2.\n"
"...4..\n") == 0);
free(board403516669);
board403516669 = NULL;
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
