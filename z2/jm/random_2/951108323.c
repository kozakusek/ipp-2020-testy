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
uuid: 951108323
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 15, 13, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_free_fields(board, 5) == 193 );
assert( gamma_golden_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 10, 2, 12) == 1 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_free_fields(board, 10) == 187 );
assert( gamma_move(board, 11, 12, 4) == 1 );
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 12, 8, 3) == 1 );
assert( gamma_move(board, 13, 4, 12) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 11, 2) == 1 );


char* board938054934 = gamma_board(board);
assert( board938054934 != NULL );
assert( strcmp(board938054934, 
".4...........\n"
".......4.....\n"
"..10.132.......\n"
".............\n"
".............\n"
"....8.....8..\n"
"............2\n"
".............\n"
"..........51.\n"
"....3........\n"
"....1.11...6.11\n"
"10.......12....\n"
"6..........6.\n"
".............\n"
".....9.5.....\n") == 0);
free(board938054934);
board938054934 = NULL;
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_free_fields(board, 8) == 172 );
assert( gamma_move(board, 9, 7, 13) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_move(board, 12, 1, 4) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_free_fields(board, 6) == 163 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 9, 10, 14) == 1 );
assert( gamma_free_fields(board, 9) == 159 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_free_fields(board, 10) == 159 );
assert( gamma_golden_move(board, 10, 4, 12) == 1 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_free_fields(board, 11) == 158 );
assert( gamma_move(board, 12, 10, 2) == 1 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_move(board, 13, 2, 3) == 1 );
assert( gamma_golden_move(board, 13, 12, 2) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 9, 11) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board683165449 = gamma_board(board);
assert( board683165449 != NULL );
assert( strcmp(board683165449, 
".4476.....9..\n"
"..4....4..5..\n"
"..10.102...3...\n"
"........111...\n"
"......5.7....\n"
"..8.829...8..\n"
"..2..8......2\n"
"11............\n"
"..........51.\n"
".3.73......1.\n"
".12.41.11...6.11\n"
"10.1312....12.6..\n"
"6....29...126.\n"
".....9.......\n"
"....119.5.8...\n") == 0);
free(board683165449);
board683165449 = NULL;
assert( gamma_move(board, 12, 1, 7) == 1 );
assert( gamma_move(board, 12, 0, 6) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, 0) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 11, 9, 9) == 1 );
assert( gamma_move(board, 11, 9, 8) == 1 );
assert( gamma_move(board, 12, 10, 10) == 1 );
assert( gamma_move(board, 13, 14, 5) == 0 );
assert( gamma_move(board, 13, 5, 11) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 124 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 9, 11, 10) == 1 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_move(board, 12, 4, 11) == 1 );
assert( gamma_move(board, 12, 7, 14) == 1 );
assert( gamma_free_fields(board, 12) == 116 );
assert( gamma_move(board, 13, 3, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_golden_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board560831580 = gamma_board(board);
assert( board560831580 != NULL );
assert( strcmp(board560831580, 
".4476..12..9..\n"
"..4....4..5..\n"
"..103102...3...\n"
"....1213..111...\n"
"...5.75.7.129.\n"
".118.8295.118.4\n"
".52..8...11..2\n"
"111210.2......23\n"
"12..13......51.\n"
".3.73......1.\n"
".12541.11.9.6.11\n"
"10713121...12.6..\n"
"66...29...126.\n"
".....9.......\n"
"...10119.568.13.\n") == 0);
free(board560831580);
board560831580 = NULL;
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 10, 12) == 1 );
assert( gamma_move(board, 12, 11, 3) == 1 );
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_free_fields(board, 1) == 112 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 9, 12, 6) == 1 );
assert( gamma_free_fields(board, 9) == 109 );
assert( gamma_golden_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 12, 12, 7) == 0 );
assert( gamma_move(board, 12, 4, 7) == 0 );


