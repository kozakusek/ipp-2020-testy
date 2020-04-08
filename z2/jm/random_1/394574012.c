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
uuid: 394574012
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );


char* board171350897 = gamma_board(board);
assert( board171350897 != NULL );
assert( strcmp(board171350897, 
"..........\n"
"..........\n"
"...1......\n"
".......4.1\n"
".....2....\n"
"..........\n"
"..........\n"
"..........\n"
".......3.1\n"
".5........\n") == 0);
free(board171350897);
board171350897 = NULL;
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );


char* board555647393 = gamma_board(board);
assert( board555647393 != NULL );
assert( strcmp(board555647393, 
"..........\n"
"..........\n"
"...1......\n"
".......4.1\n"
".....2....\n"
"..........\n"
".......2..\n"
".4........\n"
".......3.1\n"
".55.......\n") == 0);
free(board555647393);
board555647393 = NULL;
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 89 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 9, 4) == 1 );


char* board375250910 = gamma_board(board);
assert( board375250910 != NULL );
assert( strcmp(board375250910, 
"..........\n"
"..........\n"
"...1...5.4\n"
".......4.1\n"
".....2....\n"
".........3\n"
".......2..\n"
".4........\n"
"......23.1\n"
".55.....2.\n") == 0);
free(board375250910);
board375250910 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_golden_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );


char* board934053509 = gamma_board(board);
assert( board934053509 != NULL );
assert( strcmp(board934053509, 
"4....3....\n"
"..5.....1.\n"
"...1.335.4\n"
".......4.1\n"
".....2....\n"
"..54.3...3\n"
".11....25.\n"
".4........\n"
"2.....23.1\n"
".55.....2.\n") == 0);
free(board934053509);
board934053509 = NULL;
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board101276650 = gamma_board(board);
assert( board101276650 != NULL );
assert( strcmp(board101276650, 
"4....3....\n"
"..5.....1.\n"
"...1.335.4\n"
".......4.1\n"
".....2....\n"
"..54.3..53\n"
".11....25.\n"
".4........\n"
"2.....23.1\n"
".55.....2.\n") == 0);
free(board101276650);
board101276650 = NULL;
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board829170970 = gamma_board(board);
assert( board829170970 != NULL );
assert( strcmp(board829170970, 
"4....3....\n"
"..5.....1.\n"
"...1.335.4\n"
".......4.1\n"
".....2....\n"
"..54.3..53\n"
".11....25.\n"
".4........\n"
"2.....2311\n"
".55.....2.\n") == 0);
free(board829170970);
board829170970 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );


char* board614000863 = gamma_board(board);
assert( board614000863 != NULL );
assert( strcmp(board614000863, 
"4....3....\n"
"..5.....1.\n"
"...1.335.4\n"
".......4.1\n"
".....2....\n"
"..54.3..53\n"
".11....25.\n"
".4........\n"
"2....22311\n"
".55.....2.\n") == 0);
free(board614000863);
board614000863 = NULL;
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );


char* board424888821 = gamma_board(board);
assert( board424888821 != NULL );
assert( strcmp(board424888821, 
"4....3....\n"
"..5.....1.\n"
"...1.335.4\n"
".......4.1\n"
".....2....\n"
"..54.3..53\n"
".11....25.\n"
".4........\n"
"2....22311\n"
".55.....2.\n") == 0);
free(board424888821);
board424888821 = NULL;


gamma_delete(board);

    return 0;
}
