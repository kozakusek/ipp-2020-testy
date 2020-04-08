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
uuid: 783262433
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 15, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );


char* board505067787 = gamma_board(board);
assert( board505067787 != NULL );
assert( strcmp(board505067787, 
"..............\n"
"..............\n"
"......1.....2.\n"
"..............\n"
"..........2...\n"
"..............\n"
"..............\n") == 0);
free(board505067787);
board505067787 = NULL;
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );


char* board836198084 = gamma_board(board);
assert( board836198084 != NULL );
assert( strcmp(board836198084, 
"..............\n"
"..3...........\n"
"......1.....2.\n"
"..............\n"
"..........2...\n"
"..............\n"
"............3.\n") == 0);
free(board836198084);
board836198084 = NULL;
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_free_fields(board, 11) == 87 );
assert( gamma_move(board, 12, 5, 13) == 0 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 13, 1, 3) == 1 );
assert( gamma_move(board, 14, 5, 3) == 1 );
assert( gamma_move(board, 14, 9, 6) == 1 );
assert( gamma_move(board, 15, 4, 1) == 1 );
assert( gamma_move(board, 15, 10, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board614570618 = gamma_board(board);
assert( board614570618 != NULL );
assert( strcmp(board614570618, 
"..24.....1415...\n"
"..3...........\n"
"......1.....2.\n"
"1113.7.143.......\n"
".1..9..10..2..7\n"
"12...155........\n"
"............3.\n") == 0);
free(board614570618);
board614570618 = NULL;
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 11, 13, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 5, 13) == 0 );
assert( gamma_golden_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_free_fields(board, 13) == 70 );
assert( gamma_move(board, 14, 6, 11) == 0 );
assert( gamma_move(board, 14, 12, 5) == 1 );
assert( gamma_move(board, 15, 4, 3) == 1 );
assert( gamma_move(board, 15, 2, 1) == 1 );
assert( gamma_golden_move(board, 15, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );


char* board193535427 = gamma_board(board);
assert( board193535427 != NULL );
assert( strcmp(board193535427, 
"..243....1415..11\n"
"..3..5......14.\n"
"....651...972.\n"
"1113.715143.......\n"
".11.9.1310..2..7\n"
"12215.155....7...\n"
"............3.\n") == 0);
free(board193535427);
board193535427 = NULL;
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 8, 0) == 1 );
assert( gamma_move(board, 13, 1, 6) == 1 );
assert( gamma_move(board, 14, 2, 3) == 1 );
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 15, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 12, 7, 0) == 1 );
assert( gamma_move(board, 13, 2, 0) == 1 );
assert( gamma_move(board, 13, 8, 4) == 1 );
assert( gamma_free_fields(board, 13) == 48 );
assert( gamma_golden_move(board, 13, 3, 5) == 0 );
assert( gamma_move(board, 14, 0, 6) == 1 );
assert( gamma_move(board, 15, 3, 10) == 0 );
assert( gamma_move(board, 15, 10, 6) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 14, 5, 9) == 0 );
assert( gamma_move(board, 15, 11, 6) == 1 );


char* board845551859 = gamma_board(board);
assert( board845551859 != NULL );
assert( strcmp(board845551859, 
"1413243.4..141515211\n"
"2.3..58....514.\n"
"....651.13.972.\n"
"111314715143...38..\n"
".11149.1310.22..7\n"
"1221581558...7.5.\n"
"..13.1111.1212..936\n") == 0);
free(board845551859);
board845551859 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 12, 8, 2) == 1 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 14, 8, 4) == 0 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_move(board, 15, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_free_fields(board, 10) == 32 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 15, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 14, 6, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 10, 7, 6) == 1 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 11, 12, 5) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 14, 5, 3) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 15, 5, 10) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_move(board, 14, 0, 3) == 0 );
assert( gamma_move(board, 15, 3, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 1) == 1 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 4) == 1 );
assert( gamma_free_fields(board, 12) == 25 );
assert( gamma_move(board, 13, 3, 9) == 0 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 14, 13, 4) == 1 );
assert( gamma_move(board, 15, 5, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board695353200 = gamma_board(board);
assert( board695353200 != NULL );
assert( strcmp(board695353200, 
"1413243.410.141515211\n"
"2.3.758.1..5146\n"
"....6517131297214\n"
"111314715143...38..\n"
"211149.13101222.77\n"
"1221581558.557.59\n"
"..1341111.1212.6936\n") == 0);
free(board695353200);
board695353200 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_move(board, 4, 6, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 24 );


char* board829648896 = gamma_board(board);
assert( board829648896 != NULL );
assert( strcmp(board829648896, 
"1413243.410.141515211\n"
"2.3.758.1..5146\n"
"....6517131297214\n"
"111314715143...38..\n"
"211149.13101222.77\n"
"1221581558.557.59\n"
"..1341111.1212.6936\n") == 0);
free(board829648896);
board829648896 = NULL;
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 14, 0, 0) == 1 );
assert( gamma_move(board, 15, 6, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_move(board, 11, 12, 6) == 0 );
assert( gamma_move(board, 11, 13, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );


char* board534819477 = gamma_board(board);
assert( board534819477 != NULL );
assert( strcmp(board534819477, 
"1413243.410.141515211\n"
"2.3.758.14.5146\n"
"9...6517131297214\n"
"11131471514310..38..\n"
"211149.13101222677\n"
"1221581558.557.59\n"
"14.1341111.1212.6936\n") == 0);
free(board534819477);
board534819477 = NULL;
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_free_fields(board, 12) == 19 );
assert( gamma_move(board, 13, 13, 6) == 0 );
assert( gamma_move(board, 13, 9, 3) == 1 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 15, 3, 8) == 0 );
assert( gamma_move(board, 15, 6, 0) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board302638344 = gamma_board(board);
assert( board302638344 != NULL );
assert( strcmp(board302638344, 
"1413243.410.141515211\n"
"2.3.758.14.5146\n"
"9...6517131297214\n"
"1113147151431011338..\n"
"211149.13101222677\n"
"1221581558.557.59\n"
"14.1341111151212.6936\n") == 0);
free(board302638344);
board302638344 = NULL;


gamma_delete(board);

    return 0;
}
