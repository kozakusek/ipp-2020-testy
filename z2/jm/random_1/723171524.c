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
uuid: 723171524
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_golden_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );


char* board839767989 = gamma_board(board);
assert( board839767989 != NULL );
assert( strcmp(board839767989, 
"..........\n"
".36..3..2.\n"
".......6..\n"
"5.424.....\n"
"3.6..11.2.\n"
"5.........\n"
".31...7.7.\n") == 0);
free(board839767989);
board839767989 = NULL;
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );


char* board158957663 = gamma_board(board);
assert( board158957663 != NULL );
assert( strcmp(board158957663, 
"..........\n"
".36..3..2.\n"
".......6..\n"
"5.424.7...\n"
"3.6..11.2.\n"
"5.........\n"
".31..27.74\n") == 0);
free(board158957663);
board158957663 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_golden_move(board, 7, 0, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );


gamma_delete(board);

    return 0;
}
