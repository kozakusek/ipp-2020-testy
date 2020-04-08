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
uuid: 241650625
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 12, 15, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 9, 9, 11) == 1 );
assert( gamma_move(board, 10, 9, 6) == 1 );
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 12, 4, 7) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 5) == 1 );
assert( gamma_move(board, 13, 5, 4) == 1 );
assert( gamma_free_fields(board, 13) == 116 );
assert( gamma_move(board, 14, 9, 2) == 1 );
assert( gamma_free_fields(board, 14) == 115 );
assert( gamma_move(board, 15, 5, 3) == 1 );
assert( gamma_move(board, 15, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board819977017 = gamma_board(board);
assert( board819977017 != NULL );
assert( strcmp(board819977017, 
".....5...9.\n"
".........7.\n"
".......9...\n"
"...........\n"
"...512......\n"
"...6.....101\n"
"......1333..\n"
"....313.....\n"
"..11..15.....\n"
".....2...14.\n"
".......4...\n"
"..152.....4.\n") == 0);
free(board819977017);
board819977017 = NULL;
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_free_fields(board, 8) == 107 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 10, 5) == 1 );
assert( gamma_move(board, 12, 4, 4) == 0 );
assert( gamma_move(board, 13, 7, 5) == 0 );
assert( gamma_move(board, 13, 3, 2) == 1 );
assert( gamma_move(board, 14, 4, 3) == 1 );
assert( gamma_move(board, 14, 10, 7) == 1 );
assert( gamma_free_fields(board, 14) == 101 );
assert( gamma_move(board, 15, 10, 6) == 0 );
assert( gamma_golden_move(board, 15, 9, 7) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );


char* board654789739 = gamma_board(board);
assert( board654789739 != NULL );
assert( strcmp(board654789739, 
"6....5...9.\n"
".........7.\n"
".......9...\n"
".......2...\n"
"...512.....14\n"
"..96.....101\n"
"..4...1333912\n"
"....313.....\n"
"..11.1415.....\n"
".4.13.2...14.\n"
".......4...\n"
"7.152.....4.\n") == 0);
free(board654789739);
board654789739 = NULL;
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_free_fields(board, 9) == 94 );
assert( gamma_free_fields(board, 10) == 94 );
assert( gamma_move(board, 11, 4, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 15, 2, 7) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );


char* board253038570 = gamma_board(board);
assert( board253038570 != NULL );
assert( strcmp(board253038570, 
"6....5...9.\n"
"...1.....7.\n"
".......9...\n"
".......26..\n"
"..15512.....14\n"
"..96.....101\n"
".84.11.1333912\n"
"....3131....\n"
"..11.1415.....\n"
".4.13.2...14.\n"
"....7.549..\n"
"7.152.....4.\n") == 0);
free(board253038570);
board253038570 = NULL;
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_free_fields(board, 8) == 81 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_free_fields(board, 9) == 80 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_move(board, 11, 5, 10) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 10, 0) == 1 );
assert( gamma_move(board, 14, 2, 4) == 1 );
assert( gamma_move(board, 14, 6, 6) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 7, 8) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_golden_move(board, 15, 8, 8) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 75 );


char* board874373476 = gamma_board(board);
assert( board874373476 != NULL );
assert( strcmp(board874373476, 
"6....5...96\n"
"...1911...7.\n"
"..8....9.1.\n"
"...7...2152.\n"
"..15512.83..14\n"
"..96..14..101\n"
".84.11.1333912\n"
"..14.3131..5.\n"
"..11.1415...3.\n"
".4.13.2...14.\n"
"2...7.549..\n"
"7.152.....413\n") == 0);
free(board874373476);
board874373476 = NULL;
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_free_fields(board, 10) == 71 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 0, 7) == 1 );
assert( gamma_free_fields(board, 12) == 70 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_move(board, 13, 0, 0) == 0 );
assert( gamma_move(board, 14, 5, 0) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 0, 6) == 1 );
assert( gamma_move(board, 15, 5, 9) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );


