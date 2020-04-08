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
uuid: 399230564
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 7, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_free_fields(board, 5) == 98 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_free_fields(board, 6) == 97 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );


char* board323856185 = gamma_board(board);
assert( board323856185 != NULL );
assert( strcmp(board323856185, 
"..........\n"
".......1..\n"
"..1.......\n"
".....2....\n"
"7..5......\n"
"..........\n"
"4.7.......\n"
"..72.....5\n"
"...6..1...\n"
"....6...7.\n"
"...1...3..\n") == 0);
free(board323856185);
board323856185 = NULL;
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_golden_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_golden_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );


char* board139098580 = gamma_board(board);
assert( board139098580 != NULL );
assert( strcmp(board139098580, 
"..5..55...\n"
"26.2..4122\n"
".117..6...\n"
"1..2.221.7\n"
"7.45.2.173\n"
"3726.3...5\n"
"4574134133\n"
".5727..765\n"
"4326..53.3\n"
"4.236.667.\n"
"6611.7.375\n") == 0);
free(board139098580);
board139098580 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );


char* board878352175 = gamma_board(board);
assert( board878352175 != NULL );
assert( strcmp(board878352175, 
"..5..55...\n"
"2622..4122\n"
"5117..6.3.\n"
"1..2622147\n"
"7.45.24173\n"
"3726.3..15\n"
"4574134133\n"
".5727..765\n"
"4326.15313\n"
"4423636677\n"
"6611.7.375\n") == 0);
free(board878352175);
board878352175 = NULL;
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );


char* board122332213 = gamma_board(board);
assert( board122332213 != NULL );
assert( strcmp(board122332213, 
"..5..55...\n"
"26224.4122\n"
"5117..6.3.\n"
"1..2622147\n"
"7.45.24173\n"
"3726.3..15\n"
"4574134133\n"
".5727..765\n"
"4326.15313\n"
"4423636677\n"
"6611.7.375\n") == 0);
free(board122332213);
board122332213 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 24 );


char* board390392482 = gamma_board(board);
assert( board390392482 != NULL );
assert( strcmp(board390392482, 
"..5..55...\n"
"26224.4122\n"
"5117..6.3.\n"
"1..2622147\n"
"7445.24173\n"
"3726.3..15\n"
"4574134133\n"
".5727..765\n"
"4326.15313\n"
"4423636677\n"
"6611.7.375\n") == 0);
free(board390392482);
board390392482 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_golden_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


char* board535255497 = gamma_board(board);
assert( board535255497 != NULL );
assert( strcmp(board535255497, 
"1.5..55...\n"
"26224.4122\n"
"5117..663.\n"
"1..2622147\n"
"7445.24173\n"
"372613..15\n"
"4574134133\n"
".5727..765\n"
"4326.15313\n"
"4423636677\n"
"6711.7.375\n") == 0);
free(board535255497);
board535255497 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board425833700 = gamma_board(board);
assert( board425833700 != NULL );
assert( strcmp(board425833700, 
"1.5..55...\n"
"26224.4122\n"
"5117..663.\n"
"1..2622147\n"
"7445.24173\n"
"372613..15\n"
"4574134133\n"
".5727..765\n"
"4326.15313\n"
"4423636677\n"
"6711.7.375\n") == 0);
free(board425833700);
board425833700 = NULL;
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );


char* board372539671 = gamma_board(board);
assert( board372539671 != NULL );
assert( strcmp(board372539671, 
"1.5..55...\n"
"26224.4122\n"
"5117..663.\n"
"1..2622147\n"
"7445.24173\n"
"372613..15\n"
"4574134133\n"
".5727..765\n"
"4326.15313\n"
"4423636677\n"
"6711.7.375\n") == 0);
free(board372539671);
board372539671 = NULL;
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 18 );


char* board737339943 = gamma_board(board);
assert( board737339943 != NULL );
assert( strcmp(board737339943, 
"1.5..55...\n"
"26224.4122\n"
"5117..6632\n"
"1..2622147\n"
"7445.24173\n"
"372623..15\n"
"4574134133\n"
".5727..765\n"
"4326115313\n"
"4423636677\n"
"6711.72375\n") == 0);
free(board737339943);
board737339943 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );


char* board720838094 = gamma_board(board);
assert( board720838094 != NULL );
assert( strcmp(board720838094, 
"1.5..55...\n"
"26224.4122\n"
"5117..6632\n"
"1..2622147\n"
"7445.24173\n"
"372623..15\n"
"4574134133\n"
".5727..765\n"
"4326115313\n"
"4423636677\n"
"6711.72375\n") == 0);
free(board720838094);
board720838094 = NULL;
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );


char* board743006230 = gamma_board(board);
assert( board743006230 != NULL );
assert( strcmp(board743006230, 
"115..55...\n"
"26224.4122\n"
"5117..6632\n"
"1..2622147\n"
"7445.24173\n"
"372623..15\n"
"4574134133\n"
".5727..765\n"
"4326115313\n"
"4423636677\n"
"6711.72375\n") == 0);
free(board743006230);
board743006230 = NULL;
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board629141840 = gamma_board(board);
assert( board629141840 != NULL );
assert( strcmp(board629141840, 
"115..55...\n"
"26224.4122\n"
"5117..6632\n"
"1..2622147\n"
"7445.24173\n"
"372623..15\n"
"4574134133\n"
".5727..765\n"
"4326115313\n"
"4423636677\n"
"6711.72375\n") == 0);
free(board629141840);
board629141840 = NULL;
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
