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
uuid: 502233674
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );


char* board417290904 = gamma_board(board);
assert( board417290904 != NULL );
assert( strcmp(board417290904, 
".........\n"
"........5\n"
"........2\n"
".........\n"
".........\n"
".........\n"
"......67.\n"
".........\n"
".........\n"
".........\n") == 0);
free(board417290904);
board417290904 = NULL;
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 2, -1) == 0 );


char* board257110083 = gamma_board(board);
assert( board257110083 != NULL );
assert( strcmp(board257110083, 
".........\n"
"........5\n"
"........2\n"
".........\n"
".........\n"
".........\n"
"......67.\n"
".........\n"
".........\n"
"........2\n") == 0);
free(board257110083);
board257110083 = NULL;
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_free_fields(board, 6) == 79 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_free_fields(board, 8) == 68 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_golden_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_free_fields(board, 7) == 65 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_free_fields(board, 8) == 62 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 4) == 0 );


gamma_delete(board);

    return 0;
}
