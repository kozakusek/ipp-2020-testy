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
uuid: 887635155
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_free_fields(board, 8) == 69 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board446266205 = gamma_board(board);
assert( board446266205 != NULL );
assert( strcmp(board446266205, 
"........\n"
"........\n"
".4......\n"
"....1...\n"
"........\n"
".....7..\n"
"........\n"
"........\n"
"........\n") == 0);
free(board446266205);
board446266205 = NULL;
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );


char* board282697371 = gamma_board(board);
assert( board282697371 != NULL );
assert( strcmp(board282697371, 
"..3.....\n"
"1.......\n"
".4......\n"
"....1..4\n"
"........\n"
".....75.\n"
".8...3..\n"
"........\n"
"........\n") == 0);
free(board282697371);
board282697371 = NULL;
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );


char* board899258066 = gamma_board(board);
assert( board899258066 != NULL );
assert( strcmp(board899258066, 
"..3.....\n"
"1..6....\n"
".4......\n"
"..5.1..4\n"
"3.......\n"
".....75.\n"
".8...3..\n"
".......3\n"
"....5...\n") == 0);
free(board899258066);
board899258066 = NULL;
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, -1, 8) == 0 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_golden_move(board, 7, 4, 4) == 0 );
assert( gamma_free_fields(board, 8) == 44 );


gamma_delete(board);

    return 0;
}
