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
uuid: 299994018
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 14, 13, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_free_fields(board, 9) == 115 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 12, 6, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 13, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 107 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_move(board, 12, 3, 8) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_free_fields(board, 3) == 95 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_golden_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_golden_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 10, 7, 13) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_golden_move(board, 10, 3, 2) == 0 );
assert( gamma_free_fields(board, 11) == 87 );
assert( gamma_golden_move(board, 11, 13, 7) == 0 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 13, 11, 0) == 0 );
assert( gamma_move(board, 13, 6, 7) == 1 );
assert( gamma_free_fields(board, 13) == 77 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 11, 13, 8) == 0 );
assert( gamma_move(board, 12, 6, 12) == 1 );
assert( gamma_move(board, 12, 2, 2) == 1 );
assert( gamma_move(board, 13, 2, 4) == 1 );
assert( gamma_move(board, 13, 5, 10) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );


char* board805458544 = gamma_board(board);
assert( board805458544 != NULL );
assert( strcmp(board805458544, 
"...3..210.\n"
"......12..\n"
".....6.8.\n"
"..4.513.38\n"
"...9.7.9.\n"
"..612....7\n"
"2.10104913.5\n"
"....3.1151\n"
".21312.6...\n"
".813741.119\n"
".2135..1237\n"
"7.12.4.9..\n"
"..1124.5106\n"
"11..3810.1.\n") == 0);
free(board805458544);
board805458544 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 0, 12) == 1 );
assert( gamma_move(board, 9, 8, 5) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 13, 7) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 12, 0, 9) == 1 );
assert( gamma_free_fields(board, 12) == 60 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_golden_move(board, 9, 13, 2) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 12, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 3, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );


char* board253914693 = gamma_board(board);
assert( board253914693 != NULL );
assert( strcmp(board253914693, 
"3.43..210.\n"
"8.....12..\n"
".....6.8.\n"
"..4.513.38\n"
"12..92799.\n"
"..612..2.7\n"
"2.1010491335\n"
"....3111151\n"
".21312.6..9\n"
"9813741.119\n"
".2135..1237\n"
"7.12.4.9..\n"
"..1124.5106\n"
"11293810.1.\n") == 0);
free(board253914693);
board253914693 = NULL;
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_free_fields(board, 12) == 53 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );


char* board583576709 = gamma_board(board);
assert( board583576709 != NULL );
assert( strcmp(board583576709, 
"3.43..210.\n"
"8.....12..\n"
".....6.8.\n"
"..4.513.38\n"
"12..92799.\n"
".2612..2.7\n"
"2.1010491335\n"
"....3111151\n"
".21312.6..9\n"
"9813741.119\n"
".2135..1237\n"
"7.12.4.9..\n"
"..1124.5106\n"
"11293810.1.\n") == 0);
free(board583576709);
board583576709 = NULL;
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 8, 3) == 1 );
assert( gamma_move(board, 11, 2, 6) == 1 );
assert( gamma_move(board, 12, 6, 10) == 1 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 13, 7, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );


char* board852573714 = gamma_board(board);
assert( board852573714 != NULL );
assert( strcmp(board852573714, 
"3.43..210.\n"
"8.....12..\n"
".....668.\n"
"..415131238\n"
"123.927998\n"
".2612..2.7\n"
"2.1010491335\n"
"9.11.3111151\n"
".21312.66.9\n"
"9813741.119\n"
".2135..12310\n"
"7.12.4.9..\n"
".5112475106\n"
"11293810121.\n") == 0);
free(board852573714);
board852573714 = NULL;
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 13, 12, 8) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );


char* board905484133 = gamma_board(board);
assert( board905484133 != NULL );
assert( strcmp(board905484133, 
"3.43..210.\n"
"8.....12..\n"
".....668.\n"
"..415131238\n"
"123.927998\n"
".2612..2.7\n"
"2.1010491335\n"
"9.11.3111151\n"
".21312.66.9\n"
"9813741.119\n"
".2135..12310\n"
"7.12.4.9..\n"
".5112475106\n"
"11293810121.\n") == 0);
free(board905484133);
board905484133 = NULL;
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 11, 12, 8) == 0 );
assert( gamma_move(board, 11, 8, 7) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_golden_move(board, 13, 1, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );


char* board640680161 = gamma_board(board);
assert( board640680161 != NULL );
assert( strcmp(board640680161, 
"3.43..210.\n"
"8.....12..\n"
".....6682\n"
"..415131238\n"
"123.927998\n"
".2612..2.7\n"
"2.1010491335\n"
"91311.3111151\n"
".21312.66.9\n"
"9813741.119\n"
".2135..12310\n"
"7.12.4.96.\n"
".5112475106\n"
"11293810121.\n") == 0);
free(board640680161);
board640680161 = NULL;
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );


char* board142085203 = gamma_board(board);
assert( board142085203 != NULL );
assert( strcmp(board142085203, 
"3.43..210.\n"
"8.....12..\n"
".....6682\n"
"..415131238\n"
"123.927998\n"
".2612..2.7\n"
"221010491335\n"
"91311.3111151\n"
".21312.66.9\n"
"9813741.119\n"
".2135..12310\n"
"7.12.4.96.\n"
".5112475106\n"
"112938101216\n") == 0);
free(board142085203);
board142085203 = NULL;
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_golden_move(board, 10, 5, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 12) == 1 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 5, 2) == 1 );


char* board699829243 = gamma_board(board);
assert( board699829243 != NULL );
assert( strcmp(board699829243, 
"3.43..210.\n"
"8....1212..\n"
".....6682\n"
"..415131238\n"
"123.927998\n"
"102612..2.7\n"
"221010491335\n"
"91311.3111151\n"
".21312.66.9\n"
"9813741.119\n"
".2135..12310\n"
"7.12.4396.\n"
".5112475106\n"
"112938101216\n") == 0);
free(board699829243);
board699829243 = NULL;
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );


char* board883402585 = gamma_board(board);
assert( board883402585 != NULL );
assert( strcmp(board883402585, 
"3.43..210.\n"
"8....1212..\n"
".....6682\n"
"..415131238\n"
"123.927998\n"
"102612..2.7\n"
"221010491335\n"
"91311.3111151\n"
".21312.66.9\n"
"9813741.119\n"
".2135..12310\n"
"7.12.4396.\n"
".5112475106\n"
"112938101216\n") == 0);
free(board883402585);
board883402585 = NULL;
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 12, 12, 8) == 0 );
assert( gamma_move(board, 13, 12, 8) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_golden_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 11, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 11, 4, 13) == 1 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 13, 12, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_free_fields(board, 10) == 28 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 12, 11, 3) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 13, 8, 4) == 0 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 12, 8, 9) == 0 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_free_fields(board, 8) == 23 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 12, 7) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 12, 1, 2) == 1 );
assert( gamma_move(board, 13, 5, 7) == 0 );
assert( gamma_move(board, 13, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );


gamma_delete(board);

    return 0;
}
