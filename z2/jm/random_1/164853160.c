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
uuid: 164853160
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );


char* board741482036 = gamma_board(board);
assert( board741482036 != NULL );
assert( strcmp(board741482036, 
"1.......\n"
"........\n"
"........\n"
"........\n"
"........\n"
"2.......\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board741482036);
board741482036 = NULL;
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 76 );


char* board849113894 = gamma_board(board);
assert( board849113894 != NULL );
assert( strcmp(board849113894, 
"1.......\n"
"........\n"
"........\n"
"........\n"
"........\n"
"2.......\n"
"........\n"
"........\n"
"........\n"
".4....3.\n") == 0);
free(board849113894);
board849113894 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );


char* board192020657 = gamma_board(board);
assert( board192020657 != NULL );
assert( strcmp(board192020657, 
"1.......\n"
"........\n"
"........\n"
"..2.....\n"
"........\n"
"2.......\n"
"........\n"
"....1...\n"
"........\n"
".4....3.\n") == 0);
free(board192020657);
board192020657 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_free_fields(board, 4) == 66 );


char* board468040832 = gamma_board(board);
assert( board468040832 != NULL );
assert( strcmp(board468040832, 
"1.......\n"
"34......\n"
"......4.\n"
"..2.....\n"
".2..2...\n"
"2.......\n"
".....4..\n"
"....12..\n"
"........\n"
".4....31\n") == 0);
free(board468040832);
board468040832 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_golden_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, -1, 1) == 0 );


gamma_delete(board);

    return 0;
}
