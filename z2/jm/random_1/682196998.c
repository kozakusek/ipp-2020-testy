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
uuid: 682196998
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 4, 7);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 180 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_free_fields(board, 2) == 179 );


char* board178999454 = gamma_board(board);
assert( board178999454 != NULL );
assert( strcmp(board178999454, 
"............\n"
"............\n"
"............\n"
".....2......\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board178999454);
board178999454 = NULL;
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 4) == 177 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_golden_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );


char* board327601226 = gamma_board(board);
assert( board327601226 != NULL );
assert( strcmp(board327601226, 
"............\n"
"..........2.\n"
"............\n"
".....2......\n"
"............\n"
"............\n"
"............\n"
".3........1.\n"
".4..........\n"
"............\n"
"3...........\n"
"4..2........\n"
"............\n"
"............\n"
"..1..3...1..\n") == 0);
free(board327601226);
board327601226 = NULL;
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 167 );
assert( gamma_free_fields(board, 1) == 167 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 165 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_free_fields(board, 3) == 163 );


char* board150490818 = gamma_board(board);
assert( board150490818 != NULL );
assert( strcmp(board150490818, 
"......3.....\n"
"......2...2.\n"
".3..........\n"
".....2......\n"
"............\n"
"..2.........\n"
"............\n"
".3......4.1.\n"
".4..........\n"
"............\n"
"3...........\n"
"4..2........\n"
"............\n"
"............\n"
"4.1..3...1..\n") == 0);
free(board150490818);
board150490818 = NULL;
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board581721622 = gamma_board(board);
assert( board581721622 != NULL );
assert( strcmp(board581721622, 
"......3.....\n"
"......2...2.\n"
".3..........\n"
".....2......\n"
".....3......\n"
"..2.........\n"
"............\n"
".3......4.1.\n"
".4..........\n"
"............\n"
"3.2.........\n"
"4..2........\n"
"............\n"
"............\n"
"4.1..3...1..\n") == 0);
free(board581721622);
board581721622 = NULL;
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_free_fields(board, 1) == 160 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 8, 14) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_golden_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_free_fields(board, 3) == 19 );


char* board274762958 = gamma_board(board);
assert( board274762958 != NULL );
assert( strcmp(board274762958, 
".....23.1...\n"
"......2...2.\n"
".34.4.......\n"
".....2...1..\n"
"....33......\n"
"..2.........\n"
"...1......1.\n"
".3......4.1.\n"
".4..4.......\n"
"..2.4.......\n"
"3.2.........\n"
"4..2........\n"
"............\n"
"1........1..\n"
"4.1..3...1.3\n") == 0);
free(board274762958);
board274762958 = NULL;
assert( gamma_move(board, 4, 12, 2) == 0 );


char* board775314362 = gamma_board(board);
assert( board775314362 != NULL );
assert( strcmp(board775314362, 
".....23.1...\n"
"......2...2.\n"
".34.4.......\n"
".....2...1..\n"
"....33......\n"
"..2.........\n"
"...1......1.\n"
".3......4.1.\n"
".4..4.......\n"
"..2.4.......\n"
"3.2.........\n"
"4..2........\n"
"............\n"
"1........1..\n"
"4.1..3...1.3\n") == 0);
free(board775314362);
board775314362 = NULL;
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 12, -1) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board337954937 = gamma_board(board);
assert( board337954937 != NULL );
assert( strcmp(board337954937, 
".....23.1...\n"
"......2...2.\n"
".34.4.......\n"
".....2...1..\n"
"....33......\n"
"..2.........\n"
"...11.....1.\n"
".3......4.1.\n"
".4..4.......\n"
"..2.4.......\n"
"322.........\n"
"4..2........\n"
"4...........\n"
"1........1..\n"
"4.1..3...1.3\n") == 0);
free(board337954937);
board337954937 = NULL;


char* board272001683 = gamma_board(board);
assert( board272001683 != NULL );
assert( strcmp(board272001683, 
".....23.1...\n"
"......2...2.\n"
".34.4.......\n"
".....2...1..\n"
"....33......\n"
"..2.........\n"
"...11.....1.\n"
".3......4.1.\n"
".4..4.......\n"
"..2.4.......\n"
"322.........\n"
"4..2........\n"
"4...........\n"
"1........1..\n"
"4.1..3...1.3\n") == 0);
free(board272001683);
board272001683 = NULL;
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_free_fields(board, 4) == 22 );


char* board990370257 = gamma_board(board);
assert( board990370257 != NULL );
assert( strcmp(board990370257, 
".....23.1...\n"
"......2...2.\n"
".34.4.......\n"
".....2...1..\n"
"....33......\n"
"..2.........\n"
"...11.....1.\n"
".3......4.1.\n"
".4..4.......\n"
"..2.4.......\n"
"322.........\n"
"4..2........\n"
"4...........\n"
"1........1..\n"
"4.1..3...1.3\n") == 0);
free(board990370257);
board990370257 = NULL;
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 4, -1, 12) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 15) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );


gamma_delete(board);

    return 0;
}
