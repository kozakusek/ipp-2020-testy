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
uuid: 792016415
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 8, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_free_fields(board, 5) == 98 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_free_fields(board, 8) == 87 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_free_fields(board, 8) == 81 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board926455768 = gamma_board(board);
assert( board926455768 != NULL );
assert( strcmp(board926455768, 
".3.8..1.6..6.\n"
"..72..5912.54\n"
".9.4.9686.7..\n"
"1818..32.4...\n"
"564...15..337\n"
".75362.1...3.\n"
"12316.82..3..\n"
"3....261.87.8\n") == 0);
free(board926455768);
board926455768 = NULL;
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );


char* board660777522 = gamma_board(board);
assert( board660777522 != NULL );
assert( strcmp(board660777522, 
".3.8..1.6..6.\n"
"..72..5912.54\n"
".914.9686.77.\n"
"1818.93294...\n"
"564..615.2337\n"
".75362.18..3.\n"
"12316.82.53..\n"
"3....261687.8\n") == 0);
free(board660777522);
board660777522 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );


char* board320450845 = gamma_board(board);
assert( board320450845 != NULL );
assert( strcmp(board320450845, 
".3.8..1.6..6.\n"
"..72..5912.54\n"
"7914.9686.77.\n"
"1818.93294...\n"
"564..615.2337\n"
".75362.18..3.\n"
"12316.82.535.\n"
"39...261687.8\n") == 0);
free(board320450845);
board320450845 = NULL;
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board639653317 = gamma_board(board);
assert( board639653317 != NULL );
assert( strcmp(board639653317, 
".3487.1.6..6.\n"
"..72..5912.54\n"
"7914.9686377.\n"
"1818493294..5\n"
"56492615.2337\n"
".75362.18..38\n"
"12316.828535.\n"
"397..26168768\n") == 0);
free(board639653317);
board639653317 = NULL;
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );


char* board859461352 = gamma_board(board);
assert( board859461352 != NULL );
assert( strcmp(board859461352, 
"83487.166..6.\n"
"..72..5912.54\n"
"7914.96863774\n"
"1818493294..5\n"
"5649261532337\n"
"775362.18..38\n"
"123166828535.\n"
"397..26168768\n") == 0);
free(board859461352);
board859461352 = NULL;
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 1, 6, 5) == 0 );


char* board608018600 = gamma_board(board);
assert( board608018600 != NULL );
assert( strcmp(board608018600, 
"83487.166..6.\n"
"..72..5912.54\n"
"7914.96863774\n"
"1818493294..5\n"
"5649261532337\n"
"775362.18..38\n"
"123166828535.\n"
"397..26168768\n") == 0);
free(board608018600);
board608018600 = NULL;
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );


char* board310959856 = gamma_board(board);
assert( board310959856 != NULL );
assert( strcmp(board310959856, 
"83487.166..6.\n"
"..72..5912.54\n"
"7914.96863774\n"
"1818493294..5\n"
"5649261532337\n"
"775362.18..38\n"
"123166828535.\n"
"397..26168768\n") == 0);
free(board310959856);
board310959856 = NULL;
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );


char* board973048342 = gamma_board(board);
assert( board973048342 != NULL );
assert( strcmp(board973048342, 
"83487.166..6.\n"
"..72..5912.54\n"
"7914.96863774\n"
"1818493294..5\n"
"5649261532337\n"
"775362.18..38\n"
"123166828535.\n"
"397..26168768\n") == 0);
free(board973048342);
board973048342 = NULL;
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
