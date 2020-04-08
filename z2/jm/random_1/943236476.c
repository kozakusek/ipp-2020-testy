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
uuid: 943236476
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );


char* board116311855 = gamma_board(board);
assert( board116311855 != NULL );
assert( strcmp(board116311855, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".......1\n"
"........\n"
"........\n"
"........\n") == 0);
free(board116311855);
board116311855 = NULL;
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );


char* board226602284 = gamma_board(board);
assert( board226602284 != NULL );
assert( strcmp(board226602284, 
"........\n"
"........\n"
"...47...\n"
"3.......\n"
"8.....5.\n"
"..1.....\n"
"5......1\n"
".1......\n"
".....5..\n"
"........\n") == 0);
free(board226602284);
board226602284 = NULL;
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 70 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );


char* board216566667 = gamma_board(board);
assert( board216566667 != NULL );
assert( strcmp(board216566667, 
"........\n"
"........\n"
"...47...\n"
"3..2.5..\n"
"8.....5.\n"
"..1.....\n"
"5......1\n"
".1..38..\n"
"1.2..5..\n"
"........\n") == 0);
free(board216566667);
board216566667 = NULL;
assert( gamma_move(board, 6, 6, 7) == 1 );


char* board171491403 = gamma_board(board);
assert( board171491403 != NULL );
assert( strcmp(board171491403, 
"........\n"
"........\n"
"...47.6.\n"
"3..2.5..\n"
"8.....5.\n"
"..1.....\n"
"5......1\n"
".1..38..\n"
"1.2..5..\n"
"........\n") == 0);
free(board171491403);
board171491403 = NULL;
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
