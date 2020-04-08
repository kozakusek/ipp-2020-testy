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
uuid: 964732763
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_golden_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );


char* board795612579 = gamma_board(board);
assert( board795612579 != NULL );
assert( strcmp(board795612579, 
"..........\n"
".....1....\n"
".....5....\n"
"..6......7\n"
"..3.......\n"
"..8.......\n"
"..........\n") == 0);
free(board795612579);
board795612579 = NULL;
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );


char* board318013270 = gamma_board(board);
assert( board318013270 != NULL );
assert( strcmp(board318013270, 
"...82.....\n"
".....1..2.\n"
"...7.5..8.\n"
"..6...3..7\n"
"..1...7...\n"
"..8.....4.\n"
".......2..\n") == 0);
free(board318013270);
board318013270 = NULL;
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board946157020 = gamma_board(board);
assert( board946157020 != NULL );
assert( strcmp(board946157020, 
"...82.....\n"
".....1..2.\n"
"...7.5..8.\n"
"..6...3..7\n"
"..1...7...\n"
"..8....24.\n"
".......2.7\n") == 0);
free(board946157020);
board946157020 = NULL;
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_golden_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_free_fields(board, 7) == 14 );


char* board305770068 = gamma_board(board);
assert( board305770068 != NULL );
assert( strcmp(board305770068, 
"...82.4...\n"
".....15.2.\n"
"...7.5..8.\n"
"..6...3..7\n"
"..1...7...\n"
"..8....24.\n"
"7..3...2.7\n") == 0);
free(board305770068);
board305770068 = NULL;


char* board411486506 = gamma_board(board);
assert( board411486506 != NULL );
assert( strcmp(board411486506, 
"...82.4...\n"
".....15.2.\n"
"...7.5..8.\n"
"..6...3..7\n"
"..1...7...\n"
"..8....24.\n"
"7..3...2.7\n") == 0);
free(board411486506);
board411486506 = NULL;
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );


char* board543092903 = gamma_board(board);
assert( board543092903 != NULL );
assert( strcmp(board543092903, 
"...82.4.2.\n"
".....15.2.\n"
"...7.5..8.\n"
"..6...3..7\n"
"..1.1.7...\n"
"..8....24.\n"
"7..3...2.7\n") == 0);
free(board543092903);
board543092903 = NULL;
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
