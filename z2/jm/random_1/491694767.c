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
uuid: 491694767
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 8, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_free_fields(board, 6) == 118 );
assert( gamma_move(board, 7, 15, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );


char* board624906400 = gamma_board(board);
assert( board624906400 != NULL );
assert( strcmp(board624906400, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"..........3....\n"
"...............\n"
"...............\n"
"..............5\n") == 0);
free(board624906400);
board624906400 = NULL;
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, -1, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_free_fields(board, 2) == 108 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 7, 15, 7) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );


char* board915854271 = gamma_board(board);
assert( board915854271 != NULL );
assert( strcmp(board915854271, 
"...7..6.5.44...\n"
"........2......\n"
"......3.....4..\n"
".42....1.......\n"
".5.4..6...3..1.\n"
".2........2....\n"
"....5..........\n"
"..3....6......5\n") == 0);
free(board915854271);
board915854271 = NULL;
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_free_fields(board, 7) == 88 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 12, 6) == 1 );


char* board499259610 = gamma_board(board);
assert( board499259610 != NULL );
assert( strcmp(board499259610, 
"...7..6.5.44...\n"
"....2...2..53..\n"
"....5.3.3...4..\n"
".42...41.......\n"
".5.4..6..13..1.\n"
"62........2....\n"
"6...554........\n"
"..3..376......5\n") == 0);
free(board499259610);
board499259610 = NULL;
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_golden_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 7, 14, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_golden_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 7, 1, -1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board225382510 = gamma_board(board);
assert( board225382510 != NULL );
assert( strcmp(board225382510, 
"...7..6.5.44...\n"
"....2...2..53..\n"
"....5.3.3...4..\n"
".42...41...7..7\n"
".5.4.76..133.1.\n"
"62....4..12....\n"
"6..2554........\n"
"..3..376....155\n") == 0);
free(board225382510);
board225382510 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );


char* board465609925 = gamma_board(board);
assert( board465609925 != NULL );
assert( strcmp(board465609925, 
"...7..6.5.44...\n"
"....2...2..53..\n"
"....5.3.3...4..\n"
".42...41...7..7\n"
".5.4.76..133.1.\n"
"62....4..12....\n"
"6..2554........\n"
"..3..376....155\n") == 0);
free(board465609925);
board465609925 = NULL;
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );


gamma_delete(board);

    return 0;
}
