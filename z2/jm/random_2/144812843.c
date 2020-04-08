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
uuid: 144812843
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 13, 13, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 112 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_free_fields(board, 7) == 108 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );


char* board103794340 = gamma_board(board);
assert( board103794340 != NULL );
assert( strcmp(board103794340, 
".........\n"
".........\n"
"....4....\n"
".........\n"
"....6..8.\n"
"...8.....\n"
"..2.6....\n"
".........\n"
".......7.\n"
"1.1......\n"
".3.......\n"
".........\n"
".....2...\n") == 0);
free(board103794340);
board103794340 = NULL;
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_free_fields(board, 9) == 105 );
assert( gamma_move(board, 10, 0, 11) == 1 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_move(board, 12, 8, 9) == 1 );
assert( gamma_move(board, 13, 1, 7) == 1 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_free_fields(board, 9) == 93 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 10, 8, 8) == 1 );
assert( gamma_move(board, 11, 4, 4) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 10) == 1 );
assert( gamma_free_fields(board, 10) == 82 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 12, 7, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 77 );
assert( gamma_golden_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 11, 8, 7) == 1 );
assert( gamma_move(board, 11, 5, 11) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 5) == 1 );


char* board590803086 = gamma_board(board);
assert( board590803086 != NULL );
assert( strcmp(board590803086, 
".......6.\n"
"10....111.7\n"
"10...46...\n"
"..4.5.9.12\n"
"....6..810\n"
".13.8...1211\n"
"10.2.6....\n"
".24....13.\n"
".10..111.78\n"
"1.121.8.2\n"
"63.311....\n"
"..7.4107..\n"
".5...2.4.\n") == 0);
free(board590803086);
board590803086 = NULL;
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_golden_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 10, 7, 10) == 0 );
assert( gamma_free_fields(board, 10) == 61 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 6, 12) == 0 );
assert( gamma_free_fields(board, 11) == 61 );
assert( gamma_golden_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 4) == 0 );
assert( gamma_move(board, 13, 2, 9) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_golden_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );


char* board627347455 = gamma_board(board);
assert( board627347455 != NULL );
assert( strcmp(board627347455, 
"......264\n"
"10....111.7\n"
"107..46.8.\n"
"..4.5.9.12\n"
"....6..810\n"
".13.8..101211\n"
"10.2.6....\n"
".24..5713.\n"
".10.4111.78\n"
"17121.8.2\n"
"634311....\n"
"..7.4107..\n"
".57562.4.\n") == 0);
free(board627347455);
board627347455 = NULL;
assert( gamma_move(board, 11, 7, 5) == 0 );
assert( gamma_move(board, 11, 6, 12) == 0 );
assert( gamma_move(board, 12, 2, 8) == 1 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 13, 3, 5) == 1 );
assert( gamma_move(board, 13, 5, 12) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );


char* board986060242 = gamma_board(board);
assert( board986060242 != NULL );
assert( strcmp(board986060242, 
"....113264\n"
"10....111.7\n"
"107..46.8.\n"
"..4.5.9.12\n"
"2.12.6..810\n"
".13.8..101211\n"
"10.2.6....\n"
".2413.5713.\n"
".10.4111.78\n"
"17121.8.2\n"
"634311....\n"
"..7.4107..\n"
".57562.4.\n") == 0);
free(board986060242);
board986060242 = NULL;
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 12, 7, 9) == 1 );


char* board829009342 = gamma_board(board);
assert( board829009342 != NULL );
assert( strcmp(board829009342, 
"....113264\n"
"10.6..111.7\n"
"107..46.8.\n"
"..4.5.91212\n"
"2412.6..810\n"
".13.8..101211\n"
"10.2.6.8..\n"
".2413.5713.\n"
".10.4111.78\n"
"17121.8.2\n"
"634311....\n"
"..7.4107.8\n"
".57562.4.\n") == 0);
free(board829009342);
board829009342 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );


char* board514913163 = gamma_board(board);
assert( board514913163 != NULL );
assert( strcmp(board514913163, 
"....113264\n"
"10.6..111.7\n"
"107..46.8.\n"
"..4.5.91212\n"
"2412.6..810\n"
".13.8..101211\n"
"10.2.6.8..\n"
".2413.5713.\n"
".10.4111.78\n"
"17121.8.2\n"
"634311....\n"
"..7.4107.8\n"
".57562.4.\n") == 0);
free(board514913163);
board514913163 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_golden_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 8, 6) == 1 );


char* board345814527 = gamma_board(board);
assert( board345814527 != NULL );
assert( strcmp(board345814527, 
"....113264\n"
"1066..111.7\n"
"107..46.8.\n"
"..4.5.91212\n"
"2412.6..810\n"
".13.8..101211\n"
"10.2.6.8.12\n"
".2413.5713.\n"
".10.4111.78\n"
"17121.8.2\n"
"634311....\n"
"..7.4107.8\n"
".57562.4.\n") == 0);
free(board345814527);
board345814527 = NULL;
assert( gamma_move(board, 13, 12, 0) == 0 );
assert( gamma_move(board, 13, 1, 9) == 1 );
assert( gamma_golden_move(board, 13, 8, 8) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );


char* board189877577 = gamma_board(board);
assert( board189877577 != NULL );
assert( strcmp(board189877577, 
"....113264\n"
"1066..11147\n"
"107..46.8.\n"
".134.5.91212\n"
"2412.6..813\n"
".13.8..101211\n"
"10.2.6.8.12\n"
".2413.5713.\n"
".10.4111.78\n"
"17121.8.2\n"
"634311....\n"
"..7.4107.8\n"
".57562.4.\n") == 0);
free(board189877577);
board189877577 = NULL;
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 12, 10, 8) == 0 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_move(board, 12, 0, 3) == 1 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 11, 4) == 0 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_move(board, 13, 12, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 2, 7) == 1 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_free_fields(board, 12) == 35 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 9, 5) == 0 );
assert( gamma_move(board, 13, 3, 11) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 13, 6, 11) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_golden_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 13, 6, 6) == 0 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_move(board, 13, 3, 8) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );


char* board333645435 = gamma_board(board);
assert( board333645435 != NULL );
assert( strcmp(board333645435, 
"....113264\n"
"10665.11147\n"
"107..4648.\n"
".13495.91212\n"
"2412865.813\n"
"213118..101211\n"
"10.266.8.12\n"
"3241385713.\n"
".1094111.78\n"
"127121.8.2\n"
"634311.2..\n"
".87.4107.8\n"
"1257562.4.\n") == 0);
free(board333645435);
board333645435 = NULL;
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_move(board, 13, 5, 10) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );


char* board353454711 = gamma_board(board);
assert( board353454711 != NULL );
assert( strcmp(board353454711, 
".8..113264\n"
"10665.11147\n"
"107..4648.\n"
".13495.91212\n"
"2412865.813\n"
"213118..101211\n"
"10.266.8312\n"
"3241385713.\n"
".1094111.78\n"
"127121.8.2\n"
"6343111124.\n"
".87.4107.8\n"
"1257562.4.\n") == 0);
free(board353454711);
board353454711 = NULL;
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_free_fields(board, 11) == 25 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_golden_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 12, 5, 7) == 1 );
assert( gamma_move(board, 13, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
