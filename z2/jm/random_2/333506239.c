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
uuid: 333506239
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 10, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 2, 10) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 10, 2, 9) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 22 );


char* board985705875 = gamma_board(board);
assert( board985705875 != NULL );
assert( strcmp(board985705875, 
"..109..\n"
"8610328\n"
"52.1.8\n"
"..254.\n"
"1832.2\n"
".3.483\n"
".10.99.\n"
"98.315\n"
"7.6518\n"
"652.109\n"
"....27\n") == 0);
free(board985705875);
board985705875 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 10, 10, 0) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 10) == 1 );
assert( gamma_free_fields(board, 10) == 19 );


char* board630408670 = gamma_board(board);
assert( board630408670 != NULL );
assert( strcmp(board630408670, 
"..10910.\n"
"8610328\n"
"52.1.8\n"
"..254.\n"
"1832.2\n"
".3.483\n"
".10.99.\n"
"98.315\n"
"7.6518\n"
"652.109\n"
"..1427\n") == 0);
free(board630408670);
board630408670 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_free_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 10, 5) == 0 );
assert( gamma_move(board, 10, 2, 8) == 1 );
assert( gamma_golden_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );


char* board624384293 = gamma_board(board);
assert( board624384293 != NULL );
assert( strcmp(board624384293, 
".210910.\n"
"8610328\n"
"5210118\n"
".92546\n"
"183262\n"
".36183\n"
".10.992\n"
"9841015\n"
"7.6518\n"
"6528104\n"
"581427\n") == 0);
free(board624384293);
board624384293 = NULL;
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_free_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_golden_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 10, 10, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );


gamma_delete(board);

    return 0;
}
