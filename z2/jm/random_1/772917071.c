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
uuid: 772917071
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 20, 10, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 239 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 6, 15) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 3, -1, 14) == 0 );
assert( gamma_move(board, 4, 0, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 7, 19) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_golden_move(board, 6, 19, 7) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 229 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 5, 8, 17) == 1 );


char* board860049702 = gamma_board(board);
assert( board860049702 != NULL );
assert( strcmp(board860049702, 
".......5....\n"
"............\n"
"........5...\n"
"............\n"
"4.....10.....\n"
"............\n"
"....7.......\n"
"..........4.\n"
"............\n"
"............\n"
"............\n"
"6....8......\n"
"............\n"
"............\n"
"..........9.\n"
"............\n"
"...7........\n"
".....11...8.\n"
".........6..\n"
"..........10.\n") == 0);
free(board860049702);
board860049702 = NULL;
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 3, 18) == 1 );
assert( gamma_move(board, 10, 2, 16) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_move(board, 2, 1, 19) == 1 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 11, 18) == 1 );


char* board939626809 = gamma_board(board);
assert( board939626809 != NULL );
assert( strcmp(board939626809, 
".2.....5....\n"
"...9....1..4\n"
"........5...\n"
"..10.........\n"
"4.....10.....\n"
"............\n"
"....7.......\n"
"..........4.\n"
"............\n"
"............\n"
"............\n"
"6....8......\n"
".....8......\n"
"............\n"
"..........9.\n"
"............\n"
"...8........\n"
"7....11...8.\n"
".........6..\n"
"..........10.\n") == 0);
free(board939626809);
board939626809 = NULL;
assert( gamma_move(board, 5, 11, -1) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 10, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 9, 17) == 1 );
assert( gamma_golden_move(board, 6, 19, 1) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_free_fields(board, 8) == 209 );
assert( gamma_move(board, 9, 10, 17) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 9, 12) == 1 );


char* board158840440 = gamma_board(board);
assert( board158840440 != NULL );
assert( strcmp(board158840440, 
".2.....5....\n"
"...9....1..4\n"
".4......569.\n"
"..10.........\n"
"4.....10.....\n"
"............\n"
"....7......3\n"
".........104.\n"
"...6......7.\n"
".8.7.......2\n"
"............\n"
"6....8......\n"
".....8......\n"
".1..........\n"
"..........9.\n"
"............\n"
"...8........\n"
"7....11...8.\n"
".........6..\n"
"..........10.\n") == 0);
free(board158840440);
board158840440 = NULL;
assert( gamma_move(board, 2, 12, 20) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 206 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 8, 17) == 0 );
assert( gamma_move(board, 9, 2, 17) == 1 );
assert( gamma_move(board, 10, -1, 10) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_free_fields(board, 1) == 202 );
assert( gamma_golden_move(board, 1, 10, 11) == 1 );


char* board900731582 = gamma_board(board);
assert( board900731582 != NULL );
assert( strcmp(board900731582, 
".2.....5....\n"
"...9....1..4\n"
".49.....569.\n"
"..10.........\n"
"4.....10.....\n"
"............\n"
"....7......3\n"
".........104.\n"
"...6......1.\n"
".8.7.......2\n"
"............\n"
"6....86.....\n"
".....8......\n"
".1.....1....\n"
".7........9.\n"
".3..........\n"
"...8........\n"
"7....11...8.\n"
".........6..\n"
"..........10.\n") == 0);
free(board900731582);
board900731582 = NULL;
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 11, 20) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 10, 5, 13) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_free_fields(board, 5) == 194 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 8, 2, 16) == 0 );


char* board223294910 = gamma_board(board);
assert( board223294910 != NULL );
assert( strcmp(board223294910, 
".2.....5....\n"
"...9....1..4\n"
".49.....569.\n"
"..10.........\n"
"4.....10.....\n"
"............\n"
"....7106...13\n"
"......4..104.\n"
"...6......1.\n"
".8.7.......2\n"
"..2.........\n"
"6....86.....\n"
".....8......\n"
".17....1...5\n"
".7........9.\n"
".3..........\n"
"...8........\n"
"7....11...8.\n"
"...8.....6..\n"
"6.........10.\n") == 0);
free(board223294910);
board223294910 = NULL;
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 3, 19) == 1 );
assert( gamma_free_fields(board, 7) == 188 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 10, 9, 17) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 187 );
assert( gamma_move(board, 3, 0, 17) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 2, 18) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, -1) == 0 );
assert( gamma_move(board, 1, 1, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 14) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 178 );
assert( gamma_move(board, 6, 2, 14) == 1 );
assert( gamma_move(board, 8, 7, 18) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 12, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 2, 19) == 1 );
assert( gamma_move(board, 6, 1, 18) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 11, 15) == 1 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_move(board, 1, -1, 20) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 18) == 1 );
assert( gamma_move(board, 3, 11, 20) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 7) == 171 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 9, 2, 16) == 0 );
assert( gamma_move(board, 10, 6, 13) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_busy_fields(board, 5) == 6 );


