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
uuid: 348239721
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 13, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_free_fields(board, 7) == 80 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_free_fields(board, 8) == 79 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );


char* board989408118 = gamma_board(board);
assert( board989408118 != NULL );
assert( strcmp(board989408118, 
"........\n"
"........\n"
"......7.\n"
".......2\n"
"........\n"
".6......\n"
"........\n"
"...2.84.\n"
"..3.1..9\n"
"........\n"
".4......\n") == 0);
free(board989408118);
board989408118 = NULL;
assert( gamma_move(board, 10, 5, 7) == 1 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_free_fields(board, 10) == 77 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 13, 10, 7) == 0 );
assert( gamma_move(board, 13, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 2, 0) == 1 );


char* board973591229 = gamma_board(board);
assert( board973591229 != NULL );
assert( strcmp(board973591229, 
"........\n"
"........\n"
".11..2.7.\n"
".....10.2\n"
"........\n"
".6.3.12..\n"
".....1..\n"
"..132.84.\n"
"..3.1.39\n"
"........\n"
".45.....\n") == 0);
free(board973591229);
board973591229 = NULL;
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 13, 0, 7) == 0 );
assert( gamma_free_fields(board, 13) == 60 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_golden_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, 8, 7) == 0 );
assert( gamma_move(board, 10, 2, 1) == 1 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_free_fields(board, 11) == 54 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_move(board, 13, 10, 7) == 0 );
assert( gamma_golden_move(board, 13, 4, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


char* board185036558 = gamma_board(board);
assert( board185036558 != NULL );
assert( strcmp(board185036558, 
"........\n"
".8......\n"
".11.22.7.\n"
"8.6..10.2\n"
"1..12....\n"
"56.3.1276\n"
".9.3131..\n"
".10132984.\n"
"..3.1.39\n"
"8.10.5.1.\n"
".45.....\n") == 0);
free(board185036558);
board185036558 = NULL;
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 1, 10) == 1 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 13, 5, 2) == 1 );


char* board523750494 = gamma_board(board);
assert( board523750494 != NULL );
assert( strcmp(board523750494, 
".12......\n"
".8....8.\n"
".11.22.7.\n"
"8.610.10.2\n"
"1..12....\n"
"56.3.1276\n"
".9.3131.11\n"
".10132984.\n"
"..3.11339\n"
"8.10.5.15\n"
".45.....\n") == 0);
free(board523750494);
board523750494 = NULL;
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );


char* board272555970 = gamma_board(board);
assert( board272555970 != NULL );
assert( strcmp(board272555970, 
".12......\n"
".8....8.\n"
".11.22.7.\n"
"8.610.10.2\n"
"1..12....\n"
"56.3.1276\n"
".9.3131.11\n"
".10132984.\n"
"..3.11339\n"
"8110.5.15\n"
".45.....\n") == 0);
free(board272555970);
board272555970 = NULL;
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );


char* board858186120 = gamma_board(board);
assert( board858186120 != NULL );
assert( strcmp(board858186120, 
".12......\n"
".8....8.\n"
".11.22.7.\n"
"8.610.10.2\n"
"1..12....\n"
"56.3.1276\n"
".9.3131.11\n"
".10132984.\n"
"..3.11339\n"
"8110.5.15\n"
".45.....\n") == 0);
free(board858186120);
board858186120 = NULL;
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );


char* board173026448 = gamma_board(board);
assert( board173026448 != NULL );
assert( strcmp(board173026448, 
".12......\n"
".8....8.\n"
".11.22.7.\n"
"8.610.10.2\n"
"1..12....\n"
"56.3.1276\n"
".9.3131.11\n"
".10132984.\n"
"..3.11339\n"
"8110.5.15\n"
".45.....\n") == 0);
free(board173026448);
board173026448 = NULL;
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_free_fields(board, 8) == 41 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 12, 1, 6) == 1 );
assert( gamma_free_fields(board, 12) == 40 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );


char* board889559832 = gamma_board(board);
assert( board889559832 != NULL );
assert( strcmp(board889559832, 
"712......\n"
".8....8.\n"
".11.22.7.\n"
"8.610.10.2\n"
"112.128...\n"
"56.3.1276\n"
".9.3131.11\n"
".10132984.\n"
"..3.11339\n"
"8110.5.15\n"
".457....\n") == 0);
free(board889559832);
board889559832 = NULL;
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_golden_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 11, 0, 8) == 1 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_golden_move(board, 12, 4, 3) == 1 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 10, 6, 10) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_free_fields(board, 9) == 27 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 13, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 11, 5, 4) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 4, 9) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_golden_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 13, 0, 4) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );


char* board533073430 = gamma_board(board);
assert( board533073430 != NULL );
assert( strcmp(board533073430, 
"7126.5510.\n"
".89913.88\n"
"1111622.7.\n"
"82610.1012\n"
"112.1282912\n"
"56.3.1276\n"
"139.3131.11\n"
"9101321284.\n"
"..3.11339\n"
"811025715\n"
"124579..7\n") == 0);
free(board533073430);
board533073430 = NULL;
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 5) == 17 );


char* board817255708 = gamma_board(board);
assert( board817255708 != NULL );
assert( strcmp(board817255708, 
"7126.5510.\n"
".89913.88\n"
"1111622.7.\n"
"82610.1012\n"
"11241282912\n"
"56.3.1276\n"
"139.3131.11\n"
"9101321284.\n"
"..3.11339\n"
"811025715\n"
"124579..7\n") == 0);
free(board817255708);
board817255708 = NULL;
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_golden_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 13, 10, 3) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );


char* board334827292 = gamma_board(board);
assert( board334827292 != NULL );
assert( strcmp(board334827292, 
"7126.5510.\n"
".89913.88\n"
"1111622.7.\n"
"82610.1012\n"
"11241282912\n"
"513.361276\n"
"139.3131.11\n"
"9101321284.\n"
"863.11339\n"
"811025715\n"
"124579..7\n") == 0);
free(board334827292);
board334827292 = NULL;
assert( gamma_move(board, 7, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
