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
uuid: 694106314
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 12, 13, 13);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 11) == 1 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_move(board, 11, 9, 8) == 1 );
assert( gamma_free_fields(board, 11) == 110 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 12, 1, 9) == 1 );
assert( gamma_move(board, 13, 6, 11) == 1 );


char* board648773657 = gamma_board(board);
assert( board648773657 != NULL );
assert( strcmp(board648773657, 
"......13..8\n"
"..........\n"
"312........\n"
".......7.11\n"
"..........\n"
".....3....\n"
"...12......\n"
"..4......10\n"
"......5...\n"
"......4...\n"
".......2..\n"
"..........\n") == 0);
free(board648773657);
board648773657 = NULL;
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );


char* board311720392 = gamma_board(board);
assert( board311720392 != NULL );
assert( strcmp(board311720392, 
"......13..8\n"
"..........\n"
"312........\n"
".......7.11\n"
"..........\n"
".....3....\n"
"...12......\n"
"1.4......10\n"
"......5...\n"
"......4...\n"
".....4.2..\n"
"......2...\n") == 0);
free(board311720392);
board311720392 = NULL;
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_free_fields(board, 12) == 96 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board641105610 = gamma_board(board);
assert( board641105610 != NULL );
assert( strcmp(board641105610, 
".....813..8\n"
"..........\n"
"312........\n"
"..11....7.11\n"
".......6..\n"
".....3...7\n"
"...12....8.\n"
"1.4.....1210\n"
"......5...\n"
"......4...\n"
".10..14.2..\n"
"..9...2...\n") == 0);
free(board641105610);
board641105610 = NULL;
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_move(board, 12, 2, 3) == 1 );
assert( gamma_move(board, 13, 11, 0) == 0 );
assert( gamma_move(board, 13, 8, 9) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 2) == 1 );
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_move(board, 13, 5, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_move(board, 12, 1, 4) == 1 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 13, 5, 5) == 1 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );


char* board253239383 = gamma_board(board);
assert( board253239383 != NULL );
assert( strcmp(board253239383, 
"...37813..8\n"
"..8....7..\n"
"312...10.7139\n"
"4411...67411\n"
".104..2113..\n"
".....3.11.7\n"
"8.1312813..8.\n"
"1241.85.1210\n"
"102126..535.\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..9.3.2..6\n") == 0);
free(board253239383);
board253239383 = NULL;
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_golden_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 11, 9, 3) == 1 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );


char* board306632477 = gamma_board(board);
assert( board306632477 != NULL );
assert( strcmp(board306632477, 
"...37813..8\n"
"..8....7..\n"
"3129..10.7139\n"
"4411...67411\n"
".104..2113..\n"
".....3.11.7\n"
"8.1312813..8.\n"
"1241.85.1210\n"
"1021210..53511\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..9.3.2..6\n") == 0);
free(board306632477);
board306632477 = NULL;
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 12, 7, 0) == 1 );


char* board638483411 = gamma_board(board);
assert( board638483411 != NULL );
assert( strcmp(board638483411, 
"...37813..8\n"
"..8....7..\n"
"3129..10.7139\n"
"4411...67411\n"
".104..2113..\n"
".....3.11.7\n"
"8.1312813..8.\n"
"1241.85.1210\n"
"1021210..53511\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..9.3.212.6\n") == 0);
free(board638483411);
board638483411 = NULL;
assert( gamma_move(board, 13, 8, 9) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 5, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_free_fields(board, 12) == 49 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );


char* board709002783 = gamma_board(board);
assert( board709002783 != NULL );
assert( strcmp(board709002783, 
"1..37813..8\n"
"..8.1..7..\n"
"3129.51017139\n"
"4411...67411\n"
".104..2113..\n"
".....3.11.7\n"
"8.1312813..8.\n"
"1241.85.1210\n"
"10212108.53511\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..9.33212.6\n") == 0);
free(board709002783);
board709002783 = NULL;
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );


char* board333919965 = gamma_board(board);
assert( board333919965 != NULL );
assert( strcmp(board333919965, 
"1..37813..8\n"
"..8.1..7..\n"
"3129.51017139\n"
"4411...67411\n"
".104..2113..\n"
".....3.11.7\n"
"8.1312813..8.\n"
"1241.85.1210\n"
"10212108.53511\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..9.33212.6\n") == 0);
free(board333919965);
board333919965 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 13, 10, 5) == 0 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_free_fields(board, 9) == 40 );
assert( gamma_free_fields(board, 10) == 40 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_free_fields(board, 12) == 38 );
assert( gamma_move(board, 13, 8, 4) == 0 );
assert( gamma_move(board, 13, 4, 10) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );


