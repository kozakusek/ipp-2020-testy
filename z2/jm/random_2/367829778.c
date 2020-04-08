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
uuid: 367829778
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 15, 6, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_free_fields(board, 3) == 146 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_golden_move(board, 5, 9, 9) == 1 );


char* board920860308 = gamma_board(board);
assert( board920860308 != NULL );
assert( strcmp(board920860308, 
"..........\n"
".25.......\n"
"..........\n"
"..........\n"
"..........\n"
".........5\n"
"..........\n"
"..........\n"
"1.........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"1.........\n"
"..........\n") == 0);
free(board920860308);
board920860308 = NULL;
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );


char* board773635332 = gamma_board(board);
assert( board773635332 != NULL );
assert( strcmp(board773635332, 
"..........\n"
".25......1\n"
"..........\n"
"....5.....\n"
"..........\n"
".........5\n"
"..........\n"
"..........\n"
"1.6..1....\n"
"..........\n"
"..........\n"
"4.........\n"
"..........\n"
"1.........\n"
"..........\n") == 0);
free(board773635332);
board773635332 = NULL;
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_free_fields(board, 2) == 134 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_free_fields(board, 5) == 126 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_free_fields(board, 1) == 123 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_golden_move(board, 2, 1, 0) == 1 );


char* board931997209 = gamma_board(board);
assert( board931997209 != NULL );
assert( strcmp(board931997209, 
"..........\n"
"225......1\n"
"..........\n"
".56.5.5...\n"
"..........\n"
"........35\n"
"........43\n"
"41........\n"
"1564.1...2\n"
"..62.2616.\n"
".........1\n"
"4..2..3.2.\n"
".54.....12\n"
"14...43..5\n"
"22....4...\n") == 0);
free(board931997209);
board931997209 = NULL;
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 6) == 105 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );


char* board827679947 = gamma_board(board);
assert( board827679947 != NULL );
assert( strcmp(board827679947, 
"......1...\n"
"225.....51\n"
"...2.....1\n"
".56.5.5...\n"
"......4...\n"
"..4..34435\n"
"....3...43\n"
"415.1.....\n"
"1564.1..12\n"
"..6262616.\n"
"...3..5..1\n"
"4..2..3423\n"
".54.....12\n"
"14...43.65\n"
"22....4...\n") == 0);
free(board827679947);
board827679947 = NULL;
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );


char* board203998589 = gamma_board(board);
assert( board203998589 != NULL );
assert( strcmp(board203998589, 
"......1...\n"
"225.....51\n"
"...2..3..1\n"
".56.5.5...\n"
"......4...\n"
".44..34435\n"
"....3..143\n"
"415.1.....\n"
"1564.1..12\n"
"..6262616.\n"
"...3..5..1\n"
"4..2..3423\n"
".54.....12\n"
"14.4.43.65\n"
"22....4...\n") == 0);
free(board203998589);
board203998589 = NULL;
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board829149069 = gamma_board(board);
assert( board829149069 != NULL );
assert( strcmp(board829149069, 
"......1.4.\n"
"225.....51\n"
"...2..3..1\n"
".56.5.5...\n"
"...6..4...\n"
".44..34435\n"
"....3..143\n"
"415.1.....\n"
"1564.1..12\n"
"..6262616.\n"
"...3..5..1\n"
"42.2..3423\n"
".542....12\n"
"14.4.43.65\n"
"22....4...\n") == 0);
free(board829149069);
board829149069 = NULL;
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_golden_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 6, 2, 14) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_free_fields(board, 6) == 63 );


char* board572351087 = gamma_board(board);
assert( board572351087 != NULL );
assert( strcmp(board572351087, 
"..6...1.4.\n"
"2256....51\n"
".5.2..3.21\n"
"356.5.5..3\n"
"6..6..4...\n"
"544..34435\n"
"3...3..143\n"
"415.1...66\n"
"1564.13.12\n"
"..6262616.\n"
"...32.53.1\n"
"4242..3423\n"
".5423...12\n"
"14.4.43665\n"
"22....4...\n") == 0);
free(board572351087);
board572351087 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );


char* board323794163 = gamma_board(board);
assert( board323794163 != NULL );
assert( strcmp(board323794163, 
"..6...1.4.\n"
"2256....51\n"
".5.2..3.21\n"
"356.5.5..3\n"
"6..6..4...\n"
"544..34435\n"
"3...3..143\n"
"415.1...66\n"
"1564.13.12\n"
"..6262616.\n"
"...32.53.1\n"
"4242..3423\n"
".5423...12\n"
"14.4.43665\n"
"22....4...\n") == 0);
free(board323794163);
board323794163 = NULL;
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );


char* board524176404 = gamma_board(board);
assert( board524176404 != NULL );
assert( strcmp(board524176404, 
"..6...1.42\n"
"2256....51\n"
".5.2..3.21\n"
"356.5.5..3\n"
"6..6..43..\n"
"544..34435\n"
"3...3..143\n"
"415.1...66\n"
"1564.13.12\n"
"..6262616.\n"
"...32.53.1\n"
"4242..3423\n"
".5423...12\n"
"14.4.43665\n"
"22.2..4...\n") == 0);
free(board524176404);
board524176404 = NULL;
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 7, 7) == 1 );


char* board965278441 = gamma_board(board);
assert( board965278441 != NULL );
assert( strcmp(board965278441, 
"..6...1.42\n"
"2256....51\n"
".5.2..3.21\n"
"356.5.5..3\n"
"6..6..43..\n"
"544..34435\n"
"3.2.3..143\n"
"415.1..566\n"
"1564.13.12\n"
"4.6262616.\n"
".6.32.5311\n"
"4242..3423\n"
".5423...12\n"
"1424.43665\n"
"22.2..4...\n") == 0);
free(board965278441);
board965278441 = NULL;
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );


char* board264194266 = gamma_board(board);
assert( board264194266 != NULL );
assert( strcmp(board264194266, 
"..6...1.42\n"
"2256....51\n"
".5.2..3.21\n"
"356.5.5..3\n"
"6..6..43..\n"
"544..34435\n"
"3.2.3..143\n"
"415.1..566\n"
"1564.13.12\n"
"4.6262616.\n"
".6.32.5311\n"
"4242..3423\n"
".5423...12\n"
"1424.43665\n"
"22.2..4...\n") == 0);
free(board264194266);
board264194266 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );


char* board311802108 = gamma_board(board);
assert( board311802108 != NULL );
assert( strcmp(board311802108, 
".46...1.42\n"
"2256..2351\n"
".532..3.21\n"
"356.545..3\n"
"6..6..43..\n"
"544..34435\n"
"33263..143\n"
"415.1..566\n"
"1564113612\n"
"4.6262616.\n"
".6.32.5311\n"
"4242563423\n"
"254235.512\n"
"1424.43665\n"
"22.2..4...\n") == 0);
free(board311802108);
board311802108 = NULL;
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );


char* board590750060 = gamma_board(board);
assert( board590750060 != NULL );
assert( strcmp(board590750060, 
"446...1.42\n"
"2256..2351\n"
".532..3.21\n"
"356.545..3\n"
"6..6..43..\n"
"544..34435\n"
"33263..143\n"
"415.1..566\n"
"1564113612\n"
"4.6262616.\n"
".6.32.5311\n"
"4242563423\n"
"254235.512\n"
"1424.43665\n"
"22.25.4...\n") == 0);
free(board590750060);
board590750060 = NULL;
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_golden_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );


char* board304000534 = gamma_board(board);
assert( board304000534 != NULL );
assert( strcmp(board304000534, 
"446...1.42\n"
"2256..2351\n"
".532..3.21\n"
"356.545..3\n"
"6..6.643..\n"
"544..34434\n"
"33263.1143\n"
"415.15.566\n"
"1564113612\n"
"4.6262616.\n"
".6.32.5311\n"
"4242563423\n"
"2542354512\n"
"1424.43665\n"
"22.25.4...\n") == 0);
free(board304000534);
board304000534 = NULL;
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board100853015 = gamma_board(board);
assert( board100853015 != NULL );
assert( strcmp(board100853015, 
"446...1.42\n"
"2256..2351\n"
".532..3.21\n"
"356.545..3\n"
"6..6.643..\n"
"544..34434\n"
"33263.1143\n"
"415415.566\n"
"1564113612\n"
"4.6262616.\n"
".6.32.5311\n"
"4242563423\n"
"2542354512\n"
"1424.43665\n"
"22.25.4...\n") == 0);
free(board100853015);
board100853015 = NULL;
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 7, 14) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );


char* board632178407 = gamma_board(board);
assert( board632178407 != NULL );
assert( strcmp(board632178407, 
"446...1142\n"
"2256..2351\n"
".5322.3.21\n"
"356.545..3\n"
"66.6.643..\n"
"544..34434\n"
"33263.1143\n"
"415415.566\n"
"1564113612\n"
"4.6262616.\n"
".6.32.5311\n"
"4242563423\n"
"2542354512\n"
"1424.43665\n"
"22.25.4...\n") == 0);
free(board632178407);
board632178407 = NULL;
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
