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
uuid: 876492117
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );


char* board501002265 = gamma_board(board);
assert( board501002265 != NULL );
assert( strcmp(board501002265, 
".64.5..6.\n"
"2.....6..\n"
"44......6\n"
"......31.\n"
"....5....\n"
".........\n"
"..4.....1\n"
"...6.....\n") == 0);
free(board501002265);
board501002265 = NULL;
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_golden_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 6) == 1 );


char* board365326319 = gamma_board(board);
assert( board365326319 != NULL );
assert( strcmp(board365326319, 
".64.5..6.\n"
"2..4..6..\n"
"44......6\n"
"......31.\n"
"...35....\n"
".........\n"
"..4.....1\n"
"...6.....\n") == 0);
free(board365326319);
board365326319 = NULL;
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );


char* board782049012 = gamma_board(board);
assert( board782049012 != NULL );
assert( strcmp(board782049012, 
".64.5..6.\n"
"2..4..6..\n"
"44......6\n"
"......311\n"
"...35....\n"
".........\n"
"..4.....1\n"
"...6.....\n") == 0);
free(board782049012);
board782049012 = NULL;
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );


gamma_delete(board);

    return 0;
}
