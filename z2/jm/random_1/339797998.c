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
uuid: 339797998
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 92 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_free_fields(board, 2) == 89 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 4) == 1 );


char* board526257546 = gamma_board(board);
assert( board526257546 != NULL );
assert( strcmp(board526257546, 
"...1.466..\n"
"...2......\n"
".........4\n"
"..........\n"
"51........\n"
"..3.3.....\n"
"..1.6.....\n"
"..........\n"
".2..2.....\n"
"........1.\n") == 0);
free(board526257546);
board526257546 = NULL;
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );


char* board164997141 = gamma_board(board);
assert( board164997141 != NULL );
assert( strcmp(board164997141, 
"...1.466..\n"
"2..2......\n"
".........4\n"
"..........\n"
"511...5...\n"
"..3.3.....\n"
"..1.6...2.\n"
"..........\n"
".2..2.....\n"
"........1.\n") == 0);
free(board164997141);
board164997141 = NULL;
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );


char* board424778746 = gamma_board(board);
assert( board424778746 != NULL );
assert( strcmp(board424778746, 
"2..1.466..\n"
"2.12.53..5\n"
".3...1.3.4\n"
"..........\n"
"511.1.5...\n"
"..3.3.5426\n"
"3.1.6...2.\n"
".6........\n"
".2.22.3...\n"
".1......1.\n") == 0);
free(board424778746);
board424778746 = NULL;
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );


gamma_delete(board);

    return 0;
}
