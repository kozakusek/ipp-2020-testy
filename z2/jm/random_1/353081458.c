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
uuid: 353081458
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_golden_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );


char* board875585488 = gamma_board(board);
assert( board875585488 != NULL );
assert( strcmp(board875585488, 
"..4.......\n"
"...1..1...\n"
"..........\n"
".......1..\n"
".......4..\n"
"2...2...12\n"
".4........\n"
"..........\n") == 0);
free(board875585488);
board875585488 = NULL;
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_golden_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );


char* board961338379 = gamma_board(board);
assert( board961338379 != NULL );
assert( strcmp(board961338379, 
"4.42......\n"
"...1111...\n"
".2........\n"
"......21..\n"
".......431\n"
"2.4.2...12\n"
".4........\n"
"1..1.....4\n") == 0);
free(board961338379);
board961338379 = NULL;
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board596850640 = gamma_board(board);
assert( board596850640 != NULL );
assert( strcmp(board596850640, 
"4.42......\n"
"...1111...\n"
"22.....3..\n"
"......21..\n"
".......431\n"
"2.4.2...12\n"
".4........\n"
"1..1.....4\n") == 0);
free(board596850640);
board596850640 = NULL;
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );


char* board191994688 = gamma_board(board);
assert( board191994688 != NULL );
assert( strcmp(board191994688, 
"4342......\n"
"...1111...\n"
"22.....3..\n"
"......21..\n"
".......431\n"
"2.4.2...12\n"
".4........\n"
"1..1.....4\n") == 0);
free(board191994688);
board191994688 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );


gamma_delete(board);

    return 0;
}
