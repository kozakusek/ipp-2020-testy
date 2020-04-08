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
uuid: 891061273
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );


char* board596719683 = gamma_board(board);
assert( board596719683 != NULL );
assert( strcmp(board596719683, 
".5.4......\n"
"4.........\n"
"......1...\n"
"........2.\n"
"..........\n"
"1.6...3...\n"
".31.......\n"
".2....2...\n") == 0);
free(board596719683);
board596719683 = NULL;
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );


char* board373045809 = gamma_board(board);
assert( board373045809 != NULL );
assert( strcmp(board373045809, 
".5.4......\n"
"4.........\n"
"......1...\n"
"...1....2.\n"
"..........\n"
"1.4...36..\n"
".31......4\n"
".2....2...\n") == 0);
free(board373045809);
board373045809 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );


char* board951050376 = gamma_board(board);
assert( board951050376 != NULL );
assert( strcmp(board951050376, 
".5.4......\n"
"4...3.6...\n"
"......1...\n"
"...1.2..2.\n"
"..........\n"
"1.4...36..\n"
".31......4\n"
".26..62..4\n") == 0);
free(board951050376);
board951050376 = NULL;
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );


char* board429104855 = gamma_board(board);
assert( board429104855 != NULL );
assert( strcmp(board429104855, 
".5.4......\n"
"4...3.6...\n"
"......15..\n"
"...1.2..2.\n"
"..........\n"
"1.4...36..\n"
".31......4\n"
".26..62..4\n") == 0);
free(board429104855);
board429104855 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );


gamma_delete(board);

    return 0;
}
