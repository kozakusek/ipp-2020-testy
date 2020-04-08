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
uuid: 907984358
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 3, 8);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board207732161 = gamma_board(board);
assert( board207732161 != NULL );
assert( strcmp(board207732161, 
".3.......\n"
".........\n"
"...3...3.\n"
"2........\n"
".........\n"
".....2...\n") == 0);
free(board207732161);
board207732161 = NULL;
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 39 );


char* board412398749 = gamma_board(board);
assert( board412398749 != NULL );
assert( strcmp(board412398749, 
".32......\n"
"....1....\n"
"2..1...3.\n"
"21.....23\n"
"2.......3\n"
"..3..23..\n") == 0);
free(board412398749);
board412398749 = NULL;
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );


char* board386609332 = gamma_board(board);
assert( board386609332 != NULL );
assert( strcmp(board386609332, 
".32....3.\n"
"....1....\n"
"2..1...3.\n"
"211....23\n"
"2.......3\n"
"..3..23..\n") == 0);
free(board386609332);
board386609332 = NULL;


gamma_delete(board);

    return 0;
}
