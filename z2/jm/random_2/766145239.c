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
uuid: 766145239
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 12, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_free_fields(board, 8) == 144 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );


char* board946953009 = gamma_board(board);
assert( board946953009 != NULL );
assert( strcmp(board946953009, 
"..1..........\n"
"1............\n"
".3...24......\n"
".............\n"
"..........12.\n"
"....3........\n"
".............\n"
".............\n"
".............\n"
"....4.....6.8\n"
".............\n"
"......6..55..\n") == 0);
free(board946953009);
board946953009 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 136 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 11, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 129 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );


char* board336023445 = gamma_board(board);
assert( board336023445 != NULL );
assert( strcmp(board336023445, 
"..1.6....5...\n"
"1....7.......\n"
"23..224......\n"
"...4..1......\n"
"..........12.\n"
"..5.3......7.\n"
"..2......3...\n"
"3.....68.....\n"
"......5......\n"
"....4.....6.8\n"
".2.........7.\n"
"......6..55..\n") == 0);
free(board336023445);
board336023445 = NULL;
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board247718721 = gamma_board(board);
assert( board247718721 != NULL );
assert( strcmp(board247718721, 
"..1.6....5...\n"
"1....7.......\n"
"23.5224......\n"
"..34..1......\n"
"..........12.\n"
"..5.3.4....7.\n"
"..2......3...\n"
"3.....68.....\n"
"......5....6.\n"
"....4.....6.8\n"
".2...6.....7.\n"
"......6..55..\n") == 0);
free(board247718721);
board247718721 = NULL;
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_golden_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_free_fields(board, 7) == 113 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_free_fields(board, 1) == 111 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_free_fields(board, 6) == 102 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 98 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_golden_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_free_fields(board, 8) == 96 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_golden_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 11) == 1 );


char* board932203998 = gamma_board(board);
assert( board932203998 != NULL );
assert( strcmp(board932203998, 
"5.1.6...65.1.\n"
"1...37.......\n"
"53.52241..3..\n"
"2.34..1..31..\n"
"54.2.52...12.\n"
".85.374....7.\n"
"2.2......3...\n"
"38.7.668....1\n"
"..21685....6.\n"
"2.2.4.1...6.8\n"
"42.246.....7.\n"
"7.6...6..55..\n") == 0);
free(board932203998);
board932203998 = NULL;
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_golden_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );


char* board137087632 = gamma_board(board);
assert( board137087632 != NULL );
assert( strcmp(board137087632, 
"511.6...65.1.\n"
"1...37.7.3.3.\n"
"53.52241..3..\n"
"2.34..1.561.7\n"
"5432.528..12.\n"
".85.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.1..86.8\n"
"426246..8..71\n"
"7.6...6..55..\n") == 0);
free(board137087632);
board137087632 = NULL;
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );


char* board931871710 = gamma_board(board);
assert( board931871710 != NULL );
assert( strcmp(board931871710, 
"511.6...65.1.\n"
"1...37.7.3.3.\n"
"53.52241.83..\n"
"2.34..1.561.7\n"
"5432.528..123\n"
".85.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.11.86.8\n"
"426246..8..71\n"
"7.6...6..55..\n") == 0);
free(board931871710);
board931871710 = NULL;
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 7, 12, 9) == 1 );


char* board721925084 = gamma_board(board);
assert( board721925084 != NULL );
assert( strcmp(board721925084, 
"511.6...65.1.\n"
"1...37.7.353.\n"
"53.52241.83.7\n"
"2.34.71.561.7\n"
"5432.5283.123\n"
".85.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.11.86.8\n"
"426246..8..71\n"
"72628.6..55..\n") == 0);
free(board721925084);
board721925084 = NULL;
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 2, 10, 8) == 0 );


char* board307460762 = gamma_board(board);
assert( board307460762 != NULL );
assert( strcmp(board307460762, 
"511.6...65.1.\n"
"1...37.7.353.\n"
"53.52241.83.7\n"
"2.34.71.561.7\n"
"5432.5283.123\n"
"785.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.11.86.8\n"
"426246..8..71\n"
"72628.6..55..\n") == 0);
free(board307460762);
board307460762 = NULL;
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_golden_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 16 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );


