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
uuid: 666247467
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_free_fields(board, 8) == 97 );
assert( gamma_golden_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 96 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_free_fields(board, 5) == 90 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );


char* board384019322 = gamma_board(board);
assert( board384019322 != NULL );
assert( strcmp(board384019322, 
".....7...1\n"
"..........\n"
"..........\n"
"........3.\n"
"..2.......\n"
"...6..6...\n"
"...1......\n"
".1........\n"
"3......8..\n"
"2.........\n") == 0);
free(board384019322);
board384019322 = NULL;
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );


char* board921807241 = gamma_board(board);
assert( board921807241 != NULL );
assert( strcmp(board921807241, 
".....76..1\n"
".7...5....\n"
"........8.\n"
"........3.\n"
".62.......\n"
"..76..6...\n"
"...1......\n"
".1........\n"
"3......8..\n"
"2.....7.43\n") == 0);
free(board921807241);
board921807241 = NULL;
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );


char* board358157022 = gamma_board(board);
assert( board358157022 != NULL );
assert( strcmp(board358157022, 
".....76.41\n"
".7...5....\n"
"........8.\n"
"...1....3.\n"
".62.......\n"
"..765.6...\n"
".3.1......\n"
".1........\n"
"36.....8..\n"
"2.....7.43\n") == 0);
free(board358157022);
board358157022 = NULL;
assert( gamma_move(board, 4, 9, 4) == 1 );


char* board909078082 = gamma_board(board);
assert( board909078082 != NULL );
assert( strcmp(board909078082, 
".....76.41\n"
".7...5....\n"
"........8.\n"
"...1....3.\n"
".62.......\n"
"..765.6..4\n"
".3.1......\n"
".1........\n"
"36.....8..\n"
"2.....7.43\n") == 0);
free(board909078082);
board909078082 = NULL;
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board246877405 = gamma_board(board);
assert( board246877405 != NULL );
assert( strcmp(board246877405, 
".....76.41\n"
".7...5....\n"
"...6...18.\n"
"...182..3.\n"
"26211.....\n"
"..765.6..4\n"
".3.1.1...4\n"
".17.......\n"
"366...68..\n"
"2.343.7.43\n") == 0);
free(board246877405);
board246877405 = NULL;
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );


gamma_delete(board);

    return 0;
}
