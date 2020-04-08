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
uuid: 947355813
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 7, 5);
assert( board != NULL );




char* board942696094 = gamma_board(board);
assert( board942696094 != NULL );
assert( strcmp(board942696094, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board942696094);
board942696094 = NULL;
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );


char* board617754464 = gamma_board(board);
assert( board617754464 != NULL );
assert( strcmp(board617754464, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board617754464);
board617754464 = NULL;
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );


char* board622983718 = gamma_board(board);
assert( board622983718 != NULL );
assert( strcmp(board622983718, 
".........\n"
"....7....\n"
".........\n"
"1........\n"
".........\n"
".46......\n"
"3........\n") == 0);
free(board622983718);
board622983718 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );


char* board661753907 = gamma_board(board);
assert( board661753907 != NULL );
assert( strcmp(board661753907, 
"........3\n"
"....7....\n"
"....25...\n"
"1.......6\n"
".........\n"
".46......\n"
"3........\n") == 0);
free(board661753907);
board661753907 = NULL;
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
