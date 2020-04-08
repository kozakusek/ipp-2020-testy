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
uuid: 583392749
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 62 );


char* board936009018 = gamma_board(board);
assert( board936009018 != NULL );
assert( strcmp(board936009018, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".......1.\n") == 0);
free(board936009018);
board936009018 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );


char* board607124429 = gamma_board(board);
assert( board607124429 != NULL );
assert( strcmp(board607124429, 
".........\n"
".........\n"
"2......4.\n"
"..5......\n"
".........\n"
".........\n"
".......1.\n") == 0);
free(board607124429);
board607124429 = NULL;
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board943413812 = gamma_board(board);
assert( board943413812 != NULL );
assert( strcmp(board943413812, 
".........\n"
".45......\n"
"2......4.\n"
"..5......\n"
"1........\n"
".........\n"
".......1.\n") == 0);
free(board943413812);
board943413812 = NULL;
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 56 );


char* board889385143 = gamma_board(board);
assert( board889385143 != NULL );
assert( strcmp(board889385143, 
".........\n"
".45......\n"
"2......4.\n"
"..5......\n"
"1........\n"
".........\n"
".......1.\n") == 0);
free(board889385143);
board889385143 = NULL;
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );


gamma_delete(board);

    return 0;
}
