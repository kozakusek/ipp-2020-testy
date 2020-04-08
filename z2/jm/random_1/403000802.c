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
uuid: 403000802
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 16, 14, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 12, 0, 11) == 1 );
assert( gamma_move(board, 13, -1, 3) == 0 );
assert( gamma_move(board, 14, 3, -1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_free_fields(board, 7) == 70 );


char* board791951015 = gamma_board(board);
assert( board791951015 != NULL );
assert( strcmp(board791951015, 
".....\n"
".....\n"
".....\n"
".....\n"
"126...\n"
".....\n"
".....\n"
"..7..\n"
".....\n"
".32..\n"
".....\n"
"1...5\n"
".7...\n"
".....\n"
"....10\n"
"..2..\n") == 0);
free(board791951015);
board791951015 = NULL;
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_move(board, 9, 2, 13) == 1 );


char* board906433110 = gamma_board(board);
assert( board906433110 != NULL );
assert( strcmp(board906433110, 
".....\n"
".....\n"
"..9..\n"
".....\n"
"126...\n"
".....\n"
".....\n"
"..7..\n"
".....\n"
".32..\n"
".....\n"
"1...5\n"
".7...\n"
".....\n"
"....10\n"
"..2..\n") == 0);
free(board906433110);
board906433110 = NULL;
assert( gamma_move(board, 10, 3, 12) == 1 );
assert( gamma_free_fields(board, 10) == 68 );
assert( gamma_move(board, 11, -1, 8) == 0 );
assert( gamma_move(board, 12, 3, 14) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_free_fields(board, 13) == 67 );
assert( gamma_move(board, 14, 4, 11) == 1 );
assert( gamma_golden_move(board, 14, 4, 4) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_golden_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 2, 14) == 1 );
assert( gamma_move(board, 9, 3, -1) == 0 );
assert( gamma_move(board, 10, 5, 14) == 0 );
assert( gamma_free_fields(board, 11) == 64 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 2, -1) == 0 );
assert( gamma_move(board, 14, 5, 3) == 0 );
assert( gamma_free_fields(board, 14) == 64 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );


char* board896500094 = gamma_board(board);
assert( board896500094 != NULL );
assert( strcmp(board896500094, 
".....\n"
"..812.\n"
"..9..\n"
"...10.\n"
"126..14\n"
"....5\n"
".....\n"
"..7..\n"
".....\n"
".32..\n"
".....\n"
"1...14\n"
".7...\n"
".....\n"
"....10\n"
"..2.2\n") == 0);
free(board896500094);
board896500094 = NULL;
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 10, 3, 3) == 1 );


char* board185568936 = gamma_board(board);
assert( board185568936 != NULL );
assert( strcmp(board185568936, 
".....\n"
"..812.\n"
"..9..\n"
"...10.\n"
"126..14\n"
"....5\n"
".....\n"
"..7..\n"
"....4\n"
".32.8\n"
".....\n"
"1...14\n"
".7.10.\n"
".....\n"
"....10\n"
"..262\n") == 0);
free(board185568936);
board185568936 = NULL;
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, -1, 8) == 0 );
assert( gamma_move(board, 13, 1, -1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 58 );


char* board954031746 = gamma_board(board);
assert( board954031746 != NULL );
assert( strcmp(board954031746, 
".....\n"
"..812.\n"
"..9..\n"
"...10.\n"
"126..14\n"
"....5\n"
".....\n"
"..7..\n"
"....4\n"
".32.8\n"
".....\n"
"1...14\n"
".7.10.\n"
".....\n"
"....10\n"
".14262\n") == 0);
free(board954031746);
board954031746 = NULL;
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_free_fields(board, 11) == 54 );
assert( gamma_move(board, 12, 5, 13) == 0 );
assert( gamma_move(board, 13, 2, 14) == 0 );
assert( gamma_free_fields(board, 13) == 54 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_golden_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 11) == 1 );
assert( gamma_free_fields(board, 9) == 51 );


gamma_delete(board);

    return 0;
}
