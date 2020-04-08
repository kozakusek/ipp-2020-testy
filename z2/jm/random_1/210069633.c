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
uuid: 210069633
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 3) == 96 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );


char* board513703333 = gamma_board(board);
assert( board513703333 != NULL );
assert( strcmp(board513703333, 
"..............\n"
".....1........\n"
"..............\n"
".3............\n"
"..............\n"
"..............\n"
"..............\n") == 0);
free(board513703333);
board513703333 = NULL;
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );


char* board544144756 = gamma_board(board);
assert( board544144756 != NULL );
assert( strcmp(board544144756, 
"..............\n"
".....1........\n"
"..............\n"
".3.2..........\n"
"..............\n"
"..............\n"
"..............\n") == 0);
free(board544144756);
board544144756 = NULL;
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 93 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_free_fields(board, 2) == 93 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );


char* board586270146 = gamma_board(board);
assert( board586270146 != NULL );
assert( strcmp(board586270146, 
"..............\n"
".....1........\n"
"..............\n"
".3.2..........\n"
"..............\n"
".....1........\n"
"......2.....1.\n") == 0);
free(board586270146);
board586270146 = NULL;
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );


char* board730070084 = gamma_board(board);
assert( board730070084 != NULL );
assert( strcmp(board730070084, 
"..1.......4...\n"
".....1........\n"
"....3.........\n"
".3.2..........\n"
"..............\n"
".....1........\n"
"......2.....1.\n") == 0);
free(board730070084);
board730070084 = NULL;
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );


char* board838794918 = gamma_board(board);
assert( board838794918 != NULL );
assert( strcmp(board838794918, 
"..1.......4...\n"
".....1........\n"
"....3.........\n"
".3.2..........\n"
"..............\n"
".....1........\n"
"......2.....1.\n") == 0);
free(board838794918);
board838794918 = NULL;
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_golden_move(board, 4, 3, 12) == 0 );


char* board977484595 = gamma_board(board);
assert( board977484595 != NULL );
assert( strcmp(board977484595, 
"4.1..2....4...\n"
".....1.14.....\n"
"....3.........\n"
".3.2.42.2....4\n"
"..2.....1.....\n"
".....1..3.....\n"
"13.2.22.....1.\n") == 0);
free(board977484595);
board977484595 = NULL;
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_move(board, 1, 6, 10) == 0 );


char* board296220965 = gamma_board(board);
assert( board296220965 != NULL );
assert( strcmp(board296220965, 
"4.1..2....4...\n"
".....4.14.....\n"
"....3.1.......\n"
".3.2.42.2....4\n"
"..2...2.1.....\n"
".4...1..3.....\n"
"13.2.22.....1.\n") == 0);
free(board296220965);
board296220965 = NULL;
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );


char* board840582064 = gamma_board(board);
assert( board840582064 != NULL );
assert( strcmp(board840582064, 
"4.1..2....4...\n"
".....4.14.....\n"
"....3.1.......\n"
".3.2.42.2....4\n"
"..2...2.1.....\n"
".4...1..3.....\n"
"13.2.22.....1.\n") == 0);
free(board840582064);
board840582064 = NULL;
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 12, -1) == 0 );


gamma_delete(board);

    return 0;
}
