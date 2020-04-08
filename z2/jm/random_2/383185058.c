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
uuid: 383185058
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 10, 10, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 9, 8, 1) == 1 );


char* board681298689 = gamma_board(board);
assert( board681298689 != NULL );
assert( strcmp(board681298689, 
"....4......\n"
"....37....7\n"
"...........\n"
"...........\n"
"......5.68.\n"
"...........\n"
".....2.....\n"
".........1.\n"
"........9..\n"
".......3...\n") == 0);
free(board681298689);
board681298689 = NULL;
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 10, 9, 3) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 10, 6, 2) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 10, 8, 3) == 1 );


char* board560170143 = gamma_board(board);
assert( board560170143 != NULL );
assert( strcmp(board560170143, 
"....4.7....\n"
"....37..4.7\n"
"6.2....5...\n"
"...9..9....\n"
".7....5.68.\n"
".1.1.8...2.\n"
"..75.2..1010.\n"
"10.....10.21.\n"
"..10...4.98.\n"
".......3...\n") == 0);
free(board560170143);
board560170143 = NULL;
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_free_fields(board, 9) == 69 );
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_free_fields(board, 9) == 57 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );


char* board716803145 = gamma_board(board);
assert( board716803145 != NULL );
assert( strcmp(board716803145, 
"....4.7....\n"
"..4.37184.7\n"
"612....5101.\n"
"3..9..99...\n"
"37...75.68.\n"
".191.816.2.\n"
"3.75.2.101010.\n"
"108....101021.\n"
"8.10..104.98.\n"
"49..4..3...\n") == 0);
free(board716803145);
board716803145 = NULL;
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_free_fields(board, 9) == 42 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );


char* board648656571 = gamma_board(board);
assert( board648656571 != NULL );
assert( strcmp(board648656571, 
".9..4.7.55.\n"
"..4737184.7\n"
"612..1.5101.\n"
"3.29.499...\n"
"37...75.681\n"
"2191.81622.\n"
"3575.2.101010.\n"
"107....101021.\n"
"8810..104.98.\n"
"493.4..371.\n") == 0);
free(board648656571);
board648656571 = NULL;
assert( gamma_move(board, 10, 8, 1) == 0 );


char* board173329949 = gamma_board(board);
assert( board173329949 != NULL );
assert( strcmp(board173329949, 
".9..4.7.55.\n"
"..4737184.7\n"
"612..1.5101.\n"
"3.29.499...\n"
"37...75.681\n"
"2191.81622.\n"
"3575.2.101010.\n"
"107....101021.\n"
"8810..104.98.\n"
"493.4..371.\n") == 0);
free(board173329949);
board173329949 = NULL;
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );


char* board678343225 = gamma_board(board);
assert( board678343225 != NULL );
assert( strcmp(board678343225, 
".9..4.7.55.\n"
".44737184.7\n"
"612..145101.\n"
"3.29.499...\n"
"371.4756681\n"
"2191.81622.\n"
"3575.2.101010.\n"
"107..1.1010217\n"
"8810..104.98.\n"
"493.4..371.\n") == 0);
free(board678343225);
board678343225 = NULL;
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


char* board344960922 = gamma_board(board);
assert( board344960922 != NULL );
assert( strcmp(board344960922, 
".9..4.7.55.\n"
".44737184.7\n"
"612..145101.\n"
"3.29.499...\n"
"371.4756681\n"
"2191181622.\n"
"3575.2.101010.\n"
"107..1.1010217\n"
"8810..104.98.\n"
"493.4..371.\n") == 0);
free(board344960922);
board344960922 = NULL;
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_free_fields(board, 9) == 27 );
assert( gamma_move(board, 10, 10, 3) == 1 );
assert( gamma_free_fields(board, 10) == 26 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );


char* board687567622 = gamma_board(board);
assert( board687567622 != NULL );
assert( strcmp(board687567622, 
".9..4.7155.\n"
".44737184107\n"
"612..145101.\n"
"3.29.499...\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"107..1.1010217\n"
"8810..1047988\n"
"493.4.4371.\n") == 0);
free(board687567622);
board687567622 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_golden_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );


char* board609359794 = gamma_board(board);
assert( board609359794 != NULL );
assert( strcmp(board609359794, 
".93.4.7155.\n"
".44737184107\n"
"612..145101.\n"
"3.29.499...\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"107..161010217\n"
"8810..1047988\n"
"493.4.4371.\n") == 0);
free(board609359794);
board609359794 = NULL;
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 3, 4) == 0 );


char* board131027338 = gamma_board(board);
assert( board131027338 != NULL );
assert( strcmp(board131027338, 
".93.4.7155.\n"
".44737184107\n"
"612..145101.\n"
"3.29.499.8.\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"107..161010217\n"
"8810..1047988\n"
"493.4.4371.\n") == 0);
free(board131027338);
board131027338 = NULL;
assert( gamma_move(board, 7, 10, 6) == 1 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_free_fields(board, 10) == 20 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );


char* board242109271 = gamma_board(board);
assert( board242109271 != NULL );
assert( strcmp(board242109271, 
".93.4.7155.\n"
".44737184107\n"
"612.9145101.\n"
"3.29.499.87\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"1073.161010217\n"
"8810..1047988\n"
"493.4.4371.\n") == 0);
free(board242109271);
board242109271 = NULL;
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_golden_move(board, 8, 6, 3) == 0 );


char* board393588251 = gamma_board(board);
assert( board393588251 != NULL );
assert( strcmp(board393588251, 
".93.4.7155.\n"
".44737184107\n"
"612.9145101.\n"
"3.29.499.87\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"1073.161010217\n"
"8810..1047988\n"
"493.4.4371.\n") == 0);
free(board393588251);
board393588251 = NULL;
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board809235957 = gamma_board(board);
assert( board809235957 != NULL );
assert( strcmp(board809235957, 
"393.4.7155.\n"
".44737184107\n"
"612.91451012\n"
"3.29.499.87\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"1073.161010217\n"
"8810..1047988\n"
"49394.4371.\n") == 0);
free(board809235957);
board809235957 = NULL;
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );


char* board992281814 = gamma_board(board);
assert( board992281814 != NULL );
assert( strcmp(board992281814, 
"393.4.7155.\n"
".44737184107\n"
"612.91451012\n"
"3.29.499387\n"
"371.4756681\n"
"21911816223\n"
"3575.2.10101010\n"
"1073.161010217\n"
"8810..1047988\n"
"49394.4371.\n") == 0);
free(board992281814);
board992281814 = NULL;
assert( gamma_move(board, 10, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
