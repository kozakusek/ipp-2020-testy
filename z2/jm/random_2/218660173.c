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
uuid: 218660173
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 14, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_free_fields(board, 7) == 80 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 3, 2) == 1 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );


char* board717534746 = gamma_board(board);
assert( board717534746 != NULL );
assert( strcmp(board717534746, 
"........\n"
".......4\n"
"6...9...\n"
"........\n"
".10......\n"
".6......\n"
".2......\n"
"5.......\n"
"39.111...\n"
"........\n"
".....1..\n") == 0);
free(board717534746);
board717534746 = NULL;
assert( gamma_move(board, 12, 1, 8) == 1 );
assert( gamma_move(board, 13, 6, 0) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 3, 9) == 1 );


char* board526201305 = gamma_board(board);
assert( board526201305 != NULL );
assert( strcmp(board526201305, 
"...5....\n"
"...11.6.4\n"
"612..9...\n"
"........\n"
".10.2....\n"
"76..34..\n"
".2......\n"
"5...6..2\n"
"39.111...\n"
"........\n"
".....113.\n") == 0);
free(board526201305);
board526201305 = NULL;
assert( gamma_move(board, 12, 6, 7) == 1 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_move(board, 13, 6, 0) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 0 );
assert( gamma_free_fields(board, 14) == 63 );
assert( gamma_move(board, 1, 3, 7) == 1 );


char* board468235467 = gamma_board(board);
assert( board468235467 != NULL );
assert( strcmp(board468235467, 
"...5....\n"
"...11.6.4\n"
"612..9...\n"
"...1..12.\n"
".10.2....\n"
"76..34..\n"
".2......\n"
"5...6..2\n"
"39.111.13.\n"
"........\n"
".....113.\n") == 0);
free(board468235467);
board468235467 = NULL;
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 12, 7, 1) == 1 );
assert( gamma_move(board, 13, 7, 1) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 14, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );


char* board901227043 = gamma_board(board);
assert( board901227043 != NULL );
assert( strcmp(board901227043, 
"...5....\n"
"...11.6.4\n"
"612..9...\n"
".10.1..12.\n"
".10.2.8..\n"
"76.934..\n"
".2..2.47\n"
"5...6..2\n"
"39.111.131\n"
".......12\n"
"...10.1135\n") == 0);
free(board901227043);
board901227043 = NULL;
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 14, 10, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 8, 3) == 0 );


char* board198209764 = gamma_board(board);
assert( board198209764 != NULL );
assert( strcmp(board198209764, 
"...5....\n"
"...11.6.4\n"
"612..9...\n"
".10.1..12.\n"
".10.2.8..\n"
"76.934..\n"
".2..2.47\n"
"5...6..2\n"
"39.111.131\n"
".......12\n"
"...10.1135\n") == 0);
free(board198209764);
board198209764 = NULL;
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_golden_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 12, 2, 3) == 1 );
assert( gamma_move(board, 13, 10, 2) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 14, 6, 6) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 12, 6, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 13, 4, 1) == 1 );
assert( gamma_move(board, 14, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );


char* board548565961 = gamma_board(board);
assert( board548565961 != NULL );
assert( strcmp(board548565961, 
"5..5....\n"
"...11.624\n"
"61233979.\n"
".10.1..123\n"
".10.2.8148\n"
"76.933128\n"
".2..2.47\n"
"5.12146..2\n"
"396111.131\n"
"....137.12\n"
"...10.1135\n") == 0);
free(board548565961);
board548565961 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board476290916 = gamma_board(board);
assert( board476290916 != NULL );
assert( strcmp(board476290916, 
"5..5....\n"
"...11.624\n"
"61233979.\n"
".10.1..123\n"
".10.2.8148\n"
"76.933128\n"
".2..2.47\n"
"5.12146..2\n"
"396111.131\n"
"....137.12\n"
"...10.1135\n") == 0);
free(board476290916);
board476290916 = NULL;
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 14, 10, 7) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 12, 10, 4) == 0 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_free_fields(board, 9) == 26 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 14, 10, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 13, 9, 2) == 0 );
assert( gamma_move(board, 13, 0, 7) == 0 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 20 );


char* board696079704 = gamma_board(board);
assert( board696079704 != NULL );
assert( strcmp(board696079704, 
"5315.7..\n"
".9.11.624\n"
"612339799\n"
"810.16.123\n"
"410.23868\n"
"76.933128\n"
"122..2.47\n"
"561246..2\n"
"39611113131\n"
".10..137.12\n"
"48.1021135\n") == 0);
free(board696079704);
board696079704 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_move(board, 13, 0, 1) == 1 );
assert( gamma_move(board, 14, 9, 4) == 0 );
assert( gamma_move(board, 14, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 18 );


char* board992634779 = gamma_board(board);
assert( board992634779 != NULL );
assert( strcmp(board992634779, 
"5315.7..\n"
".9.11.624\n"
"612339799\n"
"810.16.123\n"
"410.23868\n"
"75.933128\n"
"122..2.47\n"
"561246..2\n"
"39611113131\n"
"13104.137.12\n"
"48.1021135\n") == 0);
free(board992634779);
board992634779 = NULL;
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