char* board302946603 = gamma_board(board);
assert( board302946603 != NULL );
assert( strcmp(board302946603, 
"511.6...65.1.\n"
"1...37.7.353.\n"
"53452241183.7\n"
"2.34.71.561.7\n"
"5432.5283.123\n"
"785.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.11.86.8\n"
"426246..8..71\n"
"72628.6..55..\n") == 0);
free(board302946603);
board302946603 = NULL;
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_free_fields(board, 4) == 54 );


char* board791272861 = gamma_board(board);
assert( board791272861 != NULL );
assert( strcmp(board791272861, 
"511.6...65.1.\n"
"1...37.7.353.\n"
"53452241183.7\n"
"2.34.71.561.7\n"
"5432.5283.123\n"
"785.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.11.86.8\n"
"426246..8..71\n"
"72628.6..55.4\n") == 0);
free(board791272861);
board791272861 = NULL;
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );


char* board247979217 = gamma_board(board);
assert( board247979217 != NULL );
assert( strcmp(board247979217, 
"511.6...65.1.\n"
"1...37.7.353.\n"
"53452241183.7\n"
"2.34.71.561.7\n"
"5432.5283.123\n"
"785.374....7.\n"
"2.2....763.1.\n"
"38.7.668....1\n"
".22168584..64\n"
"2.8.4.11.86.8\n"
"426246..8..71\n"
"72628.6..55.4\n") == 0);
free(board247979217);
board247979217 = NULL;
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_golden_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_golden_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_golden_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );


char* board841547700 = gamma_board(board);
assert( board841547700 != NULL );
assert( strcmp(board841547700, 
"511.66.765.1.\n"
"1...3747.353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"38.7.6686...1\n"
".22168584..64\n"
"2.8.4311.86.8\n"
"426246..8..71\n"
"72628.6..55.4\n") == 0);
free(board841547700);
board841547700 = NULL;
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_move(board, 5, 8, 0) == 0 );


char* board168921738 = gamma_board(board);
assert( board168921738 != NULL );
assert( strcmp(board168921738, 
"511.66.765.1.\n"
"1...3747.353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"38.7.6686...1\n"
".22168584..64\n"
"2.8.4311.86.8\n"
"426246..8..71\n"
"72628.6..55.4\n") == 0);
free(board168921738);
board168921738 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_golden_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );


char* board243236661 = gamma_board(board);
assert( board243236661 != NULL );
assert( strcmp(board243236661, 
"511.66.765.1.\n"
"1...37476353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"388766686...1\n"
".22168584..64\n"
"2.864311486.8\n"
"426246..8..71\n"
"72628.6..55.4\n") == 0);
free(board243236661);
board243236661 = NULL;
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );


char* board448677944 = gamma_board(board);
assert( board448677944 != NULL );
assert( strcmp(board448677944, 
"511.66.765.1.\n"
"1...37476353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"388766686..11\n"
".22168584..64\n"
"2.864311486.8\n"
"426246..8..71\n"
"22628.6..55.4\n") == 0);
free(board448677944);
board448677944 = NULL;
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 11, 3) == 0 );


char* board333738968 = gamma_board(board);
assert( board333738968 != NULL );
assert( strcmp(board333738968, 
"511.66.765.1.\n"
"1...37476353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"388766686..11\n"
".22168584..64\n"
"2.864311486.8\n"
"426246..8..71\n"
"22628.6..55.4\n") == 0);
free(board333738968);
board333738968 = NULL;
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );


char* board227322240 = gamma_board(board);
assert( board227322240 != NULL );
assert( strcmp(board227322240, 
"511.66.765.1.\n"
"1...37476353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"388766686..11\n"
".22168584..64\n"
"2.864311486.8\n"
"426246..8..71\n"
"22628.6..55.4\n") == 0);
free(board227322240);
board227322240 = NULL;
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );


char* board394692507 = gamma_board(board);
assert( board394692507 != NULL );
assert( strcmp(board394692507, 
"511.66.765.1.\n"
"1...37476353.\n"
"53452241183.7\n"
"2234.71.561.7\n"
"5432.52834123\n"
"785.774....7.\n"
"2.2....763.1.\n"
"388766686..11\n"
".22168584..64\n"
"2.864311486.8\n"
"426246..8..71\n"
"22628.6..55.4\n") == 0);
free(board394692507);
board394692507 = NULL;
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );


gamma_delete(board);

    return 0;
}