char* board760513297 = gamma_board(board);
assert( board760513297 != NULL );
assert( strcmp(board760513297, 
".247...5....\n"
"..89..281..4\n"
"349.....569.\n"
"..10.........\n"
"41....10....7\n"
"..6........2\n"
"....7106...13\n"
"......4..104.\n"
"...6.5....1.\n"
".8.7...4.2.2\n"
"..2.........\n"
"6.4..861....\n"
".....8......\n"
".17....1...5\n"
"67....5...9.\n"
".3..........\n"
"...827...5..\n"
"7....11...8.\n"
"39.8.....6.4\n"
"6......10..10.\n") == 0);
free(board760513297);
board760513297 = NULL;
assert( gamma_move(board, 6, 12, 10) == 0 );


char* board159609481 = gamma_board(board);
assert( board159609481 != NULL );
assert( strcmp(board159609481, 
".247...5....\n"
"..89..281..4\n"
"349.....569.\n"
"..10.........\n"
"41....10....7\n"
"..6........2\n"
"....7106...13\n"
"......4..104.\n"
"...6.5....1.\n"
".8.7...4.2.2\n"
"..2.........\n"
"6.4..861....\n"
".....8......\n"
".17....1...5\n"
"67....5...9.\n"
".3..........\n"
"...827...5..\n"
"7....11...8.\n"
"39.8.....6.4\n"
"6......10..10.\n") == 0);
free(board159609481);
board159609481 = NULL;
assert( gamma_move(board, 8, -1, 17) == 0 );
assert( gamma_free_fields(board, 8) == 169 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 15) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_golden_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 4, 18) == 1 );
assert( gamma_move(board, 10, 11, 17) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 158 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 20) == 0 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board280643917 = gamma_board(board);
assert( board280643917 != NULL );
assert( strcmp(board280643917, 
".247...5....\n"
"..899.281..4\n"
"349.....56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....7106...13\n"
"......4..104.\n"
"...6.5....1.\n"
".8.7...4.2.2\n"
"2.25........\n"
"6.4.2861....\n"
".....8......\n"
".17....1...5\n"
"67....5...99\n"
".3.7........\n"
"..3827...5..\n"
"7..10.11...8.\n"
"3998.....6.4\n"
"6......10..10.\n") == 0);
free(board280643917);
board280643917 = NULL;
assert( gamma_move(board, 8, 11, 8) == 1 );
assert( gamma_move(board, 9, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 20) == 0 );
assert( gamma_move(board, 3, -1, 18) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );


char* board212369313 = gamma_board(board);
assert( board212369313 != NULL );
assert( strcmp(board212369313, 
".247...5....\n"
"..899.281..4\n"
"349.....56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....7106...13\n"
"......4..104.\n"
"...6.5....1.\n"
".8.7...4.2.2\n"
"2.25.....9..\n"
"6.4.2861...8\n"
".....8......\n"
".17....1...5\n"
"67....5...99\n"
".3.7........\n"
"..3827...5..\n"
"7..10.11..58.\n"
"3998.....6.4\n"
"6......10..10.\n") == 0);
free(board212369313);
board212369313 = NULL;
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_free_fields(board, 3) == 155 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 6, 6, 17) == 0 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 9, 4, 17) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_free_fields(board, 3) == 153 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 18) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board145589607 = gamma_board(board);
assert( board145589607 != NULL );
assert( strcmp(board145589607, 
".247...5....\n"
"..899.281..4\n"
"349.9...56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....7106...13\n"
"......4..104.\n"
"...6.5...11.\n"
".8.7...4.2.2\n"
"2.25.....9..\n"
"6.4.2861...8\n"
".....8......\n"
".17....1...5\n"
"67....5...99\n"
".3.7.....1..\n"
"..3827...5..\n"
"7..10.11..58.\n"
"3998.....6.4\n"
"6......10..10.\n") == 0);
free(board145589607);
board145589607 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 6, 17) == 1 );
assert( gamma_move(board, 9, 7, 13) == 1 );
assert( gamma_golden_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, -1, 15) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_free_fields(board, 3) == 150 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_golden_move(board, 9, 15, 5) == 0 );
assert( gamma_move(board, 10, -1, 4) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 148 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_golden_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_free_fields(board, 9) == 145 );
assert( gamma_move(board, 10, -1, 16) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 9, 0, 19) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 19) == 0 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_move(board, 4, 6, 19) == 0 );
assert( gamma_move(board, 5, -1, 11) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, -1, 15) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 5, 19) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 20 );


