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
uuid: 980792676
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 14, 9, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_free_fields(board, 2) == 193 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );


char* board831203108 = gamma_board(board);
assert( board831203108 != NULL );
assert( strcmp(board831203108, 
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"........1.....\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
".........2....\n"
"..3...........\n"
"..............\n"
"........2.....\n") == 0);
free(board831203108);
board831203108 = NULL;
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_free_fields(board, 4) == 190 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 11, 5) == 1 );


char* board885530570 = gamma_board(board);
assert( board885530570 != NULL );
assert( strcmp(board885530570, 
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"........1.....\n"
"..............\n"
"..............\n"
"..............\n"
"..7........7..\n"
"..64..........\n"
".........2....\n"
"..3...........\n"
"......5.....4.\n"
"........2.....\n") == 0);
free(board885530570);
board885530570 = NULL;
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 10) == 1 );
assert( gamma_free_fields(board, 9) == 184 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_free_fields(board, 1) == 182 );


char* board798573503 = gamma_board(board);
assert( board798573503 != NULL );
assert( strcmp(board798573503, 
"..............\n"
"...........1..\n"
"..............\n"
".............9\n"
"........1.....\n"
"..............\n"
"..............\n"
"..............\n"
"..7........7..\n"
".864..........\n"
".........2.1..\n"
"..3...........\n"
"......5.....4.\n"
"........2.....\n") == 0);
free(board798573503);
board798573503 = NULL;
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 2) == 181 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 177 );
assert( gamma_move(board, 8, 13, 7) == 1 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_free_fields(board, 2) == 174 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 171 );
assert( gamma_free_fields(board, 6) == 171 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 3) == 165 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );


char* board218560580 = gamma_board(board);
assert( board218560580 != NULL );
assert( strcmp(board218560580, 
"...4....3.....\n"
"...3.......1..\n"
"..............\n"
"...2......4..9\n"
"........1.....\n"
"..............\n"
"....8....2...8\n"
"........3...1.\n"
"..73.7.....7..\n"
".864......24..\n"
"..9......2.1..\n"
"2.3...........\n"
".7....5.....4.\n"
".....5.42.....\n") == 0);
free(board218560580);
board218560580 = NULL;
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_free_fields(board, 5) == 161 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_move(board, 9, 13, 3) == 1 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_free_fields(board, 5) == 146 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_move(board, 2, 7, 4) == 0 );


char* board764204211 = gamma_board(board);
assert( board764204211 != NULL );
assert( strcmp(board764204211, 
"...4.8..3.....\n"
"...3.......1..\n"
".4............\n"
"8..2......4..9\n"
"86......1.....\n"
"...5..........\n"
"7...84...2...8\n"
".......73.9.1.\n"
".773.7.....7..\n"
"5864..22..24..\n"
".59......231.9\n"
"2.3........1..\n"
".7....5.....4.\n"
"1....5242..6..\n") == 0);
free(board764204211);
board764204211 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_free_fields(board, 8) == 137 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 9, 7, 12) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_free_fields(board, 1) == 134 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_golden_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 6, 13) == 1 );
assert( gamma_move(board, 8, 1, 13) == 1 );
assert( gamma_move(board, 9, 13, 9) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board296146053 = gamma_board(board);
assert( board296146053 != NULL );
assert( strcmp(board296146053, 
".8.4.88.31.3..\n"
".4.3.3.9...1..\n"
".4......3.....\n"
"8..2.9....4..9\n"
"86...58.1....9\n"
"...5......7...\n"
"7.4684...2...8\n"
"...7...73.9.1.\n"
".773.78....7..\n"
"5864.6222.24..\n"
".59......231.9\n"
"2.3.......41..\n"
".7....5.....4.\n"
"1....52426.6..\n") == 0);
free(board296146053);
board296146053 = NULL;
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 119 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board613612376 = gamma_board(board);
assert( board613612376 != NULL );
assert( strcmp(board613612376, 
".8.4.88.31.3..\n"
".4.3.3.9...1..\n"
".4......3.....\n"
"8..2.9....4.69\n"
"86...58.1..5.9\n"
"...5......7...\n"
"7.4684...2...8\n"
"...7...73.9.1.\n"
".773.78....7..\n"
"5864.6222.24..\n"
".59......231.9\n"
"2.3.......41..\n"
".7....55....4.\n"
"1....52426.6..\n") == 0);
free(board613612376);
board613612376 = NULL;
assert( gamma_move(board, 7, 12, 13) == 1 );
assert( gamma_move(board, 7, 8, 12) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_free_fields(board, 3) == 114 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );


char* board978388522 = gamma_board(board);
assert( board978388522 != NULL );
assert( strcmp(board978388522, 
".8.4.88.31.37.\n"
".4.3.3.97..1..\n"
".4......3.....\n"
"8..2.9....4.69\n"
"86...58.1..5.9\n"
"...5....7.7...\n"
"7.4684...2...8\n"
"...7...73.951.\n"
".773.78.2..7..\n"
"5864.6222.24..\n"
".59......231.9\n"
"2.3...8...41..\n"
".7....55....4.\n"
"1....52426.6..\n") == 0);
free(board978388522);
board978388522 = NULL;
assert( gamma_move(board, 8, 13, 0) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 13, 10) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_golden_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 107 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 9, 10) == 0 );


