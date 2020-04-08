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
uuid: 139339348
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 13, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_golden_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board554992276 = gamma_board(board);
assert( board554992276 != NULL );
assert( strcmp(board554992276, 
".........2\n"
"...6......\n"
".42.......\n"
"..5.......\n"
".51..1....\n"
".4....7.6.\n"
"4.1...4..2\n"
".......6..\n"
"......3...\n"
"5.....4...\n"
"..2....5..\n"
"...13...4.\n"
"7.........\n") == 0);
free(board554992276);
board554992276 = NULL;
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );


char* board183838307 = gamma_board(board);
assert( board183838307 != NULL );
assert( strcmp(board183838307, 
".........2\n"
"...6......\n"
".42.......\n"
"..5.......\n"
".51..1....\n"
".4...77.6.\n"
"4.1...4..2\n"
".......6..\n"
"......3...\n"
"5.....4...\n"
"..2....5..\n"
"...13...4.\n"
"7.........\n") == 0);
free(board183838307);
board183838307 = NULL;
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_free_fields(board, 3) == 103 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_free_fields(board, 4) == 102 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_free_fields(board, 7) == 91 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 74 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board935879747 = gamma_board(board);
assert( board935879747 != NULL );
assert( strcmp(board935879747, 
"5........2\n"
"...652....\n"
".42..443..\n"
"4157.7...4\n"
".51..17...\n"
"34..13766.\n"
"4.15..4..2\n"
"..3.36.615\n"
"...7.73...\n"
"51..2.4.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board935879747);
board935879747 = NULL;
assert( gamma_move(board, 5, 10, 9) == 0 );


char* board876355938 = gamma_board(board);
assert( board876355938 != NULL );
assert( strcmp(board876355938, 
"5........2\n"
"...652....\n"
".42..443..\n"
"4157.7...4\n"
".51..17...\n"
"34..13766.\n"
"4.15..4..2\n"
"..3.36.615\n"
"...7.73...\n"
"51..2.4.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board876355938);
board876355938 = NULL;
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 7) == 0 );


char* board520846864 = gamma_board(board);
assert( board520846864 != NULL );
assert( strcmp(board520846864, 
"5........2\n"
"...652...6\n"
".421.443..\n"
"415777...4\n"
".51..17...\n"
"34.213766.\n"
"4.15..4..2\n"
".23.36.615\n"
"..27.73.1.\n"
"51..234.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board520846864);
board520846864 = NULL;
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );


char* board675343699 = gamma_board(board);
assert( board675343699 != NULL );
assert( strcmp(board675343699, 
"5........2\n"
"...652.6.6\n"
".421.443..\n"
"415777...4\n"
"551..17...\n"
"34.213766.\n"
"4.15..4..2\n"
".23.36.615\n"
"..27.73.1.\n"
"51..234.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board675343699);
board675343699 = NULL;
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board569096874 = gamma_board(board);
assert( board569096874 != NULL );
assert( strcmp(board569096874, 
"5........2\n"
"...652.6.6\n"
".421.443..\n"
"415777...4\n"
"551..17...\n"
"34.2137666\n"
"4215.74..2\n"
"223536.615\n"
"..27.73.1.\n"
"51..234.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board569096874);
board569096874 = NULL;
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board463617099 = gamma_board(board);
assert( board463617099 != NULL );
assert( strcmp(board463617099, 
"5........2\n"
"...65246.6\n"
".421.443..\n"
"415777...4\n"
"551..17...\n"
"34.2137666\n"
"4215.74..2\n"
"223536.615\n"
"..27.73.1.\n"
"51..234.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board463617099);
board463617099 = NULL;
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );


char* board931481486 = gamma_board(board);
assert( board931481486 != NULL );
assert( strcmp(board931481486, 
"5........2\n"
"...65246.6\n"
".421.443..\n"
"415777...4\n"
"551..17...\n"
"34.2137666\n"
"4215.74..2\n"
"223536.615\n"
"..27.73.1.\n"
"51..234.7.\n"
".3216..5..\n"
".7513.6.4.\n"
"7........6\n") == 0);
free(board931481486);
board931481486 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_golden_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );


char* board927789917 = gamma_board(board);
assert( board927789917 != NULL );
assert( strcmp(board927789917, 
"5....2...2\n"
"...65246.6\n"
"2421.4433.\n"
"415777..44\n"
"5512.17...\n"
"34.2137666\n"
"4215.74..2\n"
"223536.615\n"
"..27.73.1.\n"
"51.7234.7.\n"
".3716..5..\n"
".7513.6.4.\n"
"77.......6\n") == 0);
free(board927789917);
board927789917 = NULL;
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_free_fields(board, 6) == 41 );


char* board280887499 = gamma_board(board);
assert( board280887499 != NULL );
assert( strcmp(board280887499, 
"5....2...2\n"
"...6524666\n"
"2421.4433.\n"
"415777..44\n"
"5512717..4\n"
"34.2137666\n"
"4215.74..2\n"
"223536.615\n"
"..27.73.1.\n"
"51.7234.7.\n"
".3716.45..\n"
".7513.6.4.\n"
"77777....6\n") == 0);
free(board280887499);
board280887499 = NULL;
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_golden_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_free_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 10, 6) == 0 );


char* board851867890 = gamma_board(board);
assert( board851867890 != NULL );
assert( strcmp(board851867890, 
"5....2...2\n"
"...6524666\n"
"2421.4433.\n"
"415777..44\n"
"55127177.4\n"
"3472137666\n"
"4215774..2\n"
"223536.615\n"
"..27273.1.\n"
"5117234.7.\n"
".3716.45..\n"
".7513.6.4.\n"
"77777....6\n") == 0);
free(board851867890);
board851867890 = NULL;
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 21 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );


char* board139373871 = gamma_board(board);
assert( board139373871 != NULL );
assert( strcmp(board139373871, 
"5....2...2\n"
"...6524666\n"
"242144433.\n"
"415777..44\n"
"55127177.4\n"
"3472137666\n"
"4215774..2\n"
"223536.615\n"
"..27273.1.\n"
"511723457.\n"
".3716.45..\n"
".7513.6.44\n"
"77777....6\n") == 0);
free(board139373871);
board139373871 = NULL;
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 7 );


char* board506287500 = gamma_board(board);
assert( board506287500 != NULL );
assert( strcmp(board506287500, 
"5...52...2\n"
"...6524666\n"
"242144433.\n"
"415777..44\n"
"55127177.4\n"
"3472137666\n"
"4215774..2\n"
"223536.615\n"
"..27273.1.\n"
"511723457.\n"
".3716.45..\n"
".7513.6.44\n"
"77777....6\n") == 0);
free(board506287500);
board506287500 = NULL;
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );


gamma_delete(board);

    return 0;
}
