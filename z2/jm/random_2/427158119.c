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
uuid: 427158119
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 15, 13, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_free_fields(board, 5) == 127 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 123 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 2, 11) == 1 );
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 0, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );


char* board850905410 = gamma_board(board);
assert( board850905410 != NULL );
assert( strcmp(board850905410, 
".........\n"
".........\n"
".........\n"
"4.108.....\n"
"......6..\n"
".........\n"
"..5..3...\n"
"........6\n"
".....9.7.\n"
"12.....1..\n"
".....5114.\n"
".........\n"
"...2..9..\n"
"..1......\n"
".13.......\n") == 0);
free(board850905410);
board850905410 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, 4, 11) == 1 );
assert( gamma_move(board, 9, 2, 10) == 1 );


char* board919181617 = gamma_board(board);
assert( board919181617 != NULL );
assert( strcmp(board919181617, 
".......4.\n"
".........\n"
"...3.....\n"
"4.1089....\n"
"..9...6..\n"
".8.......\n"
"..5..3...\n"
"........6\n"
"..7..9.7.\n"
"12.....1..\n"
".....5114.\n"
".........\n"
"...2..9..\n"
".813.....\n"
".13.......\n") == 0);
free(board919181617);
board919181617 = NULL;
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_free_fields(board, 10) == 109 );
assert( gamma_move(board, 11, 8, 12) == 1 );
assert( gamma_move(board, 13, 0, 7) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 98 );
assert( gamma_move(board, 9, 13, 8) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 12, 2, 14) == 1 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 14, 8) == 0 );
assert( gamma_move(board, 9, 0, 12) == 1 );
assert( gamma_move(board, 10, 14, 3) == 0 );
assert( gamma_move(board, 10, 6, 13) == 1 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_free_fields(board, 12) == 83 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_free_fields(board, 5) == 80 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_golden_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 12, 10, 3) == 0 );
assert( gamma_move(board, 12, 5, 1) == 1 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 8, 14) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );


char* board720988657 = gamma_board(board);
assert( board720988657 != NULL );
assert( strcmp(board720988657, 
".612.4..42\n"
"....5.10..\n"
"9..3.53.11\n"
"4.1089....\n"
"..9..66..\n"
"68....93.\n"
"1.5..3.7.\n"
"1393..4..6\n"
"..7..9.7.\n"
"12113.961.12\n"
".1.5.5114.\n"
".....135813\n"
"...211.9..\n"
"1813812116.\n"
"813114.4...\n") == 0);
free(board720988657);
board720988657 = NULL;
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 13, 6) == 0 );


char* board635466489 = gamma_board(board);
assert( board635466489 != NULL );
assert( strcmp(board635466489, 
".612.4..42\n"
"....5.10..\n"
"9..3.53.11\n"
"4.108985..\n"
"..9..66..\n"
"68....93.\n"
"1.5..3.7.\n"
"1393..4.56\n"
"..7..9.7.\n"
"12113.961.12\n"
".1.5.5114.\n"
".....135813\n"
"...211.9..\n"
"1813812116.\n"
"813114.4...\n") == 0);
free(board635466489);
board635466489 = NULL;
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 65 );
assert( gamma_golden_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 11, 7, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_free_fields(board, 11) == 65 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 13, 0, 6) == 1 );
assert( gamma_golden_move(board, 13, 7, 8) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 11) == 1 );
assert( gamma_golden_move(board, 9, 1, 5) == 1 );
assert( gamma_move(board, 10, 8, 1) == 1 );
assert( gamma_free_fields(board, 10) == 58 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 11, 3, 12) == 0 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_golden_move(board, 12, 0, 2) == 0 );
assert( gamma_move(board, 13, 0, 11) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );


char* board141598509 = gamma_board(board);
assert( board141598509 != NULL );
assert( strcmp(board141598509, 
".612.4.642\n"
"....5.10..\n"
"9..3.53.11\n"
"4.108985.9\n"
"..9..662.\n"
"68....93.\n"
"1.5..3.133\n"
"1393..4.56\n"
"13.7..9.7.\n"
"12913.961.12\n"
"21.5.51144\n"
"8....135813\n"
"..11211.9..\n"
"181381211610\n"
"813114.4...\n") == 0);
free(board141598509);
board141598509 = NULL;
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 5, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 12, 6, 13) == 0 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_move(board, 13, 2, 14) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_free_fields(board, 11) == 46 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 13, 0) == 0 );
assert( gamma_move(board, 12, 8, 10) == 1 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_move(board, 13, 14, 3) == 0 );
assert( gamma_free_fields(board, 13) == 45 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_golden_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_free_fields(board, 11) == 40 );
assert( gamma_move(board, 12, 12, 1) == 0 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_free_fields(board, 13) == 40 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 14, 0) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 13, 7) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_move(board, 11, 3, 12) == 0 );
assert( gamma_golden_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 13, 9, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_free_fields(board, 9) == 31 );
assert( gamma_move(board, 10, 13, 2) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_golden_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_move(board, 11, 6, 12) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 13, 13, 1) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_free_fields(board, 9) == 30 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 13, 9, 5) == 0 );
assert( gamma_move(board, 13, 5, 9) == 1 );
assert( gamma_busy_fields(board, 13) == 8 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );


