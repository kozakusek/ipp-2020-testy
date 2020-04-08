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
uuid: 201993501
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );


char* board780295222 = gamma_board(board);
assert( board780295222 != NULL );
assert( strcmp(board780295222, 
"........\n"
".2..1...\n"
"........\n"
"........\n"
"6.......\n"
".....3..\n") == 0);
free(board780295222);
board780295222 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 4, 1) == 1 );


char* board138586758 = gamma_board(board);
assert( board138586758 != NULL );
assert( strcmp(board138586758, 
"........\n"
"42..1..2\n"
"..3.....\n"
"........\n"
"6...5...\n"
"..1..3..\n") == 0);
free(board138586758);
board138586758 = NULL;
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board903672098 = gamma_board(board);
assert( board903672098 != NULL );
assert( strcmp(board903672098, 
"...1...1\n"
"42..13.2\n"
"..3.....\n"
"2.5...3.\n"
"6..25...\n"
"5.1.63..\n") == 0);
free(board903672098);
board903672098 = NULL;
assert( gamma_free_fields(board, 4) == 30 );


char* board925160866 = gamma_board(board);
assert( board925160866 != NULL );
assert( strcmp(board925160866, 
"...1...1\n"
"42..13.2\n"
"..3.....\n"
"2.5...3.\n"
"6..25...\n"
"5.1.63..\n") == 0);
free(board925160866);
board925160866 = NULL;
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 2, 5, 3) == 0 );


char* board163071855 = gamma_board(board);
assert( board163071855 != NULL );
assert( strcmp(board163071855, 
"...1...1\n"
"42..13.2\n"
"..3..5..\n"
"2.5...3.\n"
"6..25...\n"
"5.1.63..\n") == 0);
free(board163071855);
board163071855 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );


char* board822555530 = gamma_board(board);
assert( board822555530 != NULL );
assert( strcmp(board822555530, 
"...1...1\n"
"42..13.2\n"
".33..5..\n"
"2.5...3.\n"
"6..25...\n"
"5.1.63..\n") == 0);
free(board822555530);
board822555530 = NULL;
assert( gamma_move(board, 6, 6, 2) == 0 );


gamma_delete(board);

    return 0;
}
