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
uuid: 154618760
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 11, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );


char* board519424889 = gamma_board(board);
assert( board519424889 != NULL );
assert( strcmp(board519424889, 
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"..1.........\n"
"............\n"
"............\n") == 0);
free(board519424889);
board519424889 = NULL;
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 10, 11, 1) == 1 );
assert( gamma_move(board, 11, 10, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 8) == 157 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 2, 6) == 1 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 11, 8, 9) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_free_fields(board, 8) == 143 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_free_fields(board, 11) == 142 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 141 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 11, 13) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_golden_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 11, 7, 5) == 1 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 10, 13) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board632643855 = gamma_board(board);
assert( board632643855 != NULL );
assert( strcmp(board632643855, 
"....6.......\n"
"..3.......35\n"
"....36....4.\n"
"....6.71...2\n"
".........5..\n"
".13...8.11...\n"
"....102.....5\n"
".....11..431.\n"
"..109..366.11.\n"
".7.7...11..8.\n"
"1.......5.8.\n"
"...17....6..\n"
".111...937.92\n"
"5.........510\n"
"2.4..4..14.6\n") == 0);
free(board632643855);
board632643855 = NULL;
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_golden_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 13, 5) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_free_fields(board, 4) == 116 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 115 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );


char* board670525667 = gamma_board(board);
assert( board670525667 != NULL );
assert( strcmp(board670525667, 
"....6.......\n"
"..3.......35\n"
"....36...44.\n"
"....6.71...2\n"
".........5..\n"
"3131..8.11...\n"
"....102..6..5\n"
".3...11..431.\n"
"..109..366.11.\n"
".7.7...11..8.\n"
"1..4....5.88\n"
"...87..8.669\n"
".111..5937.92\n"
"51...8....510\n"
"2.4..4..14.6\n") == 0);
free(board670525667);
board670525667 = NULL;
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_free_fields(board, 9) == 112 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 9, 9) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 109 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_golden_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_free_fields(board, 8) == 104 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );


char* board688523940 = gamma_board(board);
assert( board688523940 != NULL );
assert( strcmp(board688523940, 
"....6.......\n"
"..37......35\n"
"....36...44.\n"
"....6.71..22\n"
"2.......55..\n"
"3131..8.1111..\n"
"....102..6..5\n"
".3..111..431.\n"
"..109.1366.118\n"
".7.7...11..8.\n"
"1..4..10.5.88\n"
"...87..8.669\n"
".111..5937.92\n"
"513.78....510\n"
"2.4..4..14.6\n") == 0);
free(board688523940);
board688523940 = NULL;
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 5, 11, 14) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_free_fields(board, 8) == 98 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 10, 10, 11) == 0 );
assert( gamma_move(board, 11, 9, 10) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 0, 13) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 10, 13, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 10, 14, 10) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_free_fields(board, 10) == 87 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );


char* board264285400 = gamma_board(board);
assert( board264285400 != NULL );
assert( strcmp(board264285400, 
"....6......5\n"
"9.37......35\n"
"...536...44.\n"
"....6.71..22\n"
"2.......55..\n"
"3131.18.1111..\n"
"10...102..6..5\n"
"933.111..431.\n"
"..109.1366.118\n"
".7.7.6.11..81\n"
"1.943910.5.88\n"
".5.87..8.669\n"
".1112.5937.92\n"
"533.78....510\n"
"2.4..4..14.6\n") == 0);
free(board264285400);
board264285400 = NULL;
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_free_fields(board, 10) == 84 );
assert( gamma_move(board, 11, 8, 9) == 0 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board518779288 = gamma_board(board);
assert( board518779288 != NULL );
assert( strcmp(board518779288, 
"....6......5\n"
"9.37......35\n"
"...536...44.\n"
"....6.71..22\n"
"2.......55..\n"
"3131.18.1111..\n"
"10...102..6..5\n"
"933.111.8431.\n"
".7109.1366.118\n"
".7.7.6.11..81\n"
"1.943910.51088\n"
".5.87..8.669\n"
".1112.5937.92\n"
"533.78....510\n"
"2.4..4..14.6\n") == 0);
free(board518779288);
board518779288 = NULL;
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 7, 5, 14) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_golden_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 11, 14, 2) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 9, 0, 12) == 1 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board792006712 = gamma_board(board);
assert( board792006712 != NULL );
assert( strcmp(board792006712, 
"8...67.....5\n"
"9.37.9....35\n"
"9..536...44.\n"
".10..6.714.21\n"
"2......655..\n"
"3131.18.1111.1\n"
"1010..102..6..5\n"
"9333111.8431.\n"
".7109.1366.118\n"
".7.7.6.11.381\n"
"1.943910.51088\n"
".5.87..8.669\n"
".111255937292\n"
"533.788.7.510\n"
"28410.4..14.6\n") == 0);
free(board792006712);
board792006712 = NULL;
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );


char* board478529504 = gamma_board(board);
assert( board478529504 != NULL );
assert( strcmp(board478529504, 
"8...67.....5\n"
"9.37.9....35\n"
"9..536...44.\n"
".10..6.714.21\n"
"2......655..\n"
"3131.18.1111.1\n"
"1010..102..6..5\n"
"9333111.8431.\n"
".7109.1366.118\n"
".7.7.6.11.381\n"
"1.943910.51088\n"
".5.87..8.669\n"
".111255937292\n"
"533.788.7.510\n"
"28410.4.214.6\n") == 0);
free(board478529504);
board478529504 = NULL;
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_golden_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_golden_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 14, 9) == 0 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );


char* board310131295 = gamma_board(board);
assert( board310131295 != NULL );
assert( strcmp(board310131295, 
"8...67.....5\n"
"9.37.9....35\n"
"9..536...44.\n"
"1106.6.714.21\n"
"2......655..\n"
"3131.18.111121\n"
"1010..1025.65.5\n"
"933311158431.\n"
".7109.1366.118\n"
".7.7.6.11.381\n"
"1.943910.51088\n"
".5.117..811669\n"
".111255937292\n"
"533.78887.510\n"
"28410.410214.6\n") == 0);
free(board310131295);
board310131295 = NULL;
assert( gamma_move(board, 10, 14, 10) == 0 );
assert( gamma_free_fields(board, 10) == 57 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 7, 11) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_free_fields(board, 9) == 57 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board679152180 = gamma_board(board);
assert( board679152180 != NULL );
assert( strcmp(board679152180, 
"8...67.....5\n"
"9.37.9....35\n"
"9..536...44.\n"
"1106.6.714.21\n"
"2......655..\n"
"3131.18.111121\n"
"1010..1025.65.5\n"
"933311158431.\n"
".7109.1366.118\n"
".7.7.6.11.381\n"
"1.943910.51088\n"
".5.117..811669\n"
".111255937292\n"
"533.78887.510\n"
"28410.410214.6\n") == 0);
free(board679152180);
board679152180 = NULL;
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_free_fields(board, 9) == 54 );
assert( gamma_move(board, 10, 11, 11) == 0 );
assert( gamma_move(board, 10, 3, 8) == 1 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_move(board, 11, 11, 11) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );


char* board925709669 = gamma_board(board);
assert( board925709669 != NULL );
assert( strcmp(board925709669, 
"83..67.....5\n"
"9.37.9....35\n"
"9..536...44.\n"
"1106.6.714.21\n"
"2......655..\n"
"3131.184111121\n"
"1010.101025.65.5\n"
"933311158431.\n"
".7109.1366.118\n"
".7.7.6.11.381\n"
"1.943910.51088\n"
".5.117..811669\n"
".111255937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board925709669);
board925709669 = NULL;
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 13, 9) == 0 );
assert( gamma_move(board, 10, 8, 14) == 1 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 3, 14) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 13, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_golden_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 11, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 12, 1) == 0 );
assert( gamma_move(board, 10, 7, 13) == 1 );
assert( gamma_move(board, 11, 8, 12) == 1 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );


