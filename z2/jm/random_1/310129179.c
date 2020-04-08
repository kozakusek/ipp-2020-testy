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
uuid: 310129179
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_golden_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board132582007 = gamma_board(board);
assert( board132582007 != NULL );
assert( strcmp(board132582007, 
"......2...\n"
"...1.....4\n"
"..4.......\n"
"..3.......\n"
".1...1....\n"
".2........\n"
".......4..\n"
"..........\n"
"....3.....\n"
"...331....\n") == 0);
free(board132582007);
board132582007 = NULL;
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );


char* board573242817 = gamma_board(board);
assert( board573242817 != NULL );
assert( strcmp(board573242817, 
"......2...\n"
"...1.4...4\n"
".34.......\n"
"..3.3.2...\n"
".1...1....\n"
".2........\n"
"...4...4..\n"
"........2.\n"
"22..3...1.\n"
"...331....\n") == 0);
free(board573242817);
board573242817 = NULL;
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );


char* board449678993 = gamma_board(board);
assert( board449678993 != NULL );
assert( strcmp(board449678993, 
"......2...\n"
"...1.4...4\n"
".34.......\n"
"..3.3.2.3.\n"
".13..1....\n"
".2........\n"
"...4...4..\n"
"........2.\n"
"22..3...1.\n"
"...331....\n") == 0);
free(board449678993);
board449678993 = NULL;
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 18 );


char* board739674804 = gamma_board(board);
assert( board739674804 != NULL );
assert( strcmp(board739674804, 
"......2...\n"
"...1.4...4\n"
".34.......\n"
"..3.3.2.3.\n"
".13..1....\n"
".2........\n"
"...4...4..\n"
"........2.\n"
"22..3...1.\n"
"...331....\n") == 0);
free(board739674804);
board739674804 = NULL;
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board888174475 = gamma_board(board);
assert( board888174475 != NULL );
assert( strcmp(board888174475, 
"......2...\n"
"...1.4...4\n"
".34.......\n"
"..3.3.2.3.\n"
".13..1....\n"
".2........\n"
"...4...4..\n"
"........2.\n"
"22..3...1.\n"
".2.331....\n") == 0);
free(board888174475);
board888174475 = NULL;
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );


char* board301470052 = gamma_board(board);
assert( board301470052 != NULL );
assert( strcmp(board301470052, 
"......2...\n"
"...1.4...4\n"
".34.......\n"
"..3.3.2.3.\n"
".13..1....\n"
".2........\n"
"...4...4..\n"
"........2.\n"
"22..3...1.\n"
".2.331....\n") == 0);
free(board301470052);
board301470052 = NULL;
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );


gamma_delete(board);

    return 0;
}
