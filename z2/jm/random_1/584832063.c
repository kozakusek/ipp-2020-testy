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
uuid: 584832063
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );


char* board398675865 = gamma_board(board);
assert( board398675865 != NULL );
assert( strcmp(board398675865, 
".........\n"
"........4\n"
".......1.\n"
"2........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"....4....\n") == 0);
free(board398675865);
board398675865 = NULL;
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board128783751 = gamma_board(board);
assert( board128783751 != NULL );
assert( strcmp(board128783751, 
".........\n"
"........4\n"
".......1.\n"
"2....1...\n"
".........\n"
".........\n"
".........\n"
".........\n"
"....4....\n") == 0);
free(board128783751);
board128783751 = NULL;
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board751788445 = gamma_board(board);
assert( board751788445 != NULL );
assert( strcmp(board751788445, 
".......3.\n"
"........4\n"
".......1.\n"
"2....1...\n"
"2........\n"
"........3\n"
".........\n"
".........\n"
"....4....\n") == 0);
free(board751788445);
board751788445 = NULL;
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board493308225 = gamma_board(board);
assert( board493308225 != NULL );
assert( strcmp(board493308225, 
".......3.\n"
"........4\n"
".......1.\n"
"2....1...\n"
"22.......\n"
"........3\n"
".........\n"
".......4.\n"
"....4....\n") == 0);
free(board493308225);
board493308225 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );


char* board190914621 = gamma_board(board);
assert( board190914621 != NULL );
assert( strcmp(board190914621, 
".......3.\n"
"........4\n"
".......1.\n"
"2....1...\n"
"22.......\n"
"........3\n"
".........\n"
".......4.\n"
"....4....\n") == 0);
free(board190914621);
board190914621 = NULL;
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board606462772 = gamma_board(board);
assert( board606462772 != NULL );
assert( strcmp(board606462772, 
".......3.\n"
"........4\n"
".......1.\n"
"2....1...\n"
"22.......\n"
"........3\n"
".........\n"
"......44.\n"
"....4....\n") == 0);
free(board606462772);
board606462772 = NULL;
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board859405481 = gamma_board(board);
assert( board859405481 != NULL );
assert( strcmp(board859405481, 
".......3.\n"
"........3\n"
".......1.\n"
"2....1...\n"
"22.......\n"
"........3\n"
".........\n"
"......44.\n"
"....42...\n") == 0);
free(board859405481);
board859405481 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );


char* board162625422 = gamma_board(board);
assert( board162625422 != NULL );
assert( strcmp(board162625422, 
".......3.\n"
".2......3\n"
".......11\n"
"2....1...\n"
"22.......\n"
"........3\n"
".........\n"
"......44.\n"
"....42...\n") == 0);
free(board162625422);
board162625422 = NULL;
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );


gamma_delete(board);

    return 0;
}