char* board920898888 = gamma_board(board);
assert( board920898888 != NULL );
assert( strcmp(board920898888, 
".4476..12..9..\n"
"..4....4..5..\n"
"..103102...311..\n"
"....1213..111...\n"
"...5.75.7.129.\n"
".118.8295.118.4\n"
".52..8...11..2\n"
"111210.2......23\n"
"12..13......919\n"
".3.73...5..1.\n"
".12541.11.9.6.11\n"
"10713121...12.612.\n"
"66...29...126.\n"
".....9....6..\n"
"...10119.568.13.\n") == 0);
free(board920898888);
board920898888 = NULL;
assert( gamma_move(board, 13, 1, 1) == 1 );
assert( gamma_move(board, 13, 5, 14) == 1 );


char* board512188860 = gamma_board(board);
assert( board512188860 != NULL );
assert( strcmp(board512188860, 
".447613.12..9..\n"
"..4....4..5..\n"
"..103102...311..\n"
"....1213..111...\n"
"...5.75.7.129.\n"
".118.8295.118.4\n"
".52..8...11..2\n"
"111210.2......23\n"
"12..13......919\n"
".3.73...5..1.\n"
".12541.11.9.6.11\n"
"10713121...12.612.\n"
"66...29...126.\n"
".13...9....6..\n"
"...10119.568.13.\n") == 0);
free(board512188860);
board512188860 = NULL;
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );


char* board714004648 = gamma_board(board);
assert( board714004648 != NULL );
assert( strcmp(board714004648, 
".447613.12..9..\n"
"..4....4..5..\n"
"..103102...311..\n"
"....1213..111...\n"
"...5.75.7.129.\n"
".118.8295.118.4\n"
".52..8...11..2\n"
"111210.2......23\n"
"12..13.1.1..919\n"
".3.73...5..1.\n"
".12541.11.9.6.11\n"
"107131213..12.612.\n"
"66...29...126.\n"
".13...9....6..\n"
"...10119.568.13.\n") == 0);
free(board714004648);
board714004648 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_move(board, 12, 9, 11) == 0 );
assert( gamma_busy_fields(board, 12) == 10 );


char* board850570803 = gamma_board(board);
assert( board850570803 != NULL );
assert( strcmp(board850570803, 
".447613.12..9..\n"
"..4....4..5..\n"
"..103102...311..\n"
"....1213..111...\n"
"...5.75.7.129.\n"
".11878295.118.4\n"
".52..8...11..2\n"
"111210.2......23\n"
"1210913.1.1..919\n"
".3.73...5..1.\n"
".12541.11.9.6.11\n"
"107131213..12.612.\n"
"66...29...126.\n"
".13...9....6..\n"
"8..10119.568.13.\n") == 0);
free(board850570803);
board850570803 = NULL;
assert( gamma_move(board, 13, 12, 12) == 1 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 14, 8) == 0 );


char* board529777191 = gamma_board(board);
assert( board529777191 != NULL );
assert( strcmp(board529777191, 
".447613.12..9..\n"
"..4....4..5..\n"
"..103102...311.13\n"
"5...1213..111...\n"
"...5.75.7.129.\n"
".11878295.28.4\n"
".524.8...11..2\n"
"111210.2......23\n"
"1210913.1.1..919\n"
".3.73...5..1.\n"
".12541.11.9.6.11\n"
"107131213..12.612.\n"
"66...29...1261\n"
"313...9....6..\n"
"8..10119.568.13.\n") == 0);
free(board529777191);
board529777191 = NULL;
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 1, 13) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_free_fields(board, 10) == 92 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 2, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_free_fields(board, 12) == 91 );
assert( gamma_move(board, 13, 5, 12) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 89 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_move(board, 9, 10, 1) == 0 );


