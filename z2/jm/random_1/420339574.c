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
uuid: 420339574
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );


char* board815426726 = gamma_board(board);
assert( board815426726 != NULL );
assert( strcmp(board815426726, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"3.........\n"
"..........\n"
"..........\n") == 0);
free(board815426726);
board815426726 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );


char* board221223261 = gamma_board(board);
assert( board221223261 != NULL );
assert( strcmp(board221223261, 
"......3...\n"
"......3...\n"
"..........\n"
"..........\n"
"3.......1.\n"
".4........\n"
"..........\n") == 0);
free(board221223261);
board221223261 = NULL;
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board369691025 = gamma_board(board);
assert( board369691025 != NULL );
assert( strcmp(board369691025, 
"......3...\n"
"......3...\n"
"..........\n"
".......4..\n"
"3.......1.\n"
".4........\n"
"..........\n") == 0);
free(board369691025);
board369691025 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 61 );


char* board152024067 = gamma_board(board);
assert( board152024067 != NULL );
assert( strcmp(board152024067, 
"......3...\n"
"......3...\n"
"........1.\n"
"4......4..\n"
"3.......1.\n"
".4.3......\n"
"..........\n") == 0);
free(board152024067);
board152024067 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );


char* board399362515 = gamma_board(board);
assert( board399362515 != NULL );
assert( strcmp(board399362515, 
"......3...\n"
"......3...\n"
"........1.\n"
"4......4..\n"
"3.......1.\n"
".4.3......\n"
"..........\n") == 0);
free(board399362515);
board399362515 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 3, 2) == 1 );


char* board281872013 = gamma_board(board);
assert( board281872013 != NULL );
assert( strcmp(board281872013, 
"......3...\n"
"......3...\n"
"........1.\n"
"4......4..\n"
"3..1....1.\n"
".4.3......\n"
"....3.....\n") == 0);
free(board281872013);
board281872013 = NULL;
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );


char* board854486517 = gamma_board(board);
assert( board854486517 != NULL );
assert( strcmp(board854486517, 
"......3...\n"
"......3...\n"
".......21.\n"
"4......4..\n"
"3..1....1.\n"
".4.3......\n"
"....3.....\n") == 0);
free(board854486517);
board854486517 = NULL;
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_move(board, 4, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );


gamma_delete(board);

    return 0;
}
