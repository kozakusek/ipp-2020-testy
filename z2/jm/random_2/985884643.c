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
uuid: 985884643
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 12, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_free_fields(board, 9) == 78 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_free_fields(board, 12) == 74 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );


char* board568339753 = gamma_board(board);
assert( board568339753 != NULL );
assert( strcmp(board568339753, 
"....9.6...\n"
".5.3.4....\n"
".112.....4.\n"
"7..2.....3\n"
"9....3....\n"
"...1261.108.\n"
".....6....\n"
"......11..1\n"
".5.8...6..\n") == 0);
free(board568339753);
board568339753 = NULL;
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_move(board, 10, 8, 1) == 1 );
assert( gamma_move(board, 10, 8, 8) == 1 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 12, 7, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 8, 2) == 1 );


char* board583038502 = gamma_board(board);
assert( board583038502 != NULL );
assert( strcmp(board583038502, 
"....946.10.\n"
".5.3.4...9\n"
".112..3..4.\n"
"7..2....53\n"
"91...3...4\n"
".7.1261.108.\n"
".....6..7.\n"
"......1112101\n"
".5.8...6..\n") == 0);
free(board583038502);
board583038502 = NULL;
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 10, 0, 7) == 1 );
assert( gamma_move(board, 11, 3, 4) == 1 );


char* board129313944 = gamma_board(board);
assert( board129313944 != NULL );
assert( strcmp(board129313944, 
"....946.10.\n"
"105.384...9\n"
"9112..3..4.\n"
"7..2....53\n"
"91.11.3...4\n"
".7.1261.108.\n"
".....6..7.\n"
"......1112101\n"
".588...6..\n") == 0);
free(board129313944);
board129313944 = NULL;
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 12, 4, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 11, 8, 4) == 1 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );


char* board208256330 = gamma_board(board);
assert( board208256330 != NULL );
assert( strcmp(board208256330, 
"....946.10.\n"
"108.384.129\n"
"9112..3..4.\n"
"7..212.11.53\n"
"91.11.38.114\n"
".7.1261.108.\n"
".7.1.6.27.\n"
"......1112101\n"
".588...6..\n") == 0);
free(board208256330);
board208256330 = NULL;
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_free_fields(board, 11) == 39 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 12, 8, 0) == 1 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_golden_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 10, 7, 8) == 1 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );


char* board528505974 = gamma_board(board);
assert( board528505974 != NULL );
assert( strcmp(board528505974, 
".31.946101010\n"
"10812384.129\n"
"91125.3.124.\n"
"710.212.11753\n"
"91611.38.114\n"
".7.1261.108.\n"
".741.61127.\n"
"11.2..1112101\n"
"6588.5116129\n") == 0);
free(board528505974);
board528505974 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 20 );


char* board325307899 = gamma_board(board);
assert( board325307899 != NULL );
assert( strcmp(board325307899, 
".31.946101010\n"
"10812384.129\n"
"91125.31124.\n"
"710.212.11753\n"
"91611.38.114\n"
".7.1261.108.\n"
".741.61127.\n"
"11.2..1112101\n"
"6588.5116129\n") == 0);
free(board325307899);
board325307899 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 4, 4) == 1 );


char* board789904388 = gamma_board(board);
assert( board789904388 != NULL );
assert( strcmp(board789904388, 
".31.946101010\n"
"10812384.129\n"
"91125.31124.\n"
"710.212.11753\n"
"91611538.114\n"
".7.1261.108.\n"
".741.61127.\n"
"11.2..1112101\n"
"6588.5116129\n") == 0);
free(board789904388);
board789904388 = NULL;
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board768871647 = gamma_board(board);
assert( board768871647 != NULL );
assert( strcmp(board768871647, 
".31.946101010\n"
"108123846129\n"
"91125.31124.\n"
"710.212.11753\n"
"91611538.114\n"
".7.1261.108.\n"
".741.61127.\n"
"11.2..1112101\n"
"6588.5116129\n") == 0);
free(board768871647);
board768871647 = NULL;
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_move(board, 12, 9, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_golden_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_golden_move(board, 10, 7, 7) == 1 );
assert( gamma_move(board, 11, 4, 6) == 1 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 10, 9, 8) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 8, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 12, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
