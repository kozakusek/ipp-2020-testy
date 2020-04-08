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
uuid: 672970251
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 4, 6, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 25 );


char* board787245794 = gamma_board(board);
assert( board787245794 != NULL );
assert( strcmp(board787245794, 
"3.....324.\n"
"5...3.56..\n"
"2.322.....\n"
"1...4..6..\n") == 0);
free(board787245794);
board787245794 = NULL;
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board840524118 = gamma_board(board);
assert( board840524118 != NULL );
assert( strcmp(board840524118, 
"3.....324.\n"
"5...3.56.2\n"
"2.322...2.\n"
"1...4..6..\n") == 0);
free(board840524118);
board840524118 = NULL;
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 14 );


char* board345109791 = gamma_board(board);
assert( board345109791 != NULL );
assert( strcmp(board345109791, 
"3...6.324.\n"
"5652345632\n"
"24322.4.2.\n"
"1..14..6..\n") == 0);
free(board345109791);
board345109791 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board147109349 = gamma_board(board);
assert( board147109349 != NULL );
assert( strcmp(board147109349, 
"3...6.324.\n"
"5652345632\n"
"24322.4.2.\n"
"1..14..6.4\n") == 0);
free(board147109349);
board147109349 = NULL;
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );


char* board483363796 = gamma_board(board);
assert( board483363796 != NULL );
assert( strcmp(board483363796, 
"3..56.3245\n"
"5652345632\n"
"24322.4.2.\n"
"11.14..6.4\n") == 0);
free(board483363796);
board483363796 = NULL;
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board192085482 = gamma_board(board);
assert( board192085482 != NULL );
assert( strcmp(board192085482, 
"3..56.3245\n"
"5652345632\n"
"24322.4.2.\n"
"11.14..6.4\n") == 0);
free(board192085482);
board192085482 = NULL;
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );


char* board714120066 = gamma_board(board);
assert( board714120066 != NULL );
assert( strcmp(board714120066, 
"3..56.3245\n"
"5652345632\n"
"24322.4.2.\n"
"11.14..6.4\n") == 0);
free(board714120066);
board714120066 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
