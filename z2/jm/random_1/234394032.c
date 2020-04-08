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
uuid: 234394032
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 6, 5);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 80 );


char* board120736246 = gamma_board(board);
assert( board120736246 != NULL );
assert( strcmp(board120736246, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board120736246);
board120736246 = NULL;
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_free_fields(board, 3) == 77 );


char* board896041745 = gamma_board(board);
assert( board896041745 != NULL );
assert( strcmp(board896041745, 
"........\n"
"...2....\n"
"...3....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".......1\n"
"........\n") == 0);
free(board896041745);
board896041745 = NULL;
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 5, 0, 5) == 1 );


char* board245129846 = gamma_board(board);
assert( board245129846 != NULL );
assert( strcmp(board245129846, 
"........\n"
"...2..4.\n"
"...3....\n"
"........\n"
"5.....2.\n"
"........\n"
"........\n"
"........\n"
".......1\n"
"......6.\n") == 0);
free(board245129846);
board245129846 = NULL;
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board646780367 = gamma_board(board);
assert( board646780367 != NULL );
assert( strcmp(board646780367, 
"...6....\n"
"3..2..42\n"
"...3.6.5\n"
"4....2..\n"
"54.2162.\n"
".5......\n"
"..3..1..\n"
"13......\n"
"..3....1\n"
".4...465\n") == 0);
free(board646780367);
board646780367 = NULL;
assert( gamma_move(board, 5, 6, 4) == 1 );


char* board654724335 = gamma_board(board);
assert( board654724335 != NULL );
assert( strcmp(board654724335, 
"...6....\n"
"3..2..42\n"
"...3.6.5\n"
"4....2..\n"
"54.2162.\n"
".5....5.\n"
"..3..1..\n"
"13......\n"
"..3....1\n"
".4...465\n") == 0);
free(board654724335);
board654724335 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );


gamma_delete(board);

    return 0;
}
