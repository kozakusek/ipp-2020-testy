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
uuid: 869561787
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 98 );


char* board428194769 = gamma_board(board);
assert( board428194769 != NULL );
assert( strcmp(board428194769, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"......2...\n"
".1........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board428194769);
board428194769 = NULL;
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );


char* board402493851 = gamma_board(board);
assert( board402493851 != NULL );
assert( strcmp(board402493851, 
"..........\n"
"..........\n"
"..........\n"
".......8..\n"
"..........\n"
"......2...\n"
".1........\n"
"..........\n"
"7.........\n"
"..........\n") == 0);
free(board402493851);
board402493851 = NULL;
assert( gamma_move(board, 3, 1, 8) == 1 );


char* board144680814 = gamma_board(board);
assert( board144680814 != NULL );
assert( strcmp(board144680814, 
"..........\n"
".3........\n"
"..........\n"
".......8..\n"
"..........\n"
"......2...\n"
".1........\n"
"..........\n"
"7.........\n"
"..........\n") == 0);
free(board144680814);
board144680814 = NULL;
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );


char* board818332605 = gamma_board(board);
assert( board818332605 != NULL );
assert( strcmp(board818332605, 
"..........\n"
".3........\n"
"......1...\n"
"....4.28..\n"
"..........\n"
"..3.4.4...\n"
".1........\n"
".5........\n"
"7.43......\n"
"..8.......\n") == 0);
free(board818332605);
board818332605 = NULL;
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 5, 6) == 1 );


char* board407698865 = gamma_board(board);
assert( board407698865 != NULL );
assert( strcmp(board407698865, 
".......5..\n"
".3........\n"
".....21...\n"
"....4868..\n"
"...17.....\n"
"..3.4.43..\n"
".1........\n"
".5.....7..\n"
"7.43......\n"
"..8.....4.\n") == 0);
free(board407698865);
board407698865 = NULL;
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_free_fields(board, 6) == 62 );


char* board213240496 = gamma_board(board);
assert( board213240496 != NULL );
assert( strcmp(board213240496, 
"8.....75..\n"
".3....62..\n"
".3...215..\n"
"3..548688.\n"
"...1751...\n"
"..3.4.43.4\n"
".1...3.4..\n"
".5.....7..\n"
"7.3332....\n"
"..8.....4.\n") == 0);
free(board213240496);
board213240496 = NULL;
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );


char* board230834878 = gamma_board(board);
assert( board230834878 != NULL );
assert( strcmp(board230834878, 
"8..6..75..\n"
".3....62..\n"
".3...215..\n"
"3..548688.\n"
"...1751.1.\n"
"5.3.4.43.4\n"
".1...3.4..\n"
".5.....7.8\n"
"7.3332....\n"
"..8.....4.\n") == 0);
free(board230834878);
board230834878 = NULL;
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, -1, 9) == 0 );


gamma_delete(board);

    return 0;
}
