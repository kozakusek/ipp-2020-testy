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
uuid: 412885258
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );


char* board902519313 = gamma_board(board);
assert( board902519313 != NULL );
assert( strcmp(board902519313, 
"............\n"
".....3......\n"
"..1.........\n"
"..........3.\n"
"............\n"
"............\n"
".1..........\n"
"............\n"
"......2.....\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board902519313);
board902519313 = NULL;
assert( gamma_golden_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_golden_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_free_fields(board, 3) == 168 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board489874990 = gamma_board(board);
assert( board489874990 != NULL );
assert( strcmp(board489874990, 
"...........3\n"
".....3..2...\n"
"..1......3..\n"
"..........3.\n"
"............\n"
"..1.........\n"
".1.........2\n"
".......1....\n"
"......2.....\n"
"............\n"
"...2........\n"
"............\n"
"..3..3......\n"
".1..........\n"
".......2....\n") == 0);
free(board489874990);
board489874990 = NULL;
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_free_fields(board, 1) == 162 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_free_fields(board, 1) == 158 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, -1, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );


char* board200958728 = gamma_board(board);
assert( board200958728 != NULL );
assert( strcmp(board200958728, 
"...........3\n"
"....13..2...\n"
"..1......3..\n"
"....3....23.\n"
"............\n"
"..1.........\n"
".12........2\n"
".......1....\n"
".....22.2...\n"
"3...........\n"
"...2........\n"
"........1.1.\n"
"..3.3333....\n"
".1..........\n"
".......2....\n") == 0);
free(board200958728);
board200958728 = NULL;
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 7, 13) == 1 );


char* board810438765 = gamma_board(board);
assert( board810438765 != NULL );
assert( strcmp(board810438765, 
"...........3\n"
"...113.22...\n"
"..1......3..\n"
"....3....23.\n"
"............\n"
"..1.........\n"
".12........2\n"
".......1....\n"
".....22.2...\n"
"3...........\n"
"...2........\n"
"........1.1.\n"
"..3.3333....\n"
".1..........\n"
".......2....\n") == 0);
free(board810438765);
board810438765 = NULL;
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 3, -1, 13) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );


char* board716684680 = gamma_board(board);
assert( board716684680 != NULL );
assert( strcmp(board716684680, 
"...........3\n"
"...113.22...\n"
"..1......3..\n"
"....3....23.\n"
"............\n"
"..1.........\n"
".12........2\n"
".......1....\n"
".....22.2...\n"
"3...........\n"
"...2........\n"
"........1.1.\n"
"..3.3333....\n"
".1..........\n"
".......2....\n") == 0);
free(board716684680);
board716684680 = NULL;
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );


char* board770735411 = gamma_board(board);
assert( board770735411 != NULL );
assert( strcmp(board770735411, 
"...........3\n"
"...113.22...\n"
"..1......3..\n"
"....3....23.\n"
"............\n"
"..1.........\n"
".12........2\n"
".......1....\n"
".....22.2...\n"
"3...........\n"
"...2........\n"
"........1.1.\n"
"..3.3333....\n"
".1..........\n"
".......2....\n") == 0);
free(board770735411);
board770735411 = NULL;
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_golden_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );


char* board716287801 = gamma_board(board);
assert( board716287801 != NULL );
assert( strcmp(board716287801, 
"...........3\n"
"...113.22...\n"
"..1......3..\n"
"....3....23.\n"
"............\n"
"..1.........\n"
".12........2\n"
".......1....\n"
".....22.2...\n"
"3...........\n"
"...2........\n"
"...2....1.1.\n"
"..3.3333....\n"
".1..........\n"
".......2....\n") == 0);
free(board716287801);
board716287801 = NULL;
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_golden_move(board, 1, 12, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );


char* board446073196 = gamma_board(board);
assert( board446073196 != NULL );
assert( strcmp(board446073196, 
"...........3\n"
"...113.22...\n"
"..1......3..\n"
"....3....23.\n"
"............\n"
"..1.........\n"
".12........2\n"
".......1....\n"
".....22.2...\n"
"3...........\n"
"...2........\n"
"...2....1.1.\n"
"..3.3333....\n"
".1..........\n"
".......2....\n") == 0);
free(board446073196);
board446073196 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 12, 9) == 0 );


gamma_delete(board);

    return 0;
}
