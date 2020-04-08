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
uuid: 799456955
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 12, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_free_fields(board, 4) == 207 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 10) == 1 );
assert( gamma_move(board, 10, 6, 12) == 1 );
assert( gamma_move(board, 10, 11, 10) == 1 );
assert( gamma_free_fields(board, 10) == 197 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_move(board, 11, 10, 13) == 1 );
assert( gamma_free_fields(board, 12) == 195 );
assert( gamma_golden_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 1, 13, 12) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_free_fields(board, 2) == 192 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_move(board, 7, 12, 1) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 12) == 1 );
assert( gamma_golden_move(board, 9, 12, 13) == 0 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 11, 9, 4) == 1 );
assert( gamma_move(board, 11, 7, 1) == 1 );
assert( gamma_free_fields(board, 11) == 180 );


char* board222759891 = gamma_board(board);
assert( board222759891 != NULL );
assert( strcmp(board222759891, 
".....3.8..11....\n"
"......10....9.1.\n"
"..2.....7.....7\n"
"........9..10..5\n"
"......86..6....\n"
"...............\n"
".11.........36..\n"
"...5...........\n"
".......2...1...\n"
".........11.....\n"
"...............\n"
"..54...........\n"
".......118...7..\n"
"10.......4.6....\n") == 0);
free(board222759891);
board222759891 = NULL;
assert( gamma_move(board, 12, 8, 6) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_golden_move(board, 2, 10, 8) == 0 );


char* board231509847 = gamma_board(board);
assert( board231509847 != NULL );
assert( strcmp(board231509847, 
".....3.8..11....\n"
"......10....9.1.\n"
"..2.....7.....7\n"
"........9.210..5\n"
"......86..6....\n"
"...............\n"
".11.........36..\n"
"...5....12......\n"
".......2...11..\n"
".........11.....\n"
".......1.......\n"
"..54...........\n"
".......118...7..\n"
"10.......4.6....\n") == 0);
free(board231509847);
board231509847 = NULL;
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 12) == 0 );


char* board150635144 = gamma_board(board);
assert( board150635144 != NULL );
assert( strcmp(board150635144, 
".....3.8..11....\n"
"......10....9.1.\n"
"..2.....7.....7\n"
"........9.210..5\n"
"......86..6....\n"
"...............\n"
".11.........36..\n"
"...5....12......\n"
".......2...11..\n"
"....4....11.....\n"
".......1.......\n"
"..54...........\n"
".......118...7..\n"
"10.......4.6....\n") == 0);
free(board150635144);
board150635144 = NULL;
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 9, 13, 4) == 1 );
assert( gamma_move(board, 10, 5, 2) == 1 );
assert( gamma_golden_move(board, 11, 6, 8) == 0 );


