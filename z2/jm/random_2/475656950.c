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
uuid: 475656950
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 13, 11, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 166 );


char* board375191690 = gamma_board(board);
assert( board375191690 != NULL );
assert( strcmp(board375191690, 
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
"...........1.\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
"...........2.\n"
"2............\n") == 0);
free(board375191690);
board375191690 = NULL;
assert( gamma_move(board, 4, 8, 10) == 1 );


char* board103273551 = gamma_board(board);
assert( board103273551 != NULL );
assert( strcmp(board103273551, 
".............\n"
".............\n"
"........4....\n"
".............\n"
".............\n"
"...........1.\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
"...........2.\n"
"2............\n") == 0);
free(board103273551);
board103273551 = NULL;
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );


char* board403446543 = gamma_board(board);
assert( board403446543 != NULL );
assert( strcmp(board403446543, 
".............\n"
".............\n"
"........4....\n"
".............\n"
".............\n"
"..5........1.\n"
".............\n"
".............\n"
"...........5.\n"
".............\n"
".............\n"
"...........2.\n"
"2............\n") == 0);
free(board403446543);
board403446543 = NULL;
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_golden_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 6, 12) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_free_fields(board, 7) == 148 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 10, 12) == 1 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 4) == 140 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 10, 3, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_free_fields(board, 11) == 132 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 7, 12, 5) == 1 );
assert( gamma_move(board, 8, 9, 11) == 1 );
assert( gamma_move(board, 9, 10, 11) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_free_fields(board, 10) == 123 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_move(board, 11, 9, 8) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_free_fields(board, 5) == 116 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );


char* board595020394 = gamma_board(board);
assert( board595020394 != NULL );
assert( strcmp(board595020394, 
"...3..10.4.10..\n"
"..2..66..89..\n"
"..1...7.4....\n"
".1910.3.7..3..\n"
".947..4..11.2.\n"
"15510...33..1.\n"
"7118.84.......\n"
"18..5...7...7\n"
"6......4..952\n"
"...2..8.9....\n"
".6..68.......\n"
".6.11.5..2.82.\n"
"2..8..1.10103..\n") == 0);
free(board595020394);
board595020394 = NULL;
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_free_fields(board, 7) == 102 );
assert( gamma_move(board, 8, 12, 8) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 4, 10) == 1 );
assert( gamma_move(board, 10, 4, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );


char* board643309986 = gamma_board(board);
assert( board643309986 != NULL );
assert( strcmp(board643309986, 
"...3..10.4.10..\n"
"..2..66..89..\n"
"..1.10.7.4....\n"
".1910103.7..3..\n"
".947..47.11.28\n"
"15510...33..1.\n"
"7118.84.......\n"
"18..5...7...7\n"
"6......4..952\n"
"...2..8.9....\n"
".6..686......\n"
".6.11.5.72.82.\n"
"2..8..1.10103..\n") == 0);
free(board643309986);
board643309986 = NULL;
assert( gamma_move(board, 11, 7, 12) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_free_fields(board, 6) == 94 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_free_fields(board, 8) == 94 );
assert( gamma_golden_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 12, 9) == 1 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 10, 0, 10) == 1 );
assert( gamma_golden_move(board, 10, 0, 6) == 1 );


char* board616508805 = gamma_board(board);
assert( board616508805 != NULL );
assert( strcmp(board616508805, 
"1..3..10114.10..\n"
"..2..66..89..\n"
"10.1.10.7.4....\n"
"91910103.7..3.9\n"
".947.447.11.28\n"
"15510...33..1.\n"
"10118.84.......\n"
"18..5...7...7\n"
"6......42.952\n"
"...2..8.9....\n"
".6..686......\n"
".6.11.5.72682.\n"
"2..8..1.10103..\n") == 0);
free(board616508805);
board616508805 = NULL;
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 11, 11) == 1 );


