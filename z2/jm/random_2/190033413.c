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
uuid: 190033413
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 11, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board956379872 = gamma_board(board);
assert( board956379872 != NULL );
assert( strcmp(board956379872, 
"..............\n"
"..............\n"
".............5\n"
"1.............\n"
"...5..........\n"
"..............\n"
"......4.......\n") == 0);
free(board956379872);
board956379872 = NULL;
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_free_fields(board, 10) == 93 );
assert( gamma_move(board, 11, 9, 6) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board425798913 = gamma_board(board);
assert( board425798913 != NULL );
assert( strcmp(board425798913, 
".........11....\n"
".............1\n"
".............5\n"
"1.............\n"
"...5..........\n"
"..............\n"
"...10..4.......\n") == 0);
free(board425798913);
board425798913 = NULL;
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 4, 4) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_free_fields(board, 6) == 79 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_free_fields(board, 8) == 78 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_free_fields(board, 11) == 77 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 10, 11, 0) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_golden_move(board, 6, 6, 11) == 0 );


char* board896125484 = gamma_board(board);
assert( board896125484 != NULL );
assert( strcmp(board896125484, 
"...5.3...11.5..\n"
"..76..9......1\n"
".10.31176....315\n"
"1...5.........\n"
"6..58.3.9..7..\n"
".........84...\n"
"...10.54....10..\n") == 0);
free(board896125484);
board896125484 = NULL;
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_free_fields(board, 9) == 62 );


char* board284863225 = gamma_board(board);
assert( board284863225 != NULL );
assert( strcmp(board284863225, 
"...573...11.5..\n"
".776..9.2....1\n"
".10.31176...1315\n"
"1...5.........\n"
"6..58.3.9..7..\n"
"81.......84...\n"
"...10.54....10..\n") == 0);
free(board284863225);
board284863225 = NULL;
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 10, 13, 6) == 1 );


char* board284265899 = gamma_board(board);
assert( board284265899 != NULL );
assert( strcmp(board284265899, 
"...573...11.5.10\n"
".776..9.2....1\n"
".10.31176...1315\n"
"1...5.........\n"
"6..58.3.9..7..\n"
"81.......84...\n"
"...101054....10..\n") == 0);
free(board284265899);
board284265899 = NULL;
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );


char* board417079279 = gamma_board(board);
assert( board417079279 != NULL );
assert( strcmp(board417079279, 
"...573...11.5.10\n"
".776..9.2..8.1\n"
".10.31176...1315\n"
"1...5...11.....\n"
"6..58.3109..7..\n"
"81.5.....84.1.\n"
"...101054....10..\n") == 0);
free(board417079279);
board417079279 = NULL;
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 3, 13) == 0 );
assert( gamma_move(board, 11, 13, 3) == 1 );
assert( gamma_golden_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );


char* board991579026 = gamma_board(board);
assert( board991579026 != NULL );
assert( strcmp(board991579026, 
"2..5732..11.5110\n"
".776.39.24.811\n"
".105311711...1315\n"
"1...5..7116...11\n"
"6..58.3109..7..\n"
"81.54....84.1.\n"
"25.101054....10..\n") == 0);
free(board991579026);
board991579026 = NULL;
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board411092116 = gamma_board(board);
assert( board411092116 != NULL );
assert( strcmp(board411092116, 
"2..5732..11.5110\n"
".776.39.24.811\n"
".105311711...1315\n"
"1...5..7116...11\n"
"6..58.3109..7..\n"
"81.54....84.1.\n"
"25.101054....10..\n") == 0);
free(board411092116);
board411092116 = NULL;
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 9, 6, 6) == 0 );


char* board335347997 = gamma_board(board);
assert( board335347997 != NULL );
assert( strcmp(board335347997, 
"2215732..1195110\n"
"3776.39.24.811\n"
".105311711.8.1315\n"
"1..65..7116...11\n"
"6..58.31094.7..\n"
"81.54....84.1.\n"
"25.101054....10.5\n") == 0);
free(board335347997);
board335347997 = NULL;
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 11, 6) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board679981476 = gamma_board(board);
assert( board679981476 != NULL );
assert( strcmp(board679981476, 
"2215732..1195110\n"
"3776.39.24.811\n"
".105311711.831315\n"
"12.65..7116...11\n"
"6.1058.31094.7..\n"
"81.54....84.1.\n"
"25.101054....10.5\n") == 0);
free(board679981476);
board679981476 = NULL;
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_golden_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );


char* board758417719 = gamma_board(board);
assert( board758417719 != NULL );
assert( strcmp(board758417719, 
"2215732..1195110\n"
"3776.37.24.811\n"
"1105311711.831315\n"
"12.65..71162..11\n"
"6.1058.31094.7..\n"
"811154....84.1.\n"
"25.101054..8.1065\n") == 0);
free(board758417719);
board758417719 = NULL;
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 10, 13, 2) == 1 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_free_fields(board, 10) == 22 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );


char* board949770569 = gamma_board(board);
assert( board949770569 != NULL );
assert( strcmp(board949770569, 
"2215712..1195110\n"
"3776.37.24.811\n"
"1105311711.831315\n"
"129656.71162..11\n"
"6.1058.31094.7.10\n"
"811154....84.1.\n"
"25.101054..871065\n") == 0);
free(board949770569);
board949770569 = NULL;
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );


gamma_delete(board);

    return 0;
}