char* board927873640 = gamma_board(board);
assert( board927873640 != NULL );
assert( strcmp(board927873640, 
"6....5...96\n"
"..31911...7.\n"
"..8..1529.1.\n"
".7.7...2152.\n"
"12.15512.83..14\n"
"15.96..14..101\n"
".84.11.1333912\n"
"..14.3131..5.\n"
"..11.1415...3.\n"
".4.13.2...14.\n"
"2...7.54942\n"
"7.152.14..5413\n") == 0);
free(board927873640);
board927873640 = NULL;
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board940431858 = gamma_board(board);
assert( board940431858 != NULL );
assert( strcmp(board940431858, 
"6....5...96\n"
"..31911...7.\n"
"..8..1529.1.\n"
".7.7...2152.\n"
"12.15512.83..14\n"
"15.967.14..101\n"
".84.11.1333912\n"
"..14.3131..5.\n"
"..11.1415...3.\n"
".4.13.2...14.\n"
"2...7.54942\n"
"7.152.14..5413\n") == 0);
free(board940431858);
board940431858 = NULL;
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_free_fields(board, 10) == 62 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 13, 3, 10) == 0 );
assert( gamma_move(board, 13, 2, 6) == 0 );
assert( gamma_move(board, 14, 10, 10) == 1 );
assert( gamma_move(board, 15, 9, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 8) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 11, 6) == 0 );
assert( gamma_move(board, 13, 5, 10) == 0 );
assert( gamma_free_fields(board, 13) == 58 );


char* board690806988 = gamma_board(board);
assert( board690806988 != NULL );
assert( strcmp(board690806988, 
"6....5...96\n"
"..31911...714\n"
"..8..1529.1.\n"
"47.7610.21528\n"
"12.15512.83..14\n"
"15.967.14..101\n"
".84.11.1333912\n"
"..14.3131..5.\n"
"..11.1415...3.\n"
".4.13.2...14.\n"
"2...7.54942\n"
"7.152.14.85413\n") == 0);
free(board690806988);
board690806988 = NULL;
assert( gamma_move(board, 14, 8, 9) == 1 );
assert( gamma_move(board, 14, 2, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 8 );
assert( gamma_move(board, 15, 6, 5) == 0 );
assert( gamma_move(board, 15, 5, 6) == 1 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );


char* board372030577 = gamma_board(board);
assert( board372030577 != NULL );
assert( strcmp(board372030577, 
"6....5...96\n"
"..319111..714\n"
"..8..1529141.\n"
"47.7610.21528\n"
"12.15512.83..14\n"
"15.9671514..101\n"
".84.11.1333912\n"
"..14.3131..5.\n"
"..11.1415..53.\n"
".4.13.2...14.\n"
"2...7.54942\n"
"7.152.14.85413\n") == 0);
free(board372030577);
board372030577 = NULL;
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 12, 0, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 10, 3) == 1 );
assert( gamma_move(board, 13, 5, 5) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 13, 9, 7) == 0 );


char* board644845263 = gamma_board(board);
assert( board644845263 != NULL );
assert( strcmp(board644845263, 
"6....5...96\n"
".7319111..714\n"
"..8..1529141.\n"
"47.7610.21528\n"
"12.15512.83..14\n"
"15.9671514..101\n"
"884.11131333912\n"
"..14.3131..5.\n"
"..11.1415..5313\n"
"124613.2...14.\n"
"2...7.54942\n"
"7.152.14.85413\n") == 0);
free(board644845263);
board644845263 = NULL;
assert( gamma_move(board, 14, 3, 9) == 1 );
assert( gamma_move(board, 14, 0, 10) == 1 );
assert( gamma_move(board, 15, 5, 10) == 0 );
assert( gamma_move(board, 15, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );


char* board944704038 = gamma_board(board);
assert( board944704038 != NULL );
assert( strcmp(board944704038, 
"6....5...96\n"
"147319111..714\n"
"..814.1529141.\n"
"47.7610.21528\n"
"12.15512.83..14\n"
"15.9671514.7101\n"
"884.11131333912\n"
"..14.3131..5.\n"
"511131415..5313\n"
"124613.2...14.\n"
"2...7.54942\n"
"7.152214.85413\n") == 0);
free(board944704038);
board944704038 = NULL;
assert( gamma_move(board, 10, 7, 9) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_free_fields(board, 11) == 41 );
assert( gamma_golden_move(board, 11, 4, 6) == 1 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 7, 1) == 0 );
assert( gamma_move(board, 14, 1, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_free_fields(board, 11) == 35 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 4, 10) == 0 );
assert( gamma_free_fields(board, 12) == 35 );
assert( gamma_move(board, 13, 3, 7) == 0 );


char* board630033743 = gamma_board(board);
assert( board630033743 != NULL );
assert( strcmp(board630033743, 
"610...5...96\n"
"147319111..714\n"
"..814.1529141.\n"
"4787610.21528\n"
"12.15512.83..14\n"
"151496111514.7101\n"
"884.11131333912\n"
".21453131..5.\n"
"511131415..5313\n"
"124613.2...14.\n"
"23..7.54942\n"
"7.152214.85413\n") == 0);
free(board630033743);
board630033743 = NULL;
assert( gamma_move(board, 14, 7, 9) == 0 );


