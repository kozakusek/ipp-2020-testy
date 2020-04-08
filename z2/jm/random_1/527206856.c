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
uuid: 527206856
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );


char* board489111604 = gamma_board(board);
assert( board489111604 != NULL );
assert( strcmp(board489111604, 
"........\n"
"........\n"
"1.......\n"
"......2.\n"
".5......\n"
"5.2...4.\n"
"........\n"
"......1.\n") == 0);
free(board489111604);
board489111604 = NULL;
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );


char* board879342697 = gamma_board(board);
assert( board879342697 != NULL );
assert( strcmp(board879342697, 
"........\n"
"..1.....\n"
"1.......\n"
"......2.\n"
".5......\n"
"5.2...4.\n"
"........\n"
"......1.\n") == 0);
free(board879342697);
board879342697 = NULL;
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );


char* board512261184 = gamma_board(board);
assert( board512261184 != NULL );
assert( strcmp(board512261184, 
"........\n"
"..1.....\n"
"1.......\n"
"..33..2.\n"
".5......\n"
"5.2...4.\n"
"...1....\n"
".....21.\n") == 0);
free(board512261184);
board512261184 = NULL;
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );


char* board239852269 = gamma_board(board);
assert( board239852269 != NULL );
assert( strcmp(board239852269, 
"........\n"
"3.1.....\n"
"1.......\n"
"..33..2.\n"
".5....5.\n"
"5.2.4.4.\n"
"..41....\n"
".....21.\n") == 0);
free(board239852269);
board239852269 = NULL;
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 6, 5) == 1 );


char* board581029520 = gamma_board(board);
assert( board581029520 != NULL );
assert( strcmp(board581029520, 
"........\n"
"3.1.....\n"
"1.....5.\n"
"..33..2.\n"
"25....5.\n"
"5.2.4.4.\n"
"..41.1..\n"
"..4..21.\n") == 0);
free(board581029520);
board581029520 = NULL;
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );


gamma_delete(board);

    return 0;
}
