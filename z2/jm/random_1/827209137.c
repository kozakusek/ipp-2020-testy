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
uuid: 827209137
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 8, 9, 8);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );


char* board702467332 = gamma_board(board);
assert( board702467332 != NULL );
assert( strcmp(board702467332, 
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board702467332);
board702467332 = NULL;
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_free_fields(board, 1) == 93 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );


char* board121246196 = gamma_board(board);
assert( board121246196 != NULL );
assert( strcmp(board121246196, 
".......9...3\n"
"..38......1.\n"
"............\n"
"...4.8.5....\n"
"........955.\n"
"..4.4......2\n"
"..8.........\n"
"..3....7.16.\n") == 0);
free(board121246196);
board121246196 = NULL;
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_move(board, 9, -1, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );


char* board466543953 = gamma_board(board);
assert( board466543953 != NULL );
assert( strcmp(board466543953, 
".......9.1.3\n"
"2.38..2...1.\n"
"..........8.\n"
".9.4.8.5....\n"
"........9558\n"
"..4.49...7.2\n"
"..86........\n"
"..3.2..7.16.\n") == 0);
free(board466543953);
board466543953 = NULL;
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_golden_move(board, 6, 3, 4) == 1 );


char* board174688150 = gamma_board(board);
assert( board174688150 != NULL );
assert( strcmp(board174688150, 
".......9.1.3\n"
"2.38..2...1.\n"
"..........8.\n"
"39.6.8.5....\n"
"...45...9558\n"
"..4.49...7.2\n"
"..86........\n"
"..3.2..7.16.\n") == 0);
free(board174688150);
board174688150 = NULL;
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 9, 3, -1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 8, 5) == 1 );


char* board151446917 = gamma_board(board);
assert( board151446917 != NULL );
assert( strcmp(board151446917, 
".....1.9.1.3\n"
"2.38..2...1.\n"
"..4.....3.8.\n"
"39.6.8.5.8.8\n"
".6.45...9558\n"
"..4.49...7.2\n"
"..86........\n"
"..3.2..7316.\n") == 0);
free(board151446917);
board151446917 = NULL;
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, -1, 3) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );


char* board679831328 = gamma_board(board);
assert( board679831328 != NULL );
assert( strcmp(board679831328, 
".....1.9.1.3\n"
"2.38..2...1.\n"
"..4.3...3.8.\n"
"39.6.8.5.8.8\n"
".6.45.4.9558\n"
"..4.49...7.2\n"
"..86...6....\n"
"7.3.2..7316.\n") == 0);
free(board679831328);
board679831328 = NULL;
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );


char* board366555218 = gamma_board(board);
assert( board366555218 != NULL );
assert( strcmp(board366555218, 
".....1.9.1.3\n"
"2.38..2...1.\n"
"..4.3...3.8.\n"
"39.6.8.5.8.8\n"
".6.45.4.9558\n"
"..4.49...7.2\n"
"..86...6....\n"
"7.352..7316.\n") == 0);
free(board366555218);
board366555218 = NULL;
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );


char* board188221098 = gamma_board(board);
assert( board188221098 != NULL );
assert( strcmp(board188221098, 
".....1.9.1.3\n"
"2.38..2...1.\n"
"..483...3.8.\n"
"39.6.8.5.8.8\n"
".6.45.4.9558\n"
"..4.49...722\n"
"..86...6....\n"
"7.352..7316.\n") == 0);
free(board188221098);
board188221098 = NULL;
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_golden_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_move(board, 9, 6, -1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, -1, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );


char* board274213136 = gamma_board(board);
assert( board274213136 != NULL );
assert( strcmp(board274213136, 
"26...1.9.1.3\n"
"2.38..2...1.\n"
"2.483...358.\n"
"39.658.5.838\n"
".6.95.4.9558\n"
"..4.49...722\n"
"2.867.167..8\n"
"7.352..7316.\n") == 0);
free(board274213136);
board274213136 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );


char* board348328018 = gamma_board(board);
assert( board348328018 != NULL );
assert( strcmp(board348328018, 
"263..1.9.1.3\n"
"2.38..2...1.\n"
"2.483...358.\n"
"39.658.5.838\n"
".6.95.4.9558\n"
"..4.498..722\n"
"2.867.167..8\n"
"7.352..7316.\n") == 0);
free(board348328018);
board348328018 = NULL;


gamma_delete(board);

    return 0;
}
