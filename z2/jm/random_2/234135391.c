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
uuid: 234135391
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 12, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_free_fields(board, 10) == 88 );
assert( gamma_golden_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 5, 12) == 0 );
assert( gamma_move(board, 11, 9, 1) == 1 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_free_fields(board, 12) == 86 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );


char* board243555435 = gamma_board(board);
assert( board243555435 != NULL );
assert( strcmp(board243555435, 
"..6.10.........\n"
"..............\n"
"..4........3..\n"
".59.........54\n"
"........10.....\n"
"..2......116...\n"
"..12...........\n") == 0);
free(board243555435);
board243555435 = NULL;
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_golden_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 10, 13, 4) == 1 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 3, 11) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 12, 2) == 1 );


char* board858348224 = gamma_board(board);
assert( board858348224 != NULL );
assert( strcmp(board858348224, 
"836.10.......4.\n"
"..4..54.7.....\n"
"9.4...5....3.10\n"
".599..10.....54\n"
".1167....107..9.\n"
"322......1163..\n"
"..1211..........\n") == 0);
free(board858348224);
board858348224 = NULL;
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 12, 10, 4) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 7, 13, 5) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_move(board, 11, 9, 6) == 1 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 8, 6) == 1 );
assert( gamma_free_fields(board, 12) == 52 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_golden_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 11, 7, 0) == 1 );


char* board530733800 = gamma_board(board);
assert( board530733800 != NULL );
assert( strcmp(board530733800, 
"836.10...12116.4.\n"
"8.491054.7....7\n"
"9.4...5.4.123.10\n"
".59911.10.....54\n"
".1167..4.107..92\n"
"322..1...1163..\n"
"..1211...11....4.\n") == 0);
free(board530733800);
board530733800 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_free_fields(board, 11) == 44 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_free_fields(board, 12) == 43 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 12, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_golden_move(board, 10, 3, 13) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );


char* board141554077 = gamma_board(board);
assert( board141554077 != NULL );
assert( strcmp(board141554077, 
"836810..912116.4.\n"
"85491054.7....7\n"
"9.4...5.4.123.10\n"
"859911.10.3..254\n"
".1167..4.107..92\n"
"322..1...116395\n"
"12.1211...114...4.\n") == 0);
free(board141554077);
board141554077 = NULL;
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 12, 12, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board487216905 = gamma_board(board);
assert( board487216905 != NULL );
assert( strcmp(board487216905, 
"836810..91211624.\n"
"85491054.7....7\n"
"9.47.55.4.123.10\n"
"859911.10.3..254\n"
"31167..47107..92\n"
"322..1.5.116395\n"
"12.1211..11148..46\n") == 0);
free(board487216905);
board487216905 = NULL;
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 10, 12, 0) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );


char* board683879800 = gamma_board(board);
assert( board683879800 != NULL );
assert( strcmp(board683879800, 
"83681039912116246\n"
"85491054.7..9.7\n"
"9547155.4.123.10\n"
"859911.1053..254\n"
"31167..47107..92\n"
"32210.1.56116395\n"
"12.1211..11148..46\n") == 0);
free(board683879800);
board683879800 = NULL;
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_golden_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_golden_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );


char* board733344087 = gamma_board(board);
assert( board733344087 != NULL );
assert( strcmp(board733344087, 
"83681039912116246\n"
"8549105437..9.7\n"
"9547155.4.123.10\n"
"859911.1053..254\n"
"31167..47107..92\n"
"32210.1.56116395\n"
"12.1211..11148..46\n") == 0);
free(board733344087);
board733344087 = NULL;
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_free_fields(board, 10) == 20 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_move(board, 11, 12, 4) == 1 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_golden_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 11, 9, 4) == 1 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );


char* board165976749 = gamma_board(board);
assert( board165976749 != NULL );
assert( strcmp(board165976749, 
"83681039912116246\n"
"8549105437..927\n"
"9547155.4111231110\n"
"859911.10535.254\n"
"31167..47107..92\n"
"3221021.56116395\n"
"12.12612.11148..46\n") == 0);
free(board165976749);
board165976749 = NULL;
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );


char* board149048734 = gamma_board(board);
assert( board149048734 != NULL );
assert( strcmp(board149048734, 
"83681039912116246\n"
"8549105437..927\n"
"9547155.4111231110\n"
"859911.105353254\n"
"31167..47107..92\n"
"3221021.56116395\n"
"12.12612.11148..46\n") == 0);
free(board149048734);
board149048734 = NULL;


gamma_delete(board);

    return 0;
}