char* board675017808 = gamma_board(board);
assert( board675017808 != NULL );
assert( strcmp(board675017808, 
"1..3..10114.10..\n"
"..2..66..893.\n"
"10.1110.7.4....\n"
"91910103.7..3.9\n"
".947.447.11.28\n"
"15510...33..1.\n"
"10118.84.......\n"
"18..5...7...7\n"
"6......42.952\n"
"...2..8.9....\n"
".6..686......\n"
".6.11.5.72682.\n"
"2..8..1.10103..\n") == 0);
free(board675017808);
board675017808 = NULL;
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_free_fields(board, 6) == 86 );


char* board389060386 = gamma_board(board);
assert( board389060386 != NULL );
assert( strcmp(board389060386, 
"1.53..10114.10..\n"
"..2..66..893.\n"
"1041110.7.4....\n"
"91910103.7..3.9\n"
".947.447.11.28\n"
"15510...33..1.\n"
"10118.84.......\n"
"18..56..7...7\n"
"6......42.952\n"
"...2..8.9....\n"
".6..686......\n"
".6.11.5.72682.\n"
"2..8..1.10103..\n") == 0);
free(board389060386);
board389060386 = NULL;
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 10, 9, 6) == 1 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 10, 10) == 1 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_free_fields(board, 8) == 77 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );


char* board343962759 = gamma_board(board);
assert( board343962759 != NULL );
assert( strcmp(board343962759, 
"1.53..10114.10..\n"
"..2..66..893.\n"
"104111077.4.11..\n"
"91910103.7..3.9\n"
".947.447.11.28\n"
"15510...33..1.\n"
"10118.843..10...\n"
"18.156.77...7\n"
"6......42.952\n"
"...2..8.9..1.\n"
".6.8686.1....\n"
".6311.5.72682.\n"
"29.8..1110103..\n") == 0);
free(board343962759);
board343962759 = NULL;
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 8, 6) == 1 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 12, 6) == 1 );


char* board558242308 = gamma_board(board);
assert( board558242308 != NULL );
assert( strcmp(board558242308, 
"1.53..10114.10..\n"
"..2..66..893.\n"
"104111077.4.11..\n"
"91910103.7.33.9\n"
".947.447.11.28\n"
"15510...33..1.\n"
"10118.843.1010..3\n"
"18.156.77...7\n"
"6.....942.952\n"
"...2..8.9..1.\n"
".6.868651....\n"
".6311.5.72682.\n"
"29.8..1110103..\n") == 0);
free(board558242308);
board558242308 = NULL;
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 11, 8) == 0 );


char* board274273406 = gamma_board(board);
assert( board274273406 != NULL );
assert( strcmp(board274273406, 
"1.53..10114.10..\n"
"..2..66..893.\n"
"104111077.4.11..\n"
"91910103.7.33.9\n"
".947.447.11.28\n"
"15510...33..1.\n"
"10118.843.1010..3\n"
"18.156.77...7\n"
"6.....942.952\n"
"...2..8.9..1.\n"
".6.868651....\n"
".6311.5.72682.\n"
"29.8..11101034.\n") == 0);
free(board274273406);
board274273406 = NULL;
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 11, 3, 12) == 0 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );


char* board367670956 = gamma_board(board);
assert( board367670956 != NULL );
assert( strcmp(board367670956, 
"1.53..10114.10..\n"
".62..66..893.\n"
"104111077.4.11..\n"
"91910103.7.33.9\n"
"5947.447.11.28\n"
"15510...33..1.\n"
"10118.843.1010..3\n"
"18.156.77...7\n"
"6.....942.952\n"
"..623.879..1.\n"
".6.868651....\n"
".6311.5.72682.\n"
"29.8..11101034.\n") == 0);
free(board367670956);
board367670956 = NULL;
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );


char* board271364804 = gamma_board(board);
assert( board271364804 != NULL );
assert( strcmp(board271364804, 
"1.53..10114.10..\n"
".62..66..893.\n"
"104111077.4.11..\n"
"91910103.7.33.9\n"
"5947.447.11.28\n"
"15510...33..1.\n"
"10118.843.1010..3\n"
"18.156.77...7\n"
"6.....942.952\n"
"..623.879..1.\n"
".6.868651....\n"
".631175.72682.\n"
"29.8..11101034.\n") == 0);
free(board271364804);
board271364804 = NULL;
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 11, 1, 12) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 12, 7) == 1 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 10, 10, 7) == 1 );


