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
uuid: 193517648
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_free_fields(board, 5) == 170 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 5, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_golden_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );


char* board235605034 = gamma_board(board);
assert( board235605034 != NULL );
assert( strcmp(board235605034, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
"............\n"
"6....3..2...\n"
".416...51..4\n"
"2...1..6...1\n"
"....164.52.3\n"
"..1.....1...\n"
".....6.....3\n"
".32......3..\n"
"4...3....26.\n"
".2.......55.\n"
"........1...\n"
"3......5.213\n") == 0);
free(board235605034);
board235605034 = NULL;
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_golden_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_free_fields(board, 6) == 127 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );


char* board503261654 = gamma_board(board);
assert( board503261654 != NULL );
assert( strcmp(board503261654, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
"......6...5.\n"
"6....3..225.\n"
".416...51..4\n"
"26..1..6...1\n"
"....164.52.3\n"
"2.1.....1...\n"
".4...6.....3\n"
".32..4...3..\n"
"4..53....26.\n"
".2.4...3455.\n"
"........1...\n"
"3......5.213\n") == 0);
free(board503261654);
board503261654 = NULL;
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_free_fields(board, 6) == 122 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 0) == 0 );


char* board571450188 = gamma_board(board);
assert( board571450188 != NULL );
assert( strcmp(board571450188, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
"......6...5.\n"
"6....3..225.\n"
"6416...51..4\n"
"26..1..6...1\n"
"....164.52.3\n"
"2.1.....1...\n"
".4...6.....3\n"
".32..4...3..\n"
"4..53....26.\n"
".2.4.2.3455.\n"
"........1...\n"
"3......5.213\n") == 0);
free(board571450188);
board571450188 = NULL;
assert( gamma_golden_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );


char* board426720617 = gamma_board(board);
assert( board426720617 != NULL );
assert( strcmp(board426720617, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
"......6..55.\n"
"6...63..225.\n"
"64161..51..4\n"
"26..1..6...1\n"
"....164.52.3\n"
"2.1.....1...\n"
".4...6...3.3\n"
".32.44...3..\n"
"4..53....26.\n"
".2.422.3455.\n"
"........1...\n"
"33.....5.213\n") == 0);
free(board426720617);
board426720617 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );


char* board713304930 = gamma_board(board);
assert( board713304930 != NULL );
assert( strcmp(board713304930, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
"......6..55.\n"
"64..633.225.\n"
"64161..51..4\n"
"26..1..6...1\n"
"....164.52.3\n"
"2.1.....1...\n"
".4..66...3.3\n"
".32.44...3..\n"
"4..53....26.\n"
".2.42233455.\n"
"...4....1...\n"
"33.....5.213\n") == 0);
free(board713304930);
board713304930 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_golden_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_golden_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );


char* board504482756 = gamma_board(board);
assert( board504482756 != NULL );
assert( strcmp(board504482756, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4....6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..6...1\n"
"....164655.3\n"
"221.62..1...\n"
".4..66...3.3\n"
".32.44...3..\n"
"4..533...26.\n"
".2.42233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board504482756);
board504482756 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );


char* board894752047 = gamma_board(board);
assert( board894752047 != NULL );
assert( strcmp(board894752047, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4.5..6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..6...1\n"
"....164655.3\n"
"221.62..1...\n"
".4..66...3.3\n"
".32.44...3..\n"
"4..533...26.\n"
".2.42233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board894752047);
board894752047 = NULL;
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );


char* board457444034 = gamma_board(board);
assert( board457444034 != NULL );
assert( strcmp(board457444034, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4.5..6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..6...1\n"
"....164655.3\n"
"221.62..1...\n"
".4..66...3.3\n"
".32.44...3..\n"
"4..533...26.\n"
".2.42233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board457444034);
board457444034 = NULL;
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );


char* board962635995 = gamma_board(board);
assert( board962635995 != NULL );
assert( strcmp(board962635995, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4.5..6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..6...1\n"
"2...164655.3\n"
"221.62..1...\n"
".4..66...3.3\n"
".32.44...3..\n"
"4..533...26.\n"
".2242233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board962635995);
board962635995 = NULL;
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


char* board825938403 = gamma_board(board);
assert( board825938403 != NULL );
assert( strcmp(board825938403, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4.5..6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..6...1\n"
"2...164655.3\n"
"221.62..1...\n"
".4..66...3.3\n"
".32.44...3..\n"
"4..533...26.\n"
".2242233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board825938403);
board825938403 = NULL;
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_golden_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );


char* board809105431 = gamma_board(board);
assert( board809105431 != NULL );
assert( strcmp(board809105431, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".455..6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..61..1\n"
"2...16465553\n"
"221.62..11..\n"
".4..66...3.3\n"
".32.44...3.2\n"
"4..533...26.\n"
".2242233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board809105431);
board809105431 = NULL;
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );


char* board140663660 = gamma_board(board);
assert( board140663660 != NULL );
assert( strcmp(board140663660, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4556.6.2555\n"
"64..633.225.\n"
"64161..51..4\n"
"26.11..61..1\n"
"2...16465553\n"
"221.62..11..\n"
".4..66...3.3\n"
".32.44...3.2\n"
"4..533...26.\n"
".2242233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board140663660);
board140663660 = NULL;
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_golden_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );


char* board245325253 = gamma_board(board);
assert( board245325253 != NULL );
assert( strcmp(board245325253, 
".....5......\n"
"1.......5...\n"
"...5....4...\n"
".4556.6.2555\n"
"64..633.225.\n"
"64161..51.54\n"
"26.11..61..1\n"
"2..116461553\n"
"221.62..11..\n"
".4..66...3.3\n"
".32.44...3.2\n"
"4..533...26.\n"
".2242233455.\n"
".3.4....1...\n"
"333....5.213\n") == 0);
free(board245325253);
board245325253 = NULL;


gamma_delete(board);

    return 0;
}
