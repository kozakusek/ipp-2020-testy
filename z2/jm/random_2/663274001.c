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
uuid: 663274001
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board439863827 = gamma_board(board);
assert( board439863827 != NULL );
assert( strcmp(board439863827, 
".6..8..\n"
"25..8..\n"
"3.23...\n"
"...4.31\n"
"...1.17\n"
"7.2.5..\n"
"...3.54\n") == 0);
free(board439863827);
board439863827 = NULL;
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );


char* board910280970 = gamma_board(board);
assert( board910280970 != NULL );
assert( strcmp(board910280970, 
".6..8..\n"
"25..8..\n"
"3523...\n"
"..54.31\n"
"...1.17\n"
"7.2.5..\n"
"...3.54\n") == 0);
free(board910280970);
board910280970 = NULL;
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );


char* board945307036 = gamma_board(board);
assert( board945307036 != NULL );
assert( strcmp(board945307036, 
".6.88..\n"
"25..8..\n"
"3523...\n"
"..54.31\n"
"..11617\n"
"74225..\n"
"...3654\n") == 0);
free(board945307036);
board945307036 = NULL;
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_free_fields(board, 8) == 18 );


char* board670444082 = gamma_board(board);
assert( board670444082 != NULL );
assert( strcmp(board670444082, 
".688875\n"
"25..8..\n"
"3523...\n"
"..54.31\n"
"..11617\n"
"74225..\n"
"...3654\n") == 0);
free(board670444082);
board670444082 = NULL;
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_golden_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );


char* board244393112 = gamma_board(board);
assert( board244393112 != NULL );
assert( strcmp(board244393112, 
"7688855\n"
"255.845\n"
"8523217\n"
".554.31\n"
"2.11617\n"
"74225..\n"
"3.53654\n") == 0);
free(board244393112);
board244393112 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );


char* board827845717 = gamma_board(board);
assert( board827845717 != NULL );
assert( strcmp(board827845717, 
"7688855\n"
"2551845\n"
"8523217\n"
"1554.31\n"
"2.11617\n"
"74225..\n"
"3.53654\n") == 0);
free(board827845717);
board827845717 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
