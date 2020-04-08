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
uuid: 173484395
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 8, 1, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_move(board, 1, 4, 9) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );


char* board279088059 = gamma_board(board);
assert( board279088059 != NULL );
assert( strcmp(board279088059, 
".....1..1..\n"
"........1..\n"
"....1......\n"
"...1...1...\n"
"....1......\n"
"11.........\n"
"1.......1..\n"
".1.........\n") == 0);
free(board279088059);
board279088059 = NULL;
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );


char* board159385944 = gamma_board(board);
assert( board159385944 != NULL );
assert( strcmp(board159385944, 
".....1..1..\n"
"........1..\n"
"....1......\n"
"...1...1...\n"
"....1..1...\n"
"11.........\n"
"1.......1..\n"
".1.........\n") == 0);
free(board159385944);
board159385944 = NULL;
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );


char* board360390900 = gamma_board(board);
assert( board360390900 != NULL );
assert( strcmp(board360390900, 
".....1..1..\n"
"........1..\n"
"....1......\n"
"...1...1...\n"
"....1..1...\n"
"11.........\n"
"1.......1..\n"
".1.........\n") == 0);
free(board360390900);
board360390900 = NULL;
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board520730921 = gamma_board(board);
assert( board520730921 != NULL );
assert( strcmp(board520730921, 
"....11..1..\n"
".....1..1..\n"
"....1......\n"
"...11.11..1\n"
".1..1.11...\n"
"11.....1.1.\n"
"1......11..\n"
".1.......1.\n") == 0);
free(board520730921);
board520730921 = NULL;
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );


char* board503387757 = gamma_board(board);
assert( board503387757 != NULL );
assert( strcmp(board503387757, 
"....111.1..\n"
".....1..1..\n"
"....1......\n"
"...11.11..1\n"
"11..1.11...\n"
"11..1.11.1.\n"
"1...1..11..\n"
".1.......1.\n") == 0);
free(board503387757);
board503387757 = NULL;
assert( gamma_move(board, 1, -1, -1) == 0 );


gamma_delete(board);

    return 0;
}
