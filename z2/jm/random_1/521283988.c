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
uuid: 521283988
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 5, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 6, 14, 1) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 1, 14, -1) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_golden_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


char* board306099253 = gamma_board(board);
assert( board306099253 != NULL );
assert( strcmp(board306099253, 
"2.56...3.6.2...\n"
".....4.25.72...\n"
"....7...4......\n"
".7...343....4.6\n"
"...68..848.73..\n") == 0);
free(board306099253);
board306099253 = NULL;
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_golden_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );


char* board263292570 = gamma_board(board);
assert( board263292570 != NULL );
assert( strcmp(board263292570, 
"2.56...3.6.2...\n"
".....4.25.72...\n"
"....7...4......\n"
".7...343....4.6\n"
"...688.848.734.\n") == 0);
free(board263292570);
board263292570 = NULL;
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board619594062 = gamma_board(board);
assert( board619594062 != NULL );
assert( strcmp(board619594062, 
"2.56...3.6.22..\n"
".....4.25.72...\n"
"..5.7...4......\n"
".7...343..7.4.6\n"
"...688.848.734.\n") == 0);
free(board619594062);
board619594062 = NULL;


gamma_delete(board);

    return 0;
}