char* board697412424 = gamma_board(board);
assert( board697412424 != NULL );
assert( strcmp(board697412424, 
"610...5...96\n"
"147319111..714\n"
"..814.1529141.\n"
"4787610.21528\n"
"12.15512.83..14\n"
"151496111514.7101\n"
"884.11131333912\n"
".21453131..5.\n"
"511131415..5313\n"
"124613.2...14.\n"
"23..7.54942\n"
"7.152214.85413\n") == 0);
free(board697412424);
board697412424 = NULL;
assert( gamma_move(board, 15, 9, 10) == 0 );
assert( gamma_move(board, 15, 2, 1) == 1 );
assert( gamma_golden_possible(board, 15) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );


char* board484018761 = gamma_board(board);
assert( board484018761 != NULL );
assert( strcmp(board484018761, 
"610...5...96\n"
"147319111..714\n"
"..814.15291411\n"
"4787610.21528\n"
"12.15512.83..14\n"
"151496111514.7101\n"
"884.11131333912\n"
".21453131..5.\n"
"511131415..5313\n"
"124613.2...14.\n"
"2315.7.54942\n"
"7.152214.85413\n") == 0);
free(board484018761);
board484018761 = NULL;
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 11, 5, 1) == 1 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 12, 2, 10) == 0 );
assert( gamma_move(board, 12, 8, 4) == 1 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_move(board, 14, 4, 7) == 0 );
assert( gamma_move(board, 15, 11, 6) == 0 );
assert( gamma_free_fields(board, 15) == 30 );
assert( gamma_golden_possible(board, 15) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 13, 1, 11) == 0 );
assert( gamma_move(board, 14, 5, 7) == 1 );
assert( gamma_busy_fields(board, 14) == 12 );
assert( gamma_free_fields(board, 14) == 28 );
assert( gamma_move(board, 15, 9, 0) == 0 );
assert( gamma_golden_possible(board, 15) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_free_fields(board, 11) == 27 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 4, 6) == 0 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 13, 2, 6) == 0 );
assert( gamma_move(board, 14, 5, 3) == 0 );
assert( gamma_move(board, 14, 4, 10) == 0 );
assert( gamma_move(board, 15, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 11, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_free_fields(board, 13) == 25 );
assert( gamma_move(board, 14, 10, 8) == 0 );
assert( gamma_move(board, 14, 6, 3) == 1 );
assert( gamma_busy_fields(board, 14) == 13 );
assert( gamma_move(board, 15, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 11, 4) == 0 );
assert( gamma_free_fields(board, 11) == 21 );
assert( gamma_move(board, 12, 9, 4) == 0 );
assert( gamma_move(board, 14, 1, 9) == 1 );
assert( gamma_move(board, 15, 2, 4) == 0 );
assert( gamma_move(board, 15, 7, 7) == 0 );
assert( gamma_free_fields(board, 15) == 20 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 11, 4) == 0 );


char* board522841530 = gamma_board(board);
assert( board522841530 != NULL );
assert( strcmp(board522841530, 
"610...5.3.96\n"
"1473191111.714\n"
".14814.15291411\n"
"4787610.21528\n"
"121155121483..14\n"
"15149611151437101\n"
"884.11131333912\n"
".214531316125.\n"
"51113141514.5313\n"
"124613.2135.145\n"
"2315.71154942\n"
"721522141285413\n") == 0);
free(board522841530);
board522841530 = NULL;
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_move(board, 14, 11, 8) == 0 );
assert( gamma_move(board, 15, 8, 6) == 0 );
assert( gamma_move(board, 15, 8, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board986370268 = gamma_board(board);
assert( board986370268 != NULL );
assert( strcmp(board986370268, 
"610...5.3.96\n"
"1473191111.714\n"
".14814.15291411\n"
"4787610.21528\n"
"121155121483..14\n"
"15149611151437101\n"
"884.11131333912\n"
".214531316125.\n"
"51113141514.5313\n"
"124613.2135.145\n"
"2315.71154942\n"
"721522141285413\n") == 0);
free(board986370268);
board986370268 = NULL;
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_free_fields(board, 11) == 18 );
assert( gamma_move(board, 12, 11, 8) == 0 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_move(board, 13, 7, 8) == 0 );
assert( gamma_move(board, 14, 9, 4) == 0 );
assert( gamma_move(board, 15, 9, 0) == 0 );
assert( gamma_move(board, 15, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_free_fields(board, 9) == 17 );


gamma_delete(board);

    return 0;
}
