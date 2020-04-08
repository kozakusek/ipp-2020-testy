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
uuid: 571680665
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 5, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board426095470 = gamma_board(board);
assert( board426095470 != NULL );
assert( strcmp(board426095470, 
"....21....\n"
".........4\n"
"..4......3\n"
"...2...4..\n"
".3......2.\n"
"...1..2...\n"
"..5.......\n"
"5.....1...\n"
"..........\n") == 0);
free(board426095470);
board426095470 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );


char* board665214355 = gamma_board(board);
assert( board665214355 != NULL );
assert( strcmp(board665214355, 
"....21....\n"
"......3..4\n"
"..4......3\n"
"...2...44.\n"
".3.3....2.\n"
"...1..25..\n"
".15...5...\n"
"5.4...11..\n"
"225.......\n") == 0);
free(board665214355);
board665214355 = NULL;
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_golden_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );


char* board633292839 = gamma_board(board);
assert( board633292839 != NULL );
assert( strcmp(board633292839, 
"....21....\n"
"......3..4\n"
"..4......3\n"
"...2...44.\n"
".3.3....2.\n"
"...1..252.\n"
".15..55...\n"
"5.4...11..\n"
"225.......\n") == 0);
free(board633292839);
board633292839 = NULL;
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_free_fields(board, 1) == 59 );


char* board747012124 = gamma_board(board);
assert( board747012124 != NULL );
assert( strcmp(board747012124, 
"....21..2.\n"
"......31.4\n"
"..4......3\n"
"...2...44.\n"
".3.3....2.\n"
"...1..252.\n"
".15..55..5\n"
"5.4...111.\n"
"225.......\n") == 0);
free(board747012124);
board747012124 = NULL;
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_golden_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 9, 8) == 1 );


char* board379319176 = gamma_board(board);
assert( board379319176 != NULL );
assert( strcmp(board379319176, 
"....21..23\n"
"......34.4\n"
"..4.5....3\n"
"...2...44.\n"
".3.3....23\n"
"...1..252.\n"
".15..55..5\n"
"5.4.4.111.\n"
"225.....4.\n") == 0);
free(board379319176);
board379319176 = NULL;
assert( gamma_move(board, 4, 5, 8) == 0 );


char* board164507984 = gamma_board(board);
assert( board164507984 != NULL );
assert( strcmp(board164507984, 
"....21..23\n"
"......34.4\n"
"..4.5....3\n"
"...2...44.\n"
".3.3....23\n"
"...1..252.\n"
".15..55..5\n"
"5.4.4.111.\n"
"225.....4.\n") == 0);
free(board164507984);
board164507984 = NULL;
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_move(board, 5, 4, 1) == 1 );


gamma_delete(board);

    return 0;
}
