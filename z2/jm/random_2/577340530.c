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
uuid: 577340530
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 8, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );


char* board914142984 = gamma_board(board);
assert( board914142984 != NULL );
assert( strcmp(board914142984, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"...1.....\n"
".........\n") == 0);
free(board914142984);
board914142984 = NULL;
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_free_fields(board, 6) == 102 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 93 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_golden_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );


char* board307629233 = gamma_board(board);
assert( board307629233 != NULL );
assert( strcmp(board307629233, 
"33..16...\n"
"2.34824.8\n"
".42.3.62.\n"
"82..33485\n"
".1...2.86\n"
"5.8.36472\n"
"23..3553.\n"
"...35.37.\n"
"6286.7653\n"
"656857.8.\n"
".7.1472.1\n"
"553737.84\n") == 0);
free(board307629233);
board307629233 = NULL;
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board616048585 = gamma_board(board);
assert( board616048585 != NULL );
assert( strcmp(board616048585, 
"33..16...\n"
"2.34824.8\n"
".42.3.62.\n"
"82..33485\n"
".1...2.86\n"
"5.8.36472\n"
"23..3553.\n"
"...35.374\n"
"6286.7653\n"
"656857.8.\n"
".7.1472.1\n"
"553737.84\n") == 0);
free(board616048585);
board616048585 = NULL;
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );


char* board296575722 = gamma_board(board);
assert( board296575722 != NULL );
assert( strcmp(board296575722, 
"333.16...\n"
"2.34824.8\n"
".42.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8.36472\n"
"23..3553.\n"
"4.635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737.84\n") == 0);
free(board296575722);
board296575722 = NULL;
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );


char* board700114039 = gamma_board(board);
assert( board700114039 != NULL );
assert( strcmp(board700114039, 
"333.16...\n"
"2.34824.8\n"
".42.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8.36472\n"
"23..3553.\n"
"4.635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737.84\n") == 0);
free(board700114039);
board700114039 = NULL;
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );


char* board325384732 = gamma_board(board);
assert( board325384732 != NULL );
assert( strcmp(board325384732, 
"333.16...\n"
"2.34824.8\n"
".42.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8.36472\n"
"23..3553.\n"
"44635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737.84\n") == 0);
free(board325384732);
board325384732 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board847582949 = gamma_board(board);
assert( board847582949 != NULL );
assert( strcmp(board847582949, 
"333.16...\n"
"2.34824.8\n"
".42.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8.36472\n"
"23..3553.\n"
"44635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737.84\n") == 0);
free(board847582949);
board847582949 = NULL;
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );


char* board948472798 = gamma_board(board);
assert( board948472798 != NULL );
assert( strcmp(board948472798, 
"333.16...\n"
"2.34824.8\n"
".42.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8.36472\n"
"23..3553.\n"
"44635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737384\n") == 0);
free(board948472798);
board948472798 = NULL;
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 6, 11) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board408139676 = gamma_board(board);
assert( board408139676 != NULL );
assert( strcmp(board408139676, 
"333.168..\n"
"2.34824.8\n"
"542.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8236472\n"
"23.63553.\n"
"44635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737384\n") == 0);
free(board408139676);
board408139676 = NULL;
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );


char* board518814685 = gamma_board(board);
assert( board518814685 != NULL );
assert( strcmp(board518814685, 
"333.168..\n"
"2.3482478\n"
"542.3762.\n"
"82..33485\n"
"81.4.2.86\n"
"5.8236472\n"
"23.63553.\n"
"44635.374\n"
"628367653\n"
"656857485\n"
".761472.1\n"
"553737384\n") == 0);
free(board518814685);
board518814685 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );


gamma_delete(board);

    return 0;
}
