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
uuid: 488332432
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_golden_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );


char* board586502181 = gamma_board(board);
assert( board586502181 != NULL );
assert( strcmp(board586502181, 
"43.......\n"
"2........\n"
".1...1...\n"
"3.5......\n"
".......2.\n"
".........\n"
"..344..4.\n"
".521.....\n") == 0);
free(board586502181);
board586502181 = NULL;
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );


char* board209131833 = gamma_board(board);
assert( board209131833 != NULL );
assert( strcmp(board209131833, 
"43.....6.\n"
"2........\n"
".1...1...\n"
"3.5......\n"
".......2.\n"
".........\n"
"..344..4.\n"
".521.....\n") == 0);
free(board209131833);
board209131833 = NULL;
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board199706353 = gamma_board(board);
assert( board199706353 != NULL );
assert( strcmp(board199706353, 
"43.....6.\n"
"2........\n"
".1...1...\n"
"3.5......\n"
".......2.\n"
".........\n"
"..344..4.\n"
".521.....\n") == 0);
free(board199706353);
board199706353 = NULL;
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