char* board226182119 = gamma_board(board);
assert( board226182119 != NULL );
assert( strcmp(board226182119, 
"1..37813718\n"
"..8.1..7..\n"
"3129.51017139\n"
"4411...67411\n"
"9104..2113.5\n"
"105...3111.7\n"
"821312813..8.\n"
"1241.85111210\n"
"10212108.53511\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..91133212.6\n") == 0);
free(board226182119);
board226182119 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_golden_move(board, 8, 9, 2) == 0 );


char* board172681729 = gamma_board(board);
assert( board172681729 != NULL );
assert( strcmp(board172681729, 
"1..37813718\n"
"..8.1..7..\n"
"3129.51017139\n"
"4411...67411\n"
"9104.62113.5\n"
"105...3111.7\n"
"821312813..8.\n"
"1241.85111210\n"
"10212108.53511\n"
"9312.6.4.2.\n"
"1010..14.2..\n"
"..91133212.6\n") == 0);
free(board172681729);
board172681729 = NULL;
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_golden_move(board, 12, 7, 9) == 1 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 13, 5, 5) == 0 );
assert( gamma_golden_move(board, 13, 9, 9) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 4, 11) == 0 );
assert( gamma_move(board, 10, 6, 10) == 1 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 12, 10, 5) == 0 );
assert( gamma_move(board, 12, 7, 11) == 0 );
assert( gamma_move(board, 13, 8, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_free_fields(board, 9) == 30 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 11) == 1 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 3, 5) == 0 );
assert( gamma_move(board, 13, 0, 11) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_free_fields(board, 3) == 26 );


char* board532023200 = gamma_board(board);
assert( board532023200 != NULL );
assert( strcmp(board532023200, 
"1.1237813718\n"
"..8.1.1075.\n"
"3129.510112113\n"
"44114..67411\n"
"9104362113.5\n"
"105...311127\n"
"82131281311.83\n"
"1241.85111210\n"
"10212108.53511\n"
"931256.412.\n"
"1010..14.2..\n"
"..91133212.6\n") == 0);
free(board532023200);
board532023200 = NULL;
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );


char* board448827926 = gamma_board(board);
assert( board448827926 != NULL );
assert( strcmp(board448827926, 
"1.1237813718\n"
"..8.1.1075.\n"
"3129.510112113\n"
"44114..67411\n"
"9104362113.5\n"
"105...311127\n"
"82131281311.83\n"
"1241.85111210\n"
"10212108.53511\n"
"931256.412.\n"
"1010..14.2..\n"
"..91133212.6\n") == 0);
free(board448827926);
board448827926 = NULL;
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 3, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_free_fields(board, 11) == 22 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_golden_move(board, 12, 0, 9) == 0 );
assert( gamma_move(board, 13, 10, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_golden_move(board, 13, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 2, 6) == 1 );


char* board682000201 = gamma_board(board);
assert( board682000201 != NULL );
assert( strcmp(board682000201, 
"1.1237813718\n"
"..8.151075.\n"
"31299510112113\n"
"44114..67411\n"
"9104362113.5\n"
"105911.311127\n"
"821312813111283\n"
"1241685111210\n"
"10212108.53511\n"
"931256.4121\n"
"1010..14.25.\n"
"2.91133212.6\n") == 0);
free(board682000201);
board682000201 = NULL;
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 12, 7, 8) == 0 );


char* board364689541 = gamma_board(board);
assert( board364689541 != NULL );
assert( strcmp(board364689541, 
"1.1237813718\n"
"298.151075.\n"
"31299510112113\n"
"44114..67411\n"
"9104362113.5\n"
"105911.311127\n"
"821312813111283\n"
"1241685111210\n"
"102121081353511\n"
"931256.4121\n"
"1010.1214.25.\n"
"2.91133212.6\n") == 0);
free(board364689541);
board364689541 = NULL;
assert( gamma_move(board, 13, 8, 5) == 0 );
assert( gamma_move(board, 13, 9, 10) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_golden_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 13, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );


char* board714157751 = gamma_board(board);
assert( board714157751 != NULL );
assert( strcmp(board714157751, 
"1.1237813718\n"
"298.15107513\n"
"31298510112113\n"
"44114..67411\n"
"9104362113.5\n"
"105911.311127\n"
"821312813111283\n"
"1241685111210\n"
"102121081353511\n"
"931256.4121\n"
"1010.1214725.\n"
"2.91133212.6\n") == 0);
free(board714157751);
board714157751 = NULL;
assert( gamma_move(board, 11, 1, 9) == 0 );
assert( gamma_golden_move(board, 11, 1, 3) == 1 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 13, 2, 5) == 0 );
assert( gamma_move(board, 13, 7, 7) == 0 );
assert( gamma_free_fields(board, 13) == 11 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 7, 8) == 0 );


gamma_delete(board);

    return 0;
}
