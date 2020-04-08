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
uuid: 533485002
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );


char* board218087914 = gamma_board(board);
assert( board218087914 != NULL );
assert( strcmp(board218087914, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
".....4....\n"
"..........\n"
"..........\n"
"........2.\n") == 0);
free(board218087914);
board218087914 = NULL;
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board135231169 = gamma_board(board);
assert( board135231169 != NULL );
assert( strcmp(board135231169, 
"..4.......\n"
"..........\n"
"..........\n"
"........1.\n"
"..........\n"
"......2...\n"
".....4....\n"
"..3....2..\n"
"..........\n"
".1......2.\n") == 0);
free(board135231169);
board135231169 = NULL;
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_free_fields(board, 1) == 91 );


char* board198061387 = gamma_board(board);
assert( board198061387 != NULL );
assert( strcmp(board198061387, 
"..4.......\n"
"........1.\n"
"..........\n"
"........1.\n"
"..........\n"
"......2...\n"
".....4....\n"
"..3....2..\n"
"..........\n"
".1......2.\n") == 0);
free(board198061387);
board198061387 = NULL;
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