char* board673111789 = gamma_board(board);
assert( board673111789 != NULL );
assert( strcmp(board673111789, 
".8.4.88.31.37.\n"
".4.3.3.97..1..\n"
".4......3.....\n"
"8..2.9....4.69\n"
"868..58.1..5.9\n"
"...5...27.7...\n"
"764684...2...8\n"
"..67...73.951.\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.231.9\n"
"2.3...8...41..\n"
".7....55....4.\n"
"1....52426.6.8\n") == 0);
free(board673111789);
board673111789 = NULL;
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_free_fields(board, 1) == 103 );
assert( gamma_move(board, 2, 10, 7) == 1 );


char* board245538935 = gamma_board(board);
assert( board245538935 != NULL );
assert( strcmp(board245538935, 
".8.4.88.31.37.\n"
".4.3.3.97..1..\n"
".4......31....\n"
"8..2.9....4.69\n"
"868..58.1..5.9\n"
"...5...27.7...\n"
"764684...22..8\n"
"..67...73.951.\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.231.9\n"
"2.3...8...41..\n"
".7....55....4.\n"
"1....52426.6.8\n") == 0);
free(board245538935);
board245538935 = NULL;
assert( gamma_move(board, 3, 9, 7) == 0 );


char* board554521183 = gamma_board(board);
assert( board554521183 != NULL );
assert( strcmp(board554521183, 
".8.4.88.31.37.\n"
".4.3.3.97..1..\n"
".4......31....\n"
"8..2.9....4.69\n"
"868..58.1..5.9\n"
"...5...27.7...\n"
"764684...22..8\n"
"..67...73.951.\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.231.9\n"
"2.3...8...41..\n"
".7....55....4.\n"
"1....52426.6.8\n") == 0);
free(board554521183);
board554521183 = NULL;
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 13, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_free_fields(board, 6) == 97 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );


char* board186860858 = gamma_board(board);
assert( board186860858 != NULL );
assert( strcmp(board186860858, 
".8.4.88.31.37.\n"
".4.3.3.97..1..\n"
".4......31....\n"
"86.2.9....4.69\n"
"868..58.1..549\n"
"...5...27.7..6\n"
"764684...22..8\n"
"..67...73.951.\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.231.9\n"
"2.3...8.3.41..\n"
".7....55....4.\n"
"1..9.52426.6.8\n") == 0);
free(board186860858);
board186860858 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 97 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_golden_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_free_fields(board, 9) == 95 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 12, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_move(board, 3, 2, 12) == 1 );


char* board408308081 = gamma_board(board);
assert( board408308081 != NULL );
assert( strcmp(board408308081, 
".8.4.88.31137.\n"
".433.3.97..1.2\n"
".4......31.5..\n"
"86.2.9....4.69\n"
"868..58.1..549\n"
"3..5...27.7..6\n"
"764684...221.8\n"
"..67...73.951.\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.231.9\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board408308081);
board408308081 = NULL;
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 9, 11, 8) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 7, 9, 12) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 9, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 11 );


