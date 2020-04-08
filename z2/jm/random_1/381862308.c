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
uuid: 381862308
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 3, -1, 5) == 0 );


char* board350151294 = gamma_board(board);
assert( board350151294 != NULL );
assert( strcmp(board350151294, 
".....1...\n"
"......3..\n"
"...4.....\n"
".....2..1\n"
".......3.\n"
".........\n"
"..3.....1\n"
"......2..\n") == 0);
free(board350151294);
board350151294 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board195567049 = gamma_board(board);
assert( board195567049 != NULL );
assert( strcmp(board195567049, 
".....1.2.\n"
"......3..\n"
"...4...2.\n"
".....2..1\n"
"......33.\n"
"........2\n"
"..3.....1\n"
".....42..\n") == 0);
free(board195567049);
board195567049 = NULL;
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );


char* board310184784 = gamma_board(board);
assert( board310184784 != NULL );
assert( strcmp(board310184784, 
".....1.2.\n"
"1.....3..\n"
"...4...2.\n"
".....2..1\n"
"......33.\n"
"........2\n"
"..3.....1\n"
".....42..\n") == 0);
free(board310184784);
board310184784 = NULL;
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );


char* board434862179 = gamma_board(board);
assert( board434862179 != NULL );
assert( strcmp(board434862179, 
"..4..1.24\n"
"1.....3..\n"
"..24.4.2.\n"
"..1..2..1\n"
"......33.\n"
"........2\n"
"..3.2...1\n"
"..4..423.\n") == 0);
free(board434862179);
board434862179 = NULL;
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );


char* board702002030 = gamma_board(board);
assert( board702002030 != NULL );
assert( strcmp(board702002030, 
"..4..1.24\n"
"1..1..3..\n"
"..24.4.2.\n"
"..1..2..1\n"
"......33.\n"
"....4.1.2\n"
"..3.2...1\n"
"..4..423.\n") == 0);
free(board702002030);
board702002030 = NULL;
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
