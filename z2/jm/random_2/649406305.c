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
uuid: 649406305
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 4, 11, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_golden_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_golden_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );


char* board637539946 = gamma_board(board);
assert( board637539946 != NULL );
assert( strcmp(board637539946, 
"93842.6..\n"
"10132.5345\n"
"168108...9\n"
"471110.9...\n") == 0);
free(board637539946);
board637539946 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board926920764 = gamma_board(board);
assert( board926920764 != NULL );
assert( strcmp(board926920764, 
"9384266..\n"
"10132.5345\n"
"16810811..9\n"
"471110.9...\n") == 0);
free(board926920764);
board926920764 = NULL;
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_free_fields(board, 11) == 8 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board625443240 = gamma_board(board);
assert( board625443240 != NULL );
assert( strcmp(board625443240, 
"9384266..\n"
"1013265345\n"
"16810811.59\n"
"471110.9...\n") == 0);
free(board625443240);
board625443240 = NULL;
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );


char* board898982519 = gamma_board(board);
assert( board898982519 != NULL );
assert( strcmp(board898982519, 
"9384266..\n"
"1013265345\n"
"16810811.59\n"
"471110.9...\n") == 0);
free(board898982519);
board898982519 = NULL;
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 7 );


gamma_delete(board);

    return 0;
}
