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
uuid: 582825593
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 13, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 1) == 125 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_free_fields(board, 2) == 124 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_golden_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_move(board, 1, 0, 9) == 0 );


char* board301900012 = gamma_board(board);
assert( board301900012 != NULL );
assert( strcmp(board301900012, 
"....1....2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
".........3\n"
"..........\n"
"....3.1...\n"
"....3.....\n"
"..........\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board301900012);
board301900012 = NULL;
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );


char* board677166681 = gamma_board(board);
assert( board677166681 != NULL );
assert( strcmp(board677166681, 
"....1..3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
".........3\n"
"..........\n"
"....3.1...\n"
"....3.....\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board677166681);
board677166681 = NULL;
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, -1, 12) == 0 );
assert( gamma_golden_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );


char* board231582938 = gamma_board(board);
assert( board231582938 != NULL );
assert( strcmp(board231582938, 
"....1..3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1...\n"
"....3.....\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board231582938);
board231582938 = NULL;
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 3) == 16 );


char* board878220548 = gamma_board(board);
assert( board878220548 != NULL );
assert( strcmp(board878220548, 
"....1..3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1..2\n"
"....3.....\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board878220548);
board878220548 = NULL;
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, -1, 13) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board251196746 = gamma_board(board);
assert( board251196746 != NULL );
assert( strcmp(board251196746, 
"....1..3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1..2\n"
"....33....\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board251196746);
board251196746 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );


char* board895766672 = gamma_board(board);
assert( board895766672 != NULL );
assert( strcmp(board895766672, 
"....1..3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1..2\n"
"....33....\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board895766672);
board895766672 = NULL;
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );


char* board509131704 = gamma_board(board);
assert( board509131704 != NULL );
assert( strcmp(board509131704, 
"....1..3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1..2\n"
"....33..1.\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board509131704);
board509131704 = NULL;
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );


char* board672623471 = gamma_board(board);
assert( board672623471 != NULL );
assert( strcmp(board672623471, 
"....11.3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1..2\n"
"....33..1.\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board672623471);
board672623471 = NULL;
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board902309065 = gamma_board(board);
assert( board902309065 != NULL );
assert( strcmp(board902309065, 
"....11.3.2\n"
"......2...\n"
"........1.\n"
"..........\n"
"..........\n"
"..3......3\n"
"..........\n"
"....3.1..2\n"
"....33..1.\n"
"........1.\n"
"..........\n"
"..........\n"
".........2\n") == 0);
free(board902309065);
board902309065 = NULL;
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_golden_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );


gamma_delete(board);

    return 0;
}
