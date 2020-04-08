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
uuid: 833021078
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 4, 15, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );


char* board662819981 = gamma_board(board);
assert( board662819981 != NULL );
assert( strcmp(board662819981, 
"4....4.......\n"
".............\n"
".............\n"
".........1...\n") == 0);
free(board662819981);
board662819981 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 11, 2) == 1 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_free_fields(board, 11) == 44 );
assert( gamma_move(board, 13, 3, 0) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 6, 0) == 1 );
assert( gamma_move(board, 15, 7, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 13, 3, 12) == 0 );
assert( gamma_move(board, 14, 9, 2) == 1 );
assert( gamma_move(board, 14, 10, 1) == 0 );
assert( gamma_move(board, 15, 3, 2) == 1 );


char* board489237111 = gamma_board(board);
assert( board489237111 != NULL );
assert( strcmp(board489237111, 
"4...74.15.356.\n"
".7915...9.14.10.\n"
".13.......7..\n"
".11.13..15.612..\n") == 0);
free(board489237111);
board489237111 = NULL;
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board880567464 = gamma_board(board);
assert( board880567464 != NULL );
assert( strcmp(board880567464, 
"4...74.15.356.\n"
".7915...9114.10.\n"
".13.......7..\n"
".11.13..15.612..\n") == 0);
free(board880567464);
board880567464 = NULL;
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );


char* board166151262 = gamma_board(board);
assert( board166151262 != NULL );
assert( strcmp(board166151262, 
"4..7744153356.\n"
".7915...9114.10.\n"
".134......7..\n"
".11213..15.612.2\n") == 0);
free(board166151262);
board166151262 = NULL;
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 10, 11, 0) == 1 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_golden_move(board, 11, 3, 11) == 0 );
assert( gamma_move(board, 12, 1, 11) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 13, 1, 2) == 0 );
assert( gamma_move(board, 14, 8, 1) == 1 );
assert( gamma_move(board, 15, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );


char* board169239196 = gamma_board(board);
assert( board169239196 != NULL );
assert( strcmp(board169239196, 
"4..7744153356.\n"
".7915.3.9114.10.\n"
".134....14.7..\n"
".11213..15.612102\n") == 0);
free(board169239196);
board169239196 = NULL;
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 10, 2) == 1 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_free_fields(board, 14) == 15 );
assert( gamma_free_fields(board, 15) == 15 );
assert( gamma_move(board, 1, 2, 12) == 0 );


char* board373292654 = gamma_board(board);
assert( board373292654 != NULL );
assert( strcmp(board373292654, 
"4.97744153356.\n"
".7915.3.91141010.\n"
".134....14.7.6\n"
"911213.815.612102\n") == 0);
free(board373292654);
board373292654 = NULL;
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );


char* board629312196 = gamma_board(board);
assert( board629312196 != NULL );
assert( strcmp(board629312196, 
"4.97744153356.\n"
".7915.3.91141010.\n"
".134....14.7.6\n"
"911213.8153612102\n") == 0);
free(board629312196);
board629312196 = NULL;
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 3, 12) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 2, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 1, 6) == 0 );
assert( gamma_free_fields(board, 15) == 14 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_golden_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 13, 10, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 1, 7) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 2, 0) == 0 );
assert( gamma_move(board, 15, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 14, 1, 1) == 0 );
assert( gamma_move(board, 14, 0, 1) == 1 );


gamma_delete(board);

    return 0;
}
