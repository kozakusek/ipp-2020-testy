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
uuid: 897299848
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 11, 8, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 8, -1, -1) == 0 );


char* board565233910 = gamma_board(board);
assert( board565233910 != NULL );
assert( strcmp(board565233910, 
"...............\n"
"...............\n"
"...............\n"
".5.......4.....\n"
"...6...........\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"............7..\n") == 0);
free(board565233910);
board565233910 = NULL;
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, -1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board545632521 = gamma_board(board);
assert( board545632521 != NULL );
assert( strcmp(board545632521, 
"....1.....3....\n"
"...............\n"
"..3............\n"
".5.......4.....\n"
"...6...........\n"
"....2..........\n"
"..2............\n"
"...........1...\n"
"............5..\n"
"...............\n"
"4...........7..\n") == 0);
free(board545632521);
board545632521 = NULL;
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 11) == 0 );
assert( gamma_free_fields(board, 7) == 150 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 146 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_free_fields(board, 7) == 144 );
assert( gamma_move(board, 8, 14, 10) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 142 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 7, 14, 0) == 1 );
assert( gamma_golden_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );


char* board496259355 = gamma_board(board);
assert( board496259355 != NULL );
assert( strcmp(board496259355, 
"...21.2...3...8\n"
"...6.......3...\n"
"1.3......7.....\n"
".5..6....4.7...\n"
"7486...2.......\n"
"...32..5.....4.\n"
"..2......11....\n"
"1....5....61...\n"
"...63..24.5.5..\n"
".7.....7....8..\n"
"4...........7.7\n") == 0);
free(board496259355);
board496259355 = NULL;
assert( gamma_move(board, 6, 14, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 15, 9) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_free_fields(board, 7) == 119 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 8, 13, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 8) == 1 );
assert( gamma_free_fields(board, 6) == 113 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_golden_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );


char* board727496040 = gamma_board(board);
assert( board727496040 != NULL );
assert( strcmp(board727496040, 
"...21.2...3.5.8\n"
"...6.......3.86\n"
"1.3......7..5..\n"
".5..6....4.7...\n"
"7486...2.......\n"
".4.324.5....64.\n"
"..2......11..1.\n"
"1....5..5.61...\n"
"...63..24.5.5..\n"
".7.....7.7..8..\n"
"4...........7.7\n") == 0);
free(board727496040);
board727496040 = NULL;
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 13, -1) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board559245805 = gamma_board(board);
assert( board559245805 != NULL );
assert( strcmp(board559245805, 
"...21.2...5.5.8\n"
"...6.......3.86\n"
"1.3...3..7..5..\n"
".5..6....4.7...\n"
"7486...2.......\n"
".4.324.5....64.\n"
"..2......11..1.\n"
"1....5..5.61...\n"
"...63..24.5.5..\n"
".7.....7.7..8..\n"
"4.2........67.7\n") == 0);
free(board559245805);
board559245805 = NULL;
assert( gamma_move(board, 3, 14, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board237506549 = gamma_board(board);
assert( board237506549 != NULL );
assert( strcmp(board237506549, 
"7..21.2...5.5.8\n"
"...6.......3.86\n"
"1.3...3..7..5..\n"
".5..65...4.7...\n"
"7486...2.......\n"
".4.324.5....64.\n"
"..2......11..13\n"
"1....5..5.61...\n"
"...63.124.5.5..\n"
".7.....7.7..8..\n"
"4.24.......67.7\n") == 0);
free(board237506549);
board237506549 = NULL;
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_golden_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 23 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );


gamma_delete(board);

    return 0;
}
