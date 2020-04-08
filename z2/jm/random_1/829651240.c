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
uuid: 829651240
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 5) == 87 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_move(board, 6, 10, -1) == 0 );


char* board103229583 = gamma_board(board);
assert( board103229583 != NULL );
assert( strcmp(board103229583, 
"..........\n"
"..........\n"
".......1..\n"
".3........\n"
"..........\n"
"..6.......\n"
"......2...\n"
"..5.32....\n"
"..........\n") == 0);
free(board103229583);
board103229583 = NULL;
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board730601537 = gamma_board(board);
assert( board730601537 != NULL );
assert( strcmp(board730601537, 
"..........\n"
"..........\n"
".......1..\n"
".3.2......\n"
"..........\n"
"..6.......\n"
"......2...\n"
"..5.32....\n"
"..........\n") == 0);
free(board730601537);
board730601537 = NULL;
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 4) == 1 );


char* board301181913 = gamma_board(board);
assert( board301181913 != NULL );
assert( strcmp(board301181913, 
".....5..1.\n"
".......4..\n"
"5......1..\n"
".3.2..13..\n"
"........3.\n"
"..6.....5.\n"
".2.4..21..\n"
"..52326...\n"
"......3...\n") == 0);
free(board301181913);
board301181913 = NULL;
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );


char* board188743693 = gamma_board(board);
assert( board188743693 != NULL );
assert( strcmp(board188743693, 
".....5..1.\n"
".......4..\n"
"5......1..\n"
".3.2..13..\n"
"........3.\n"
"..6.....54\n"
".2.4..21..\n"
"..52326...\n"
"......3...\n") == 0);
free(board188743693);
board188743693 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );


char* board193711680 = gamma_board(board);
assert( board193711680 != NULL );
assert( strcmp(board193711680, 
".....5..1.\n"
"6......4..\n"
"5......1..\n"
".3.2..13..\n"
"........3.\n"
"..63....54\n"
".2.4..21..\n"
"..523261..\n"
"...12.3...\n") == 0);
free(board193711680);
board193711680 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_golden_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
