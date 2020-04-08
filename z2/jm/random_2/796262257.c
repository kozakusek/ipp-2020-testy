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
uuid: 796262257
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 12, 11, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );


char* board296624972 = gamma_board(board);
assert( board296624972 != NULL );
assert( strcmp(board296624972, 
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"1..........\n"
"...........\n"
"...........\n"
"..2........\n"
"...........\n"
"...........\n"
".........2.\n") == 0);
free(board296624972);
board296624972 = NULL;
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_move(board, 10, 1, 9) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 8) == 1 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_free_fields(board, 11) == 117 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 11, 9, 4) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 11, 8, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 9, 11) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 87 );
assert( gamma_move(board, 9, 10, 11) == 1 );
assert( gamma_move(board, 10, 11, 8) == 0 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_free_fields(board, 10) == 85 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );


char* board906350230 = gamma_board(board);
assert( board906350230 != NULL );
assert( strcmp(board906350230, 
".5....3..89\n"
"85....9....\n"
".10314...6..\n"
"5..61.2114.6\n"
"9...1111..8.\n"
"18.9.......\n"
".5...10.6..5\n"
".6.10.....118\n"
"..24.10.10...\n"
"3..24.111...\n"
"..7..5.....\n"
".33.1....2.\n") == 0);
free(board906350230);
board906350230 = NULL;
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board570869866 = gamma_board(board);
assert( board570869866 != NULL );
assert( strcmp(board570869866, 
".53...3..89\n"
"85....9....\n"
".10314...6..\n"
"5..61.2114.6\n"
"9...1111..8.\n"
"18.9.....2.\n"
".5...10.6..5\n"
".6.10.....118\n"
"..24.10.10...\n"
"3..24.111...\n"
"..7..5.....\n"
".33.1....2.\n") == 0);
free(board570869866);
board570869866 = NULL;
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_golden_move(board, 7, 10, 6) == 0 );


char* board105216935 = gamma_board(board);
assert( board105216935 != NULL );
assert( strcmp(board105216935, 
".53...3..89\n"
"85....9....\n"
".10314...6.6\n"
"5..61.2114.6\n"
"9...1111..8.\n"
"18.9.....2.\n"
".5...10.6..5\n"
".6.10.....118\n"
"..24.10.10...\n"
"3..24.111...\n"
"..7..5..4..\n"
".33.15...2.\n") == 0);
free(board105216935);
board105216935 = NULL;
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 10) == 1 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 10, 10, 7) == 1 );
assert( gamma_move(board, 11, 4, 4) == 1 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_golden_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_golden_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 6, 10) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_golden_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_golden_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 10, 5, 2) == 1 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_free_fields(board, 10) == 62 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 10, 9, 6) == 0 );


char* board671780362 = gamma_board(board);
assert( board671780362 != NULL );
assert( strcmp(board671780362, 
".534..3..89\n"
"85....954.9\n"
".10314...6.6\n"
"5..61.2114.6\n"
"9...1111..810\n"
"18.9.....2.\n"
".5..110861185\n"
".6.10116..2118\n"
"..24.10810...\n"
"31.94101111.9\n"
"..75.5.104..\n"
".33615.6.2.\n") == 0);
free(board671780362);
board671780362 = NULL;
assert( gamma_move(board, 11, 7, 7) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );


char* board654447494 = gamma_board(board);
assert( board654447494 != NULL );
assert( strcmp(board654447494, 
".534..3..89\n"
"85....954.9\n"
".10314...6.6\n"
"5..61.2114.6\n"
"9...111111.810\n"
"18.9..1..2.\n"
".5..110861185\n"
".6.10116..2118\n"
"..24.10810...\n"
"31.94101111.9\n"
"..75.5.104..\n"
".33615.6.2.\n") == 0);
free(board654447494);
board654447494 = NULL;
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 10, 8, 11) == 1 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_golden_move(board, 11, 8, 7) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );


char* board185671222 = gamma_board(board);
assert( board185671222 != NULL );
assert( strcmp(board185671222, 
".534..3.1089\n"
"85....954.9\n"
".10314...676\n"
"5..61.2114.6\n"
"9...11111111810\n"
"18.9..1..22\n"
".5.7110861185\n"
".6.10116..2118\n"
"..24.10810..2\n"
"31494101111.9\n"
"..75.5.1044.\n"
".33615.6.2.\n") == 0);
free(board185671222);
board185671222 = NULL;
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 7, 11) == 1 );
assert( gamma_move(board, 10, 7, 4) == 1 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 10, 8, 9) == 0 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_golden_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_free_fields(board, 8) == 7 );


char* board249882130 = gamma_board(board);
assert( board249882130 != NULL );
assert( strcmp(board249882130, 
".5343.3101089\n"
"85....954.9\n"
".10314...676\n"
"5..61.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.10116.102118\n"
"..24.10810..2\n"
"3149410111149\n"
"..75.5.1044.\n"
"933615.652.\n") == 0);
free(board249882130);
board249882130 = NULL;
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board737912772 = gamma_board(board);
assert( board737912772 != NULL );
assert( strcmp(board737912772, 
".5343.3101089\n"
"85....954.9\n"
".10314...676\n"
"5..61.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"..75.5.1044.\n"
"933615.652.\n") == 0);
free(board737912772);
board737912772 = NULL;
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );


char* board655661679 = gamma_board(board);
assert( board655661679 != NULL );
assert( strcmp(board655661679, 
".5343.3101089\n"
"85....954.9\n"
".10314...676\n"
"5..61.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"..75.5.1044.\n"
"933615.652.\n") == 0);
free(board655661679);
board655661679 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 6 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );


char* board867154737 = gamma_board(board);
assert( board867154737 != NULL );
assert( strcmp(board867154737, 
".5343.3101089\n"
"85....954.9\n"
".10314...676\n"
"5.961.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"..75.5.1044.\n"
"933615.652.\n") == 0);
free(board867154737);
board867154737 = NULL;
assert( gamma_move(board, 7, 1, 6) == 0 );


char* board100213410 = gamma_board(board);
assert( board100213410 != NULL );
assert( strcmp(board100213410, 
".5343.3101089\n"
"85....954.9\n"
".10314...676\n"
"5.961.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"..75.5.1044.\n"
"933615.652.\n") == 0);
free(board100213410);
board100213410 = NULL;
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 5, 9) == 0 );


char* board837856082 = gamma_board(board);
assert( board837856082 != NULL );
assert( strcmp(board837856082, 
".5343.3101089\n"
"85....954.9\n"
".10314...676\n"
"5.961.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"..75.5.1044.\n"
"933615.652.\n") == 0);
free(board837856082);
board837856082 = NULL;
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_golden_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_free_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 10, 10, 9) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );


char* board287655192 = gamma_board(board);
assert( board287655192 != NULL );
assert( strcmp(board287655192, 
".5343.3101089\n"
"85....974.9\n"
".10314...676\n"
"5.961.2114.6\n"
"9...11111111810\n"
"18.9..1.1122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"11.75.5.1044.\n"
"9336156652.\n") == 0);
free(board287655192);
board287655192 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );


char* board674907734 = gamma_board(board);
assert( board674907734 != NULL );
assert( strcmp(board674907734, 
".5343.3101089\n"
"85....974.9\n"
".10314...676\n"
"5.961.2114.6\n"
"9...11111111810\n"
"18.9..131122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"11.75.5.1044.\n"
"9336156652.\n") == 0);
free(board674907734);
board674907734 = NULL;
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 33 );


char* board865679737 = gamma_board(board);
assert( board865679737 != NULL );
assert( strcmp(board865679737, 
".5343.3101089\n"
"85....974.9\n"
".10314...676\n"
"5.961.2114.6\n"
"9...11111111810\n"
"18.9..131122\n"
"55.7110861185\n"
".6.1011610102118\n"
"..24.10810..2\n"
"3149410111149\n"
"11.75.5.1044.\n"
"9336156652.\n") == 0);
free(board865679737);
board865679737 = NULL;
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_free_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 0, 11) == 1 );
assert( gamma_move(board, 11, 5, 10) == 1 );


gamma_delete(board);

    return 0;
}
