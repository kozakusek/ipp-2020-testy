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
uuid: 433991377
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 7, 11, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );


char* board992237044 = gamma_board(board);
assert( board992237044 != NULL );
assert( strcmp(board992237044, 
".....\n"
".....\n"
"...3.\n"
".2...\n"
".....\n"
".1...\n"
".....\n") == 0);
free(board992237044);
board992237044 = NULL;
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );


char* board581078107 = gamma_board(board);
assert( board581078107 != NULL );
assert( strcmp(board581078107, 
"...101\n"
".6...\n"
"..106.\n"
".2.54\n"
"7.21.\n"
".1..11\n"
"87..9\n") == 0);
free(board581078107);
board581078107 = NULL;
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 2, 5) == 1 );


char* board237043319 = gamma_board(board);
assert( board237043319 != NULL );
assert( strcmp(board237043319, 
"...101\n"
".610..\n"
".51062\n"
".2.54\n"
"7.21.\n"
".1..11\n"
"87..9\n") == 0);
free(board237043319);
board237043319 = NULL;
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_golden_move(board, 11, 0, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );


char* board808044318 = gamma_board(board);
assert( board808044318 != NULL );
assert( strcmp(board808044318, 
"10.1101\n"
"4610..\n"
"151062\n"
"12.54\n"
"1172111\n"
"119.11\n"
"573.9\n") == 0);
free(board808044318);
board808044318 = NULL;
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
