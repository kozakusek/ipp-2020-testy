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
uuid: 730856785
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 11, 11, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 11, 12, 11) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_golden_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_golden_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 11, 1, 10) == 1 );
assert( gamma_golden_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_free_fields(board, 4) == 114 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 10, 7) == 0 );
assert( gamma_free_fields(board, 9) == 112 );
assert( gamma_move(board, 11, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 11, 3, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


char* board796469733 = gamma_board(board);
assert( board796469733 != NULL );
assert( strcmp(board796469733, 
".11.....4.7..\n"
"......3.....\n"
"65....1.....\n"
"............\n"
"...112...8...\n"
".51.........\n"
"7.........9.\n"
"6...........\n"
"..91..43....\n"
"..24.1.....1\n"
"......10.....\n") == 0);
free(board796469733);
board796469733 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_golden_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board782309249 = gamma_board(board);
assert( board782309249 != NULL );
assert( strcmp(board782309249, 
".11.....4.7..\n"
"......32....\n"
"65.3..1.....\n"
"5.10.4.9.....\n"
"...112.6.8...\n"
".51.1.......\n"
"7....7....9.\n"
"6........4..\n"
"..91..43....\n"
"..24.1....81\n"
"......10.....\n") == 0);
free(board782309249);
board782309249 = NULL;
assert( gamma_move(board, 6, 7, 0) == 1 );


char* board495026497 = gamma_board(board);
assert( board495026497 != NULL );
assert( strcmp(board495026497, 
".11.....4.7..\n"
"......32....\n"
"65.3..1.....\n"
"5.10.4.9.....\n"
"...112.6.8...\n"
".51.1.......\n"
"7....7....9.\n"
"6........4..\n"
"..91..43....\n"
"..24.1....81\n"
"......106....\n") == 0);
free(board495026497);
board495026497 = NULL;
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 10, 10, 6) == 1 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_free_fields(board, 11) == 93 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );


char* board134579443 = gamma_board(board);
assert( board134579443 != NULL );
assert( strcmp(board134579443, 
".11.....4.7..\n"
"......32....\n"
"65.3..1.....\n"
"5.10.4.9.....\n"
".1.112.6.8.10.\n"
".51.1.......\n"
"7....7....9.\n"
"6........4..\n"
"..91..43....\n"
"..24.111...81\n"
"......106..8.\n") == 0);
free(board134579443);
board134579443 = NULL;
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_free_fields(board, 11) == 89 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_golden_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 1, 12, -1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 9, 8, 10) == 1 );
assert( gamma_move(board, 10, 11, 11) == 0 );
assert( gamma_free_fields(board, 10) == 82 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board133299523 = gamma_board(board);
assert( board133299523 != NULL );
assert( strcmp(board133299523, 
".11..6..497..\n"
"......32....\n"
"65.3..1.....\n"
"5.10.4.9..1..\n"
".1.112.6.8.10.\n"
"551.1.7..3..\n"
"7..10.7.2..9.\n"
"6.....7..4..\n"
"..91..43....\n"
"..24.1116..81\n"
"......106..8.\n") == 0);
free(board133299523);
board133299523 = NULL;
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_free_fields(board, 9) == 77 );
assert( gamma_move(board, 10, -1, 7) == 0 );
assert( gamma_free_fields(board, 10) == 77 );
assert( gamma_golden_move(board, 10, 6, 3) == 1 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_move(board, 9, 11, 11) == 0 );


char* board734665329 = gamma_board(board);
assert( board734665329 != NULL );
assert( strcmp(board734665329, 
".118.6..497..\n"
"......32....\n"
"65.3..19....\n"
"5.10841197.1..\n"
".15112.6.8.10.\n"
"551.1.7..3..\n"
"7..10.7.2..9.\n"
"6.....106.4..\n"
"..91..43....\n"
"..24.1116..81\n"
"......106..87\n") == 0);
free(board734665329);
board734665329 = NULL;
assert( gamma_move(board, 10, 9, 7) == 0 );


gamma_delete(board);

    return 0;
}