char* board118261788 = gamma_board(board);
assert( board118261788 != NULL );
assert( strcmp(board118261788, 
"11153..10114.10..\n"
".62..66..893.\n"
"104111077.4.11..\n"
"91910103.7333.9\n"
"5947.447.11.28\n"
"15510..133.1018\n"
"10118.843.1010..3\n"
"18.156.77..27\n"
"6..10..942.952\n"
"..623.879..1.\n"
".6.868651.9..\n"
".631175.72682.\n"
"29.8..11101034.\n") == 0);
free(board118261788);
board118261788 = NULL;
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );


char* board132064352 = gamma_board(board);
assert( board132064352 != NULL );
assert( strcmp(board132064352, 
"11153..10114.10..\n"
".62..66..893.\n"
"104111077.4.11..\n"
"91910103.7333.9\n"
"5947.447.11.28\n"
"15510..133.1018\n"
"10118.843.1010..3\n"
"18.156.77..27\n"
"6..103.9422952\n"
"..623.879..1.\n"
".6.868651.9..\n"
".631175.72682.\n"
"29.8..11101034.\n") == 0);
free(board132064352);
board132064352 = NULL;
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_free_fields(board, 9) == 52 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_golden_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 11, 2, 11) == 0 );
assert( gamma_move(board, 11, 10, 11) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 9, 2) == 1 );
assert( gamma_move(board, 10, 11, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 15 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );


char* board749599750 = gamma_board(board);
assert( board749599750 != NULL );
assert( strcmp(board749599750, 
"11153..10114.10..\n"
".626.66..893.\n"
"104111077.4.11..\n"
"91910103.7333.9\n"
"5947.447811.28\n"
"15510..133.1018\n"
"10118.84321010..3\n"
"18.156.77..27\n"
"6.4103.9422952\n"
"..623.879..1.\n"
".6.8686511095.\n"
".631175.72682.\n"
"29.8..11101034.\n") == 0);
free(board749599750);
board749599750 = NULL;
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 9, 12, 9) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_free_fields(board, 10) == 45 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 4, 12) == 0 );


char* board247389118 = gamma_board(board);
assert( board247389118 != NULL );
assert( strcmp(board247389118, 
"11153..10114.10..\n"
".626.66..8932\n"
"104111077.4.11..\n"
"91910103.7333.9\n"
"5947.447811.28\n"
"15510..133.1018\n"
"10118.84321010..3\n"
"18.156.77..27\n"
"6.4103.9422952\n"
"..623.879..1.\n"
"106.8686511095.\n"
".631175.72682.\n"
"29.8..11101034.\n") == 0);
free(board247389118);
board247389118 = NULL;
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_golden_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_move(board, 11, 7, 5) == 0 );
assert( gamma_move(board, 11, 5, 9) == 0 );
assert( gamma_free_fields(board, 11) == 42 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 11, 12, 9) == 0 );
assert( gamma_move(board, 11, 12, 8) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );


char* board883315538 = gamma_board(board);
assert( board883315538 != NULL );
assert( strcmp(board883315538, 
"11153..10114310..\n"
".626.66..8232\n"
"10411107754.11..\n"
"91910103.7333.9\n"
"5947.447811.28\n"
"15510..13391018\n"
"10118.84321010..3\n"
"18.156.77..27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"106.8686511095.\n"
".631175.72682.\n"
"29.8..11101034.\n") == 0);
free(board883315538);
board883315538 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_free_fields(board, 10) == 38 );
assert( gamma_golden_move(board, 10, 0, 10) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 16 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_golden_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_free_fields(board, 10) == 35 );
assert( gamma_move(board, 11, 6, 11) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 12) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 11, 12, 3) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board792728349 = gamma_board(board);
assert( board792728349 != NULL );
assert( strcmp(board792728349, 
"11153..10114310.3\n"
".626.66..8232\n"
"10411107754.11.4\n"
"91910103.733349\n"
"5947.447811.28\n"
"15510..13391018\n"
"10118.84321010..3\n"
"18.156.77..27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"108.8686511095.\n"
".631175.72682.\n"
"2928108111010348\n") == 0);
free(board792728349);
board792728349 = NULL;
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 11, 8) == 0 );