char* board514923535 = gamma_board(board);
assert( board514923535 != NULL );
assert( strcmp(board514923535, 
"8447613.12..9..\n"
".84....4..5..\n"
"..103102...311.13\n"
"5...1213.7111...\n"
"...5.75.7.129.\n"
".11878295.28.4\n"
".524.8...11..2\n"
"111210.2...7..23\n"
"1210913.1.1..919\n"
".31173...5..1.\n"
".12541.11.9.6.11\n"
"107131213..123612.\n"
"66...29...1261\n"
"313...9...16..\n"
"8..10119.568.139\n") == 0);
free(board514923535);
board514923535 = NULL;
assert( gamma_move(board, 10, 14, 12) == 0 );
assert( gamma_move(board, 10, 4, 13) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 12, 8) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 13, 11, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 5, 9) == 0 );
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 13, 13, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_free_fields(board, 7) == 77 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 4, 6) == 1 );
assert( gamma_free_fields(board, 10) == 75 );
assert( gamma_move(board, 11, 14, 8) == 0 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 12, 0, 8) == 1 );
assert( gamma_busy_fields(board, 12) == 13 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 13, 0, 10) == 1 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );


char* board161316833 = gamma_board(board);
assert( board161316833 != NULL );
assert( strcmp(board161316833, 
"8447613.12..9..\n"
".84.10..45.5..\n"
"..103102...311.13\n"
"5...1213.7111...\n"
"13..5.75.7.129.\n"
".11878295.28.4\n"
"1252428...11..2\n"
"111210.2.2.73.23\n"
"1210913101.1.8919\n"
".3117312..5..14\n"
"1212541.11.9.6.11\n"
"107131213.10123612.\n"
"66...29...1261\n"
"313...9...166.\n"
"811.10119.568.139\n") == 0);
free(board161316833);
board161316833 = NULL;
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_free_fields(board, 10) == 69 );
assert( gamma_move(board, 11, 8, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 14) == 0 );
assert( gamma_busy_fields(board, 12) == 13 );
assert( gamma_free_fields(board, 12) == 68 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 11) == 0 );
assert( gamma_move(board, 13, 3, 10) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 10, 9, 12) == 0 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 12, 2, 9) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 7, 5, 13) == 1 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 13 );
assert( gamma_move(board, 13, 12, 8) == 0 );
assert( gamma_free_fields(board, 13) == 63 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board970914028 = gamma_board(board);
assert( board970914028 != NULL );
assert( strcmp(board970914028, 
"8447613.12..9..\n"
".84.107.45.5..\n"
"..103102...311313\n"
"5...1213.7111...\n"
"13..5.75.75129.\n"
".11878295728.4\n"
"1252428..111..2\n"
"111210.2.2773.23\n"
"12109131012188919\n"
".3117312..54.14\n"
"1212541.11.9.6.11\n"
"107131213.10123612.\n"
"66...29.11.1261\n"
"313...9...166.\n"
"811.10119.568.139\n") == 0);
free(board970914028);
board970914028 = NULL;
assert( gamma_move(board, 5, 11, 14) == 1 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_free_fields(board, 9) == 60 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 11, 11, 11) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 12, 9, 11) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 13, 11) == 0 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_free_fields(board, 9) == 57 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 14, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_golden_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 9, 13) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 12, 7) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 13, 6, 8) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board297044404 = gamma_board(board);
assert( board297044404 != NULL );
assert( strcmp(board297044404, 
"8447613.12..95.\n"
".84.107.4565..\n"
".4103102...311313\n"
"5...1213.7111.11.\n"
"13..5.75.75129.\n"
".11878295728.4\n"
"1252428135111..2\n"
"111210.282773.23\n"
"12109131012188919\n"
".3117312..54.14\n"
"1212541.11.9.6.11\n"
"107131213.10123612.\n"
"66...29.11.1261\n"
"313...9...166.\n"
"811.10119.568.139\n") == 0);
free(board297044404);
board297044404 = NULL;
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 0, 9) == 1 );
assert( gamma_move(board, 13, 14, 9) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_golden_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 10, 0, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 14 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 13, 10, 13) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );


char* board768591250 = gamma_board(board);
assert( board768591250 != NULL );
assert( strcmp(board768591250, 
"8447613.12..95.\n"
".84.107.4565..\n"
".4103102...311313\n"
"5...1213.7111.11.\n"
"13..5.75.75129.\n"
"121187829572894\n"
"1252428135111..2\n"
"111210.282773.23\n"
"1279131012188919\n"
".3117312.354.14\n"
"1212541.11.9.6.11\n"
"107131213.101236125\n"
"66...29.11.1261\n"
"313...9...166.\n"
"811.10119.568.139\n") == 0);
free(board768591250);
board768591250 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 12, 14) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_free_fields(board, 12) == 50 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );


char* board596631844 = gamma_board(board);
assert( board596631844 != NULL );
assert( strcmp(board596631844, 
"8447613.12..954\n"
".84.107.4565..\n"
".4103102...311313\n"
"5...1213.7111.11.\n"
"13..5.75.75129.\n"
"121187829572894\n"
"1252428135111..2\n"
"111210.282773.23\n"
"1279131012188919\n"
".3117312.354.14\n"
"1212541.11.9.6.11\n"
"107131213.101236125\n"
"6613..29.11.1261\n"
"313...9...166.\n"
"811.10119.568.139\n") == 0);
free(board596631844);
board596631844 = NULL;
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 10, 12, 7) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_free_fields(board, 10) == 48 );
assert( gamma_move(board, 11, 14, 9) == 0 );
assert( gamma_move(board, 12, 1, 6) == 0 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 1, 8) == 0 );


char* board805251751 = gamma_board(board);
assert( board805251751 != NULL );
assert( strcmp(board805251751, 
"8447613.12..954\n"
".84.107.4565..\n"
".4103102...311313\n"
"5...1213.7111.11.\n"
"13..5.75.75129.\n"
"121187829572894\n"
"1252428135111..2\n"
"111210.282773.23\n"
"1279131012188919\n"
".3117312.354.14\n"
"1212541.11.9.6.11\n"
"107131213.101236125\n"
"6613..29.11.1261\n"
"313.8.9...166.\n"
"811.10119.5682139\n") == 0);
free(board805251751);
board805251751 = NULL;
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 4, 14) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 14, 8) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 13, 4, 11) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_golden_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 11, 7, 2) == 1 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_golden_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );


char* board737217030 = gamma_board(board);
assert( board737217030 != NULL );
assert( strcmp(board737217030, 
"8447613.12..954\n"
".84.107.4565..\n"
".4103102..3311313\n"
"5...1213.7111.11.\n"
"13..5.75.75129.\n"
"121187829572894\n"
"1252428135111..2\n"
"1112107282773623\n"
"1279131012188919\n"
"431173122354.14\n"
"1212541.11.9.6.11\n"
"107131213.101236125\n"
"6613..291111.1261\n"
"313.8.910..166.\n"
"811.10119.5682139\n") == 0);
free(board737217030);
board737217030 = NULL;
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_free_fields(board, 10) == 40 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_move(board, 11, 12, 11) == 1 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 9, 14, 8) == 0 );
assert( gamma_move(board, 10, 1, 10) == 1 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 12, 4, 12) == 0 );
assert( gamma_move(board, 13, 0, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 36 );


char* board816125304 = gamma_board(board);
assert( board816125304 != NULL );
assert( strcmp(board816125304, 
"8447613.12..954\n"
".84.107.4565..\n"
".4103102..3311313\n"
"5...1213.7111.1111\n"
"1310.5.75.751296\n"
"121187829572894\n"
"1252428135111..2\n"
"1112107282773623\n"
"1279131012188919\n"
"431173122354.14\n"
"1212541.11.9.6.11\n"
"107131213.101236125\n"
"6613.1291111.1261\n"
"313.8.910..166.\n"
"811.10119.5682139\n") == 0);
free(board816125304);
board816125304 = NULL;
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 13, 11) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 13, 6) == 0 );
assert( gamma_move(board, 11, 13, 12) == 0 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_free_fields(board, 13) == 36 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_golden_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 11, 13, 6) == 0 );
assert( gamma_move(board, 11, 12, 9) == 0 );
assert( gamma_move(board, 12, 10, 12) == 0 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 12, 0) == 0 );
assert( gamma_busy_fields(board, 13) == 10 );


gamma_delete(board);

    return 0;
}
