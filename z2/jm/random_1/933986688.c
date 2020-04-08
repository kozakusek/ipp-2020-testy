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
uuid: 933986688
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_golden_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );


char* board307597731 = gamma_board(board);
assert( board307597731 != NULL );
assert( strcmp(board307597731, 
"35......\n"
"2.....4.\n"
".1......\n"
"........\n"
"........\n"
"15......\n"
"........\n"
"......2.\n") == 0);
free(board307597731);
board307597731 = NULL;
assert( gamma_golden_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );


char* board386696835 = gamma_board(board);
assert( board386696835 != NULL );
assert( strcmp(board386696835, 
"35.....2\n"
"2.....7.\n"
".1......\n"
"......1.\n"
"......3.\n"
"15......\n"
"........\n"
"......2.\n") == 0);
free(board386696835);
board386696835 = NULL;
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, -1) == 0 );


char* board924076653 = gamma_board(board);
assert( board924076653 != NULL );
assert( strcmp(board924076653, 
"35.....2\n"
"2.....76\n"
".1......\n"
"......1.\n"
"......3.\n"
"15......\n"
"........\n"
".....52.\n") == 0);
free(board924076653);
board924076653 = NULL;
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );


char* board948407763 = gamma_board(board);
assert( board948407763 != NULL );
assert( strcmp(board948407763, 
"35.....2\n"
"2.....76\n"
"51.3.2..\n"
"......1.\n"
"......3.\n"
"15...8..\n"
"1.......\n"
".....52.\n") == 0);
free(board948407763);
board948407763 = NULL;
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );


gamma_delete(board);

    return 0;
}
