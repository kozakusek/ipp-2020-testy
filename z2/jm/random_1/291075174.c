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
uuid: 291075174
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_golden_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );


char* board165776409 = gamma_board(board);
assert( board165776409 != NULL );
assert( strcmp(board165776409, 
".......5..\n"
"..........\n"
".1........\n"
"..........\n"
"..........\n"
".....6....\n"
"..........\n"
"..........\n") == 0);
free(board165776409);
board165776409 = NULL;


char* board786254265 = gamma_board(board);
assert( board786254265 != NULL );
assert( strcmp(board786254265, 
".......5..\n"
"..........\n"
".1........\n"
"..........\n"
"..........\n"
".....6....\n"
"..........\n"
"..........\n") == 0);
free(board786254265);
board786254265 = NULL;
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );


char* board705727319 = gamma_board(board);
assert( board705727319 != NULL );
assert( strcmp(board705727319, 
"..1....5..\n"
"..........\n"
".1........\n"
"..........\n"
".42...5...\n"
"....46....\n"
".6........\n"
"..2.....3.\n") == 0);
free(board705727319);
board705727319 = NULL;
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 53 );


char* board266366899 = gamma_board(board);
assert( board266366899 != NULL );
assert( strcmp(board266366899, 
"..1....5..\n"
"...1.3.12.\n"
"21........\n"
".....3....\n"
".42...5...\n"
".21.46..4.\n"
".61.4..6.5\n"
"..2.25..32\n") == 0);
free(board266366899);
board266366899 = NULL;
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_golden_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );


char* board472894051 = gamma_board(board);
assert( board472894051 != NULL );
assert( strcmp(board472894051, 
"..1....5..\n"
"...1.3.12.\n"
"21..1.....\n"
".....3....\n"
".42...5...\n"
".21.46..4.\n"
".61.4..6.5\n"
"..2.25..32\n") == 0);
free(board472894051);
board472894051 = NULL;
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );


gamma_delete(board);

    return 0;
}