char* board219656603 = gamma_board(board);
assert( board219656603 != NULL );
assert( strcmp(board219656603, 
".....3.8..11....\n"
"......10....9.1.\n"
"..2.....7.....7\n"
"...7....9.210..5\n"
"..9...86..6.6..\n"
"8........6.....\n"
".11.........36..\n"
"...5....12......\n"
".......2...11..\n"
"....4....11...9.\n"
".......1.......\n"
"..54.10.........\n"
".......118.7.7..\n"
"10.....5.4.6....\n") == 0);
free(board219656603);
board219656603 = NULL;
assert( gamma_move(board, 12, 7, 4) == 1 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_golden_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 11, 12) == 0 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 4) == 0 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_free_fields(board, 4) == 148 );
assert( gamma_move(board, 5, 14, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 9, 11, 8) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board116204469 = gamma_board(board);
assert( board116204469 != NULL );
assert( strcmp(board116204469, 
".....3.81.11....\n"
"....2.10....9.1.\n"
"4.2.....7..8..7\n"
"11.978...9.210..5\n"
"..9...86..6.6..\n"
"8.4..6...6.96..\n"
".11.........36..\n"
"..35...912......\n"
"10.9.53.211..11..\n"
"....4..12.11.7.9.\n"
".......1......5\n"
"..54.10.........\n"
"...1...118.727..\n"
"10.10..15.4.6.3..\n") == 0);
free(board116204469);
board116204469 = NULL;
assert( gamma_move(board, 11, 10, 6) == 1 );
assert( gamma_move(board, 11, 10, 3) == 1 );
assert( gamma_golden_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 3, 11) == 1 );
assert( gamma_move(board, 12, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );


char* board951348265 = gamma_board(board);
assert( board951348265 != NULL );
assert( strcmp(board951348265, 
"....23.81.11....\n"
"....2.10....9.1.\n"
"4.212....7..8..7\n"
"11.978...9.210..5\n"
"..91..86..6.6..\n"
"8.4..6...6.96..\n"
".11.........36..\n"
"12.35...912.11....\n"
"10.9.53.211..11..\n"
"....4..12.11.7.9.\n"
".......1..11...5\n"
"..54.10.........\n"
"...1...118.727..\n"
"10.10..15.4.6.3..\n") == 0);
free(board951348265);
board951348265 = NULL;
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 6, 14) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_golden_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_golden_move(board, 10, 7, 11) == 0 );
assert( gamma_move(board, 11, 1, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );


char* board574235452 = gamma_board(board);
assert( board574235452 != NULL );
assert( strcmp(board574235452, 
"....23.81.11....\n"
"....2.10....9.1.\n"
"4.212....7..8.37\n"
"11.978...9.210..5\n"
"..91..86..6.6..\n"
"8.4..6.4.6.96..\n"
".1110........36..\n"
"12.35...912.11....\n"
"10119.53.211..11..\n"
"....4..12.11.7.9.\n"
"6......1..11...5\n"
"..54.10.......5.\n"
"..81...118.727..\n"
"10.10.415.4.6.3..\n") == 0);
free(board574235452);
board574235452 = NULL;
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 11, 10) == 0 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_move(board, 10, 12, 13) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 14) == 0 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 12, 9, 1) == 1 );
assert( gamma_move(board, 12, 0, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 111 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_free_fields(board, 9) == 109 );
assert( gamma_move(board, 10, 7, 11) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 11, 4, 9) == 1 );
assert( gamma_free_fields(board, 11) == 107 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board359421240 = gamma_board(board);
assert( board359421240 != NULL );
assert( strcmp(board359421240, 
"....23.81.11.10..\n"
"..4.2.10....9.1.\n"
"4.212...107..8.37\n"
"11.978...9.2106.5\n"
"..9111.86..6.65.\n"
"8.4..6.436.96..\n"
"41110.....1..36..\n"
"12235.109912.11..5.\n"
"10119.53.211..11..\n"
"....4..12.11.7.9.\n"
"6...7..15811...5\n"
"..54.10..9....5.\n"
"..816..11812727..\n"
"10.10.415.4.6.3..\n") == 0);
free(board359421240);
board359421240 = NULL;
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 10, 6) == 0 );


char* board284943787 = gamma_board(board);
assert( board284943787 != NULL );
assert( strcmp(board284943787, 
"....23.81.11.10..\n"
"..4.2.10....9.1.\n"
"4.212...107..8.37\n"
"11.978...9.2106.5\n"
"..9111.86..6265.\n"
"8.4..6.436.96..\n"
"41110.....1..36..\n"
"12235.109912.11..5.\n"
"10119.53.211..11..\n"
"....4..12.11.7.9.\n"
"6...7..15811...5\n"
"..54.10..9....5.\n"
"..816..11812727..\n"
"10.10.415.4.6.3..\n") == 0);
free(board284943787);
board284943787 = NULL;
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );


char* board600452820 = gamma_board(board);
assert( board600452820 != NULL );
assert( strcmp(board600452820, 
"....23.81.11.10..\n"
"..4.2.10....9.1.\n"
"4.212...107..8.37\n"
"11.978..49.2106.5\n"
"..9111.86..6265.\n"
"8.4..6.436.96..\n"
"41110.....1..36..\n"
"12235.109912.11..5.\n"
"10119.536211..11..\n"
"....4..12.11.7.9.\n"
"6...7..15811...5\n"
"..54.10..9....5.\n"
"..816..11812727..\n"
"10.10.415.4.6.3..\n") == 0);
free(board600452820);
board600452820 = NULL;
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_free_fields(board, 7) == 103 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 8, 13, 13) == 1 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 11, 9, 6) == 1 );
assert( gamma_golden_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 12, 10, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_golden_move(board, 12, 8, 0) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 13) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 96 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 9, 12, 3) == 1 );
assert( gamma_move(board, 10, 9, 2) == 1 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 11, 13, 3) == 1 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 9, 10) == 1 );
assert( gamma_move(board, 11, 8, 10) == 0 );
assert( gamma_free_fields(board, 11) == 89 );
assert( gamma_move(board, 12, 14, 9) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 9, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 10, 13) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_free_fields(board, 10) == 86 );
assert( gamma_move(board, 11, 11, 2) == 1 );
assert( gamma_free_fields(board, 11) == 85 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_golden_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 10, 10, 8) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 11, 2, 12) == 0 );
assert( gamma_move(board, 12, 0, 9) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );


char* board800903095 = gamma_board(board);
assert( board800903095 != NULL );
assert( strcmp(board800903095, 
"7...23.81.11.1085\n"
".34.2.101...9.1.\n"
"4.212..2477.8.37\n"
"11.978..49102106.5\n"
"12.9111.86..626512\n"
"8.4..6114361096..\n"
"41110.....1..36..\n"
"12235.1099121111..5.\n"
"101197536211.1211..\n"
"....4.21261187.9.\n"
"6...7.315811.9115\n"
"10.5412105.910.11.5.\n"
"2.816..11812727..\n"
"10610.4111.12.6.3..\n") == 0);
free(board800903095);
board800903095 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 7, 1, 13) == 1 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 10, 12, 12) == 1 );
assert( gamma_free_fields(board, 10) == 73 );
assert( gamma_move(board, 11, 3, 7) == 1 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 16 );
assert( gamma_move(board, 12, 7, 12) == 0 );
assert( gamma_move(board, 12, 7, 12) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_move(board, 11, 10, 12) == 1 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 10, 5) == 0 );
assert( gamma_move(board, 12, 8, 10) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );


char* board769324987 = gamma_board(board);
assert( board769324987 != NULL );
assert( strcmp(board769324987, 
"77..23.81.11.1085\n"
".34.2.101.2119101.\n"
"4.212..2477.8.37\n"
"11.978..49102106.5\n"
"12.9111.86..626512\n"
"8.4..6114361096..\n"
"4111011....1.536..\n"
"12235.1099121111..5.\n"
"10119753621171211..\n"
".8..4521261187.9.\n"
"6...7.315811.9115\n"
"10.5412105.910.1165.\n"
"29816..11812727..\n"
"10610.4111.12.6.3..\n") == 0);
free(board769324987);
board769324987 = NULL;
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 10, 6, 13) == 1 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_free_fields(board, 11) == 64 );
assert( gamma_move(board, 12, 11, 11) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_move(board, 7, 12, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 13, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 17 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 10, 2, 14) == 0 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 12, 7, 7) == 0 );
assert( gamma_move(board, 12, 10, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 9, 14, 11) == 0 );
assert( gamma_move(board, 10, 1, 13) == 0 );
assert( gamma_move(board, 10, 5, 7) == 1 );
assert( gamma_move(board, 11, 1, 14) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 12, 14, 12) == 1 );
assert( gamma_busy_fields(board, 12) == 12 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 1, 14) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_move(board, 11, 13, 11) == 0 );
assert( gamma_move(board, 11, 12, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_golden_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 10, 13, 10) == 1 );
assert( gamma_move(board, 11, 8, 13) == 0 );
assert( gamma_move(board, 11, 9, 10) == 0 );
assert( gamma_free_fields(board, 11) == 52 );
assert( gamma_move(board, 12, 7, 13) == 0 );
assert( gamma_move(board, 12, 5, 10) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );


