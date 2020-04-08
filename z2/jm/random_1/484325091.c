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
uuid: 484325091
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 8, 12, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 118 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_golden_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_free_fields(board, 4) == 116 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 115 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 13, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 10, 4) == 1 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 12, 14, -1) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board112607063 = gamma_board(board);
assert( board112607063 != NULL );
assert( strcmp(board112607063, 
".....5........3\n"
"...............\n"
".........1.....\n"
"..........10....\n"
".....8....4..1.\n"
"......2.....2..\n"
"........3......\n"
"...............\n") == 0);
free(board112607063);
board112607063 = NULL;
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_free_fields(board, 9) == 107 );
assert( gamma_move(board, 10, 7, 6) == 1 );
assert( gamma_move(board, 11, 14, 5) == 1 );
assert( gamma_move(board, 12, 13, 8) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 105 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 4, 1, 2) == 1 );


char* board761899622 = gamma_board(board);
assert( board761899622 != NULL );
assert( strcmp(board761899622, 
"...3.5........3\n"
".......10.......\n"
".......4.19...11\n"
"..........10....\n"
".....8....4..1.\n"
".4....2.....2..\n"
"........3......\n"
".........8.....\n") == 0);
free(board761899622);
board761899622 = NULL;
assert( gamma_move(board, 6, 13, 7) == 1 );
assert( gamma_move(board, 8, 7, -1) == 0 );
assert( gamma_move(board, 9, 13, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 0, 7) == 1 );
assert( gamma_move(board, 11, 9, 4) == 1 );
assert( gamma_move(board, 12, -1, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 98 );


char* board546493239 = gamma_board(board);
assert( board546493239 != NULL );
assert( strcmp(board546493239, 
"10..3.5.......63\n"
".......10.....9.\n"
".......4.19...11\n"
".........1110....\n"
".....8....4..1.\n"
".4....2.....2..\n"
"........3......\n"
"...1.....8.....\n") == 0);
free(board546493239);
board546493239 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, -1, 8) == 0 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_free_fields(board, 10) == 94 );
assert( gamma_move(board, 11, 14, 6) == 1 );
assert( gamma_free_fields(board, 11) == 93 );
assert( gamma_move(board, 12, 11, 4) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 90 );


char* board869578139 = gamma_board(board);
assert( board869578139 != NULL );
assert( strcmp(board869578139, 
"10..3.5210.....63\n"
".......10.....911\n"
"..2.6..4.19...11\n"
".........111012...\n"
"5.8..8....4..1.\n"
".4....2.....2..\n"
"........3......\n"
"...1.....8.....\n") == 0);
free(board869578139);
board869578139 = NULL;
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_free_fields(board, 9) == 89 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 12, -1, 7) == 0 );
assert( gamma_free_fields(board, 12) == 89 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_free_fields(board, 1) == 88 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_move(board, 7, 11, -1) == 0 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );


char* board224881058 = gamma_board(board);
assert( board224881058 != NULL );
assert( strcmp(board224881058, 
"10..3.52108.1..63\n"
".......10.....911\n"
"..2.6.114.19...11\n"
".........111012...\n"
"5.8..8....4..1.\n"
"94.5..2....42..\n"
".....1..3......\n"
"...1...10.8.....\n") == 0);
free(board224881058);
board224881058 = NULL;
assert( gamma_golden_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_free_fields(board, 8) == 81 );
assert( gamma_move(board, 10, 9, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 13, 4) == 1 );
assert( gamma_move(board, 8, 14, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 76 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_golden_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 9, 2) == 1 );


char* board793264790 = gamma_board(board);
assert( board793264790 != NULL );
assert( strcmp(board793264790, 
"10..3.52108.1..63\n"
".......10.3...911\n"
"..2.6.114.19...11\n"
"1........111012.7.\n"
"5.812.8...104..1.\n"
"94.5.52..10.422.\n"
".....1..3......\n"
"5..1...10.8.....\n") == 0);
free(board793264790);
board793264790 = NULL;
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 14, 3) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_free_fields(board, 11) == 68 );


gamma_delete(board);

    return 0;
}
