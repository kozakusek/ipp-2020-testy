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
uuid: 301512975
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(18, 7, 10, 19);
assert( board != NULL );


assert( gamma_free_fields(board, 2) == 126 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 9, 13, -1) == 0 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 17, 0) == 1 );
assert( gamma_move(board, 5, 17, -1) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 16, 5) == 1 );
assert( gamma_move(board, 8, 15, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 1, 15, 4) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 7, 16, 7) == 0 );
assert( gamma_move(board, 9, -1, 7) == 0 );
assert( gamma_free_fields(board, 9) == 112 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board389400978 = gamma_board(board);
assert( board389400978 != NULL );
assert( strcmp(board389400978, 
"3.......5..810.....\n"
"................7.\n"
".....5..2.6...41..\n"
".7................\n"
"...............8..\n"
"......10...........\n"
"......10....3.....4\n") == 0);
free(board389400978);
board389400978 = NULL;
assert( gamma_golden_move(board, 5, 0, 17) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 18, 7) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 109 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_free_fields(board, 5) == 108 );
assert( gamma_move(board, 6, 14, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, -1, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 3, 17, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 7, 16, 2) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 16, 2) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );


char* board290910215 = gamma_board(board);
assert( board290910215 != NULL );
assert( strcmp(board290910215, 
"3...3...5.9810.....\n"
"......14........7.\n"
".....5..2.6...41..\n"
".7...............3\n"
"..4..1........687.\n"
"......10...........\n"
"......10....3.....4\n") == 0);
free(board290910215);
board290910215 = NULL;
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_free_fields(board, 4) == 101 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 9, -1, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 2) == 1 );
assert( gamma_free_fields(board, 10) == 96 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_free_fields(board, 3) == 96 );
assert( gamma_golden_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_golden_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 16, 7) == 0 );
assert( gamma_move(board, 10, 16, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );


char* board178170875 = gamma_board(board);
assert( board178170875 != NULL );
assert( strcmp(board178170875, 
"3..633..5.9810.5...\n"
"......144...6...7.\n"
".....58.2.6...41..\n"
".7...617.........3\n"
"7104..1........687.\n"
".8....10.7.......10.\n"
"......1010...3.....4\n") == 0);
free(board178170875);
board178170875 = NULL;
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_golden_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 18, -1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 3, -1) == 0 );
assert( gamma_move(board, 2, 15, 1) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );


char* board154866864 = gamma_board(board);
assert( board154866864 != NULL );
assert( strcmp(board154866864, 
"3..653..5.9810.5...\n"
"......144...6...7.\n"
".....58.2.6...41..\n"
".73..617.........3\n"
"7104..1........687.\n"
".8....10.7.2....210.\n"
".....71010...3.....4\n") == 0);
free(board154866864);
board154866864 = NULL;
assert( gamma_move(board, 5, 15, 6) == 1 );
assert( gamma_golden_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );


gamma_delete(board);

    return 0;
}
