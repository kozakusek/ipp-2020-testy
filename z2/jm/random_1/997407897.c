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
uuid: 997407897
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );


char* board889108930 = gamma_board(board);
assert( board889108930 != NULL );
assert( strcmp(board889108930, 
"........\n"
"........\n"
".......3\n"
"........\n"
"........\n"
"........\n"
"..4.....\n"
"........\n"
"........\n"
"........\n") == 0);
free(board889108930);
board889108930 = NULL;
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );


char* board713553380 = gamma_board(board);
assert( board713553380 != NULL );
assert( strcmp(board713553380, 
".....3..\n"
"........\n"
".......3\n"
"....7...\n"
"...7...3\n"
".......5\n"
"514.....\n"
"........\n"
"........\n"
"..4.3...\n") == 0);
free(board713553380);
board713553380 = NULL;
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board161323768 = gamma_board(board);
assert( board161323768 != NULL );
assert( strcmp(board161323768, 
".....3..\n"
".5......\n"
".......3\n"
"....7...\n"
"...7...3\n"
".......5\n"
"514.....\n"
"........\n"
"........\n"
"..4.3...\n") == 0);
free(board161323768);
board161323768 = NULL;
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board155476124 = gamma_board(board);
assert( board155476124 != NULL );
assert( strcmp(board155476124, 
".....32.\n"
".5......\n"
"...1...3\n"
"....7...\n"
"...7...3\n"
".......5\n"
"514.....\n"
"........\n"
"........\n"
"..4.3...\n") == 0);
free(board155476124);
board155476124 = NULL;
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_golden_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );


char* board305765356 = gamma_board(board);
assert( board305765356 != NULL );
assert( strcmp(board305765356, 
".2...327\n"
".5.....6\n"
"...1..13\n"
"....7...\n"
"...7...3\n"
".......5\n"
"514.....\n"
"....7...\n"
"........\n"
"..4.3...\n") == 0);
free(board305765356);
board305765356 = NULL;
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 59 );


char* board108866867 = gamma_board(board);
assert( board108866867 != NULL );
assert( strcmp(board108866867, 
".2...327\n"
".5.....6\n"
"...1..13\n"
"....7...\n"
"...7...3\n"
".....7.5\n"
"514...3.\n"
"....7...\n"
"........\n"
"..4.3...\n") == 0);
free(board108866867);
board108866867 = NULL;
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );


gamma_delete(board);

    return 0;
}
