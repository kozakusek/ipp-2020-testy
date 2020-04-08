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
uuid: 791848540
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_free_fields(board, 7) == 79 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_free_fields(board, 2) == 71 );


char* board403557258 = gamma_board(board);
assert( board403557258 != NULL );
assert( strcmp(board403557258, 
".4.......\n"
"......2..\n"
"....4....\n"
"..5.1....\n"
".........\n"
"......6..\n"
".........\n"
".....4.5.\n"
"..36.....\n") == 0);
free(board403557258);
board403557258 = NULL;
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );


char* board614542599 = gamma_board(board);
assert( board614542599 != NULL );
assert( strcmp(board614542599, 
".4.......\n"
"......2..\n"
"....4....\n"
"..5.1....\n"
".........\n"
"......6..\n"
".......3.\n"
".....4.5.\n"
"..367....\n") == 0);
free(board614542599);
board614542599 = NULL;
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );


char* board222849162 = gamma_board(board);
assert( board222849162 != NULL );
assert( strcmp(board222849162, 
"64..2....\n"
"..3...2..\n"
"....44...\n"
"..5.16...\n"
"....3.2..\n"
".2.3.16..\n"
"4......3.\n"
".5...4.5.\n"
"..367....\n") == 0);
free(board222849162);
board222849162 = NULL;
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );


gamma_delete(board);

    return 0;
}