char* board463938047 = gamma_board(board);
assert( board463938047 != NULL );
assert( strcmp(board463938047, 
"11153..10114310.3\n"
".626.66..8232\n"
"10411107754.11.4\n"
"91910103.733349\n"
"5947.447811.28\n"
"15510..13391018\n"
"10118.84321010..3\n"
"18.156.77..27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"108.8686511095.\n"
".631175.72682.\n"
"2928108111010348\n") == 0);
free(board463938047);
board463938047 = NULL;
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 11, 10, 10) == 0 );
assert( gamma_golden_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_golden_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 12, 11) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 10, 10, 11) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 17 );
assert( gamma_move(board, 11, 8, 10) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_free_fields(board, 7) == 27 );


char* board185788528 = gamma_board(board);
assert( board185788528 != NULL );
assert( strcmp(board185788528, 
"11153..10114310.3\n"
".626.66..8232\n"
"10411107754.11.4\n"
"91910103.733349\n"
"5947.447811.28\n"
"15310..13391018\n"
"10118584321010..3\n"
"18.156.773.27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"108286865110955\n"
".631175972682.\n"
"292858111010348\n") == 0);
free(board185788528);
board185788528 = NULL;
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );


char* board888243362 = gamma_board(board);
assert( board888243362 != NULL );
assert( strcmp(board888243362, 
"11153..10114310.3\n"
".626.66..8232\n"
"10411107754.11.4\n"
"91910103.733349\n"
"5947.447811.28\n"
"15310..13391018\n"
"10118584321010..3\n"
"18.156.773.27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"108286865110955\n"
".631175972682.\n"
"292858111010348\n") == 0);
free(board888243362);
board888243362 = NULL;
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 12, 11) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_free_fields(board, 11) == 26 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_golden_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board352799226 = gamma_board(board);
assert( board352799226 != NULL );
assert( strcmp(board352799226, 
"11153..10114310.3\n"
".626466..8232\n"
"10411107754.11.4\n"
"919101011.733349\n"
"5947.447811.28\n"
"15310..13391018\n"
"10118584321010..3\n"
"18.156.773.27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"108286865110955\n"
".631175972682.\n"
"292858111010348\n") == 0);
free(board352799226);
board352799226 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 16 );
assert( gamma_free_fields(board, 8) == 26 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );


char* board438481154 = gamma_board(board);
assert( board438481154 != NULL );
assert( strcmp(board438481154, 
"11153..10114310.3\n"
".626466..8232\n"
"10411107754.11.4\n"
"919101011.733349\n"
"5947.447811.28\n"
"15310..13391018\n"
"10118584321010..3\n"
"18.156.773.27\n"
"6.4103.9422952\n"
"8.623.879..14\n"
"108286865110955\n"
".631175972682.\n"
"292858111010348\n") == 0);
free(board438481154);
board438481154 = NULL;
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 6, 11) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_golden_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_golden_move(board, 9, 10, 1) == 1 );


char* board359642376 = gamma_board(board);
assert( board359642376 != NULL );
assert( strcmp(board359642376, 
"11153..10114310.3\n"
".676466..8232\n"
"10411107754.11.4\n"
"919101011.733349\n"
"5947.447811.28\n"
"15310..13391018\n"
"10118584321010..3\n"
"184156.773.27\n"
"6.4103.9422952\n"
"8.623.8796.14\n"
"108286865110955\n"
"5631175972692.\n"
"292858111010348\n") == 0);
free(board359642376);
board359642376 = NULL;
assert( gamma_move(board, 10, 11, 8) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 16 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );


gamma_delete(board);

    return 0;
}