char* board602753020 = gamma_board(board);
assert( board602753020 != NULL );
assert( strcmp(board602753020, 
"9247.3.5....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7...4.2.2\n"
"2.25.....9..\n"
"6.4.2861...8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.3827...5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6..5...10..10.\n") == 0);
free(board602753020);
board602753020 = NULL;
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_golden_move(board, 9, 17, 2) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 9, 20) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 1, 10, 19) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, -1, 15) == 0 );
assert( gamma_free_fields(board, 3) == 142 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board631207068 = gamma_board(board);
assert( board631207068 != NULL );
assert( strcmp(board631207068, 
"9247.3.5....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7...4.2.2\n"
"2.25.....9..\n"
"6.4.2861...8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.3827...5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6..5...10..10.\n") == 0);
free(board631207068);
board631207068 = NULL;
assert( gamma_move(board, 5, 7, 20) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 12, 12) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 0, 17) == 0 );
assert( gamma_move(board, 10, 9, 19) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 8, 4, 18) == 0 );
assert( gamma_move(board, 9, 6, 15) == 0 );
assert( gamma_golden_move(board, 9, 19, 1) == 0 );
assert( gamma_move(board, 10, 10, 15) == 0 );
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_move(board, 2, 19, 5) == 0 );
assert( gamma_move(board, 3, 6, 19) == 1 );
assert( gamma_move(board, 4, -1, 19) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 2, 20) == 0 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, -1) == 0 );
assert( gamma_move(board, 10, 4, 18) == 0 );


char* board135109152 = gamma_board(board);
assert( board135109152 != NULL );
assert( strcmp(board135109152, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.3827...5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6..5...10..10.\n") == 0);
free(board135109152);
board135109152 = NULL;
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );


char* board685731176 = gamma_board(board);
assert( board685731176 != NULL );
assert( strcmp(board685731176, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.38271..5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6.55...10..10.\n") == 0);
free(board685731176);
board685731176 = NULL;
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_golden_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_golden_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 10, 0, 15) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 7, 8, 19) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 9, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_free_fields(board, 10) == 22 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 9, 7, 20) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_move(board, 1, 12, 16) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 12, 3) == 0 );


char* board821386357 = gamma_board(board);
assert( board821386357 != NULL );
assert( strcmp(board821386357, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.38271..5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6.55...10..10.\n") == 0);
free(board821386357);
board821386357 = NULL;
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_golden_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_golden_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 11, 20) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 9 );


char* board601159957 = gamma_board(board);
assert( board601159957 != NULL );
assert( strcmp(board601159957, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.38271..5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6.55...10..10.\n") == 0);
free(board601159957);
board601159957 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 5, 2, 18) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 10, 3, 17) == 0 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 9, 1, -1) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_golden_move(board, 7, 15, 11) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 9, 2, 20) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 20) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );


char* board438577832 = gamma_board(board);
assert( board438577832 != NULL );
assert( strcmp(board438577832, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....1..\n"
"10.38271..5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6.55...10..10.\n") == 0);
free(board438577832);
board438577832 = NULL;
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 11, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_golden_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 8, 16) == 0 );
assert( gamma_move(board, 8, 12, 12) == 0 );
assert( gamma_move(board, 9, 10, 4) == 1 );


char* board556764302 = gamma_board(board);
assert( board556764302 != NULL );
assert( strcmp(board556764302, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
".....8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....199\n"
"10.38271..5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6.55...10..10.\n") == 0);
free(board556764302);
board556764302 = NULL;
assert( gamma_move(board, 10, 9, 16) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, -1, 16) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 4, 18) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 0, 20) == 0 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_move(board, 1, 6, 20) == 0 );
assert( gamma_golden_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, -1, 14) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );


char* board996480092 = gamma_board(board);
assert( board996480092 != NULL );
assert( strcmp(board996480092, 
"9247.335....\n"
"..899.281..4\n"
"349.9.8.56910\n"
"..10.........\n"
"41....10.3..7\n"
"..6........2\n"
"....71069..13\n"
"......4..104.\n"
"...6.5...11.\n"
"98.7..34.2.2\n"
"2.25.....9..\n"
"6.4.28615..8\n"
"..4..8......\n"
".17.3..1...5\n"
"67....5...99\n"
".3.77....199\n"
"10.38271..5..\n"
"7..10.11..58.\n"
"39988....6.4\n"
"6.55...10..10.\n") == 0);
free(board996480092);
board996480092 = NULL;
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_golden_move(board, 5, 15, 11) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, -1, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 10, 9) == 0 );


gamma_delete(board);

    return 0;
}
