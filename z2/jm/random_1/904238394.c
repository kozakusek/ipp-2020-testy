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
uuid: 904238394
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board344386754 = gamma_board(board);
assert( board344386754 != NULL );
assert( strcmp(board344386754, 
"..1...\n"
"...1.1\n"
"......\n"
"......\n"
"......\n"
"...2..\n"
"..2...\n") == 0);
free(board344386754);
board344386754 = NULL;
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 3, 7) == 0 );


char* board557506337 = gamma_board(board);
assert( board557506337 != NULL );
assert( strcmp(board557506337, 
".31...\n"
"...1.1\n"
".2..3.\n"
"......\n"
"..33..\n"
"...2..\n"
"..2...\n") == 0);
free(board557506337);
board557506337 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board194693460 = gamma_board(board);
assert( board194693460 != NULL );
assert( strcmp(board194693460, 
".31...\n"
"1..1.1\n"
"22..3.\n"
"....3.\n"
"..33..\n"
"...2..\n"
"..2...\n") == 0);
free(board194693460);
board194693460 = NULL;
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );


gamma_delete(board);

    return 0;
}
