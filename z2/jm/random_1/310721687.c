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
uuid: 310721687
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 4, 8);
assert( board != NULL );




char* board754400734 = gamma_board(board);
assert( board754400734 != NULL );
assert( strcmp(board754400734, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board754400734);
board754400734 = NULL;
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 0 );


char* board905900246 = gamma_board(board);
assert( board905900246 != NULL );
assert( strcmp(board905900246, 
".......\n"
".......\n"
"......2\n"
".......\n"
"3...2..\n"
"..1....\n"
".......\n"
".......\n"
".......\n") == 0);
free(board905900246);
board905900246 = NULL;
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );


char* board245779611 = gamma_board(board);
assert( board245779611 != NULL );
assert( strcmp(board245779611, 
"21..3..\n"
".......\n"
"......2\n"
".......\n"
"3...2..\n"
"..14...\n"
".......\n"
".......\n"
".......\n") == 0);
free(board245779611);
board245779611 = NULL;
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board669684320 = gamma_board(board);
assert( board669684320 != NULL );
assert( strcmp(board669684320, 
"21..3..\n"
"3....41\n"
"...1..2\n"
".......\n"
"3...2..\n"
"..14...\n"
"......1\n"
"......3\n"
".......\n") == 0);
free(board669684320);
board669684320 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );


char* board344991940 = gamma_board(board);
assert( board344991940 != NULL );
assert( strcmp(board344991940, 
"21..3.1\n"
"3....41\n"
".3.1..2\n"
".......\n"
"32..2..\n"
"..44...\n"
"...3..1\n"
"......3\n"
".......\n") == 0);
free(board344991940);
board344991940 = NULL;
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );


gamma_delete(board);

    return 0;
}
