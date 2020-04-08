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
uuid: 790789951
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 5, 6);
assert( board != NULL );




char* board982497451 = gamma_board(board);
assert( board982497451 != NULL );
assert( strcmp(board982497451, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board982497451);
board982497451 = NULL;
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board911637726 = gamma_board(board);
assert( board911637726 != NULL );
assert( strcmp(board911637726, 
".....2.\n"
".......\n"
"...1...\n"
".......\n"
".......\n"
"......4\n"
".2.....\n"
"...3...\n"
".......\n") == 0);
free(board911637726);
board911637726 = NULL;
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board231839213 = gamma_board(board);
assert( board231839213 != NULL );
assert( strcmp(board231839213, 
"2....2.\n"
"5.5....\n"
".1.1...\n"
"4......\n"
"....4..\n"
"...1..4\n"
".2...5.\n"
"...3...\n"
"......4\n") == 0);
free(board231839213);
board231839213 = NULL;


char* board707388520 = gamma_board(board);
assert( board707388520 != NULL );
assert( strcmp(board707388520, 
"2....2.\n"
"5.5....\n"
".1.1...\n"
"4......\n"
"....4..\n"
"...1..4\n"
".2...5.\n"
"...3...\n"
"......4\n") == 0);
free(board707388520);
board707388520 = NULL;
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_golden_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );


gamma_delete(board);

    return 0;
}
