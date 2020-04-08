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
uuid: 208367486
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 5, 12, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_free_fields(board, 9) == 10 );


char* board248621861 = gamma_board(board);
assert( board248621861 != NULL );
assert( strcmp(board248621861, 
"117.3..\n"
"...6412.\n"
"5681228\n"
"61217.45\n"
"9.639.12\n") == 0);
free(board248621861);
board248621861 = NULL;
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );


char* board492151367 = gamma_board(board);
assert( board492151367 != NULL );
assert( strcmp(board492151367, 
"117.3.2\n"
"...6412.\n"
"5681228\n"
"61217.45\n"
"9.639.12\n") == 0);
free(board492151367);
board492151367 = NULL;
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );


char* board167399086 = gamma_board(board);
assert( board167399086 != NULL );
assert( strcmp(board167399086, 
"117.3.2\n"
"...6412.\n"
"5681228\n"
"61217.45\n"
"9.639.12\n") == 0);
free(board167399086);
board167399086 = NULL;
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_golden_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );


char* board327096600 = gamma_board(board);
assert( board327096600 != NULL );
assert( strcmp(board327096600, 
"117.3.2\n"
"...64124\n"
"5681228\n"
"61217745\n"
"9.639812\n") == 0);
free(board327096600);
board327096600 = NULL;
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );


char* board382308999 = gamma_board(board);
assert( board382308999 != NULL );
assert( strcmp(board382308999, 
"117.3.2\n"
"...64124\n"
"5681228\n"
"61217745\n"
"9.639812\n") == 0);
free(board382308999);
board382308999 = NULL;
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 3, 1) == 0 );


gamma_delete(board);

    return 0;
}
