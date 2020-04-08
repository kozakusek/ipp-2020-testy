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
uuid: 100349551
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 12, 6, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_free_fields(board, 2) == 165 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 152 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 143 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );


char* board154511769 = gamma_board(board);
assert( board154511769 != NULL );
assert( strcmp(board154511769, 
"4...1....1....\n"
"....6..2......\n"
"3.............\n"
".1............\n"
"..............\n"
".2..1.........\n"
".....4....6.2.\n"
"..14..24......\n"
"...5.......5..\n"
".31......5....\n"
".3..2..4......\n"
"341..64.......\n") == 0);
free(board154511769);
board154511769 = NULL;
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 5) == 134 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 6, 13, 10) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 124 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_free_fields(board, 6) == 121 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );


char* board754011630 = gamma_board(board);
assert( board754011630 != NULL );
assert( strcmp(board754011630, 
"4...1....12...\n"
"...16..2.....6\n"
"34.632........\n"
".135.....341..\n"
".5....5.......\n"
".2..1.........\n"
".....5...26.2.\n"
".414..24......\n"
"...5.......5..\n"
".31.5..1.55...\n"
".3.22..4..1...\n"
"341..64..566..\n") == 0);
free(board754011630);
board754011630 = NULL;
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );


char* board876006292 = gamma_board(board);
assert( board876006292 != NULL );
assert( strcmp(board876006292, 
"4...1....12...\n"
"...16.52.1...6\n"
"34.632..5.....\n"
".1356..2.341..\n"
".5....5.......\n"
".2..1...4.....\n"
".16..5.6.26.2.\n"
".414..24...5..\n"
"5..5...265.5..\n"
".31.5..1.55.3.\n"
".3422..4..1...\n"
"341..643.566..\n") == 0);
free(board876006292);
board876006292 = NULL;
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );


char* board769293843 = gamma_board(board);
assert( board769293843 != NULL );
assert( strcmp(board769293843, 
"4...13...12...\n"
"...16352.1...6\n"
"34.632..5.....\n"
".1356..2.341..\n"
".5....5.......\n"
".2.41...4..4..\n"
".16..5.6.26.2.\n"
".414..24...5..\n"
"5..5...265.5..\n"
".31.5..1.55.3.\n"
".3422..46.1...\n"
"341..643.566..\n") == 0);
free(board769293843);
board769293843 = NULL;
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );


char* board701491922 = gamma_board(board);
assert( board701491922 != NULL );
assert( strcmp(board701491922, 
"4.1.1323.12...\n"
"...163523161.6\n"
"344632..52..6.\n"
"113565.2.341..\n"
".5..1.53....2.\n"
".2.41.254554..\n"
".163.5.6.26.2.\n"
"541415245..55.\n"
"5..5...265.5..\n"
"431.5..1.55.3.\n"
"13422.146.12..\n"
"341..643.566.2\n") == 0);
free(board701491922);
board701491922 = NULL;
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );


char* board222248607 = gamma_board(board);
assert( board222248607 != NULL );
assert( strcmp(board222248607, 
"4.1.1323.12...\n"
"...163523161.6\n"
"344632.552..6.\n"
"113565.263416.\n"
".5..1.53....2.\n"
".2.41.254554..\n"
".163.5.6.26.2.\n"
"541415245..55.\n"
"5..5...265.5..\n"
"431.5..1455.3.\n"
"13422.146.12..\n"
"341..643.566.2\n") == 0);
free(board222248607);
board222248607 = NULL;
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_golden_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );


char* board708868124 = gamma_board(board);
assert( board708868124 != NULL );
assert( strcmp(board708868124, 
"4.1.1323.121..\n"
"...163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".5..1.53....2.\n"
".2641.254554..\n"
".163.5.6.26.2.\n"
"541415245..55.\n"
"5..5...265.5.3\n"
"43155..1455.3.\n"
"13422.144.12..\n"
"341..643.566.2\n") == 0);
free(board708868124);
board708868124 = NULL;
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );


char* board529976197 = gamma_board(board);
assert( board529976197 != NULL );
assert( strcmp(board529976197, 
"4.1.1323.121..\n"
"..3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".5..1.53..5.2.\n"
"32641.254554.2\n"
".163.5.6.26.2.\n"
"541415245..55.\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board529976197);
board529976197 = NULL;
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board982301063 = gamma_board(board);
assert( board982301063 != NULL );
assert( strcmp(board982301063, 
"4.1.1323.121..\n"
"..3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.25.2.\n"
"32641.254554.2\n"
".163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board982301063);
board982301063 = NULL;
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );


char* board411505853 = gamma_board(board);
assert( board411505853 != NULL );
assert( strcmp(board411505853, 
"4.1.1323.121..\n"
"..3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.25.2.\n"
"32641.254554.2\n"
".163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board411505853);
board411505853 = NULL;
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );


char* board378211708 = gamma_board(board);
assert( board378211708 != NULL );
assert( strcmp(board378211708, 
"4.1.1323.121..\n"
"..3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.25.2.\n"
"32641.254554.2\n"
".163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board378211708);
board378211708 = NULL;
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );


char* board603014889 = gamma_board(board);
assert( board603014889 != NULL );
assert( strcmp(board603014889, 
"4.1.1323.121..\n"
"2.3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board603014889);
board603014889 = NULL;
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_golden_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );


char* board330680443 = gamma_board(board);
assert( board330680443 != NULL );
assert( strcmp(board330680443, 
"4.1.1323.121..\n"
"2.3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board330680443);
board330680443 = NULL;
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 4, 9, 13) == 0 );


char* board222132620 = gamma_board(board);
assert( board222132620 != NULL );
assert( strcmp(board222132620, 
"4.1.1323.121..\n"
"2.3163523161.6\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board222132620);
board222132620 = NULL;
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 4, 9) == 0 );


char* board975819380 = gamma_board(board);
assert( board975819380 != NULL );
assert( strcmp(board975819380, 
"4.1.1323.121..\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"541415243..554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board975819380);
board975819380 = NULL;
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board506682293 = gamma_board(board);
assert( board506682293 != NULL );
assert( strcmp(board506682293, 
"4.1.1323.121..\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".55.1.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board506682293);
board506682293 = NULL;
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );


char* board796340090 = gamma_board(board);
assert( board796340090 != NULL );
assert( strcmp(board796340090, 
"4.1.1323.121..\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".5511.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board796340090);
board796340090 = NULL;
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board909807494 = gamma_board(board);
assert( board909807494 != NULL );
assert( strcmp(board909807494, 
"4.1.1323.121..\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".5511.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board909807494);
board909807494 = NULL;
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board201789215 = gamma_board(board);
assert( board201789215 != NULL );
assert( strcmp(board201789215, 
"4.1.1323.121..\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".5511.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board201789215);
board201789215 = NULL;
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );


char* board907224175 = gamma_board(board);
assert( board907224175 != NULL );
assert( strcmp(board907224175, 
"4.1.1323.121..\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".5511.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board907224175);
board907224175 = NULL;
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );


char* board776607814 = gamma_board(board);
assert( board776607814 != NULL );
assert( strcmp(board776607814, 
"461.13234121.1\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
".5511.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5...26515.3\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341..6436566.2\n") == 0);
free(board776607814);
board776607814 = NULL;
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_golden_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );


char* board992349922 = gamma_board(board);
assert( board992349922 != NULL );
assert( strcmp(board992349922, 
"461.13234121.1\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
"55511.53.2552.\n"
"32641.254554.2\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5.4.2651563\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341.56436566.2\n") == 0);
free(board992349922);
board992349922 = NULL;
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );


char* board437306683 = gamma_board(board);
assert( board437306683 != NULL );
assert( strcmp(board437306683, 
"461.13234121.1\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
"55511.53.2552.\n"
"32641.25455422\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5.4.2651563\n"
"43155..1455.3.\n"
"13422.144412..\n"
"341.56436566.2\n") == 0);
free(board437306683);
board437306683 = NULL;
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );


char* board228683296 = gamma_board(board);
assert( board228683296 != NULL );
assert( strcmp(board228683296, 
"461.13234121.1\n"
"2.316352316156\n"
"34463245523.6.\n"
"113565.2634163\n"
"55511.53.2552.\n"
"32641.25455422\n"
"6163.566.26.2.\n"
"5414152435.554\n"
"5..5.4.2651563\n"
"43155..1455.35\n"
"13422.144412..\n"
"341.56436566.2\n") == 0);
free(board228683296);
board228683296 = NULL;
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
