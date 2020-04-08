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
uuid: 907073047
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );


char* board153694819 = gamma_board(board);
assert( board153694819 != NULL );
assert( strcmp(board153694819, 
"......5..\n"
"23.......\n"
"..8......\n"
".........\n"
"......5..\n"
"........7\n"
".....6...\n"
".6......4\n"
".........\n") == 0);
free(board153694819);
board153694819 = NULL;
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_golden_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_free_fields(board, 7) == 65 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_free_fields(board, 8) == 60 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_golden_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );


char* board414332976 = gamma_board(board);
assert( board414332976 != NULL );
assert( strcmp(board414332976, 
"511...526\n"
"23...3...\n"
"748..43..\n"
"6..7.1.83\n"
".467.3551\n"
"8.....627\n"
"37...6...\n"
"86.48...4\n"
".....4...\n") == 0);
free(board414332976);
board414332976 = NULL;
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board964637268 = gamma_board(board);
assert( board964637268 != NULL );
assert( strcmp(board964637268, 
"511...526\n"
"23..43...\n"
"7481.43..\n"
"61.7.1483\n"
".46783551\n"
"8.....627\n"
"37...6...\n"
"86.48...4\n"
"..5..4...\n") == 0);
free(board964637268);
board964637268 = NULL;
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );


char* board106103113 = gamma_board(board);
assert( board106103113 != NULL );
assert( strcmp(board106103113, 
"511...526\n"
"23..43...\n"
"7481.43..\n"
"61.7.1483\n"
"846783551\n"
"8.....627\n"
"37.176...\n"
"86.48...4\n"
"..5..4...\n") == 0);
free(board106103113);
board106103113 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );


char* board621077299 = gamma_board(board);
assert( board621077299 != NULL );
assert( strcmp(board621077299, 
"511...526\n"
"23.6436.5\n"
"7481.43..\n"
"61.7.1483\n"
"846783551\n"
"8.....627\n"
"37.1767.3\n"
"86.48...4\n"
"..5.24...\n") == 0);
free(board621077299);
board621077299 = NULL;
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_golden_move(board, 5, 8, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 2, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );


gamma_delete(board);

    return 0;
}