char* board969525948 = gamma_board(board);
assert( board969525948 != NULL );
assert( strcmp(board969525948, 
"83.1167..10..5\n"
"9.37.9.10..35\n"
"9..536..1144.\n"
"1106.6.714.21\n"
"2..8...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board969525948);
board969525948 = NULL;
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board949781741 = gamma_board(board);
assert( board949781741 != NULL );
assert( strcmp(board949781741, 
"83.1167..10..5\n"
"9.37.9.10..35\n"
"9..536..1144.\n"
"1106.6.714.21\n"
"2..8...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board949781741);
board949781741 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );


char* board724324582 = gamma_board(board);
assert( board724324582 != NULL );
assert( strcmp(board724324582, 
"83.1167..10..5\n"
"9.37.9.10..35\n"
"9..536..1144.\n"
"1106.6.714.21\n"
"2..8...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board724324582);
board724324582 = NULL;
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 9, 11, 12) == 1 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 2, 10) == 1 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 11, 7, 6) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 11, 9) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 8, 11) == 0 );
assert( gamma_move(board, 11, 13, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_free_fields(board, 9) == 37 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_golden_move(board, 11, 13, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 37 );


char* board369149945 = gamma_board(board);
assert( board369149945 != NULL );
assert( strcmp(board369149945, 
"83.1167..10..5\n"
"9.37.9.10..35\n"
"9.65367.11449\n"
"1106.6.714.21\n"
"2.108...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board369149945);
board369149945 = NULL;
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );


char* board981044609 = gamma_board(board);
assert( board981044609 != NULL );
assert( strcmp(board981044609, 
"83.1167..10..5\n"
"9.37.9.10..35\n"
"9.65367.11449\n"
"1106.6.714.21\n"
"2.108...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board981044609);
board981044609 = NULL;
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 7, 10) == 0 );


char* board684546506 = gamma_board(board);
assert( board684546506 != NULL );
assert( strcmp(board684546506, 
"83.1167..10..5\n"
"9.37.9.10..35\n"
"9.65367.11449\n"
"1106.6.714.21\n"
"2.108...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board684546506);
board684546506 = NULL;
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_free_fields(board, 11) == 37 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 6, 14) == 1 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 13, 4) == 0 );


char* board403587802 = gamma_board(board);
assert( board403587802 != NULL );
assert( strcmp(board403587802, 
"83.11678.10..5\n"
"9.37.9.10..35\n"
"9.65367.11449\n"
"1106.6.714.21\n"
"26108...6553.\n"
"3131.184111121\n"
"1010.101025.6515\n"
"933311158431.\n"
"2779.1366.118\n"
".777.6.11.381\n"
"1.943910751088\n"
".56117..811669\n"
"1111254937292\n"
"533.788873510\n"
"28410.410214.6\n") == 0);
free(board403587802);
board403587802 = NULL;
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 10, 5, 10) == 1 );
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_move(board, 11, 13, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_golden_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board956835293 = gamma_board(board);
assert( board956835293 != NULL );
assert( strcmp(board956835293, 
"83.11678.10..5\n"
"9.37.9.10..35\n"
"9.65367.11449\n"
"110656.714.21\n"
"26108.10.6553.\n"
"3131.184111121\n"
"1010.10102546515\n"
"9333111584317\n"
"2779.1366.118\n"
".777.6.113381\n"
"1.943910751088\n"
"656117..811669\n"
"1111254937292\n"
"533.788853510\n"
"28410.410214.6\n") == 0);
free(board956835293);
board956835293 = NULL;
assert( gamma_move(board, 7, 7, 14) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );


char* board832274201 = gamma_board(board);
assert( board832274201 != NULL );
assert( strcmp(board832274201, 
"83.11678710..5\n"
"9.37.9.10..35\n"
"9.65367.11449\n"
"110656.714.21\n"
"26108.10.6553.\n"
"3131.184111121\n"
"1010.10102546515\n"
"9333111584317\n"
"2779.1366.118\n"
".777.6.113381\n"
"1.943910751088\n"
"656117..811669\n"
"1111254937292\n"
"533.788853510\n"
"28410.410214.6\n") == 0);
free(board832274201);
board832274201 = NULL;
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_move(board, 1, 10, 14) == 1 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


gamma_delete(board);

    return 0;
}
