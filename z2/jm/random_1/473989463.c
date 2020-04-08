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
uuid: 473989463
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );


char* board266073153 = gamma_board(board);
assert( board266073153 != NULL );
assert( strcmp(board266073153, 
"..........\n"
"...4......\n"
"..........\n"
"..........\n"
".6........\n"
".....2....\n"
"..........\n") == 0);
free(board266073153);
board266073153 = NULL;
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 7, 10, -1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_free_fields(board, 7) == 57 );


char* board778807268 = gamma_board(board);
assert( board778807268 != NULL );
assert( strcmp(board778807268, 
"....3.....\n"
"6..4....5.\n"
".......1..\n"
"..........\n"
".6..737..1\n"
".....2....\n"
"..2..5....\n") == 0);
free(board778807268);
board778807268 = NULL;
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board978276054 = gamma_board(board);
assert( board978276054 != NULL );
assert( strcmp(board978276054, 
"...73.....\n"
"65.4....5.\n"
"7......1..\n"
"..........\n"
".6..737..1\n"
".....2.211\n"
"..2.65...3\n") == 0);
free(board978276054);
board978276054 = NULL;
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_golden_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );


gamma_delete(board);

    return 0;
}
