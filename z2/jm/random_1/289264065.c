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
uuid: 289264065
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 1, 5);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );


char* board997731912 = gamma_board(board);
assert( board997731912 != NULL );
assert( strcmp(board997731912, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".1......\n"
"........\n"
"........\n"
".......1\n"
"........\n"
"........\n"
"........\n"
".....1..\n") == 0);
free(board997731912);
board997731912 = NULL;
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );


char* board995653956 = gamma_board(board);
assert( board995653956 != NULL );
assert( strcmp(board995653956, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".1...1..\n"
"........\n"
"...1....\n"
".......1\n"
"........\n"
"........\n"
"........\n"
".....1..\n") == 0);
free(board995653956);
board995653956 = NULL;
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 1, -1, 15) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 1, 0, 3) == 0 );


char* board586356023 = gamma_board(board);
assert( board586356023 != NULL );
assert( strcmp(board586356023, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"11..11..\n"
"........\n"
"...1....\n"
".......1\n"
"........\n"
"........\n"
"........\n"
"....11..\n") == 0);
free(board586356023);
board586356023 = NULL;
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );


char* board113666046 = gamma_board(board);
assert( board113666046 != NULL );
assert( strcmp(board113666046, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"11..11..\n"
"........\n"
"...1....\n"
".......1\n"
"........\n"
"........\n"
"........\n"
"....11..\n") == 0);
free(board113666046);
board113666046 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );


char* board138724625 = gamma_board(board);
assert( board138724625 != NULL );
assert( strcmp(board138724625, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"11..11..\n"
"........\n"
"...1....\n"
"......11\n"
"........\n"
"........\n"
"........\n"
"....11..\n") == 0);
free(board138724625);
board138724625 = NULL;
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );


char* board503743476 = gamma_board(board);
assert( board503743476 != NULL );
assert( strcmp(board503743476, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".1......\n"
"11..11..\n"
"........\n"
"...1....\n"
"...1..11\n"
"........\n"
"........\n"
"........\n"
"....11..\n") == 0);
free(board503743476);
board503743476 = NULL;
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );


char* board172376667 = gamma_board(board);
assert( board172376667 != NULL );
assert( strcmp(board172376667, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".1......\n"
".1......\n"
"11..11..\n"
".1.1....\n"
"...1....\n"
"...1.111\n"
"........\n"
"........\n"
"........\n"
"....11..\n") == 0);
free(board172376667);
board172376667 = NULL;
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 33 );


gamma_delete(board);

    return 0;
}
