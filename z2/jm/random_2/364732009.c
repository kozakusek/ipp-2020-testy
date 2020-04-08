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
uuid: 364732009
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 13, 10, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 9, 10) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_free_fields(board, 9) == 145 );
assert( gamma_move(board, 10, 5, 8) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_golden_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_free_fields(board, 8) == 135 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_free_fields(board, 5) == 130 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 10, 9, 2) == 1 );
assert( gamma_free_fields(board, 10) == 113 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 3) == 103 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 10, 11, 5) == 1 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_golden_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_free_fields(board, 7) == 77 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 11) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 11, 4) == 1 );
assert( gamma_move(board, 10, 7, 12) == 1 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_golden_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_golden_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );


char* board887769588 = gamma_board(board);
assert( board887769588 != NULL );
assert( strcmp(board887769588, 
"..1....10..15\n"
"1418.5.581042\n"
".52.718658..\n"
"9.61.8.8.2.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9...13.3...10\n"
"....3.36.419\n"
"94394827836.\n"
"419..5710.103.\n"
"5210..6867610.\n"
"7..554314.8.\n") == 0);
free(board887769588);
board887769588 = NULL;
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );


char* board295908228 = gamma_board(board);
assert( board295908228 != NULL );
assert( strcmp(board295908228, 
"..1....10..15\n"
"1418.5.581042\n"
".52.718658..\n"
"9.61.8.8.2.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9...13.3.1.10\n"
"....3.36.419\n"
"94394827836.\n"
"419..5710.103.\n"
"5210..6867610.\n"
"7..554314.8.\n") == 0);
free(board295908228);
board295908228 = NULL;
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );


char* board647606916 = gamma_board(board);
assert( board647606916 != NULL );
assert( strcmp(board647606916, 
"..1....10..15\n"
"1418.5.581042\n"
".52.718658..\n"
"9.61.8.8.2.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9...13.3.1.10\n"
"....3.36.419\n"
"94394827836.\n"
"419..5710.103.\n"
"5210..6867610.\n"
"7..55431468.\n") == 0);
free(board647606916);
board647606916 = NULL;
assert( gamma_free_fields(board, 10) == 47 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_move(board, 10, 11, 12) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_golden_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 10, 11, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );


char* board888130969 = gamma_board(board);
assert( board888130969 != NULL );
assert( strcmp(board888130969, 
"..11...102.15\n"
"1418.5.581042\n"
".52.718658..\n"
"9.61.868.2.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9.3.13.3.1.10\n"
"..10.3336.419\n"
"94394827836.\n"
"41969572.1032\n"
"5210..68676101\n"
"7..55431468.\n") == 0);
free(board888130969);
board888130969 = NULL;
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 7, 10) == 0 );
assert( gamma_move(board, 10, 8, 11) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );


char* board676450495 = gamma_board(board);
assert( board676450495 != NULL );
assert( strcmp(board676450495, 
"..11...102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9.3.13.3.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board676450495);
board676450495 = NULL;
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );


char* board871810496 = gamma_board(board);
assert( board871810496 != NULL );
assert( strcmp(board871810496, 
"..11...102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9.3.13.3.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board871810496);
board871810496 = NULL;
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board790129922 = gamma_board(board);
assert( board790129922 != NULL );
assert( strcmp(board790129922, 
"..11...102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9.3.13.3.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board790129922);
board790129922 = NULL;
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );


char* board682562493 = gamma_board(board);
assert( board682562493 != NULL );
assert( strcmp(board682562493, 
"..11...102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9.3.13.3.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board682562493);
board682562493 = NULL;
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 10, 5, 12) == 1 );
assert( gamma_free_fields(board, 10) == 30 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );


char* board987301743 = gamma_board(board);
assert( board987301743 != NULL );
assert( strcmp(board987301743, 
"..11110.102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"543.929243.2\n"
"3.9479491221\n"
"9.3.1343.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board987301743);
board987301743 = NULL;
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_golden_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_golden_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board338188196 = gamma_board(board);
assert( board338188196 != NULL );
assert( strcmp(board338188196, 
"..11110.102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"443.929243.2\n"
"3.9479491221\n"
"9.3.1343.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board338188196);
board338188196 = NULL;
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_free_fields(board, 10) == 29 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );


char* board565732744 = gamma_board(board);
assert( board565732744 != NULL );
assert( strcmp(board565732744, 
"..11110.102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106.6264\n"
"443.92924322\n"
"3.9479491221\n"
"9.3.1343.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"52105.68676101\n"
"7..55431468.\n") == 0);
free(board565732744);
board565732744 = NULL;
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 8) == 1 );
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_free_fields(board, 10) == 26 );


char* board749759144 = gamma_board(board);
assert( board749759144 != NULL );
assert( strcmp(board749759144, 
"..11110.102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106106264\n"
"443.92924322\n"
"3.9479491221\n"
"9.3.1343.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"521051068676101\n"
"7..55431468.\n") == 0);
free(board749759144);
board749759144 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_golden_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );


char* board605947603 = gamma_board(board);
assert( board605947603 != NULL );
assert( strcmp(board605947603, 
"..11110.102.15\n"
"1418.5.581042\n"
".52.7186585.\n"
"9.61.86892.7\n"
"288.10106106264\n"
"443.92924322\n"
"3.9479491261\n"
"9.3.1343.1.10\n"
"7.10.33367419\n"
"94394827836.\n"
"41969572.1032\n"
"521051068676101\n"
"7..554314688\n") == 0);
free(board605947603);
board605947603 = NULL;
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );


gamma_delete(board);

    return 0;
}