char* board771517383 = gamma_board(board);
assert( board771517383 != NULL );
assert( strcmp(board771517383, 
".612.48642\n"
"...75.10..\n"
"93.3.53.11\n"
"46108985.9\n"
".299.66212\n"
"68...1393.\n"
"1.55.3.133\n"
"13936.4856\n"
"1310712894711\n"
"129132963712\n"
"21.51041144\n"
"81022.135813\n"
"9611211.99.\n"
"1111381211610\n"
"813114347..\n") == 0);
free(board771517383);
board771517383 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 10, 6, 13) == 0 );
assert( gamma_move(board, 11, 12, 7) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 10, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_golden_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 11, 7, 13) == 1 );
assert( gamma_move(board, 12, 3, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 1) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 2, 12) == 1 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 11, 4, 7) == 1 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 8, 6) == 0 );


char* board405943228 = gamma_board(board);
assert( board405943228 != NULL );
assert( strcmp(board405943228, 
".612.48642\n"
"..175.1011.\n"
"93103.53811\n"
"46108985.9\n"
".299.66212\n"
"68...13938\n"
"1.55.3.133\n"
"13936114856\n"
"1310712894711\n"
"129132963712\n"
"21.51041144\n"
"81022.135813\n"
"9611211.99.\n"
"1111381211610\n"
"813114347..\n") == 0);
free(board405943228);
board405943228 = NULL;
assert( gamma_move(board, 13, 7, 9) == 0 );
assert( gamma_golden_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_golden_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 14, 3) == 0 );


char* board500049383 = gamma_board(board);
assert( board500049383 != NULL );
assert( strcmp(board500049383, 
".612.48642\n"
"..175.1011.\n"
"93103.53811\n"
"46108985.9\n"
".299.66212\n"
"681..13938\n"
"1255.3.133\n"
"13936114856\n"
"1310712894711\n"
"129136963712\n"
"21.51041144\n"
"81022.135813\n"
"9611211.99.\n"
"1111381211610\n"
"813114347.3\n") == 0);
free(board500049383);
board500049383 = NULL;
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 13, 7, 12) == 0 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 11, 13, 5) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 13, 1) == 0 );
assert( gamma_move(board, 13, 8, 6) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );


char* board920810918 = gamma_board(board);
assert( board920810918 != NULL );
assert( strcmp(board920810918, 
".612.48642\n"
"..175.10116\n"
"93103.53811\n"
"46108985.9\n"
".299.66212\n"
"681..13938\n"
"1255.3.133\n"
"13936114856\n"
"1310712894711\n"
"129136963712\n"
"21.51041144\n"
"81022.135813\n"
"9611211.99.\n"
"1111381211610\n"
"813114347.3\n") == 0);
free(board920810918);
board920810918 = NULL;
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );


char* board864486686 = gamma_board(board);
assert( board864486686 != NULL );
assert( strcmp(board864486686, 
".612.48642\n"
"..175.10116\n"
"93103853811\n"
"46108985.9\n"
".299.66212\n"
"681..13938\n"
"1255.3.133\n"
"13936114856\n"
"1310712894711\n"
"129136963712\n"
"21.51041144\n"
"81022.135813\n"
"9611211.99.\n"
"1111381211610\n"
"813114347.3\n") == 0);
free(board864486686);
board864486686 = NULL;
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_free_fields(board, 13) == 17 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );


char* board230029673 = gamma_board(board);
assert( board230029673 != NULL );
assert( strcmp(board230029673, 
".612.48642\n"
"..175.10116\n"
"93103853811\n"
"46108985.9\n"
".299.66212\n"
"681..13938\n"
"1255.3.133\n"
"13936114856\n"
"1310712894711\n"
"129136963712\n"
"21.51041144\n"
"81022.135813\n"
"9611211.99.\n"
"1111381211610\n"
"813114347.3\n") == 0);
free(board230029673);
board230029673 = NULL;
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_free_fields(board, 10) == 16 );


gamma_delete(board);

    return 0;
}
