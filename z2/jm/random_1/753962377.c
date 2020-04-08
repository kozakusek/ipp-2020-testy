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
uuid: 753962377
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 1, 8, 5) == 0 );


char* board627425965 = gamma_board(board);
assert( board627425965 != NULL );
assert( strcmp(board627425965, 
"........\n"
"......1.\n"
".......1\n"
"........\n"
".......3\n"
"..2.....\n") == 0);
free(board627425965);
board627425965 = NULL;
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );


char* board501938263 = gamma_board(board);
assert( board501938263 != NULL );
assert( strcmp(board501938263, 
"..3.....\n"
"......1.\n"
".....2.1\n"
"....3...\n"
".......3\n"
"..2.....\n") == 0);
free(board501938263);
board501938263 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );


char* board841841237 = gamma_board(board);
assert( board841841237 != NULL );
assert( strcmp(board841841237, 
"..3.....\n"
"...3..1.\n"
".2...2.1\n"
"....3..1\n"
".......3\n"
"..2.....\n") == 0);
free(board841841237);
board841841237 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 11 );


gamma_delete(board);

    return 0;
}
