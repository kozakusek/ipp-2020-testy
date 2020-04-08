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
uuid: 767402387
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 11, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_free_fields(board, 2) == 142 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 142 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_golden_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );


char* board523724788 = gamma_board(board);
assert( board523724788 != NULL );
assert( strcmp(board523724788, 
".............\n"
"........5...1\n"
".............\n"
"..........1..\n"
".............\n"
"............5\n"
".............\n"
"1.......2....\n"
".............\n"
".............\n"
".............\n") == 0);
free(board523724788);
board523724788 = NULL;
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 131 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 4) == 126 );
assert( gamma_free_fields(board, 5) == 126 );
assert( gamma_move(board, 1, 12, 4) == 0 );


char* board586586015 = gamma_board(board);
assert( board586586015 != NULL );
assert( strcmp(board586586015, 
"..........3..\n"
"......2.5...1\n"
".....3.......\n"
".........21..\n"
"...1...3.....\n"
"............5\n"
".4...........\n"
"1.......24...\n"
"..13.........\n"
".4...........\n"
".............\n") == 0);
free(board586586015);
board586586015 = NULL;
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_golden_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 121 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 119 );
assert( gamma_move(board, 3, 3, 11) == 0 );


char* board738375140 = gamma_board(board);
assert( board738375140 != NULL );
assert( strcmp(board738375140, 
"5.........3..\n"
"......2.5...1\n"
".....3.......\n"
".........21..\n"
"...1...3.....\n"
".........2..5\n"
".4...........\n"
"1...5...244..\n"
"..13...4.5...\n"
".4...........\n"
".......3.....\n") == 0);
free(board738375140);
board738375140 = NULL;
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_golden_move(board, 4, 9, 6) == 0 );


char* board251550354 = gamma_board(board);
assert( board251550354 != NULL );
assert( strcmp(board251550354, 
"5.......4.3..\n"
"......2.5...1\n"
".....3.......\n"
".........21..\n"
"...1...3.....\n"
".........2..5\n"
".4...........\n"
"1...5...244..\n"
"..13...4.5...\n"
".4...........\n"
".......32....\n") == 0);
free(board251550354);
board251550354 = NULL;
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
