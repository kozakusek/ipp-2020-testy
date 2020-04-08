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
uuid: 273583918
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 15, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );


char* board786377387 = gamma_board(board);
assert( board786377387 != NULL );
assert( strcmp(board786377387, 
".....53.\n"
".3......\n"
"........\n"
"......1.\n"
".......2\n"
"2.4....1\n"
"........\n"
"...4....\n") == 0);
free(board786377387);
board786377387 = NULL;
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_move(board, 13, 4, 5) == 1 );
assert( gamma_move(board, 15, 6, 6) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 6) == 0 );
assert( gamma_move(board, 14, 2, 7) == 0 );
assert( gamma_move(board, 15, 7, 4) == 1 );
assert( gamma_move(board, 15, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 7, 7) == 0 );
assert( gamma_move(board, 11, 5, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 14, 5, 1) == 0 );
assert( gamma_move(board, 15, 2, 6) == 1 );
assert( gamma_free_fields(board, 15) == 26 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 2, 1) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 15, 1, 7) == 1 );
assert( gamma_free_fields(board, 15) == 20 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_free_fields(board, 10) == 18 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 2, 7) == 0 );


char* board967096633 = gamma_board(board);
assert( board967096633 != NULL );
assert( strcmp(board967096633, 
"9154.5532\n"
"4315.13715.\n"
"11.510135.12\n"
"126..106115\n"
".103.7962\n"
"2541011.21\n"
"11.11.11..\n"
"1..474..\n") == 0);
free(board967096633);
board967096633 = NULL;
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 15, 4, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_free_fields(board, 13) == 13 );
assert( gamma_move(board, 14, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 13, 3, 0) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 14, 0, 6) == 0 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_move(board, 15, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );


char* board689015876 = gamma_board(board);
assert( board689015876 != NULL );
assert( strcmp(board689015876, 
"915465532\n"
"4315.137155\n"
"1113510135.12\n"
"126.6106115\n"
".103147962\n"
"2571011.21\n"
"11.111111..\n"
"1..474..\n") == 0);
free(board689015876);
board689015876 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_free_fields(board, 8) == 12 );
assert( gamma_golden_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 14, 2, 4) == 1 );
assert( gamma_move(board, 15, 1, 5) == 0 );
assert( gamma_free_fields(board, 15) == 10 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_move(board, 8, 4, 5) == 1 );


gamma_delete(board);

    return 0;
}