char* board948486167 = gamma_board(board);
assert( board948486167 != NULL );
assert( strcmp(board948486167, 
".8.4.88.31137.\n"
".433.3.977.1.2\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board948486167);
board948486167 = NULL;
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );


char* board546461384 = gamma_board(board);
assert( board546461384 != NULL );
assert( strcmp(board546461384, 
".8.4.88.31137.\n"
".433.3.97711.2\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board546461384);
board546461384 = NULL;
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


char* board160912768 = gamma_board(board);
assert( board160912768 != NULL );
assert( strcmp(board160912768, 
".8.4.88.31137.\n"
".433.3.97711.2\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board160912768);
board160912768 = NULL;
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 6, 10, 6) == 0 );


char* board226558660 = gamma_board(board);
assert( board226558660 != NULL );
assert( strcmp(board226558660, 
".8.4.88.31137.\n"
".433.3.97711.2\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board226558660);
board226558660 = NULL;
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );


char* board911499741 = gamma_board(board);
assert( board911499741 != NULL );
assert( strcmp(board911499741, 
".8.4888.31137.\n"
".433.3.97711.2\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board911499741);
board911499741 = NULL;
assert( gamma_move(board, 9, 12, 12) == 1 );
assert( gamma_move(board, 9, 2, 13) == 1 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );


char* board564462650 = gamma_board(board);
assert( board564462650 != NULL );
assert( strcmp(board564462650, 
".894888.31137.\n"
".43323.9771192\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
".773.78.2..7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board564462650);
board564462650 = NULL;
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_golden_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_free_fields(board, 9) == 16 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );


char* board869441148 = gamma_board(board);
assert( board869441148 != NULL );
assert( strcmp(board869441148, 
".894888.31137.\n"
"243323.9771192\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
"1773.78.25.7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board869441148);
board869441148 = NULL;
assert( gamma_move(board, 5, 1, 11) == 0 );


char* board757305612 = gamma_board(board);
assert( board757305612 != NULL );
assert( strcmp(board757305612, 
".894888.31137.\n"
"243323.9771192\n"
".4......31.5..\n"
"86.2.9....4569\n"
"868..58.1..549\n"
"3..5...27.79.6\n"
"764684..3221.8\n"
"..67...7399516\n"
"1773.78.25.7..\n"
"586456222224..\n"
".59....5.23129\n"
"2.3...8.3.41..\n"
"97....555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board757305612);
board757305612 = NULL;
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_free_fields(board, 6) == 71 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_golden_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );


char* board991084684 = gamma_board(board);
assert( board991084684 != NULL );
assert( strcmp(board991084684, 
".894888.311371\n"
"243323.9771192\n"
".4......31.5..\n"
"86.2.99...4569\n"
"868..58.11.549\n"
"36.58..27.79.6\n"
"764684.73221.8\n"
"..67...7399516\n"
"1773.78.25.7..\n"
"586456222224..\n"
".59....5.23129\n"
"253...8.3.41..\n"
"97...6555...4.\n"
"1..9.52426.6.8\n") == 0);
free(board991084684);
board991084684 = NULL;
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_golden_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 13, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board816133732 = gamma_board(board);
assert( board816133732 != NULL );
assert( strcmp(board816133732, 
".894888.311371\n"
"243323.9771192\n"
".4......31.5..\n"
"8682999...4569\n"
"868..58.11.549\n"
"36.58..27.79.6\n"
"764684.73221.8\n"
".767...7399516\n"
"1773.78.25.7..\n"
"586456222224..\n"
".59....5.23129\n"
"253...8.3.41..\n"
"97...6555..14.\n"
"1.99.52426.688\n") == 0);
free(board816133732);
board816133732 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );


char* board232483690 = gamma_board(board);
assert( board232483690 != NULL );
assert( strcmp(board232483690, 
".894888.311371\n"
"243323.9771192\n"
".4......31.5..\n"
"8682999...4569\n"
"868..58.11.549\n"
"36.58..27.79.6\n"
"764684.73221.8\n"
".767...7399516\n"
"1773.78.25.7..\n"
"586456222224..\n"
".59....5.23129\n"
"253...8.3.41..\n"
"97...6555..14.\n"
"1.99.52426.688\n") == 0);
free(board232483690);
board232483690 = NULL;
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 13, 9) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 9, 13) == 0 );


gamma_delete(board);

    return 0;
}
