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
uuid: 776533625
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 10, 10, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 105 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_free_fields(board, 5) == 103 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 102 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 94 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 92 );
assert( gamma_golden_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_free_fields(board, 10) == 85 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );


char* board487794089 = gamma_board(board);
assert( board487794089 != NULL );
assert( strcmp(board487794089, 
".8.......5.\n"
"......9.1..\n"
"..182......\n"
"...........\n"
"2........4.\n"
"..7........\n"
"922.6.1.39.\n"
"109.......41\n"
"...7...10.310\n"
"....6...2..\n") == 0);
free(board487794089);
board487794089 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 79 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_free_fields(board, 10) == 78 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_golden_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_free_fields(board, 9) == 49 );
assert( gamma_move(board, 10, 9, 10) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );


char* board912103279 = gamma_board(board);
assert( board912103279 != NULL );
assert( strcmp(board912103279, 
"787..6..95.\n"
".10110..1512.\n"
".1182.53...\n"
"6...4...56.\n"
"2..44.68347\n"
"..7.69...6.\n"
"922.6.1.39.\n"
"109.5..5..41\n"
"7.97..1108310\n"
"982.6...264\n") == 0);
free(board912103279);
board912103279 = NULL;
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_golden_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_golden_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 10, 9, 9) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );


char* board375005381 = gamma_board(board);
assert( board375005381 != NULL );
assert( strcmp(board375005381, 
"787..6..95.\n"
".1011010.1512.\n"
".1182.53.6.\n"
"6...4...56.\n"
"27.44668347\n"
".37.69...6.\n"
"92246.1.39.\n"
"10915.55..41\n"
"7.96..1108310\n"
"982.610..264\n") == 0);
free(board375005381);
board375005381 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board980088545 = gamma_board(board);
assert( board980088545 != NULL );
assert( strcmp(board980088545, 
"787..6..95.\n"
".1011010.1512.\n"
".1182.53.6.\n"
"6...4...56.\n"
"27.44668347\n"
".37.69...6.\n"
"92242.1.39.\n"
"10915.55..41\n"
"7296..1108310\n"
"982.610..264\n") == 0);
free(board980088545);
board980088545 = NULL;
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );


char* board883793052 = gamma_board(board);
assert( board883793052 != NULL );
assert( strcmp(board883793052, 
"7876.6..95.\n"
".1011010.1512.\n"
".1182.5326.\n"
"6..74..456.\n"
"27.44668347\n"
"737.6910..6.\n"
"9224281.39.\n"
"10915.558.41\n"
"7296.31108310\n"
"982.610..264\n") == 0);
free(board883793052);
board883793052 = NULL;
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board519899835 = gamma_board(board);
assert( board519899835 != NULL );
assert( strcmp(board519899835, 
"7876.64.95.\n"
".1011010.1512.\n"
".1182.53267\n"
"6..74..456.\n"
"27.44668347\n"
"737.6910..6.\n"
"9224281539.\n"
"10915.558.41\n"
"7296.31108310\n"
"982.610..264\n") == 0);
free(board519899835);
board519899835 = NULL;
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_free_fields(board, 9) == 16 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );


gamma_delete(board);

    return 0;
}