char* board680712822 = gamma_board(board);
assert( board680712822 != NULL );
assert( strcmp(board680712822, 
"77..231081.11.1085\n"
".34.2.101.211910112\n"
"4.212..2777.8.37\n"
"11.97812.49102106105\n"
"1299111.86.9626512\n"
"8.4.26114361096..\n"
"4111011.10.11.536..\n"
"12235.1099121111.115.\n"
"10119753621171211..\n"
".8..4521261187.9.\n"
"6...7631581179115\n"
"10.5412105.910121165.\n"
"29816.511812727.2\n"
"10610.4111112.6.3..\n") == 0);
free(board680712822);
board680712822 = NULL;
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 14, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 13, 5) == 1 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_free_fields(board, 12) == 47 );
assert( gamma_golden_move(board, 12, 9, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );


char* board388155455 = gamma_board(board);
assert( board388155455 != NULL );
assert( strcmp(board388155455, 
"77..231081.11.1085\n"
".34.2.101.211910112\n"
"4.212..2777.8.37\n"
"11.97812.49102106105\n"
"1299111.86.9626512\n"
"8.4.26114361096.8\n"
"4111011.10.11.536..\n"
"12235.1099121111.115.\n"
"101197536211712119.\n"
".8..4521261187.9.\n"
"6..87631581179115\n"
"10.5412105.910121165.\n"
"29816.511812727.2\n"
"10610.4111112.623..\n") == 0);
free(board388155455);
board388155455 = NULL;
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 12, 1, 3) == 1 );
assert( gamma_move(board, 12, 14, 4) == 1 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 14, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 7, 11, 12) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 2, 14) == 0 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 14, 2) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_golden_move(board, 11, 11, 13) == 0 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 12, 11, 5) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );


char* board249875598 = gamma_board(board);
assert( board249875598 != NULL );
assert( strcmp(board249875598, 
"77..231081.11.1085\n"
".34.2.101.211910112\n"
"4.212..2777.8.37\n"
"11.97812.49102106105\n"
"1299111.86.9626512\n"
"8104.26114361096.8\n"
"4111011.10.11.536..\n"
"12235.1099121111.1154\n"
"101197536211712119.\n"
".8..4521261187.912\n"
"612.87631581179115\n"
"10.5412105.91012116512\n"
"29816.51181272722\n"
"1061084111112.623..\n") == 0);
free(board249875598);
board249875598 = NULL;
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 12, 11) == 1 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 18 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 16 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_move(board, 12, 10, 11) == 1 );
assert( gamma_free_fields(board, 12) == 7 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );


char* board529493195 = gamma_board(board);
assert( board529493195 != NULL );
assert( strcmp(board529493195, 
"77..231081.11.1085\n"
".34.23101.211910112\n"
"44212..2777128937\n"
"11.97812.49102106105\n"
"1299111.86.9626512\n"
"8104.26114361096.8\n"
"4111011.10.11.536..\n"
"12235.1099121111.1154\n"
"101197536211712119.\n"
".8..4521261187.912\n"
"612.87631581179115\n"
"1035412105.91012116512\n"
"29816.51181272722\n"
"10610841111128623..\n") == 0);
free(board529493195);
board529493195 = NULL;
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 7, 14) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 16 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_golden_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 9, 8) == 0 );
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 11, 12) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 8) == 1 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_free_fields(board, 10) == 28 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_move(board, 12, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 10, 12, 1) == 0 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 12, 8, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 10, 3, 12) == 1 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 18 );
assert( gamma_free_fields(board, 11) == 27 );
assert( gamma_move(board, 12, 13, 11) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board237880909 = gamma_board(board);
assert( board237880909 != NULL );
assert( strcmp(board237880909, 
"77..231081.11.1085\n"
".341023101.211910112\n"
"44212.52777128937\n"
"11.97812.49102106105\n"
"1299111386.9626512\n"
"8104.2611436109698\n"
"4111011.10.11.536..\n"
"12235.109912111181154\n"
"101197536211712119.\n"
".8..4521261187.912\n"
"612.87631581179115\n"
"1035412105.91012116512\n"
"29816.51181272722\n"
"10610841111128623..\n") == 0);
free(board237880909);
board237880909 = NULL;
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_golden_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 9, 11, 11) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 12, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 12, 9, 8) == 0 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 11, 4) == 0 );


char* board547786613 = gamma_board(board);
assert( board547786613 != NULL );
assert( strcmp(board547786613, 
"77.2231081.11.1085\n"
".341023101.211910112\n"
"44212.52777128937\n"
"11.97812.49102106105\n"
"1299111386.9626512\n"
"8104.2611436109698\n"
"4111011.10.11.536..\n"
"12238.109912111181154\n"
"101197536211712119.\n"
".8..4521261187.912\n"
"612.87631581179115\n"
"1035412105.91012116512\n"
"29816.51181272722\n"
"10610841111128623..\n") == 0);
free(board547786613);
board547786613 = NULL;
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_golden_move(board, 9, 8, 0) == 1 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 12, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 10, 13) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 11, 12, 6) == 0 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 12, 8, 13) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );


gamma_delete(board);

    return 0;
}
