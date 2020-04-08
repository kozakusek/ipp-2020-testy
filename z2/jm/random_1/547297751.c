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
uuid: 547297751
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_free_fields(board, 1) == 142 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_golden_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_free_fields(board, 4) == 136 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );


char* board838763927 = gamma_board(board);
assert( board838763927 != NULL );
assert( strcmp(board838763927, 
"......3....\n"
"...........\n"
".....1.....\n"
".4.........\n"
"...4.......\n"
".......1...\n"
".2.........\n"
".....1....4\n"
"...........\n"
".........2.\n"
".......4.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board838763927);
board838763927 = NULL;
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_free_fields(board, 4) == 130 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_golden_move(board, 4, 0, 6) == 0 );


char* board931068722 = gamma_board(board);
assert( board931068722 != NULL );
assert( strcmp(board931068722, 
"...1..3....\n"
"...4.......\n"
".....1.1...\n"
".4.........\n"
"...4.3.....\n"
".......1..2\n"
".2.........\n"
".....1....4\n"
"...........\n"
".........2.\n"
".......4.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board931068722);
board931068722 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_golden_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board649579513 = gamma_board(board);
assert( board649579513 != NULL );
assert( strcmp(board649579513, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".......1..2\n"
".2.........\n"
"3....1....4\n"
"...........\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board649579513);
board649579513 = NULL;
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 0 );


char* board327516271 = gamma_board(board);
assert( board327516271 != NULL );
assert( strcmp(board327516271, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".......1..2\n"
".2.........\n"
"3....1....4\n"
"...........\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board327516271);
board327516271 = NULL;
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board981051546 = gamma_board(board);
assert( board981051546 != NULL );
assert( strcmp(board981051546, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".......1..2\n"
".2.........\n"
"3....1....4\n"
"..........4\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board981051546);
board981051546 = NULL;
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );


char* board351008859 = gamma_board(board);
assert( board351008859 != NULL );
assert( strcmp(board351008859, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".......1..2\n"
".2.........\n"
"3....1....4\n"
"..........4\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board351008859);
board351008859 = NULL;
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_move(board, 1, 11, 4) == 0 );


char* board615510883 = gamma_board(board);
assert( board615510883 != NULL );
assert( strcmp(board615510883, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".2.....1..2\n"
".2.........\n"
"3....1....4\n"
".........24\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board615510883);
board615510883 = NULL;
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );


char* board537421080 = gamma_board(board);
assert( board537421080 != NULL );
assert( strcmp(board537421080, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".2.....1..2\n"
".2.........\n"
"3....1....4\n"
".........24\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board537421080);
board537421080 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );


char* board406395542 = gamma_board(board);
assert( board406395542 != NULL );
assert( strcmp(board406395542, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".2.....1..2\n"
".2.........\n"
"3....1....4\n"
".........24\n"
".........2.\n"
"......24.3.\n"
"...........\n"
"......3.1..\n") == 0);
free(board406395542);
board406395542 = NULL;
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );


char* board786001923 = gamma_board(board);
assert( board786001923 != NULL );
assert( strcmp(board786001923, 
"..114.3....\n"
"...42......\n"
"...3.1.1...\n"
".4...2.....\n"
"...4.3.....\n"
".2.....1..2\n"
".2.........\n"
"3....1....4\n"
".....1..224\n"
".........2.\n"
"......24.3.\n"
"........1..\n"
"......3311.\n") == 0);
free(board786001923);
board786001923 = NULL;
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
