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
uuid: 902966417
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 9, -1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 7, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board114736917 = gamma_board(board);
assert( board114736917 != NULL );
assert( strcmp(board114736917, 
"....4.....\n"
"....5.....\n"
".8...2.16.\n"
"8....47...\n"
"..........\n"
".......25.\n"
"..48....6.\n") == 0);
free(board114736917);
board114736917 = NULL;
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board173622692 = gamma_board(board);
assert( board173622692 != NULL );
assert( strcmp(board173622692, 
"....4.....\n"
"....5.6...\n"
".8...2.16.\n"
"8.3..47...\n"
"....4.....\n"
"5......25.\n"
"..48....6.\n") == 0);
free(board173622692);
board173622692 = NULL;
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 52 );


char* board577643290 = gamma_board(board);
assert( board577643290 != NULL );
assert( strcmp(board577643290, 
"....4.....\n"
"....5.6...\n"
".8...2.16.\n"
"8.3..47...\n"
"....4.....\n"
"5......25.\n"
"..48....6.\n") == 0);
free(board577643290);
board577643290 = NULL;
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );


char* board862260902 = gamma_board(board);
assert( board862260902 != NULL );
assert( strcmp(board862260902, 
"....4.....\n"
".1..5.6...\n"
".8...2.16.\n"
"8.3..47...\n"
"....4.....\n"
"5......25.\n"
"..48....6.\n") == 0);
free(board862260902);
board862260902 = NULL;
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_golden_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
