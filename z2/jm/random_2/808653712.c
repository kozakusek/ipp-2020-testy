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
uuid: 808653712
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 15, 11, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 11, 3, 9) == 1 );
assert( gamma_free_fields(board, 11) == 79 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );


char* board621118034 = gamma_board(board);
assert( board621118034 != NULL );
assert( strcmp(board621118034, 
"......\n"
"......\n"
".5...7\n"
"......\n"
"...94.\n"
"...11..\n"
".5..12\n"
"......\n"
"......\n"
"7.....\n"
".35..6\n"
"8..8..\n"
"......\n"
"....35\n"
"......\n") == 0);
free(board621118034);
board621118034 = NULL;
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_free_fields(board, 10) == 72 );


char* board934107680 = gamma_board(board);
assert( board934107680 != NULL );
assert( strcmp(board934107680, 
"......\n"
"......\n"
".5...7\n"
"......\n"
"...949\n"
"...11..\n"
".5..12\n"
"......\n"
"......\n"
"7.....\n"
".35..6\n"
"8..8..\n"
"6.....\n"
"....35\n"
"......\n") == 0);
free(board934107680);
board934107680 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 8, 2, 14) == 1 );
assert( gamma_move(board, 9, 13, 4) == 0 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );


char* board252253866 = gamma_board(board);
assert( board252253866 != NULL );
assert( strcmp(board252253866, 
"..8...\n"
"......\n"
".5...7\n"
"......\n"
"..9949\n"
"...11..\n"
".5..12\n"
"......\n"
"......\n"
"7...1.\n"
".355.6\n"
"8..8..\n"
"6.....\n"
"11...35\n"
"....65\n") == 0);
free(board252253866);
board252253866 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board452396597 = gamma_board(board);
assert( board452396597 != NULL );
assert( strcmp(board452396597, 
"..8...\n"
"......\n"
".5...7\n"
"......\n"
"..9949\n"
"...11..\n"
".5..12\n"
"......\n"
".2....\n"
"7...12\n"
".355.6\n"
"8..8..\n"
"6.....\n"
"11...35\n"
"....65\n") == 0);
free(board452396597);
board452396597 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );


char* board621855072 = gamma_board(board);
assert( board621855072 != NULL );
assert( strcmp(board621855072, 
"..8...\n"
"......\n"
".5...7\n"
"......\n"
"..9949\n"
"...11..\n"
".5..12\n"
"......\n"
".2....\n"
"7...12\n"
".355.6\n"
"8..8..\n"
"6.....\n"
"11...35\n"
"....65\n") == 0);
free(board621855072);
board621855072 = NULL;
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 3, 13) == 1 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 12, 5) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 1, 0) == 1 );
assert( gamma_move(board, 11, 0, 11) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );


char* board703012800 = gamma_board(board);
assert( board703012800 != NULL );
assert( strcmp(board703012800, 
"..8...\n"
".1.10.9\n"
".5...7\n"
"11.....\n"
"..9949\n"
"..811..\n"
".5..12\n"
".....1\n"
".2..5.\n"
"7.6.12\n"
"9355.6\n"
"84.8.5\n"
"6632.5\n"
"1112.35\n"
".101.65\n") == 0);
free(board703012800);
board703012800 = NULL;
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );


char* board341662799 = gamma_board(board);
assert( board341662799 != NULL );
assert( strcmp(board341662799, 
"..8...\n"
".1.10.9\n"
".5...7\n"
"11.....\n"
"..9949\n"
"..811.8\n"
".5..12\n"
".....1\n"
".2..5.\n"
"7.6712\n"
"9355.6\n"
"84.8.5\n"
"6632.5\n"
"1112.35\n"
".101.65\n") == 0);
free(board341662799);
board341662799 = NULL;
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 3, 14) == 1 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_golden_move(board, 7, 0, 5) == 0 );


char* board861737785 = gamma_board(board);
assert( board861737785 != NULL );
assert( strcmp(board861737785, 
"..86..\n"
".1.10.9\n"
".5...7\n"
"11...8.\n"
".19949\n"
"..811.8\n"
".5..12\n"
".....1\n"
".2..5.\n"
"7.6712\n"
"935586\n"
"84.8.5\n"
"6632.5\n"
"1112.35\n"
"3101.65\n") == 0);
free(board861737785);
board861737785 = NULL;
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_move(board, 11, 14, 5) == 0 );
assert( gamma_free_fields(board, 11) == 36 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 12, 0) == 0 );
assert( gamma_free_fields(board, 11) == 31 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );


char* board234227165 = gamma_board(board);
assert( board234227165 != NULL );
assert( strcmp(board234227165, 
"..8641\n"
"21.10.9\n"
".5..67\n"
"11.748.\n"
".19949\n"
"..81138\n"
".5.512\n"
"8..10.1\n"
".2..54\n"
"7.6712\n"
"935586\n"
"8410865\n"
"6632.5\n"
"1112.35\n"
"3101.65\n") == 0);
free(board234227165);
board234227165 = NULL;
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_golden_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 3, 12) == 1 );
assert( gamma_golden_move(board, 8, 3, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 11, 5, 11) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );


char* board770321449 = gamma_board(board);
assert( board770321449 != NULL );
assert( strcmp(board770321449, 
"..8641\n"
"21.1059\n"
".5.867\n"
"11.74811\n"
"919949\n"
"..81138\n"
".5.512\n"
"8..10.1\n"
".2..54\n"
"7.6712\n"
"935586\n"
"8410865\n"
"6610815\n"
"1112635\n"
"3101.65\n") == 0);
free(board770321449);
board770321449 = NULL;
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_free_fields(board, 10) == 17 );
assert( gamma_golden_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_golden_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
