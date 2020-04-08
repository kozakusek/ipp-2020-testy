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
uuid: 678032587
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 2, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 4) == 1 );


char* board542441293 = gamma_board(board);
assert( board542441293 != NULL );
assert( strcmp(board542441293, 
"..........\n"
"..........\n"
".........1\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board542441293);
board542441293 = NULL;
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );


char* board833512407 = gamma_board(board);
assert( board833512407 != NULL );
assert( strcmp(board833512407, 
"....2.....\n"
"..........\n"
".........1\n"
".........2\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board833512407);
board833512407 = NULL;
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );


char* board290389073 = gamma_board(board);
assert( board290389073 != NULL );
assert( strcmp(board290389073, 
"...22.....\n"
".1.2......\n"
".........1\n"
".........2\n"
"....1.....\n"
".........1\n"
"...2......\n") == 0);
free(board290389073);
board290389073 = NULL;
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );


char* board351357560 = gamma_board(board);
assert( board351357560 != NULL );
assert( strcmp(board351357560, 
".1.22....1\n"
".1.2......\n"
".....2...1\n"
".........2\n"
".2..1.....\n"
".........1\n"
"...2..21..\n") == 0);
free(board351357560);
board351357560 = NULL;
assert( gamma_golden_move(board, 1, 5, 3) == 0 );


char* board530107910 = gamma_board(board);
assert( board530107910 != NULL );
assert( strcmp(board530107910, 
".1.22....1\n"
".1.2......\n"
".....2...1\n"
".........2\n"
".2..1.....\n"
".........1\n"
"...2..21..\n") == 0);
free(board530107910);
board530107910 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );


char* board161004519 = gamma_board(board);
assert( board161004519 != NULL );
assert( strcmp(board161004519, 
".1.222...1\n"
".1.2......\n"
".....22..1\n"
".........2\n"
".2..1.....\n"
".........1\n"
"...2..21..\n") == 0);
free(board161004519);
board161004519 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 1, -1, 6) == 0 );


char* board191139683 = gamma_board(board);
assert( board191139683 != NULL );
assert( strcmp(board191139683, 
".1.222...1\n"
".1.2......\n"
".....22..1\n"
".........2\n"
".2..1.....\n"
".........1\n"
"...2..21..\n") == 0);
free(board191139683);
board191139683 = NULL;
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
